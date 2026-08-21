import(".Bridge")
local GoldModule = class("GoldModule", XH.ModuleBase)
local LocalConfig = import(".Configs.LocalConfig")
local RemoteConfig = import(".Configs.RemoteConfig")
local LobbyConfig = XH.Bridge:require("lobby.Modules.Lobby.Config")
local Utils = import(".Tool.Utils")
local BtnFactory = import(".Views.BtnFactory")
local BagConfig = import(".SubModules.Bag.Config")
local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
local RedPointManager = import(".Manager.RedPointManager")
local YGiftBankruptcyDefine = XH.Bridge:require("lobby.Modules.YGiftBankruptcy.Define")
GoldModule.EVENT_ACT_LIST = "EVENT_ACT_LIST"
GoldModule.EVENT_CHANGE_BTN_VISIBLE = "EVENT_CHANGE_BTN_VISIBLE"
GoldModule.EVENT_SIMULATE_BTN_CLICK = "EVENT_SIMULATE_BTN_CLICK"
GoldModule.EVENT_SHOW_CHOOSE_ROOM = "EVENT_SHOW_CHOOSE_ROOM"
GoldModule.EVENT_GOLD_GAME_CONF_UPDATED = "EVENT_GOLD_GAME_CONF_UPDATED"
GoldModule.EVENT_SAVE_INFO = "EVENT_SAVE_INFO"
GoldModule.EVENT_ROOM_ONLINE_COUNT = "EVENT_ROOM_ONLINE_COUNT"
GoldModule.EVENT_CHANGE_BOTTOM_MORE_VISIBLE = "EVENT_CHANGE_BOTTOM_MORE_VISIBLE"
GoldModule.EVENT_SELECT_ROOM = "EVENT_SELECT_ROOM"
GoldModule.EVENT_TIME = "EVENT_TIME"
GoldModule.EVENT_DAY_CHANGE = "EVENT_DAY_CHANGE"
GoldModule.EVENT_FLUSH_MOREGAME = "EVENT_FLUSH_MOREGAME"
GoldModule.EVENT_OPEN_FULL_VIEW = "EVENT_OPEN_FULL_VIEW"
GoldModule.EVENT_CLOSE_FULL_VIEW = "EVENT_CLOSE_FULL_VIEW"
GoldModule.EVENT_DO_QUICK_START = "EVENT_DO_QUICK_START"
GoldModule.EVENT_UPDATE_BANNER = "EVENT_UPDATE_BANNER"
GoldModule.EVENT_RUN_BACKGROUND_ACTION = "EVENT_RUN_BACKGROUND_ACTION"
GoldModule.EVENT_UPDATE_CHOOSE_ROOM_CONF = "EVENT_UPDATE_CHOOSE_ROOM_CONF"
local LOCAL_SAVEINFO_KEY = "NEW_GOLD_SAVE_INFO"
local LOCAL_LASTGAME_MORE_KEY = "LOCAL_LASTGAME_MORE_KEY"
local LOCAL_CHOOSEROOM_GUIDE_INFO = "LOCAL_CHOOSEROOM_GUIDE_INFO"

function GoldModule:ctor()
    GoldModule.super.ctor(self)
    RedPointManager:init()
    RemoteConfig:initAllCfg()
    self:getSubModule("Bag"):initCfg()
    self:initTimeSchedule()

    self._propInfo = nil
    self._saveInfo = nil
    local info = cc.UserDefault:getInstance():getStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID())
    if info and info ~= "" then
        self._saveInfo = json.decode(info)
    end
    self._lastMoreGameLeisureID = cc.UserDefault:getInstance():getIntegerForKey(LOCAL_LASTGAME_MORE_KEY .. XH.playerData:getNumberID(), 0)
    self._chooseRoomGuideInfo = nil 
    info = cc.UserDefault:getInstance():getStringForKey(LOCAL_CHOOSEROOM_GUIDE_INFO .. XH.playerData:getNumberID())
    if info and info ~= "" then
        self._chooseRoomGuideInfo = json.decode(info)
    end
end

function GoldModule:onDestroy()
    GoldModule.super.onDestroy(self)
    RedPointManager:clear() -- 清楚红点状态，确保切换帐号后状态正常
    if self._timeSid then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._timeSid)
    end
end

function GoldModule:onMainHallShow(isBackHall)
    XH.Bridge:throwData("lys24101805")
    XH.Bridge:getModule("AutoPop"):onChangeScene(isBackHall and "toGoldChooseRoom" or "toGoldHall")
    XH.Bridge:getModule("AutoPop"):whenBackLobbyCheckPop()

    if not XH.goldConfigManager:getGoldRoomDetailInfos() then
        XH.goldConfigManager:changeGroupLogin()
    end
end

function GoldModule:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"},
        {module = XH.login:getModule("Login"), eventKeyName = "EVENT_LOGIN_SUCCESS_CHANGE_GROUP", callBack = "onLoginCallback"},
        {module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "onLoginSuccessCallBack"},
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "onPropChanged"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_SELF_BACK_PACK_DATA", callBack = "onPropChangedBag"}
    }
end

function GoldModule:getReqConfig()
    return {
        reqSaveInfo = {reqPath = XH.Bridge:getReqPath("ReqGoldSetting"), callBack = self.onRespSaveInfo},
        reqRoomPlayerCount = {reqPath = XH.Bridge:getReqPath("ReqListOnlineCount"), callBack = self.onRespRoomPlayerCount},
        reqGoldGameConf = {reqPath = XH.Bridge:getReqPath("ReqGoldGameConf"), callBack = self.onRespGoldGameConf}
    }
end

function GoldModule:onGetConfiguration(event)
    local key = event.data.key
    if key and key == ConfigurationDefine.Config.GOLD then
        if XH.isEmbeddedApp() then
           XH.lobby:getModule("Lobby"):onGetConfiguration() 
        end
        RemoteConfig:initAllCfg(true)
        self:getSubModule("Bag"):initCfg()
    end
end

-- 包厢大厅登录成功
function GoldModule:onLoginSuccessCallBack(event)
end

function GoldModule:onLoginCallback(event)
    self:startHeartBeat()
    self:reqSaveInfo()
    if self:isSupport("PC") then
        XH.Bridge:getModule(LocalConfig.MP.PC):reqGoldPlayerInfo()
    end
end

function GoldModule:stopHeartBeat()
    if self._heartBeatScheduleID ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._heartBeatScheduleID)
        self._heartBeatScheduleID = nil
    end
end

function GoldModule:startHeartBeat()
    self:stopHeartBeat()
    self._heartBeatScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        local checkAction = XH.SRSProtocol.CheckAct:new()
        XH.netEngine:sendProtocol(checkAction, XH.SRSProtocol.CheckAct.processid, 0, XH.areaData:getGoldSrsGroupID())
    end, 10, false)
end

function GoldModule:checkLogin()
    local srs = XH.netEngine:getSRSBySRSGroupID(XH.areaData:getGoldSrsGroupID())
    if srs == nil or (srs and srs:getLinkState() ~= XH.SRS_LINK_STATE.LINK_STATE_SUCCESS) then
        XH.login:getModule("Login"):changeGroupSessionLogin(XH.areaData:getGoldSrsGroupID())
        return false
    end
    return true
end

-- 道具变更时，处理道具的红点信息
function GoldModule:onPropChanged(event)
    local props = event.msg
    local timeprops = XH.playerData:getPlayerTimeDrop()
    self:checkPropRedPoint(props, timeprops)
end

function GoldModule:onPropChangedBag(event)
    local selfBagData = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfBagData()
    local props = {}
    local timeprops = {}
    for i, v in ipairs(selfBagData.count_prop_info) do
        props[i] = {id = v.propsid, count = v.propscnt}
    end
    for i, v in ipairs(selfBagData.time_prop_info) do
        timeprops[i] = {id = v.propsid, time = v.endtime}
    end
    self:checkPropRedPoint(props, timeprops)
end

function GoldModule:checkPropRedPoint(props, timeprops)
    local newProps = {}
    if self._propInfo == nil then
        self._propInfo = {}
        for _, v in ipairs(props) do
            self._propInfo[v.id] = {cnt = v.count, time = -1}
        end
        for _, v in ipairs(timeprops) do
            self._propInfo[v.id] = {cnt = 0, time = v.time}
        end
    else
        for _, v in ipairs(props) do
            local beforeCnt = self._propInfo[v.id] and self._propInfo[v.id].cnt or 0
            if v.count > beforeCnt then
                table.insert(newProps, v.id)
            end
        end
        for _, v in ipairs(timeprops) do
            local beforeTime = self._propInfo[v.id] and self._propInfo[v.id].time or 0
            if v.time > beforeTime then
                table.insert(newProps, v.id)
            end
        end
        self._propInfo = {}
        for _, v in ipairs(props) do
            self._propInfo[v.id] = {cnt = v.count, time = -1}
        end
        for _, v in ipairs(timeprops) do
            self._propInfo[v.id] = {cnt = 0, time = v.time}
        end
        for _, v in ipairs(newProps) do
            if BagConfig:isShow(v) then
                local allPath = self:getRedPointPath("bag", v)
                for _, path in ipairs(allPath) do
                    RedPointManager:registerNode(path)
                    RedPointManager:setState(path, true)
                end
            end
        end
    end
    self:removeInvalidRedPointCache(props)
end

-- 移除无效的红点缓存，道具被使用完
function GoldModule:removeInvalidRedPointCache(props)
    local states = RedPointManager.stateCache
    for i, _ in pairs(states) do
        local path = "bag/"
        if string.sub(i, 1, #path) == path then
            local propid = XH.StringTool.getNumberSuffixByString(i)
            if propid then
                local idx = Utils:findIdx(props, function(prop)
                    return prop.id == propid
                end)
                if idx == -1 or props[idx] == 0 then
                    RedPointManager:registerNode(i)
                    RedPointManager:setState(i, false)
                end
            end
        end
    end
end

function GoldModule:getSaveInfo()
    return self._saveInfo or {}
end

function GoldModule:reqSaveInfo(info)
    if info then
        -- opt 0获取 1设置, type未定义
        self:startReq("reqSaveInfo", {opt = 1, type = 0, val = info or {}})
        -- 快速进行本地保存，默认用本地数据
        self._saveInfo = info
        cc.UserDefault:getInstance():setStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), json.encode(self._saveInfo))
        self:dispatchEvent({name = self.EVENT_SAVE_INFO, info = self._saveInfo})
    else
        if self._saveInfo ~= nil then
            return
        end
        self:startReq("reqSaveInfo", {opt = 0, type = 0, val = info or {}})
    end
end

function GoldModule:onRespSaveInfo(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._saveInfo = data.val
        cc.UserDefault:getInstance():setStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), json.encode(self._saveInfo))
        self:dispatchEvent({name = self.EVENT_SAVE_INFO, info = self._saveInfo})
    else
        if data and data.req.opt == 1 then
            XH.TipTool.showToast("编辑失败，服务错误")
        end
    end
end

function GoldModule:reqRoomPlayerCount(info)
    -- if not self:checkLogin() then
    --     return
    -- end
    local flag = {}
    for i = 1, #info do
        if not flag[info[i].gameID] then
            self:startReq("reqRoomPlayerCount", info[i])
            flag[info[i].gameID] = true
        end
    end
end

function GoldModule:onRespRoomPlayerCount(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({name = self.EVENT_ROOM_ONLINE_COUNT, info = data.game_online_list})
    end
end

function GoldModule:getSaveGameInfo()
    local infos = {}
    if self._saveInfo then
        for i = 1, #self._saveInfo do
            local id = self._saveInfo[i]
            local gameInfo = RemoteConfig:getRoomInfoByLeisureID(id)
            if gameInfo then
                table.insert(infos, gameInfo)
            end
        end
    end
    return infos
end

function GoldModule:getMoreGameInfo()
    local roomInfo = RemoteConfig:getCurAreaGameInfoExcludeEntry()
    local saveInfo = self:getSaveGameInfo()
    for i = 1, #saveInfo do
        local idx = Utils:findIdx(roomInfo, function(v)
            return v.LeisureID == saveInfo[i].LeisureID
        end)
        if idx == -1 then
            table.insert(roomInfo, saveInfo[i])
        end
    end
    for i, v in ipairs(roomInfo) do
        if v.LeisureID == self._lastMoreGameLeisureID then
            local info = v
            table.remove(roomInfo, i)
            table.insert(roomInfo, 1, info)
            break
        end
    end
    return roomInfo
end

function GoldModule:getCurAreaMainEntryInfo()
    local info = RemoteConfig:getCurAreaMainEntryInfo()
    local fish = {id = LocalConfig.BTN_ID.RRBY, GameTitle = "人人捕鱼", ProgeressInfo = {
        Plist = "cocosStudio/hall/Image/NewGoldHall/Main/_Plist.plist",
        markResName = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
        barResName = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
        markResNameSmall = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
        barResNameSmall = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
        markOffset = cc.p(0, 2),
        barOffset = cc.p(0, 2),
        bReverseDirection = true,
        TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
        TextFontSize = 42,
        TextColor = cc.c3b(255, 255, 255),
        OutLineColor = cc.c4b(0x1c, 0x1c, 0x1c, 255),
        OutLineSize = 2,
        TextAnchorPoint = cc.p(0.5, 0.5),
        TextOffset = cc.p(0, -40),
        bgInVisible = true,
        opacity = 200,
        type = "big",
    }}
    local back = {id = LocalConfig.BTN_ID.BACK, GameTitle = "好友房"}
    -- 格式重组
    return {{info[1], info[3]}, {info[2], info[4]}, {info[5] or fish, back}}
end

-- 当活动状态变更导致入口需要显示隐藏时调用
function GoldModule:changeBtnVisible(btnID, visible)
    self:dispatchEvent({name = self.EVENT_CHANGE_BTN_VISIBLE, msg = {btnID = btnID, visible = visible}})
end
function GoldModule:dispatchSelectRoom(info)
    self:setQuickStartRoomInfo(info)
    self:dispatchEvent({name = self.EVENT_SELECT_ROOM, info = info})
end

function GoldModule:setQuickStartRoomInfo(info)
    self._quickStartInfo = info
end

function GoldModule:getQuickStartRoomInfo()
    return self._quickStartInfo
end

function GoldModule:simulateBtnClick(btnID)
    self:dispatchEvent({name = self.EVENT_SIMULATE_BTN_CLICK, msg = {btnID = btnID}})
end

function GoldModule:getGoldRoomInfoByLeisureID(LeisureID)
    local info = XH.goldConfigManager:getGoldRoomInfoByIndex(LeisureID, RemoteConfig:getAllGoldRoomInfo())
    return info
end

function GoldModule:getGoldRoomInfoByIndex(index)
    return self:getGoldRoomInfoByLeisureID(index)
end

function GoldModule:showChooseRoomPre(info)
    local roomConf = self:getGoldRoomInfoByLeisureID(info.LeisureID)
    if XH.playerData:checkNewRealName(roomConf.roomInfo.GameID) ~= 0 then
        return
    end

    self._lastGameLianZha = false
    if roomConf.roomInfo.GameID == LobbyConfig.GoldNewGameID then
        XH.Bridge:getModule("Lobby"):enterNewGold()
        self._lastGameLianZha = true
        return
    end
    if XH.Bridge:getModule("Gold"):reqTaskGetAward() then
        return
    end

    if not XH.goldConfigManager:getGoldRoomDetailInfos() then
        XH.TipTool.showLoading()
        XH.goldConfigManager:changeGroupLogin()
        return true
    end
    self:joinGoldRoomFirst(info)
end

function GoldModule:isLastLianZha()
    return self._lastGameLianZha
end
function GoldModule:dispatchShowChooseRoom(roomConf, quick, ext)
    self:dispatchEvent({name = self.EVENT_SHOW_CHOOSE_ROOM, roomConf = roomConf, quick = quick, ext = ext})
end

-- 仅请求服务配置并刷新选场（不触发 EVENT_SHOW_CHOOSE_ROOM），用于进入选场、切换左侧页签后刷新
function GoldModule:reqGoldGameConf(gameId)
    if not gameId then
        return
    end
    local reqGameID = gameId
    if reqGameID == 30116 then
        reqGameID = 42038
    end
    self:startReq("reqGoldGameConf", reqGameID, 10)
end

function GoldModule:onRespGoldGameConf(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS and data then
        XH.goldConfigManager:onUpdateGoldGameConf(data)
        if data.gameid then
            -- chooseRoom里的self._gameID是30116
            local chooseRoomGameId = (data.gameid == 42038) and 30116 or data.gameid
            self:dispatchEvent({ name = self.EVENT_GOLD_GAME_CONF_UPDATED, gameid = chooseRoomGameId })
        end
    end
end

function GoldModule:dispatchUpdateChooseRoomConf(roomConf)
    self:dispatchEvent({name = self.EVENT_UPDATE_CHOOSE_ROOM_CONF, roomConf = roomConf})
end

-- 进入房间选择、或者快速进入游戏
function GoldModule:joinGoldRoomFirst(info, justToChooseRoom)
    local confID = info.LeisureID
    local roomFlag = info.roomFlag
    local roomConf = self:getGoldRoomInfoByLeisureID(confID)
    if roomConf.roomLevelInfos and #roomConf.roomLevelInfos == 0 then
        if roomConf.roomInfo and roomConf.roomInfo.GameID then
            XH.TipTool.showToast("获取房间信息出错 - " .. roomConf.roomInfo.GameID, 2)
        end
        return
    end

    local func = function()
        XH.Bridge:getModule("ToponAct"):setHotUpdata(false)
        if justToChooseRoom or (roomFlag and #roomFlag > 1) then
            -- self._goldView:switch2ChooseRoom(roomConf)
            self:dispatchShowChooseRoom(roomConf, justToChooseRoom)
            return
        end
        if roomFlag and #roomFlag > 0 then
            XH.Bridge:getModule("Gold"):reqJoinGoldRoom(confID, roomFlag[1])
        end
    end
    self:isNeedHotUpdata(roomConf.roomInfo.GameID, func)
end

function GoldModule:isNeedHotUpdata(GameID, func)
    if XH.Bridge:getModule("Lobby"):isNeedHotUpdata(GameID) then
        XH.Bridge:getModule("ToponAct"):setHotUpdata(true)
        XH.TipTool.hideLoading()
        lobby.gameHotUpdateSuccessCallBack = func
    else
        func()
    end
end

function GoldModule:getLastGameRoomConf()
    local roomlist = XH.Bridge:getModule("GoldNew"):getCurAreaMainEntryInfo()
    local id = 0
    if roomlist[1][1] ~= nil then
        id = roomlist[1][1].LeisureID
    end
    local ConfID = self:getLastGameInfo(id).ConfID
    return XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(ConfID)
end

function GoldModule:onGoldSceneEnter()
    -- 进入游戏场景
    -- local ConfID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_GAME_ID, 0)
    -- local Level = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL, 0)
end

function GoldModule:getLastGameInfo(defaultConfID, defaultLevel)
    local ConfID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX, defaultConfID)
    local Level = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL_WITH_LOBBY, defaultLevel)
    return {ConfID = ConfID, Level = Level}
end

function GoldModule:getRedPointPath(type, info)
    if type == 'bag' then
        local baseInfo = XH.Bridge:getModule("BagSysNew"):getBagData():getPropInfo(info)
        if baseInfo and baseInfo.props_tag_id then
            local allPath = BagConfig:getTagPath(baseInfo.props_tag_id)
            for i = 1, #allPath do
                allPath[i] = type .. "/" .. allPath[i] .. "/" .. info
            end
            return allPath
        end
    elseif type == 'shop' then
        local allPath = XH.Bridge:getModule(LocalConfig.MP.SHOP):getTagPath(info)
        for i = 1, #allPath do
            allPath[i] = type .. "/" .. allPath[i]
        end
        return allPath
    end
    return {}
end

function GoldModule:getServerTime()
    return XH.Bridge:getModule("Shop"):getServerTime()
end

function GoldModule:getSubModule(name)
    return XH.Bridge:getModule("GoldNew.SubModules." .. name)
end

function GoldModule:onActs(info)
    -- self:getSubModule("ActFirstRecharge"):onActs(info)
    self._allActs = info
    self:dispatchEvent({name = self.EVENT_ACT_LIST, info = info})
end

function GoldModule:getActs()
    return self._allActs
end

-- 是否为破产/免败/进房的购买礼包
function GoldModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    local data = msg.productInfo
    if data and data.productId then
        local splitTable = string.split(data.productId, "_")
        local first = splitTable[1]
        local second = splitTable[2]
        if not first or not second then
            return false
        end
        if first == YGiftBankruptcyDefine.ACTLIST.GoldFirstPayGift then
            self:getSubModule("ActFirstRecharge"):onRechargeSuccess()
            return true
        elseif first == YGiftBankruptcyDefine.ACTLIST.TeHuiLiBao then
            XH.Bridge:getModule(LocalConfig.MP.ActPeGP):onRechargeSuccess()
            return true
        end
    end
    return false
end

function GoldModule:getGameType(gameID)
    local configer = XH.Bridge:require("app.Config.Parse.GameSubConfiger").new()
    return configer:getGameTypePathByGameId(gameID)
end
function GoldModule:getGoldHeadUrl()
    return self:getSubModule("PersonalCenter"):getGoldHeadUrl()
end

function GoldModule:isSupport(func)
    local switch = RemoteConfig:getConfigByName("switch") or {}
    -- if func == "bag" or func == "shop" then
    --     return true
    -- end
    return switch[func] == true
end

function GoldModule:doQuickStart()
    self:dispatchEvent({name = self.EVENT_DO_QUICK_START})
end

function GoldModule:initTimeSchedule()
    self._lastDayStr = os.date("%Y-%m-%d", self:getServerTime())
    self._timeSid = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:dispatchEvent({name = self.EVENT_TIME})
        local dayStr = os.date("%Y-%m-%d", self:getServerTime())
        if dayStr ~= self._lastDayStr then
            self._lastDayStr = dayStr
            self:dispatchEvent({name = self.EVENT_DAY_CHANGE})
        end
    end, 1, false)
end

-- 是否是限时活动游戏
function GoldModule:isActivityGame(gameid)
    local boxActivityGame = XH.areaData:getGoldActivityGame()
    local startTime, endTime = XH.areaData:getActivityTime()
    local serverTime = self:getServerTime()
    -- 活动是否开始
    if startTime > serverTime or endTime < serverTime then
        return false
    end
    return table.indexof(boxActivityGame, gameid) ~= false
end

function GoldModule:getActivityGameEndTime()
    local _, endTime = XH.areaData:getActivityTime()
    return endTime
end

function GoldModule:addRecentPlay(LeisureID, roomFlag)
    local roomInfo = self:getMoreGameInfo()
    local idx = Utils:findIdx(roomInfo, function(v)
        return v.LeisureID == LeisureID
    end)
    if idx > 0 then
        self._lastMoreGameLeisureID = LeisureID
        cc.UserDefault:getInstance():setIntegerForKey(LOCAL_LASTGAME_MORE_KEY .. XH.playerData:getNumberID(), self._lastMoreGameLeisureID)
        self:dispatchEvent({name = self.EVENT_FLUSH_MOREGAME})
    end
end

function GoldModule:openFullView(viewName, param)
    self:dispatchEvent({name = self.EVENT_OPEN_FULL_VIEW, info = {viewName = viewName, param = param}})
end
function GoldModule:closeFullView(viewName)
    self:dispatchEvent({name = self.EVENT_CLOSE_FULL_VIEW, info = {viewName = viewName}})
end

function GoldModule:checkCreateActIconInGame(name, parent)
    if name == "BaoJiRank" then
        local m = XH.Bridge:getModule(LocalConfig.MP.ActBJRank)
        if m and m:isValid() then
            local btn = BtnFactory:create(LocalConfig.BTN_ID.BAOJI_RANK, LocalConfig.BTN_AREA_ID.IN_GAME)
            if parent and btn then
                parent:addChild(btn)
                return btn
            end
        end
    end
end

function GoldModule:updateBanner()
    self:dispatchEvent({name = self.EVENT_UPDATE_BANNER})
end

function GoldModule:getChooseRoomGuideTimes(leisureID)
    return self._chooseRoomGuideInfo and self._chooseRoomGuideInfo[leisureID .. ""] or 0
end
function GoldModule:addChooseRoomGuideTimes(leisureID)
    self._chooseRoomGuideInfo = self._chooseRoomGuideInfo or {}
    self._chooseRoomGuideInfo[leisureID .. ""] = self._chooseRoomGuideInfo[leisureID .. ""] or 0
    self._chooseRoomGuideInfo[leisureID .. ""] = self._chooseRoomGuideInfo[leisureID .. ""] + 1
    cc.UserDefault:getInstance():setStringForKey(LOCAL_CHOOSEROOM_GUIDE_INFO .. XH.playerData:getNumberID(), cjson.encode(self._chooseRoomGuideInfo))
end

function GoldModule:checkShowChooseRoomGuide(leisureID, cfgTimes)
    local times = self:getChooseRoomGuideTimes(leisureID)
    return  (cfgTimes or 0) > times
end

function GoldModule:runBackGroundAction(param)
    self:dispatchEvent({name = self.EVENT_RUN_BACKGROUND_ACTION, info = param})
end

return GoldModule
�_