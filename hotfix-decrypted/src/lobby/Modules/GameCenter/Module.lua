local GameCenterModule = class("GameCenterModule", XH.ModuleBase)

local LuckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
local APP_ENTER_FOREGROUND_EVENT = "APP_ENTER_FOREGROUND_EVENT"

GameCenterModule.EVENT_GAME_LIST_UPDATED = "EVENT_GAME_LIST_UPDATED"
GameCenterModule.EVENT_DAILY_AWARD_CHANGED = "EVENT_DAILY_AWARD_CHANGED"
GameCenterModule.EVENT_RED_POINT_CHANGED = "EVENT_RED_POINT_CHANGED"
GameCenterModule.EVENT_TASKLIST_UPDATED = "EVENT_TASKLIST_UPDATED"

-- 对应游戏中心的配置
GameCenterModule.H5GameNameList = {
    [1] = {gameid = 0, iopName = "RENRENBUYU", GameName = "RENRENBUYU"},
    [2] = {gameid = 810000,iopName = "juezhanshayi", GameName = "LEGEND"},
    [3] = {gameid = 810005,iopName = "yidaochuanshi", GameName = "KNIFELEGEND"},
    [4] = {gameid = 810014,iopName = "rexuefengshen", GameName = "REXUEFENGSHEN"},
    [5] = {gameid = 810018,iopName = "weijingchuanqi", GameName = "WEIJINGCHUANQI"},
    [6] = {gameid = 810019,iopName = "zhuoyuechuanshuo", GameName = "ZHUOYUECHUANSHUO"},
    [7] = {gameid = 810025,iopName = "baizhanshacheng", GameName = "BAIZHANSHACHENG"},
    [8] = {gameid = 810027,iopName = "huanxiangmingjianglu", GameName = "HUANXIANGMINGJIANGLU"},
    [9] = {gameid = 810030,iopName = "fumozhange", GameName = "FUMOZHANGE"},
    [10] = {gameid = 810032,iopName = "bazhetianxia", GameName = "BAZHETIANXIA"},
    [11] = {gameid = 810033,iopName = "longjizhicheng", GameName = "LONGJIZHICHENG"},
}

function GameCenterModule:ctor()
    GameCenterModule.super.ctor(self)
    self:initData()
    self:_registerAppForegroundListener()
end

function GameCenterModule:onDestroy()
    self:_unregisterAppForegroundListener()
    GameCenterModule.super.onDestroy(self)
end

function GameCenterModule:_registerAppForegroundListener()
    if self._appForegroundListener then
        return
    end
    local dispatcher = cc.Director:getInstance():getEventDispatcher()
    self._appForegroundListener = cc.EventListenerCustom:create(APP_ENTER_FOREGROUND_EVENT, handler(self, self.onAppEnterForeground))
    dispatcher:addEventListenerWithFixedPriority(self._appForegroundListener, 1)
end

function GameCenterModule:_unregisterAppForegroundListener()
    if self._appForegroundListener then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._appForegroundListener)
        self._appForegroundListener = nil
    end
end

function GameCenterModule:onAppEnterForeground()
    self:finishLYSession()
end

function GameCenterModule:initData()
    self._gameList = {}
    self._videoAdConfig = nil
    self._taskList = {}
    self._dailyAward = nil
    self._isRequestingGameData = false -- 是否请求过游戏配置数据

    if false then
        self:loadMockGameData()
    end
end

function GameCenterModule:getReqConfig()
    return {
        reqGameCenter = {reqPath = "app.Req.ReqGameCenter", callBack = self.requestGameDataCallback},
        GetTaskV2FinishRequest = {reqPath = "lobby.Req.LuckyMission.GetTaskV2FinishRequest", callBack = self.respTaskV2FinishRequest},
        GetTaskV2InfoRequest = {reqPath = "lobby.Req.LuckyMission.GetTaskV2Request", callBack = self.respLuckyMissionInfo},
        TaskV2RewardRequest = {reqPath = "lobby.Req.LuckyMission.TaskV2RewardRequest", callBack = self.respLuckyMissionAward}
    }
end

function GameCenterModule:getProxyEvents()
    return {
        {module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "onLoginSuccessCallBack"},
    }
end

function GameCenterModule:onLoginSuccessCallBack()
    self._isRequestingGameData = false
    self:requestGameData()
end

function GameCenterModule:requestData()
    self:requestGameData()
    self:luckyMissionInfoReq()
end

-- 请求游戏配置数据，web接口，只在登录成功后请求
function GameCenterModule:requestGameData()
    if self._isRequestingGameData then
        return
    end
    self:startReq("reqGameCenter")
end

function GameCenterModule:requestGameDataCallback(cell, type, data)
    if type == cell.TYPE.SUCCESS then
        self._isRequestingGameData = true
        local payload = data or {}
        local games = payload.games or {}

        local gameList = {}
        for _, v in ipairs(games) do
            table.insert(gameList, {gameId = v.game_code, gameName = v.game_name, image = v.image, tag = v.badge, priority = v.priority, videoUrl = v.video_link})
        end
        self._gameList = gameList

        self._videoAdConfig = {tagged = {}, untagged = {}}
        for _, game in ipairs(self._gameList) do
            if game.videoUrl ~= nil and game.videoUrl ~= "" then
                if game.tag and game.tag ~= "" then
                    table.insert(self._videoAdConfig.tagged, {videoUrl = game.videoUrl, gameId = game.gameId})
                else
                    table.insert(self._videoAdConfig.untagged, {videoUrl = game.videoUrl, gameId = game.gameId})
                end
            end
        end

        self:dispatchEvent({name = GameCenterModule.EVENT_GAME_LIST_UPDATED})
    end
end

-- 请求任务列表
function GameCenterModule:reqTaskList()
    -- TODO: IOP 请求任务列表
end

-- 领取任务奖励
function GameCenterModule:reqTaskReward(task)
    self:startReq("TaskV2RewardRequest", task, task.activityId, task.content[1].id)
end

function GameCenterModule:setActivityId(activityId)
    self._activityId = activityId
    self:luckyMissionInfoReq()
end

function GameCenterModule:luckyMissionInfoReq()
    XH.TipTool.showLoading()
    self:startReq("GetTaskV2InfoRequest", LuckyMissionConfig.REQ_TYPE.CONTENT, "act2_task_game_day", XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function GameCenterModule:respLuckyMissionInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._taskInfo = data
        self._taskList = data.boxList or {}
        -- 如果任务已完成，但是活动已结束，用领奖剩余时间
        local serverTime = XH.lobby:getModule("Shop"):getServerTime()
        for i = 1, #self._taskInfo.boxList do
            local curTaskInfo = self._taskInfo.boxList[i]
            if  curTaskInfo.content[1].draw == 0 and curTaskInfo.progress >= curTaskInfo.content[1].target and curTaskInfo.drawDeadline 
                and tonumber(curTaskInfo.drawDeadline) >= tonumber(serverTime) and
                tonumber(curTaskInfo.endTime) < tonumber(serverTime)
             then
                self._taskInfo.boxList[i].endTime = curTaskInfo.drawDeadline
            end
            if curTaskInfo.actType == 'denglu' then
                self._dailyAward = curTaskInfo
            end
        end
        self:dispatchEvent({name = GameCenterModule.EVENT_DAILY_AWARD_CHANGED})
        self:dispatchEvent({name = GameCenterModule.EVENT_RED_POINT_CHANGED})
        self:dispatchEvent({name = GameCenterModule.EVENT_TASKLIST_UPDATED})
    end
end

-- 每日领奖
function GameCenterModule:reqDailyAward()
    local info = self._dailyAward
    self:startReq("TaskV2RewardRequest", info, info.activityId, info.content[1].id)
end

function GameCenterModule:respLuckyMissionAward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        awardInfo.prize_count = {}
        awardInfo.prize_pic = {}
        awardInfo.isPromote = true
        for _, award in pairs(data.rewards) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = award.name
            awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
            awardInfo.prize_count[#awardInfo.prize_count + 1] = award.count
            awardInfo.prize_pic[#awardInfo.prize_pic + 1] = nil
        end
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        self:luckyMissionInfoReq()
    else
        XH.TipTool.showToast("领取奖励失败...")
    end
    self:dispatchEvent({name = GameCenterModule.EVENT_RED_POINT_CHANGED})
end

-- 加载模拟数据
function GameCenterModule:loadMockGameData()
    self._gameList = {
        {gameId = "renrenbuyu", gameName = "人人捕鱼", image = "cocosStudio/hall/Default/game_icon_1.png", tag = "热门", priority = 1, videoUrl = "https://www.w3schools.com/html/mov_aaa.mp4"},
        {gameId = "baizhanshacheng", gameName = "百战沙城", image = "cocosStudio/hall/Default/game_icon_2.png", tag = "热门", priority = 2, videoUrl = nil},
        {gameId = "weijingchuanqi", gameName = "维京传奇", image = "cocosStudio/hall/Default/game_icon_3.png", tag = "推荐", priority = 3, videoUrl = nil},
        {gameId = "fumo", gameName = "伏魔", image = "cocosStudio/hall/Default/game_icon_4.png", tag = "", priority = 4, videoUrl = nil},
        {gameId = "juezhan", gameName = "决战", image = "cocosStudio/hall/Default/game_icon_5.png", tag = "", priority = 5, videoUrl = "https://www.w3schools.com/html/mov_bbb.mp4"},
        {gameId = "chuanqi", gameName = "传奇", image = "cocosStudio/hall/Default/game_icon_6.png", tag = "新上线", priority = 6, videoUrl = nil}
    }

    self._videoAdConfig = {tagged = {}, untagged = {}}
    for _, game in ipairs(self._gameList) do
        if game.videoUrl ~= nil and game.videoUrl ~= "" then
            if game.tag and game.tag ~= "" then
                table.insert(self._videoAdConfig.tagged, {videoUrl = game.videoUrl, gameId = game.gameId})
            else
                table.insert(self._videoAdConfig.untagged, {videoUrl = game.videoUrl, gameId = game.gameId})
            end
        end
    end

    -- targetType: 1=登录任务 2=体验任务 3=充值任务
    self._taskList = {
        {taskId = "login_1", name = "每日登录", targetType = 1, current = 0, target = 1, status = 0, awardIcon = "", awardCnt = "x50金币"},
        {taskId = "exp_renrenbuyu", name = "体验人人捕鱼1局", targetType = 2, gameId = "renrenbuyu", current = 0, target = 1, status = 0, awardIcon = "", awardCnt = "x100金币"},
        {taskId = "exp_baizhanshacheng", name = "体验百战沙城1局", targetType = 2, gameId = "baizhanshacheng", current = 0, target = 1, status = 0, awardIcon = "", awardCnt = "x50金币"},
        {taskId = "recharge_1", name = "累计充值6元", targetType = 3, current = 0, target = 600, status = 0, awardIcon = "", awardCnt = "x200金币"}
    }

    self._dailyAward = {
        status = 0,
        awardIcon = "",
        awardCnt = "x100金币"
    }

    self._isRequestingGameData = true

    self:dispatchEvent({name = GameCenterModule.EVENT_GAME_LIST_UPDATED})
    self:dispatchEvent({name = GameCenterModule.EVENT_RED_POINT_CHANGED})
end

function GameCenterModule:getGameList()
    return self._gameList
end

function GameCenterModule:getGameById(gameId)
    for _, game in ipairs(self._gameList) do
        if game.gameId == gameId then
            return game
        end
    end
    return nil
end

function GameCenterModule:getVideoAdConfig()
    return self._videoAdConfig
end

function GameCenterModule:getTaskList(key)
    local list = {}
    for _, task in ipairs(self._taskList) do
        if string.match(task.actType, key) then
            table.insert(list, task)
        end
    end
    return list
end

function GameCenterModule:getDailyAward()
    return self._dailyAward
end

-- 其他任务红点状态
function GameCenterModule:getRedPointStatus()
    for _, task in ipairs(self._taskList) do
        if task.Status == "AC_CAN_DRAW" then
            return true
        end
    end
    return false
end

-- 每日奖励红点状态
function GameCenterModule:getDailyAwardRedPointStatus()
    if self._dailyAward and self._dailyAward.Status and self._dailyAward.Status == "AC_CAN_DRAW" then
        return true
    end
    return false
end

local VIDEO_AD_ENTERED_GAMES_KEY = "GameCenter_VideoAd_EnteredGames"
local VIDEO_AD_ENTERED_DATE_KEY = "GameCenter_VideoAd_EnteredDate"

-- 记录当日通过广告进入的 gameId
function GameCenterModule:recordGameEnteredFromAd(gameId)
    if not gameId then
        return
    end
    local today = os.date("%Y-%m-%d", os.time())
    local storedDate = cc.UserDefault:getInstance():getStringForKey(VIDEO_AD_ENTERED_DATE_KEY .. XH.playerData:getNumberID(), "")
    local stored = cc.UserDefault:getInstance():getStringForKey(VIDEO_AD_ENTERED_GAMES_KEY .. XH.playerData:getNumberID(), "")
    if storedDate ~= today then
        stored = ""
    end
    local set = {}
    for id in string.gmatch(stored, "[^,]+") do
        set[id] = true
    end
    set[tostring(gameId)] = true
    local list = {}
    for id, _ in pairs(set) do
        table.insert(list, id)
    end
    cc.UserDefault:getInstance():setStringForKey(VIDEO_AD_ENTERED_DATE_KEY .. XH.playerData:getNumberID(), today)
    cc.UserDefault:getInstance():setStringForKey(VIDEO_AD_ENTERED_GAMES_KEY .. XH.playerData:getNumberID(), table.concat(list, ","))
end

-- 返回当日已进入玩法集合（按日期存储）
function GameCenterModule:getEnteredGameIdsToday()
    local today = os.date("%Y-%m-%d", os.time())
    local storedDate = cc.UserDefault:getInstance():getStringForKey(VIDEO_AD_ENTERED_DATE_KEY .. XH.playerData:getNumberID(), "")
    if storedDate ~= today then
        return {}
    end
    local stored = cc.UserDefault:getInstance():getStringForKey(VIDEO_AD_ENTERED_GAMES_KEY .. XH.playerData:getNumberID(), "")
    local set = {}
    for id in string.gmatch(stored, "[^,]+") do
        set[tostring(id)] = true
    end
    return set
end

function GameCenterModule:getTaskIdByGameId(gameId, type)
    local taskList = self:getTaskList(type)
    if not taskList or #taskList == 0 then
        return nil
    end
    for _, task in ipairs(taskList) do
        if task.jump and task.jump.gameId and task.jump.gameId == gameId then
            return task.actType
        end
    end
    return nil
end

-- 人人捕鱼为 Unity 联运，与大厅 H5GameWidget / LobbyView 一致，不能走 startH5Game(RENRENBUYU)（ReqH5StartGameLogin 无此枚举）
function GameCenterModule:_startRenRenBuYu()
    if not XH.lobby:getModule("RRBuYu"):isSupportRRBY() then
        return
    end
    if XH.lobby:getModule("RRBuYu"):isDownloading() then
        return
    end
    XH.TipTool.showLoading(5)
    if device.platform == "android" then
        XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
        XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
    elseif device.platform == "ios" then
        XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
    end
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.RENRENBUYU_1)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.RENRENBUYU_1)
end

-- 跳转游戏
function GameCenterModule:startGame(gameId)
    print("startGame: " .. gameId)
    local realGameId = nil
    for _, v in ipairs(self.H5GameNameList) do
        if v.gameid == gameId or v.iopName == gameId then
            realGameId = v.gameid
            if v.GameName == "RENRENBUYU" then
                self:_startRenRenBuYu()
            else
                XH.lobby:getModule("Lobby"):startH5Game(v.GameName)
            end
            break
        end
    end
    local taskId = self:getTaskIdByGameId(realGameId, 'lylogin')
    if taskId then
        self:reqTaskV2Finish(taskId)
    end
end

function GameCenterModule:reqTaskV2Finish(taskId, count)
    self:startReq("GetTaskV2FinishRequest", taskId, count or 1)
end

function GameCenterModule:respTaskV2FinishRequest(req, type, data)
    -- 无需处理
end

-- 人人捕鱼登录时长以及登录任务
function GameCenterModule:markLYSessionStart()
    self._lySessionStartTime = XH.lobby:getModule("Shop"):getServerTime()
    -- 检测捕鱼登录任务
    local taskId = self:getTaskIdByGameId(0, 'lylogin')
    if taskId then
        self:reqTaskV2Finish(taskId)
    end
end

function GameCenterModule:_getLytimesStayTargetMinutes(type, jump)
    local taskList = self:getTaskList(type)
    if not taskList or #taskList == 0 then
        return nil
    end
    for _, task in ipairs(taskList) do
        if task.jump and task.jump.jump == jump then
            local first = task.content and task.content[1]
            return first and first.target
        end
    end
    return nil
end

--- 从联运游戏回到前台时结算体验时长；iOS 不统计
function GameCenterModule:finishLYSession()
    if device.platform == "ios" then
        return
    end
    if not self._lySessionStartTime then
        return
    end
    local targetMinutes = self:_getLytimesStayTargetMinutes("lytimes", "AC_JUMPTYPE_BY")
    if not targetMinutes then
        return
    end
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local seconds = serverTime - self._lySessionStartTime
    self._lySessionStartTime = nil
    local stayedMinutes = math.floor(seconds / 60)
    local GlobalCfg = require("app.Config.GlobalConfig")
    if GlobalCfg.IsDebug then
        XH.TipTool.showToast("体验时长：" .. seconds .. "秒")
    end
    if stayedMinutes >= targetMinutes then
        self:reqTaskV2Finish("lytimes", targetMinutes)
    end
end

return GameCenterModule
   �D  