local PeakRaceView = class("PeakRaceView", NG.ViewBase)
local PeakRaceConfig = require("newgold.GoldLobby.Modules.PeakRace.Define")
local KW_IMG_DEFULT_HEAD = "_0002_mrtx_w.png"

local RANK_INDEX_IMG = {
    "dfs_zjb_Img_gj.png",
    "dfs_zjb_Img_yj.png",
    "dfs_zjb_Img_jj.png",
}

function PeakRaceView:getCSBPath()
    return "cocosStudio/GoldNew/PeakRace/CSB/PeakRaceLayer.csb"
end

function PeakRaceView:getBindingInfo()
    return {
        -- 
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "closeView" },
        ["_KW_RANKMINIITEM"] = { varName = "_KW_RANKMINIITEM" },
        ["_KW_LIST_DETAIL_ITEM"] = { varName = "_KW_LIST_DETAIL_ITEM" },
        ["_KW_LIST_TEAM_ITEM"] = { varName = "_KW_LIST_TEAM_ITEM" },
        ["_KW_LIST_DETAIL"] = { varName = "_KW_LIST_DETAIL" },
        ["_KW_LIST_TEAM"] = { varName = "_KW_LIST_TEAM" },
        ["_KW_LIST_DETAIL_KW_LIST"] = { varName = "_KW_LIST_DETAIL_KW_LIST" },
        ["_KW_LIST_TEAM_KW_LIST"] = { varName = "_KW_LIST_TEAM_KW_LIST" },
        ["_KW_TOUCH_PANEL"] = { varName = "_KW_TOUCH_PANEL", onTouchEnded = "onTouchPanelClick" },
        ["_KW_PANEL_SCORE"] = { varName = "_KW_PANEL_SCORE" },
        ["_KW_TEXT_SE_TIME"] = { varName = "_KW_TEXT_SE_TIME" },
        ["_KW_TEXT_TITLE"] = { varName = "_KW_TEXT_TITLE" },
        ["_KW_UI_BTN_HELP"] = { varName = "_KW_UI_BTN_HELP", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "helpBtn" },
        ["_KW_TEXT_PERSON_SCORE"] = { varName = "_KW_TEXT_PERSON_SCORE" },
        ["_KW_TEXT_TEAM_SCORE"] = { varName = "_KW_TEXT_TEAM_SCORE" },
        ["_KW_BTN_INFO"] = { varName = "_KW_BTN_INFO", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "infoBtn" },
        ["_KW_BTN_CHANGE"] = { varName = "_KW_BTN_CHANGE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "changeBtn" },
        ["_KW_LIST_RANK"] = { varName = "_KW_LIST_RANK" },
        ["_KW_TEXT_RACE_TITLE"] = { varName = "_KW_TEXT_RACE_TITLE" },
        ["_KW_BTN_OPEN_RANK_2"] = { varName = "_KW_BTN_OPEN_RANK_2", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "openRank" },
        ["_KW_LIST_AWARD"] = { varName = "_KW_LIST_AWARD" },
        ["_KW_BTN_LOOK_AWARD_INFO"] = { varName = "_KW_BTN_LOOK_AWARD_INFO", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "lookAwardInfoBtn" },
        ["_KW_LIST_GAME"] = { varName = "_KW_LIST_GAME" },
        ["_KW_PANEL_SELF_INFO"] = { varName = "_KW_PANEL_SELF_INFO" },
        ["_KW_PANEL_SIGN_UP"] = { varName = "_KW_PANEL_SIGN_UP" },
        ["_KW_TEXT_RACE_TIME"] = { varName = "_KW_TEXT_RACE_TIME" },
        ["_KW_PANEL_TIME"] = { varName = "_KW_PANEL_TIME" },
        ["_KW_PANEL_MATCH_END"] = { varName = "_KW_PANEL_MATCH_END" },
        ["_KW_PANEL_TIME_END"] = { varName = "_KW_PANEL_TIME_END" },
        ["_KW_BTN_SIGNUP"] = { varName = "_KW_BTN_SIGNUP", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "signupBtn" },
        ["_KW_IMG_HEAD"] = { varName = "_KW_IMG_HEAD" },
        ["_KW_TEXT_MATCH_COUNT"] = { varName = "_KW_TEXT_MATCH_COUNT" },
        ["_KW_TEXT_NAME"] = { varName = "_KW_TEXT_NAME" },
        ["_KW_TEXT_JOIN_NUM"] = { varName = "_KW_TEXT_JOIN_NUM" },
        ["_KW_TEXT_WIN_COUNT"] = { varName = "_KW_TEXT_WIN_COUNT" },
        ["_KW_TEXT_TIP_1"] = { varName = "_KW_TEXT_TIP_1" },
        ["_KW_TEXT_TIP_2"] = { varName = "_KW_TEXT_TIP_2" },
        ["_KW_IMG_END"] = { varName = "_KW_IMG_END" },
        ["_KW_LIST_GAME_ITEM"] = { varName = "_KW_LIST_GAME_ITEM" },
        ["_KW_LIST_TEAM_CLICK"] = { varName = "_KW_LIST_TEAM_CLICK", onTouchEnded = "onTouchPanelClick" },
        ["_KW_LIST_DETAIL_CLICK"] = { varName = "_KW_LIST_DETAIL_CLICK", onTouchEnded = "onTouchPanelClick" },
    -- _KW_TEXT_COUNTDOWN 每个节点子节点自己设置
    }
end

function PeakRaceView:getProxyEvents()
    return {
        --
        -- { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushTeamId", callBack = "flushTeamId" },
        { module = NG.goldLobby:getModule("GoldLogin"), eventKeyName = "EVENT_CLOSE_PEAKRACE_VIEW", callBack = "closeViewEx" },
        { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushTeamList", callBack = "flushTeamList" },
        { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushTeamScore", callBack = "flushTeamScore" },
        { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushTeamInfo", callBack = "flushTeamInfo" },
        { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushPeakRaceInfo", callBack = "flushPeakRaceInfo" },
        { module = XH.lobby:getModule("TeaHouseList"), eventKeyName = "EVENT_TEA_HOUSE_LIST_CHANGED", callBack = "flushPeakRaceInfo" },
    }
end

function PeakRaceView:closeViewEx()
    self:close()
    XH.TipTool.showToast("巅峰赛连接超时，请重新进入")
end

function PeakRaceView:ctor(param)
    PeakRaceView.super.ctor(self, param)
    self._countdown = 0
    self._peakRaceData = nil
    self._support = false
    XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
    self:initUI()
end

function PeakRaceView:initUI()
    XH.lobby:getModule("BagSysNew"):reqDoubleCards(false)
    NG.goldLobby:getModule("PeakRace"):setLastLocalId(0)
    self:reqGetPeakRaceInfo()
    self:initData()
    self:initRankMiniList()
    self:initAwardList()
    self:initRaceGameList()
end

function PeakRaceView:closeView()
    self:close()
end

function PeakRaceView:initData()
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if info == nil then
        return
    end
    self._peakRaceData = info
    -- 复制10次
    local tmpImgs = {}
    if self._peakRaceData.realimgs == nil then
        self._peakRaceData.realimgs = self._peakRaceData.images
    end
    for i = 1, 10 do
        for j = 1, #self._peakRaceData.realimgs do
            tmpImgs[#tmpImgs + 1] = self._peakRaceData.realimgs[j]
        end
    end
    self._peakRaceData.images = tmpImgs
    self._KW_TEXT_TITLE:setString("s" .. info.cur_season .. "赛季")

    self._KW_TEXT_PERSON_SCORE:setString(info.score)
    self._KW_TEXT_TEAM_SCORE:setString(info.team_score)
    self:flushTeamScore()

    self._KW_TEXT_RACE_TITLE:setString("S" .. info.cur_season .. "排行榜")
    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        self._KW_TEXT_RACE_TITLE:setString("S" .. info.cur_season - 1 .. "排行榜")
    end

    local list = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    local ownTeamCount = 0
    if #list > 0 then
        for i = 1, #list do
            if list[i].nTeaOwnerNumid == XH.playerData:getNumberID() then
                ownTeamCount = ownTeamCount + 1
            end
        end
    end
    self._KW_BTN_CHANGE:setVisible(ownTeamCount > 1)
    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        self._KW_BTN_CHANGE:setVisible(false)
    end

    local startDateStr = self:formatDate(self:getLongNumber(info.start_day), false)
    local endDateStr = self:formatDate(self:getLongNumber(info.end_day), false)
    local startDateStrCN = self:formatDate(self:getLongNumber(info.start_day), true)
    local endDateStrCN = self:formatDate(self:getLongNumber(info.end_day), true)
    local startTimeStr = self:formatTime(self:getLongNumber(info.start_time))
    local endTimeStr = self:formatTime(self:getLongNumber(info.end_time))
    self._KW_TEXT_SE_TIME:setString(startDateStr .. "-" .. endDateStr)
    self._KW_TEXT_RACE_TIME:setString("比赛时间 " .. startDateStrCN .. "-" .. endDateStrCN .. " 每日" .. startTimeStr .. "-" .. endTimeStr)

    local countdownText = ""
    local countdownTextEx = ""
    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        self._countdown = self:getLongNumber(info.start_time) - os.time()
        countdownText = self:getLastTime(self._countdown)
        countdownTextEx = "距开赛："
        self:runCountdown()
    elseif info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
        self._countdown = self:getLongNumber(info.end_time) - os.time()
        countdownText = self:getLastTime(self._countdown)
        countdownTextEx = "距结束："
        self:runCountdown()
    elseif info.status == PeakRaceConfig.MatchStatus.AlreadyBaoMing then
        self._countdown = self:getLongNumber(info.end_time) - os.time()
        countdownText = self:getLastTime(self._countdown)
        countdownTextEx = "距结束："
        self:runCountdown()
    elseif info.status == PeakRaceConfig.MatchStatus.NotPlay then
        self._countdown = self:getLongNumber(info.end_time) - os.time()
        countdownText = self:getLastTime(self._countdown)
        countdownTextEx = "距结束："
        self:runCountdown()
    elseif info.status == PeakRaceConfig.MatchStatus.GameEnd then
        self._countdown = 0
        countdownTextEx = "赛季已结束"
    elseif info.status == PeakRaceConfig.MatchStatus.GameEndBaoMing then
        self._countdown = 0
        countdownTextEx = "赛季已结束"
    end

    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        -- 尚未开赛
        self:showMidEndTip(false)
        self:showCountDown(true, info.status, countdownText, countdownTextEx)
        self:showSignUpBtn(true)
        self:showTeamInfo(false)
    elseif info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
        -- 已开赛未报名
        self:showMidEndTip(false)
        self:showCountDown(true, info.status, countdownText, countdownTextEx)
        self:showSignUpBtn(true)
        self:showTeamInfo(false)
    elseif info.status == PeakRaceConfig.MatchStatus.AlreadyBaoMing then
        -- 已开赛已报名
        self:showMidEndTip(false)
        self:showCountDown(true, info.status, countdownText, countdownTextEx)
        self:showSignUpBtn(false)
        self:showTeamInfo(true)
    elseif info.status == PeakRaceConfig.MatchStatus.NotPlay then
        -- 已开赛已报名未处于玩法开放时间
        self:showMidEndTip(false)
        self:showCountDown(true, info.status, countdownText, countdownTextEx)
        self:showSignUpBtn(false)
        self:showTeamInfo(true)
    elseif info.status == PeakRaceConfig.MatchStatus.GameEnd then
        -- 已结束未报名
        self:showMidEndTip(true)
        self:showCountDown(false, info.status)
        self:showSignUpBtn(false)
    elseif info.status == PeakRaceConfig.MatchStatus.GameEndBaoMing then
        -- 已结束已报名
        self:showMidEndTip(false)
        self:showCountDown(true, info.status, countdownText, countdownTextEx)
        self:showSignUpBtn(false)
        self:showTeamInfo(true)
    end

    self._KW_TEXT_TIP_1:setString("比赛数已满" .. info.low .. "局，积分计入团队，可参与个人排名，领取巅峰赛奖励")
    self._KW_TEXT_TIP_2:setString("比赛数未满" .. info.low .. "局，积分不计入团队，不可参与个人排名，无法领取巅峰赛奖励")
end

-- 显示/隐藏倒计时
function PeakRaceView:showCountDown(isShow, status, countdownText, countdownTextEx)
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if info == nil then
        return
    end
    countdownText = countdownText or ""
    countdownTextEx = countdownTextEx or ""
    if isShow then
        if status == PeakRaceConfig.MatchStatus.UnMatch then
            self._KW_PANEL_TIME_END:setVisible(false) -- 隐藏赛季距离结束倒计时
            self._KW_PANEL_TIME:setVisible(true)
            self._KW_PANEL_TIME:getChildByName("_KW_TEXT_COUNTDOWN"):setString((countdownTextEx .. countdownText) or "")
            self._KW_PANEL_TIME:getChildByName("KW_BG"):setContentSize(30 + self._KW_PANEL_TIME:getChildByName("_KW_TEXT_COUNTDOWN"):getContentSize().width, self._KW_PANEL_TIME:getChildByName("KW_BG"):getContentSize().height)
        else
            self._KW_PANEL_TIME:setVisible(false) -- 隐藏赛季距离开始倒计时
            self._KW_PANEL_TIME_END:setVisible(true)
            self._KW_PANEL_TIME_END:getChildByName("_KW_TEXT_COUNTDOWN"):setString(countdownText or "")
            self._KW_PANEL_TIME_END:getChildByName("_KW_TEXT_COUNTDOWN_EX"):setString(countdownTextEx or "")
            self._KW_IMG_END:setContentSize(50 + self._KW_PANEL_TIME_END:getChildByName("_KW_TEXT_COUNTDOWN"):getContentSize().width + self._KW_PANEL_TIME_END:getChildByName("_KW_TEXT_COUNTDOWN_EX"):getContentSize().width, self._KW_IMG_END:getContentSize().height)
        end
    else
        self._KW_PANEL_TIME:setVisible(false) -- 隐藏赛季距离开始倒计时
        self._KW_PANEL_TIME_END:setVisible(false) -- 隐藏赛季距离结束倒计时
    end
end

-- 显示/隐藏报名按钮
function PeakRaceView:showSignUpBtn(isShow)
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if info == nil then
        return
    end
    self._KW_PANEL_SIGN_UP:setVisible(isShow)
end

-- 显示/隐藏赛季结束提示
function PeakRaceView:showMidEndTip(isShow)
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if info == nil then
        return
    end
    if isShow then
        self._KW_PANEL_MATCH_END:setVisible(true) -- 显示赛季结束提示
    else
        self._KW_PANEL_MATCH_END:setVisible(false) -- 隐藏赛季结束提示
    end
end

-- 显示/隐藏玩家数据面板
function PeakRaceView:showTeamInfo(isShow)
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if info == nil then
        return
    end
    if isShow then
        self._KW_PANEL_SELF_INFO:setVisible(true) -- 显示玩家数据面板
        local selfInfoPanel = self._KW_PANEL_SELF_INFO
        self._KW_TEXT_JOIN_NUM:setString(info.club_password)
        self._KW_TEXT_MATCH_COUNT:setString(info.round)
        self._KW_TEXT_NAME:setString(info.club_name)
        self._KW_TEXT_WIN_COUNT:setString(info.win)
        local size = self._KW_IMG_HEAD:getContentSize()
        local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(self._KW_IMG_HEAD)
        headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
        headImage:setUrl(info.club_head or "")

        local matchRankCnt = info.low
        if info.round >= matchRankCnt then
            self._KW_TEXT_TIP_1:setVisible(true)
            self._KW_TEXT_TIP_2:setVisible(false)
            self._KW_TEXT_TIP_1:setString("比赛数已满" .. matchRankCnt .. "局，积分计入团队，可参与个人排名，领取巅峰赛奖励")
        else
            self._KW_TEXT_TIP_1:setVisible(false)
            self._KW_TEXT_TIP_2:setVisible(true)
            self._KW_TEXT_TIP_2:setString("比赛数未满" .. matchRankCnt .. "局，积分不计入团队，不可参与个人排名，无法领取巅峰赛奖励")
        end
    else
        self._KW_PANEL_SELF_INFO:setVisible(false) -- 隐藏玩家数据面板
    end
end

-- 执行倒计时
function PeakRaceView:runCountdown()
    self:removeCountdownTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and (not tolua.isnull(self)) then
            self:countdownTime()
        end
    end, 1, false)
end

function PeakRaceView:removePlayPicTime()
    if self._listenerEx then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listenerEx)
    end
    self._listenerEx = nil
end

function PeakRaceView:removeCountdownTime()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function PeakRaceView:initRankMiniList()
    if self._peakRaceData == nil then
        return
    end
    local info = self._peakRaceData
    self._KW_LIST_RANK:removeAllChildren()
    for i = 1, #info.rank do
        local item = self._KW_RANKMINIITEM:clone()
        self:rankMiniItemRenderer(i, item)
        item:setPositionX(self._KW_LIST_RANK:getContentSize().width / 2)
        item:setPositionY(self._KW_LIST_RANK:getContentSize().height - (i - 1) * item:getContentSize().height)
        item:setVisible(true)
        self._KW_LIST_RANK:addChild(item)
    end
end

function PeakRaceView:rankMiniItemRenderer(idx, item)
    local info = self._peakRaceData
    local num = idx
    local rankHead = item:getChildByName('KW_IMG_HEAD')
    local rankText = item:getChildByName('KW_TEXT_RANK_NUM')
    local rankComp = item:getChildByName('KW_IMG_RANK_ICON')
    local rankBgComp = item:getChildByName('KW_TEXT_RANK_BG')
    local size = rankHead:getContentSize()
    local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(rankHead)
    headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
    headImage:setUrl(info.rank[idx].head or "")
    rankComp:setVisible(num > 0 and num < 4)
    rankText:setString("")
    if rankComp:isVisible() then
        rankComp:loadTexture(RANK_INDEX_IMG[num], ccui.TextureResType.plistType)
        rankBgComp:setVisible(false)
        rankText:setVisible(false)
    else
        rankText:setString(num)
        rankBgComp:setVisible(true)
        rankText:setVisible(true)
    end
end

-- 初始化奖励列表
function PeakRaceView:initAwardList()
    if self._peakRaceData == nil then
        return
    end
    local len = #self._peakRaceData.images
    self._KW_LIST_AWARD:removeAllItems()
    for i = 1, len do
        local size = self._KW_LIST_AWARD:getContentSize()
        local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height)
        self._KW_LIST_AWARD:addPage(headImage)
        headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
        headImage:setUrl(self._peakRaceData.images[i])
    end
    if len > 1 then
        self:removePlayPicTime()
        self._listenerEx = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            if self and (not tolua.isnull(self)) then
                self:playNextAwardPic()
            end
        end, 3, false)
    end
end

-- 播放下一张奖励图片
function PeakRaceView:playNextAwardPic()
    if self._peakRaceData == nil then
        return
    end
    local nowIndex = self._KW_LIST_AWARD:getCurrentPageIndex()
    local len = #self._peakRaceData.images
    local showIndex = (nowIndex + 1) < len and (nowIndex + 1) or 0
    self._KW_LIST_AWARD:scrollToPage(showIndex)
end

function PeakRaceView:initRaceGameList()
    if self._peakRaceData == nil then
        return
    end
    local info = self._peakRaceData
    local maxHeight = self._KW_LIST_GAME_ITEM:getContentSize().height * #info.games
    if maxHeight < self._KW_LIST_GAME:getContentSize().height then
        maxHeight = self._KW_LIST_GAME:getContentSize().height
    end
    self._KW_LIST_GAME:removeAllChildren()
    for i = 1, #info.games do
        local item = self._KW_LIST_GAME_ITEM:clone()
        self:rankGameItemRenderer(i, item)
        item:setPositionX(self._KW_LIST_GAME:getContentSize().width / 2)
        item:setPositionY(maxHeight - (i - 1) * self._KW_LIST_GAME_ITEM:getContentSize().height)
        item:setVisible(true)
        self._KW_LIST_GAME:addChild(item)
    end
    self._KW_LIST_GAME:setInnerContainerSize(cc.size(self._KW_LIST_GAME:getContentSize().width, maxHeight))
end

function PeakRaceView:rankGameItemRenderer(idx, item)
    local info = self._peakRaceData
    local playerType = item:getChildByName('KW_TEXT_PLAYER_TYPE')
    local playerCount = item:getChildByName('KW_TEXT_PLAYER_COUNT')
    local des = item:getChildByName('KW_TEXT_DES')
    if info.status == PeakRaceConfig.MatchStatus.UnMatch or info.status == PeakRaceConfig.MatchStatus.UnBaoMing or info.status == PeakRaceConfig.MatchStatus.NotPlay or info.status == PeakRaceConfig.MatchStatus.GameEnd or info.status == PeakRaceConfig.MatchStatus.GameEndBaoMing then
        item:getChildByName('KW_BTN_ENTER_RACE'):setVisible(false)
        item:getChildByName('KW_BTN_DIS_ENTER_RACE'):setVisible(true)
    else
        item:getChildByName('KW_BTN_ENTER_RACE'):setVisible(true)
        item:getChildByName('KW_BTN_DIS_ENTER_RACE'):setVisible(false)
    end
    item:setName(info.games[idx].game_id .. "-" .. info.games[idx].ren)
    item:getChildByName('KW_BTN_ENTER_RACE'):addTouchEventListener(handler(self, self.enterGame))
    item:getChildByName('KW_BTN_DIS_ENTER_RACE'):addTouchEventListener(handler(self, self.disEnterGame))
    XH.UITool.gray(item:getChildByName('KW_BTN_DIS_ENTER_RACE'))
    playerType:setString(info.games[idx].name)
    playerCount:setString(info.games[idx].ren .. "人场")
    des:setString("团队积分赛")
end

-- 进入游戏
function PeakRaceView:enterGame(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local splitData = string.split(send:getParent():getName(), "-")
    local gameId = splitData[1]
    local playerCnt = splitData[2]
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020211, nil, { game = gameId })
    NG.goldLobby:getModule("PeakRaceDispatch"):reqJoinDispatchQueue(tonumber(gameId), PeakRaceConfig.ROOM_MODE.MATCH, tonumber(playerCnt))
end

-- 不能进入游戏提示
function PeakRaceView:disEnterGame(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local info = self._peakRaceData
    local tost = ""
    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        tost = '尚未开赛，请您耐心等候'
    elseif info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
        tost = '请先进行报名'
    elseif info.status == PeakRaceConfig.MatchStatus.NotPlay then
        local startTimeStr = self:formatTime(self:getLongNumber(info.start_time))
        local endTimeStr = self:formatTime(self:getLongNumber(info.end_time))
        tost = "比赛未开始，请于 " .. startTimeStr .. "-" .. endTimeStr .. " 进行参与"
    elseif info.status == PeakRaceConfig.MatchStatus.GameEnd then
        tost = "S" .. info.cur_season .. " 赛季已结束，请关注下一赛季"
    elseif info.status == PeakRaceConfig.MatchStatus.GameEndBaoMing then
        tost = "S" .. info.cur_season .. " 赛季已结束，请关注下一赛季"
    end
    if tost ~= "" then
        NG.TipTool.showToast(tost)
    end
end

function PeakRaceView:reqGetPeakRaceInfo()
    NG.goldLobby:getModule("PeakRace"):reqPeakCount()
    NG.goldLobby:getModule("PeakRace"):reqPeakDetailList(true)
end

function PeakRaceView:flushPeakRaceInfo()
    self:reqTeamScore()
    self:initData()
    self:initRankMiniList()
    self:initAwardList()
    self:initRaceGameList()
    if self._support then
        return
    end
    self._support = true
    local isLeader = NG.goldLobby:getModule("PeakRace"):isLeader()
    local title = '报名失败'
    local data = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if data and (data.status == PeakRaceConfig.MatchStatus.AlreadyBaoMing or data.status == PeakRaceConfig.MatchStatus.GameEndBaoMing) then
        title = '报名成功'
    end
    local role = "领队"
    if not isLeader then
        role = "成员"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020208, nil, { role = role, type = title })
end

function PeakRaceView:countdownTime()
    self._countdown = self._countdown - 1
    if self._countdown < 0 then
        -- 时间小于0，新的阶段开启
        self:removeCountdownTime()
        self:reqGetPeakRaceInfo() --更新数据
    else
        local countdownText = ""
        local countdownTextEx = ""
        local info = self._peakRaceData
        if info.status == PeakRaceConfig.MatchStatus.UnMatch then
            self._countdown = self:getLongNumber(info.start_time) - os.time()
            countdownText = self:getLastTime(self._countdown)
            countdownTextEx = "距开赛："
        elseif info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
            self._countdown = self:getLongNumber(info.end_time) - os.time()
            countdownText = self:getLastTime(self._countdown)
            countdownTextEx = "距结束："
        elseif info.status == PeakRaceConfig.MatchStatus.AlreadyBaoMing then
            self._countdown = self:getLongNumber(info.end_time) - os.time()
            countdownText = self:getLastTime(self._countdown)
            countdownTextEx = "距结束："
        elseif info.status == PeakRaceConfig.MatchStatus.NotPlay then
            self._countdown = self:getLongNumber(info.end_time) - os.time()
            countdownText = self:getLastTime(self._countdown)
            countdownTextEx = "距结束："
        elseif info.status == PeakRaceConfig.MatchStatus.GameEnd then
            self._countdown = 0
            countdownTextEx = "赛季已结束"
        elseif info.status == PeakRaceConfig.MatchStatus.GameEndBaoMing then
            self._countdown = 0
            countdownTextEx = "赛季已结束"
        end

        if info.status == PeakRaceConfig.MatchStatus.UnMatch then
            -- 尚未开赛
            self:showMidEndTip(false)
            self:showCountDown(true, info.status, countdownText, countdownTextEx)
            self:showSignUpBtn(true)
            self:showTeamInfo(false)
        elseif info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
            -- 已开赛未报名
            self:showMidEndTip(false)
            self:showCountDown(true, info.status, countdownText, countdownTextEx)
            self:showSignUpBtn(true)
            self:showTeamInfo(false)
        elseif info.status == PeakRaceConfig.MatchStatus.AlreadyBaoMing then
            -- 已开赛已报名
            self:showMidEndTip(false)
            self:showCountDown(true, info.status, countdownText, countdownTextEx)
            self:showSignUpBtn(false)
            self:showTeamInfo(true)
        elseif info.status == PeakRaceConfig.MatchStatus.NotPlay then
            -- 已开赛已报名未处于玩法开放时间
            self:showMidEndTip(false)
            self:showCountDown(true, info.status, countdownText, countdownTextEx)
            self:showSignUpBtn(false)
            self:showTeamInfo(true)
        elseif info.status == PeakRaceConfig.MatchStatus.GameEnd then
            -- 已结束未报名
            self:showMidEndTip(true)
            self:showCountDown(false, info.status)
            self:showSignUpBtn(false)
        elseif info.status == PeakRaceConfig.MatchStatus.GameEndBaoMing then
            -- 已结束已报名
            self:showMidEndTip(false)
            self:showCountDown(true, info.status, countdownText, countdownTextEx)
            self:showSignUpBtn(false)
            self:showTeamInfo(true)
        end
    end
end

-- 说明
function PeakRaceView:helpBtn()
    NG.viewManager:openView("PeakRaceRuleView")
end

-- 详情
function PeakRaceView:infoBtn()
    if NG.goldLobby:getModule("PeakRace"):getSeason() == 0 then
        NG.TipTool.showToast('暂无上个赛季相关信息~')
        return
    end
    local id = NG.goldLobby:getModule("PeakRace"):getLastLocalId()
    if id == 0 then
        NG.TipTool.showToast('您还未报名，请前往报名~')
        return
    end
    NG.goldLobby:getModule("PeakRace"):reqDetailList(NG.goldLobby:getModule("PeakRace"):getLastLocalId())
end

-- 报名按钮
function PeakRaceView:signupBtn()
    local tost = ""
    local info = self._peakRaceData
    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        tost = "尚未开赛，请您耐心等候"
        local isHave = false
        local data = XH.lobby:getModule("BagSysNew"):getPeakRaceTickets()
        if data and #data > 0 then
            isHave = true
        end
        if not isHave then
            tost = '报名失败，没有巅峰赛门票，请前往比赛场获取'
        end
    elseif info.status == PeakRaceConfig.MatchStatus.GameEnd then
        tost = "赛季已结束，请关注下一赛季"
    end
    if tost ~= "" then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020210, nil, { state = info.status, type = "报名失败", info = "" })
        NG.TipTool.showToast(tost)
    else
        NG.goldLobby:getModule("PeakRace"):reqApply()
    end
end

function PeakRaceView:onTouchPanelClick()
    self:flushRightSelectIndex(0)
end

function PeakRaceView:onTouchEventLocalId(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local idx = tonumber(send:getName())
    local info = NG.goldLobby:getModule("PeakRace"):getTeamList()
    if info and info[idx] then
        NG.goldLobby:getModule("PeakRace"):setLastLocalId(info[idx].club_id)
        self:flushTeamId(idx)
        self:flushTeamScore()
    end
end

-- 切换
function PeakRaceView:changeBtn()
    if NG.goldLobby:getModule("PeakRace"):getSeason() == 0 then
        NG.TipTool.showToast("暂无上个赛季相关信息~")
        return
    end
    NG.goldLobby:getModule("PeakRace"):reqTeamList()
end

-- 查看奖励信息
function PeakRaceView:lookAwardInfoBtn()
    local nowIndex = self._KW_LIST_AWARD:getCurrentPageIndex()
    if nowIndex == -1 then
        nowIndex = 0
    end
    nowIndex = (nowIndex + 1) % #self._peakRaceData.images
    if nowIndex == 0 then
        nowIndex = #self._peakRaceData.images
    end
    local url = self._peakRaceData.images[nowIndex]
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020212, nil, { pic_url = url })
    NG.viewManager:openView("PeakRaceRuleView")
end

-- 打开排行榜
function PeakRaceView:openRank()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020214)
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if info == nil then
        return
    end
    local season = info.cur_season
    if info.status == PeakRaceConfig.MatchStatus.UnMatch then
        season = info.cur_season - 1
    end
    if season <= 0 then
        NG.TipTool.showToast('暂无排行榜相关信息~')
        return
    end
    NG.viewManager:openView("PeakRaceRankView")
end

function PeakRaceView:close()
    self:removeCountdownTime()
    self:removePlayPicTime()
    PeakRaceView.super.close(self)
    local NewGoldController = require("newgold.NewGoldController")
    NewGoldController:getInstance():exit()
end

function PeakRaceView:flushRightSelectIndex(idx)
    self._KW_LIST_DETAIL:setVisible(idx == 2)
    self._KW_LIST_TEAM:setVisible(idx == 1)
end

-- 获取领队列表
function PeakRaceView:flushTeamList()
    self:flushRightSelectIndex(1)
    self._KW_LIST_TEAM_KW_LIST:removeAllChildren()
    local maxHeight = self._KW_LIST_TEAM_ITEM:getContentSize().height * #NG.goldLobby:getModule("PeakRace"):getTeamList()
    if maxHeight < self._KW_LIST_TEAM_KW_LIST:getContentSize().height then
        maxHeight = self._KW_LIST_TEAM_KW_LIST:getContentSize().height
    end
    for i = 1, #NG.goldLobby:getModule("PeakRace"):getTeamList() do
        local item = self._KW_LIST_TEAM_ITEM:clone()
        self:flushListItem(i, item)
        item:setPositionX(self._KW_LIST_TEAM_KW_LIST:getContentSize().width / 2)
        item:setPositionY(maxHeight - (i - 1) * self._KW_LIST_TEAM_ITEM:getContentSize().height)
        item:setVisible(true)
        item:setName(i)
        item:addTouchEventListener(handler(self, self.onTouchEventLocalId))
        self._KW_LIST_TEAM_KW_LIST:addChild(item)
    end
    self._KW_LIST_TEAM_KW_LIST:setInnerContainerSize(cc.size(self._KW_LIST_TEAM_KW_LIST:getContentSize().width / 2, maxHeight))
end

function PeakRaceView:flushListItem(id, item)
    local list = NG.goldLobby:getModule("PeakRace"):getTeamList()
    if list and list[id] then
        local info = list[id]
        local size = item:getChildByName("KW_HEAD"):getContentSize()
        local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item:getChildByName("KW_HEAD"))
        headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
        headImage:setUrl(info.head or "")
        item:getChildByName("KW_MEMBER"):setString(info.ren) -- 10
        item:getChildByName("KW_NAME"):setString(XH.StringTool.cutStringByLength(info.name, 12)) -- 领队名
        item:getChildByName("KW_NUM"):setString(info.online .. "/" .. info.total) -- 领队人数
        if info.online == 0 then
            item:getChildByName("KW_NUM"):setString(info.total)
        end
        item:getChildByName("KW_PWD"):setString(info.password) -- 领队口令
        item:getChildByName("KW_SCORE"):setString(info.score)
        item:getChildByName("KW_LIST_TEAM_ITEM_CHOSE"):setVisible(NG.goldLobby:getModule("PeakRace"):getLastLocalId() == info.club_id)
        item:setName(id)
    end
end

-- 获取详情列表
function PeakRaceView:flushTeamInfo()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020209)
    self:flushRightSelectIndex(2)
    self._KW_LIST_DETAIL_KW_LIST:removeAllChildren()
    local maxHeight = self._KW_LIST_DETAIL_ITEM:getContentSize().height * #NG.goldLobby:getModule("PeakRace"):getDetailList()
    if maxHeight < self._KW_LIST_DETAIL_KW_LIST:getContentSize().height then
        maxHeight = self._KW_LIST_DETAIL_KW_LIST:getContentSize().height
    end
    for i = 1, #NG.goldLobby:getModule("PeakRace"):getDetailList() do
        local item = self._KW_LIST_DETAIL_ITEM:clone()
        self:flushInfoItem(i, item)
        item:setPositionX(self._KW_LIST_DETAIL_KW_LIST:getContentSize().width / 2)
        item:setPositionY(maxHeight - (i - 1) * self._KW_LIST_DETAIL_ITEM:getContentSize().height)
        item:setVisible(true)
        self._KW_LIST_DETAIL_KW_LIST:addChild(item)
    end
    self._KW_LIST_DETAIL_KW_LIST:setInnerContainerSize(cc.size(self._KW_LIST_DETAIL_KW_LIST:getContentSize().width / 2, maxHeight))
end

function PeakRaceView:flushInfoItem(id, item)
    local list = NG.goldLobby:getModule("PeakRace"):getDetailList()
    if list and list[id] then
        local info = list[id]
        local size = item:getChildByName("KW_HEAD"):getContentSize()
        local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item:getChildByName("KW_HEAD"))
        headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
        headImage:setUrl(info.head or "")
        item:getChildByName("KW_NAME"):setString(XH.StringTool.cutStringByLength(info.name, 12)) -- 玩家昵称
        item:getChildByName("KW_NUMID"):setString(info.user_id) -- 玩家id
        if info.status == 0 then
            item:getChildByName("KW_SCORE"):setString("未报名")
        elseif info.status == 1 then
            item:getChildByName("KW_SCORE"):setString("未达标")
        elseif info.status == 2 then
            item:getChildByName("KW_SCORE"):setString(info.score)
        end
        item:getChildByName("KW_SCORE"):setVisible(info.status ~= 1)
        item:getChildByName("KW_WDB"):setVisible(info.status == 1)
        item:setName(id)
    end
end

-- 刷新领队列表选择状态
function PeakRaceView:flushTeamId(id)
    for i = 1, #self._KW_LIST_TEAM_KW_LIST:getChildren() do
        local item = self._KW_LIST_TEAM_KW_LIST:getChildren()[i]
        item:getChildByName("KW_LIST_TEAM_ITEM_CHOSE"):setVisible(item:getName() == id .. "")
    end
end

function PeakRaceView:getLongNumber(num)
    return num
end

function PeakRaceView:getLastTime(lastTime)
    if lastTime == nil then
        return ""
    end
    if lastTime < 0 then
        return "0天0小时0分0秒"
    end
    local oneDay = 24 * 60 * 60
    local oneHours = 60 * 60
    local oneMin = 60
    local day = math.floor(lastTime / oneDay)
    local hours = math.floor((lastTime - day * oneDay) / oneHours)
    local minutes = math.floor((lastTime - day * oneDay - hours * oneHours) / oneMin)
    local seconds = math.floor(lastTime - day * oneDay - hours * oneHours - minutes * oneMin)
    return day .. "天" .. hours .. "小时" .. minutes .. "分" .. seconds .. "秒"
end

-- 格式化日期
function PeakRaceView:formatDate(time, isCN)
    if time == nil then
        return ""
    end
    local curDate = ""
    if isCN then
        curDate = os.date("%Y年%m月%d日", time)
    else
        curDate = os.date("%Y/%m/%d", time)
    end
    return curDate
end

-- 格式化时间
function PeakRaceView:formatTime(time)
    if time == nil then
        return ""
    end
    local curTime = ""
    local hours = os.date("%H", time)
    local minutes = os.date("%M", time)
    curTime = hours .. ":" .. minutes
    return curTime
end

function PeakRaceView:reqTeamScore()
    local data = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if data == nil then
        return
    end
    if data and data.club_id and data.club_id ~= 0 then
        return
    end
    local isLeader = NG.goldLobby:getModule("PeakRace"):isLeader()
    if not isLeader then
        return
    end
    NG.goldLobby:getModule("PeakRace"):reqTeamList(false)
end

-- 未报名领队刷新为当前选择的团队积分
function PeakRaceView:flushTeamScore()
    local data = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if data and data.club_id and data.club_id ~= 0 then
        return
    end
    local isLeader = NG.goldLobby:getModule("PeakRace"):isLeader()
    if not isLeader then
        return
    end
    local listInfo = NG.goldLobby:getModule("PeakRace"):getTeamList()
    local lastId = NG.goldLobby:getModule("PeakRace"):getLastLocalId()
    if #listInfo > 0 then
        for i = 1, #listInfo do
            if listInfo[i].club_id == lastId then
                self._KW_TEXT_TEAM_SCORE:setString(listInfo[i].score)
            end
        end
    end
end

return PeakRaceView