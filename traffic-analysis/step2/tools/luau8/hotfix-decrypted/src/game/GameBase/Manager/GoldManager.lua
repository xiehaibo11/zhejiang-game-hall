local GoldManager = CF.gameClass("GoldManager", CF.ModuleBase)

GoldManager.EVENT_GAME_START_CHANGE = "EVENT_GAME_START_CHANGE"
GoldManager.EVENT_MATCH_STATUS_CHANGE = "EVENT_MATCH_STATUS_CHANGE"
GoldManager.EVENT_UPDATE_MATCHUI = "EVENT_UPDATE_MATCHUI"
GoldManager.EVENT_MATCH_FLAG_SHOW = "EVENT_MATCH_FLAG_SHOW"
GoldManager.EVENT_CLEAR_TABLE = "EVENT_CLEAR_TABLE"

GoldManager.ENUM_CHANGE_TYPE = {
    NONE = 0, -- 无
    BEFORE_BASELIVE = 1, -- 领取低保前
    AFTER_BASELIVE = 2, -- 领取之后
    SIMPLE = 3, -- 直接转场
    REJOIN = 4, -- 重新加入
    REJOIN_BEFORE = 5 -- 加入判断
}

GoldManager.GUIDE_TYPE = {
    NONE = 0,
    FIRST_GUIDE = 1,
    SECOND_GUIDE = 2
}

GoldManager.ENUM_MSG = {
    NOT_READY = "逻辑踢人",
    NOT_READY_MSG = "因长时间未准备退出房间",
    NOT_ENOUGH_SR = "携带金币低于房间限制条件，请前往其他房间！",
    NOT_ENOUGH_SR_MSG = "携带金币低于房间准入条件，去充值点吧！",
    TOO_MUCH_SR = "携带金币高于房间限制条件，请前往其他房间！",
    TOO_MUCH_SR_MSG = "携带金币高于房间限制条件，请前往更高场次！",
    ERROR_UNKNOWN = "匹配未知错误，请退出重新加入游戏！"
}

function GoldManager:ctor(param)
    GoldManager.super.ctor(self)
    self._delayTime = 0
    self._selfPlayerData = nil
    self._playSR = 0
    -- 是否需要重新加入队列
    self._needJoinQueue = false
    self._changeType = GoldManager.ENUM_CHANGE_TYPE.NONE
    self:initEvents()
end

function GoldManager:onDestroy()
    GoldManager.super.onDestroy(self)
    self:removeAllEventListeners()
end

function GoldManager:getProxyEvents()
    return {
        -- 金币场重新匹配消息通知
        {module = CF.netEngine, eventName = CF.RoomProtocol.StartGameByLobby.event_key, callBack = "onRespStartGameByLobby"},
        -- 金币场匹配结束 Lobby
        {module = CF.netEngine, eventName = CF.GameMProtocol.StartGame.event_key, callBack = "onRespStartGame"},
        -- 金币场匹配结束 GP
        {module = CF.netEngine, eventName = CF.AgBaseProtocol.PopupMsgBox.event_key, callBack = "onRecivePopMsgBox"},
        -- 金币场connect resp
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespPlayerConnectGP.event_key, callBack = "onRespPlayerConnectGP"},
        {module = CF.netEngine, eventName = CF.GameProtocolGT.RespPlayerConnect.event_key, callBack = "onRespPlayerConnectGT"},
        -- 加入匹配队列返回
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespPlayerJoinMatch.event_key, callBack = "onRespPlayerJoinMatch"},
        -- 金币场强制退出
        {module = CF.netEngine, eventName = CF.GameMProtocol.PlayerLeaveEx_ToClient.event_key, callBack = "onRecivePlayerLeaveEx"},
        -- 离开房间
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespLeaveRoom.event_key, callBack = "onRespLeaveRoom"},
        -- 请求金币信息
        {module = CF.netEngine, eventName = CF.ToolMProtocol.ResSR.event_key, callBack = "onRespPlayerGold"},
        -- 转场加入
        {module = CF.netEngine, eventName = CF.RoomProtocol.RespJoinTableWithGold.event_key, callBack = "onRespJoinTableWithGold"},
        -- 金币场匹配结束 新队列服务
        {module = CF.netEngine, eventName = CF.DispatchProtocol.NotifyUserJoinTableInfo.event_key, callBack = "onRespStartGameByDispatch"},
        -- 金币场匹配异常退出 新队列服务
        {module = CF.netEngine, eventName = CF.DispatchProtocol.NotifyForceLeaveDispatchQueue.event_key, callBack = "onReciveForceLeaveDispatchQueue"},
        -- 金币场加入队列 新队列服务
        {module = CF.netEngine, eventName = CF.DispatchProtocol.RespJoinDispatchQueue.event_key, callBack = "onRespJoinDispatchQueue"},
        -- 金币场询问是否重新加入队列 新队列服务
        {module = CF.netEngine, eventName = CF.GameMProtocol.NotifyJoinDispatchQueue.event_key, callBack = "onNotifyJoinDispatchQueue"},

        {module = CF.netEngine, eventName = CF.RheaProtobuf.PropsCountNotify.event_key, callBack = "onPropsCountNotify"},
        -- 通知破产
        {module = CF.netEngine, eventName = CF.RheaProtobuf.BankruptcyNotifyV2.event_key, callBack = "onBankruptcyNotify"},
    }
end

function GoldManager:initEvents()
    self._listenerEventReJoinTable = cc.EventListenerCustom:create("GoldBaseLive.GameReJoinTableWithGold", handler(self, self.onGoldBaseLiveEvent))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventReJoinTable, 1)

    self._listenerEventCloseBaseLive = cc.EventListenerCustom:create("GoldBaseLive.Close", handler(self, self.onCloseBaseLiveEvent))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventCloseBaseLive, 1)
end

function GoldManager:leaveGame()
    return CF.game:leaveGame()
end

function GoldManager:getRoomData()
    return CF.roomData
end

function GoldManager:reqLeaveRoom()
    local roomData = self:getRoomData()
    CF.roomManager:reqLeaveRoom(roomData._appID, roomData._srsGroupID)
    if roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE then
        self:onGameReJoinTableWithGold()
    end
end

function GoldManager:sendPlayerConnectGP()
    if not CF.roomData:isGoldRoom() then
        return
    end

    local roomData = self:getRoomData()
    if roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE then
        return
    end
    local reqPlayerConnect2Data = CF.GameMProtocol.ReqPlayerConnectGP:new()
    reqPlayerConnect2Data.askid = os.time()
    CF.netEngine.sendGameProtocol(reqPlayerConnect2Data, CF.roomData:getMatchAppid())
end

function GoldManager:sendPlayerConnectGameTea()
    if not CF.roomData:isGoldRoom() then
        return
    end
    CF.msgManager:sendFlushGameSR()
    local reqPlayerConnect = CF.GameProtocolGT.PlayerConnect:new()
    reqPlayerConnect.m_roomid = CF.roomData:getRoomID()
    reqPlayerConnect.m_brandid = XH.areaData:getAreaID()
    reqPlayerConnect.m_numid = XH.playerData:getNumberID()
    reqPlayerConnect.m_sessionid = XH.playerData:getSessionID()
    CF.netEngine.sendGameProtocol(reqPlayerConnect, CF.roomData:getAppID())
end

function GoldManager:sendPlayerJoinMatch()
    if not CF.roomData:isGoldRoom() then
        return
    end
    local roomData = self:getRoomData()
    if roomData._sRoomMode == CF.ROOM_TYPE.DISPATCH_QUEUE then
        self:reqJoinDispatchQueue(roomData._gameID, roomData._chaircnt, roomData._srsGroupID, roomData._roomFlag)
    elseif roomData._sRoomMode == CF.ROOM_TYPE.NEW_GOLD_ROOM then
        self:reqPlayerJoinMatch(roomData._nMatchAppid)
    end
end

function GoldManager:onRecivePopMsgBox(event)
    local respData = CF.AgBaseProtocol.PopupMsgBox:new()
    respData:bistream(event.msg.buff, event.msg.len)
    local roomData = self:getRoomData()
    if roomData._sRoomMode ~= CF.ROOM_TYPE.NEW_GOLD_ROOM then
        return
    end
    if CF.roomData:isGoldRoom() then
        local leaveReason = un.StringUtils.GB_18030_2000_TO_UTF8(respData.msgbox.m_szText)
        if leaveReason == "Rematch" then
            CF.msgManager:sendPlayerLeave33()
            self:dispatchEvent({name = self.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = true}})
        end
    end
end

function GoldManager:onRespStartGameByLobby(event)
    print("GoldManager:onRespStartGameByLobby---------------- call")
    local startMsg = CF.RoomProtocol.StartGameByLobby:new()
    startMsg:bistream(event.msg.buff, event.msg.len)
    self:onStartGame(startMsg)
end

function GoldManager:onRespStartGame(event)
    print("GoldManager:onRespStartGame---------------- call")
    local startMsg = CF.GameMProtocol.StartGame:new()
    startMsg:bistream(event.msg.buff, event.msg.len)
    self:onStartGame(startMsg)
end

function GoldManager:onStartGame(startMsg)
    local roomData = self:getRoomData()
    if roomData._sRoomMode ~= CF.ROOM_TYPE.NEW_GOLD_ROOM and roomData._sRoomMode ~= CF.ROOM_TYPE.DISPATCH_QUEUE then
        return
    end
    if startMsg.m_CanStart == 1 then
        CF.msgManager:sendPlayerConnect()
        self:dispatchEvent({name = self.EVENT_MATCH_STATUS_CHANGE, msg = {show = false, rematch = false}})
        self:dispatchEvent({name = self.EVENT_GAME_START_CHANGE})
    end
end

function GoldManager:onRespPlayerConnectGP(event)
    local respData = CF.GameMProtocol.RespPlayerConnectGP:new()
    respData:bistream(event.msg.buff, event.msg.len)
    dump(respData, "GoldManager:onRespPlayerConnectGP")
    local flag = respData.flag
    if flag == CF.GameMProtocol.RespPlayerConnectGP.FLAG.SUCCEED then
        self:startHeartBeat()
    end
end

function GoldManager:onRespPlayerConnectGT(event)
    local respData = CF.GameProtocolGT.RespPlayerConnect:new()
    respData:bistream(event.msg.buff, event.msg.len)
    dump(respData, "GoldManager:RespPlayerConnectGT")
    local flag = respData.flag
    if flag == CF.GameProtocolGT.RespPlayerConnect.FLAG.SUCCEED then
        self:startHeartBeatGT()
    end
end


function GoldManager:startHeartBeat()
    self:stopHeartBeat()
    self._heartBeatScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        local checkAction = CF.GameMProtocol.CheckAct:new()
        local roomData = self:getRoomData()
        CF.netEngine.sendGameProtocol(checkAction,roomData._nMatchAppid)
    end, 10, false)
end

function GoldManager:startHeartBeatGT()
    self:stopHeartBeat()
    self._heartBeatScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        local checkAction = CF.GameProtocolGT.CheckAct:new()
        local roomData = self:getRoomData()
        CF.netEngine.sendGameProtocol(checkAction,roomData:getAppID())
    end, 10, false)
end

function GoldManager:stopHeartBeat()
    if self._heartBeatScheduleID ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._heartBeatScheduleID)
        self._heartBeatScheduleID = nil
    end
end

function GoldManager:onRespPlayerJoinMatch(event)
    local respData = CF.GameMProtocol.RespPlayerJoinMatch:new()
    respData:bistream(event.msg.buff, event.msg.len)
    local flag = respData.flag
    print("GoldManager:RespPlayerJoinMatch:" .. flag)
    if flag == CF.GameMProtocol.RespPlayerJoinMatch.FLAG.SUCCEED then
        self:dispatchEvent({name = self.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
        return
    elseif flag == CF.GameMProtocol.RespPlayerJoinMatch.FLAG.ERR_USER_GOLD_OVER then
        self:showTipLayer(GoldManager.ENUM_MSG.TOO_MUCH_SR_MSG)
    elseif flag == CF.GameMProtocol.RespPlayerJoinMatch.FLAG.ERR_USER_GOLD_NOENOUGH then
        self:showTipLayer(GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG)
    end
end

function GoldManager:onRespJoinTableWithGold(event)
    local respJoinTable = CF.RoomProtocol.RespJoinTableWithGold:new()
    respJoinTable:bistream(event.msg.buff, event.msg.len)
    local errorcode = respJoinTable.errorcode
    print("------------------- GoldManager onRespJoinTableWithGold:" .. errorcode)
    if errorcode == CF.RoomProtocol.ERRORCODE.SUCCESS then
        local roomData = self:getRoomData()
        roomData._sRoomMode = respJoinTable.roommode
        roomData._reconnect = false
        roomData._appID = respJoinTable.gameappid
        roomData._srsGroupID = respJoinTable.srsgroupid
        roomData._nMatchAppid = respJoinTable.nMatchAppid
        CF.areaData:setSrsGroupIDbyAppID(roomData._appID, roomData._srsGroupID)
        CF.game:JudgeConnet()
        CF.goldManager:setChangeType(CF.goldManager.ENUM_CHANGE_TYPE.REJOIN)
        if self._resultLevel then
            local lobbyId = CF.areaData:getLobbyID()
            cc.UserDefault:getInstance():setIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId, self._resultLevel)
        end
        if CF.ROOM_TYPE.GOLD_ROOM == roomData._sRoomMode then
            CF.game:dispatchEvent( { name = CF.game.EVENT_MATCH_STATUS_CHANGE, msg = { show = false, rematch = false } })
        end
    end
    CF.TipTool.hideLoading()
end

-- 请求玩家金币信息返回
function GoldManager:onRespPlayerGold(event)
    local playerPropDataMsg = CF.ToolMProtocol.ResSR:new()
    playerPropDataMsg:bistream(event.msg.buff, event.msg.len)
    self._playSR = playerPropDataMsg.purse
    self:dispatchEvent({name = self.EVENT_UPDATE_MATCHUI, score = playerPropDataMsg.purse})
end

function GoldManager:onPropsCountNotify(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.RheaProtobuf.PropsCountNotify,event.msg.buff)
    local props = msgData.props
    for i = 1, #props do
        local prop = props[i]
        if prop.prop_id == CF.areaData:getGoldPropId() then
            self._playSR = prop.count
            self:dispatchEvent({name = self.EVENT_UPDATE_MATCHUI, score = prop.count})
        end
    end
end

-- 转场需要先退出房间，收到RespLeaveRoom后进行转场
function GoldManager:onRespLeaveRoom(event)
    -- 重新进入房间
    self:onGameReJoinTableWithGold()
end

function GoldManager:setDelayTime(nTime)
    self._delayTime = nTime
end

function GoldManager:onRecivePlayerLeaveEx(event)
    local respData = CF.GameMProtocol.PlayerLeaveEx_ToClient:new()
    respData:bistream(event.msg.buff, event.msg.len)
    if CF.roomData:isGoldRoom() then
        self._selfPlayerData = clone(CF.roomData:getSelfPlayerData())
        if respData.msgbox.m_dwAction == CF.MSGBOX_ACTION_DIALOG then
            CF.SysTool.performDelayOnce(function() 
                local leaveReason = un.StringUtils.GB_18030_2000_TO_UTF8(respData.msgbox.m_szText)
                self:showTipLayer(leaveReason)
            end, self._delayTime)
        else
            self:leaveGame()
        end
    end
end

function GoldManager:onGoldBaseLiveEvent(event)
    if CF.roomData and CF.roomData:isGoldRoom() and not CF.roomData:is50() then
        self._changeType = GoldManager.ENUM_CHANGE_TYPE.AFTER_BASELIVE
        self:reqLeaveRoom()
    end
end

function GoldManager:onCloseBaseLiveEvent(event)
    if CF.roomData:isDKGoldRoom() then
        if self._changeType == GoldManager.ENUM_CHANGE_TYPE.REJOIN_BEFORE or self._changeType == GoldManager.ENUM_CHANGE_TYPE.BEFORE_BASELIVE then
            self:leaveGame()
            return
        end
    elseif CF.roomData:isGoldRoom() then
        self:leaveGame()
    end
end

function GoldManager:onGameReJoinTableWithGold()
    if CF.roomData:isGoldRoom() then
        if self._changeType == GoldManager.ENUM_CHANGE_TYPE.NONE then
            return
        end
        if self._changeType == GoldManager.ENUM_CHANGE_TYPE.SIMPLE then
            self:dispatchEvent({name = self.EVENT_GAME_START_CHANGE})
            self:startJoinGoldRoom()
        elseif self._changeType == GoldManager.ENUM_CHANGE_TYPE.AFTER_BASELIVE then
            local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
            local event = cc.EventCustom:new("GoldBaseLive.CloseReward")
            eventDispatcher:dispatchEvent(event)
            local canChange, bLow = self:canChangeRoomLevel()
            if canChange then
                local reason = GoldManager.ENUM_MSG.NOT_ENOUGH_SR
                if bLow then
                    reason = GoldManager.ENUM_MSG.TOO_MUCH_SR
                end
                CF.SysTool.performDelayOnce(function()
                    local tipLayer = CF.TipTool.showPopLayer("TipLayer")
                    tipLayer:setText(reason)
                    tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
                        self:dispatchEvent({ name = self.EVENT_GAME_START_CHANGE })
                        self:startJoinGoldRoom()
                    end)
                    tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function()
                        self:leaveGame()
                    end)
                end, 1)
            else
                self:startJoinGoldRoom()
                self:dispatchEvent({name = self.EVENT_GAME_START_CHANGE})
            end
        end
        self:dispatchEvent({name = self.EVENT_UPDATE_MATCHUI, score = self._playSR})
    end
end

function GoldManager:removeAllEventListeners()
    self:stopHeartBeat()

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._listenerEventReJoinTable then
        eventDispatcher:removeEventListener(self._listenerEventReJoinTable)
    end
    if self._listenerEventCloseBaseLive then
        eventDispatcher:removeEventListener(self._listenerEventCloseBaseLive)
    end
end

local reqTimestamp = 0

function GoldManager:startJoinGoldRoom()
    if socket.gettime() * 1000 - reqTimestamp < 100 then --这里加这段代码的原因是，当升场离开房间是，边茶的GP会返回2个onRespLeaveRoom，同时这里也会调用2遍，即调用Joinroom2遍，其中有一次会返回失败，导致客户端离开房间，所以要加此判断
        return
    end
    reqTimestamp = socket.gettime() * 1000
    local confID = CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX)
    local goldRoomInfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
    if not goldRoomInfo then
        return
    end
    local srsGroupID = 0
    local resultLevel = self._resultLevel
    if self._resultLevel and self._resultLevel > 0 then
        resultLevel = self._resultLevel%10
    end
    if type(goldRoomInfo.roomInfo.SrsGroupId) == "table" and resultLevel then
        srsGroupID = goldRoomInfo.roomInfo.SrsGroupId[resultLevel]
    else 
        srsGroupID = goldRoomInfo.roomInfo.SrsGroupId
    end
    if srsGroupID ~= self:getRoomData():getSRSGroupID() then 
        CF.game:leaveGame()
        return 
    end
    local gameId = goldRoomInfo.roomInfo.GameID
    if resultLevel and resultLevel > 0 then 
        gameId = goldRoomInfo.roomLevelInfos[resultLevel].gameid
    end
    local areaTypeID = goldRoomInfo.roomInfo.AreaTypeID
    local chaircnt = goldRoomInfo.roomInfo.PlayerCount
    local goldMode = goldRoomInfo.roomInfo.GoldMode
    local roomnameflag = self._resultLevel or -1
    if resultLevel and resultLevel > 0 and goldRoomInfo.roomLevelInfos[resultLevel] then
        chaircnt = goldRoomInfo.roomLevelInfos[resultLevel].chaircnt
    end
    local roomData = self:getRoomData()
    if roomData._sRoomMode == CF.ROOM_TYPE.DISPATCH_QUEUE then
        if self._needJoinQueue then
            CF.TipTool.showLoading()
        end
        self:reqJoinDispatchQueue(gameId, chaircnt, srsGroupID, roomnameflag)
    elseif resultLevel and resultLevel > 0 and goldRoomInfo.roomLevelInfos and goldRoomInfo.roomLevelInfos[resultLevel] and goldRoomInfo.roomLevelInfos[resultLevel].area == "GameTea" then
        CF.TipTool.showLoading()
        local rooms = goldRoomInfo.roomLevelInfos[resultLevel].room
        local roomLevel = goldRoomInfo.roomLevelInfos[resultLevel].roomnameflag
        self:linkReqJoinRoomGT(gameId, rooms, chaircnt, srsGroupID, 15, roomLevel)
        print("linkReqJoinRoomGT" )
    else
        CF.TipTool.showLoading()
        CF.reqJoinGoldRoom(gameId, areaTypeID, chaircnt, goldMode, srsGroupID, roomnameflag)
    end
end

-- 能否进行转场（已经不满足当前场）
function GoldManager:canChangeRoomLevel(money, roomLevel)
    self._resultLevel = nil
    local playerData = CF.selfPlayerData
    local playerSR = money or playerData:getSR() or 0
    local confID = CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_GAME_ID)
    local goldRoomInfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
    if not goldRoomInfo then
        return false
    end
    if goldRoomInfo.roomInfo.SpecialPlayer and goldRoomInfo.roomInfo.SpecialPlayer == 1 then
        return false
    end
    if #goldRoomInfo.roomLevelInfos < 2 then
        return false
    end
    local level = roomLevel or CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL_WITH_LOBBY)
    local _levelRoom = goldRoomInfo.roomLevelInfos
    local resultLevel = level

    -- 判断当前等级是否满足
    for _, roominfo in pairs(_levelRoom) do
        if roominfo.roomnameflag == level then
            if (playerSR >= roominfo.minrich) and ((playerSR <= roominfo.maxrich) or (roominfo.maxrich == -1)) then
                resultLevel = roominfo.roomnameflag
                self._resultLevel = resultLevel
                return not (resultLevel == level), resultLevel > level
            end
        end
    end

    for _, roominfo in pairs(_levelRoom) do
        if (playerSR >= roominfo.minrich) and ((playerSR <= roominfo.maxrich) or (roominfo.maxrich == -1)) then
            resultLevel = roominfo.roomnameflag
            self._resultLevel = resultLevel
            if CF.roomData and CF.roomData:is220Model() then
                break
            end
        end
    end

    return not (resultLevel == level), resultLevel > level
end

-------------------------- 200匹配模式 ------------------------------

function GoldManager:reqPlayerJoinMatch(appid)
    local reqPlayerMatch = CF.GameMProtocol.ReqPlayerJoinMatch:new()
    reqPlayerMatch.askid = os.time()
    CF.netEngine.sendGameProtocol(reqPlayerMatch, appid)
end

-------------------------- 新匹配队列 -------------------------------

function GoldManager:reqJoinDispatchQueue(gameId, chaircnt, srsGroupID, roomnameflag)
    if not self._needJoinQueue then
        return
    end
    CF.reqJoinDispatchQueue(gameId, chaircnt, srsGroupID, roomnameflag)
end

function GoldManager:onRespJoinDispatchQueue(event)
    local respJoinTable = CF.DispatchProtocol.RespJoinDispatchQueue:new()
    respJoinTable:bistream(event.msg.buff, event.msg.len)
    local errorcode = respJoinTable.errorcode
    print("------------------- GoldManager onRespJoinDispatchQueue:" .. errorcode)
    if errorcode == CF.DispatchProtocol.ERRORCODE.SUCCESS then
        self._needJoinQueue = false
        local roomData = self:getRoomData()
        roomData._roomFlag = respJoinTable.roomflag
        self:dispatchEvent({name = self.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
    end
    CF.TipTool.hideLoading()
end

function GoldManager:onReciveForceLeaveDispatchQueue(event)
    local respData = CF.DispatchProtocol.NotifyForceLeaveDispatchQueue:new()
    respData:bistream(event.msg.buff, event.msg.len)
    if CF.roomData:isGoldRoom() then
        if respData.flag == CF.DispatchProtocol.NotifyForceLeaveDispatchQueue.FLAG.USER_OFFLINE then
            local roomData = self:getRoomData()
            self:reqJoinDispatchQueue(roomData._gameID, roomData._chaircnt, roomData._srsGroupID, roomData._roomFlag)
        else
            local tipLayer = CF.TipTool.showPopLayer("TipLayer")
            tipLayer:setText(GoldManager.ENUM_MSG.ERROR_UNKNOWN .. respData.flag)
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.OK,
                function()
                    self:leaveGame()
                end
            )
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.CLOSE,
                function()
                    self:leaveGame()
                end
            )
        end
    end
end

function GoldManager:onRespStartGameByDispatch(event)
    print("GoldManager:onRespStartGameByDispatch---------------- call")
    local startMsg = CF.DispatchProtocol.NotifyUserJoinTableInfo:new()
    startMsg:bistream(event.msg.buff, event.msg.len)
    startMsg.m_CanStart = 1
    local roomData = self:getRoomData()
    roomData._appID = startMsg.gameappid
    CF.areaData:setSrsGroupIDbyAppID(roomData._appID, roomData._srsGroupID)
    self:onStartGame(startMsg)
end

function GoldManager:linkReqJoinRoomGT(gameId, rooms, chaircnt, srsGroupID, timeout, roomLevel)
    local LinkReqJoinRoomGT = require("lobby.Req.Room.LinkReqJoinRoomGT")
    local linkReqJoinRoomGT = LinkReqJoinRoomGT.new()
    linkReqJoinRoomGT:addReqCallBack(self, self.onJoinRoomGTCallBack)
    linkReqJoinRoomGT:start(gameId, rooms, chaircnt, srsGroupID, timeout or 15, {roomLevel = roomLevel})
end

function GoldManager:onJoinRoomGTCallBack(reqJoin, type, data)
    if not CF.goldManager or not CF.game or not CF.roomData or not CF.areaData then
        return
    end
    CF.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local roomData = {}
        CF.roomData:setIs50(false)
        roomData.appID = data.cellData.gameappid
        roomData.gameID = data.cellData.gameid
        roomData.roomMode = XH.ROOM_MODE.MOBILE
        roomData.roomID = data.cellData.roomid
        roomData.srsGroupID = data.cellData.srsgroupid
        roomData.chaircnt = data.cellData.chaircnt
        roomData.roomflag = self._resultLevel
        roomData.nMatchAppid = data.cellData.gameappid
        roomData.sRoomMode = data.cellData.roommode
        CF.roomData:setRoomData(roomData)
        XH.SysTool.performWithDelayGlobal(function ()--这里加这段延时的原因是，当升场离开房间是，边茶的GP会返回2个onRespLeaveRoom，同时这里也会调用2遍，即调用Joinroom2遍，其中有一次会返回失败，导致客户端离开房间，所以在startJoinGoldRoom加了判断，但joinroom加入成功后立马发送此协议至Gp没有反应，所以延时发送，具体原因问陈卫华
            CF.goldManager:sendPlayerConnectGameTea() 
        end,0.01)
        CF.goldManager:setChangeType(CF.goldManager.ENUM_CHANGE_TYPE.REJOIN)
        CF.areaData:setSrsGroupIDbyAppID(roomData.appID, roomData.srsGroupID)
        if self._resultLevel then
            local lobbyId = CF.areaData:getLobbyID()
            cc.UserDefault:getInstance():setIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId, self._resultLevel)
        end
    else
        local hasEnterCard = false
        local isLevelOne = false
        local gameid = reqJoin._gameID
        if reqJoin._gameID == 42038 then
            gameid = 30116
        end
        local confId = XH.goldConfigManager:getConfIDByGameID(gameid, reqJoin._chairCnt)
        local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confId)
        if roominfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[1] then
            local rooms = roominfo.roomLevelInfos[1].room
            for j = 1, #rooms do
                if rooms[j].appid == reqJoin._rooms[1].appid then
                    isLevelOne = true
                    break
                end
            end
        end
        if isLevelOne then
            local session_id = 1
            if string.match(reqJoin:getMessage(), "金币过低") then
                if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[session_id] and roominfo.roomLevelInfos[session_id].minrich > 0 then
                    hasEnterCard = XH.lobby:getModule("UnlimitGoldAct"):judgeIsFullGold(roominfo, session_id, confId)
                end
            elseif string.match(reqJoin:getMessage(), "人满为患") then
                if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[session_id] then
                    if session_id == 1 and #reqJoin._rooms ~= #roominfo.roomLevelInfos[session_id].room then --初级场只匹配了单一房间 尝试重新匹配
                        XH.lobby:getModule("Gold"):reqJoinGoldRoom(confId, session_id)
                        hasEnterCard = true
                    end
                end
            end
        end
        if not hasEnterCard then
            XH.TipTool.showToast(reqJoin:getMessage())
            CF.game:leaveGame()
        end
    end
end

function GoldManager:onNotifyJoinDispatchQueue(event)
    local respData = CF.GameMProtocol.NotifyJoinDispatchQueue:new()
    respData:bistream(event.msg.buff, event.msg.len)
    local roomData = self:getRoomData()
    if roomData._sRoomMode == CF.ROOM_TYPE.DISPATCH_QUEUE then
        local flag = respData.flag
        self._playSR = respData.sr or self._playSR
        self._needJoinQueue = true
        local leaveReason = un.StringUtils.GB_18030_2000_TO_UTF8(respData.content)
        if flag == CF.GameMProtocol.NotifyJoinDispatchQueue.FLAG.NOT_ENOUGH_SR or flag == CF.GameMProtocol.NotifyJoinDispatchQueue.FLAG.TOO_MUCH_SR then
            self:showTipLayer(leaveReason)
        elseif flag == CF.GameMProtocol.NotifyJoinDispatchQueue.FLAG.NO_READY then
            self:showTipLayer(GoldManager.ENUM_MSG.NOT_READY)
        else
            self:dispatchEvent({name = self.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = true}})
            self:dispatchEvent({name = self.EVENT_UPDATE_MATCHUI, score = self._playSR})
            self._selfPlayerData = clone(CF.roomData:getSelfPlayerData())
            local isReady = self._selfPlayerData:getStateEx() == self._selfPlayerData.USER_STATEEX.psReady
            if isReady then
                self:sendPlayerJoinMatch()
            end
        end
    end
end

function GoldManager:flushLobbyGold()
    if CF.roomData and CF.roomData:isDKGoldRoom() then
        CF.getLobbyModule("Guide"):flushGoldCoin()
    end
end

function GoldManager:showTipLayer(leaveReason)
    self:flushLobbyGold()
    local canChange = false
    local showGoldCharge = false
    if leaveReason == "Rematch" then
        return
    elseif leaveReason == GoldManager.ENUM_MSG.NOT_READY then
        leaveReason = GoldManager.ENUM_MSG.NOT_READY_MSG
    else
        -- 金币场转场
        local selfPlayerData = self._selfPlayerData
        local playSR = self._playSR
        if selfPlayerData then
            playSR = selfPlayerData:getPlayTypeScore()
        end
        if leaveReason == GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG and CF.taskManager:JudgeBankruptInGame(playSR, CF.roomData:getGameID()) then
            self._changeType = GoldManager.ENUM_CHANGE_TYPE.BEFORE_BASELIVE
            return
        end

        if self:canChangeRoomLevel(playSR) then
            canChange = true
            if leaveReason == GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG then
                leaveReason = GoldManager.ENUM_MSG.NOT_ENOUGH_SR
                showGoldCharge = true
            end
            if leaveReason == GoldManager.ENUM_MSG.TOO_MUCH_SR_MSG then
                leaveReason = GoldManager.ENUM_MSG.TOO_MUCH_SR
            end
        end
    end

    -- 双扣直接走新的充值
    if CF.roomData and CF.roomData:isDKGoldRoom() and (leaveReason == GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG or GoldManager.ENUM_MSG.NOT_ENOUGH_SR == leaveReason) then
        self._changeType = GoldManager.ENUM_CHANGE_TYPE.REJOIN_BEFORE
        if XH.viewManager:isViewExist("GoldBankruptcyView") or XH.viewManager:isViewExist("YGiftDefeatView") then
            return
        end
        local lobbyId = CF.areaData:getLobbyID()
        local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        CF.viewManager:openView("GoldBankruptcyView", nil, {gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level})
        return
    end

    local isSupport = CF.areaData:isSupportGoldQuickRecharge() or false
    if showGoldCharge and isSupport then
        local lobbyId = CF.areaData:getLobbyID()
        local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        CF.viewManager:openView("GoldBaseLiveView", nil, {gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level})
    else
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText(leaveReason)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
            if canChange then
                self._changeType = GoldManager.ENUM_CHANGE_TYPE.SIMPLE
                if CF.game:getModule("WinLost") and CF.game:getModule("WinLost").hideGoldView then
                    CF.game:getModule("WinLost"):hideGoldView()
                end
                self:reqLeaveRoom()
            else
                self:leaveGame()
            end
        end)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function()
            self:leaveGame()
        end)
    end
end

function GoldManager:setChangeLevelType(changeType, level)
    self._changeType = changeType
    self._resultLevel = level or self._resultLevel
end

function GoldManager:setChangeType(changeType)
    self._changeType = changeType
end

function GoldManager:getChangeType()
    return self._changeType
end

function GoldManager:getChangeLevel()
    return self._resultLevel
end 

function GoldManager:isRejoinType()
    return self._changeType == CF.goldManager.ENUM_CHANGE_TYPE.REJOIN_BEFORE or self._changeType == CF.goldManager.ENUM_CHANGE_TYPE.AFTER_BASELIVE
end

-- 目前先小范围实现千变双扣转50的房间，后面没问题全游戏铺

function GoldManager:onBankruptcyNotify()
    if not CF or not CF.roomData then
        return
    end
    if CF.roomData:is50() then
        self._changeType = GoldManager.ENUM_CHANGE_TYPE.REJOIN_BEFORE
        if XH.viewManager:isViewExist("GoldBankruptcyView") or XH.viewManager:isViewExist("YGiftDefeatView") or CF.viewManager:isViewExist("UnLimitGoldActView") then
            return
        end
        local level = CF.roomData:getRoomLevel()
        local popCallBack = function()
            CF.viewManager:openView("GoldBankruptcyView", nil, {gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level, gameNotify = true})
        end

        -- 有无限金币先无限金币
        if XH.lobby:getModule("UnlimitGoldAct"):judgeIsShowPopAct(popCallBack) then
            return
        end
        popCallBack()
    end
end

return GoldManager
ن