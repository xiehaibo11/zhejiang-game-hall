local ChangeLevelModule = CF.gameClass("ChangeLevelModule", CF.ModuleBase)

ChangeLevelModule.EVENT_GAME_STATUS_CHANGE = "EVENT_GAME_STATUS_CHANGE"
ChangeLevelModule.EVENT_GAME_SCORE_CHANGE = "EVENT_GAME_SCORE_CHANGE"

function ChangeLevelModule:ctor()
    ChangeLevelModule.super.ctor(self)
end

function ChangeLevelModule:getProxyEvents()
    return {
        -- 请求金币信息
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = CF.netEngine, eventName = CF.ToolMProtocol.ResSR.event_key, callBack = "onRespPlayerGold" },
        { module = CF.getLoginModule("Login"), eventKeyName = "EVENT_LOGIN_SUCCESS_CHANGE_GROUP", callBack = "onLoginCallback"},
    }
end

function ChangeLevelModule:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.nowState and not event.msg.oldState then
        self:hide()
    end
end

-- 请求玩家金币信息返回
function ChangeLevelModule:onRespPlayerGold(event)
    local playerPropDataMsg =  CF.ToolMProtocol.ResSR:new()
    playerPropDataMsg:bistream(event.msg.buff, event.msg.len)
    self._playSR = playerPropDataMsg.purse
    self:dispatchEvent( { name = self.EVENT_GAME_SCORE_CHANGE , score = playerPropDataMsg.purse})
end

function ChangeLevelModule:show(gameType)
    -- 边茶50匹配隐藏升场按钮
    if CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    self._playSR = CF.selfPlayerData:getSR()
    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer then
        self._playSR = selfPlayer:getPlayTypeScore()
    end
    local changeView = CF.gameRequire("Modules.ChangeLevel.View").new({ score = self._playSR, gameType = gameType })
    changeView:showSelf()
end

function ChangeLevelModule:hide()
    self:dispatchEvent({name = self.EVENT_GAME_STATUS_CHANGE, show = false})
end

function ChangeLevelModule:reqChangeLevelGT(confID,roomFlag,SrsGroupId)
	self._confID = confID or 0
	self._roomFlag = roomFlag or -1
    self._srsGroupID = SrsGroupId
    local roominfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
    if roominfo and roominfo.roomInfo and type(roominfo.roomInfo.SrsGroupId) == "table" then 
        SrsGroupId = SrsGroupId or roominfo.roomInfo.SrsGroupId[roomFlag]
    end
    local srsGroupID = SrsGroupId or XH.areaData:getGoldSrsGroupID()
    local srs = XH.netEngine:getSRSBySRSGroupID(srsGroupID)
    if srs == nil or (srs and srs:getLinkState() ~= XH.SRS_LINK_STATE.LINK_STATE_SUCCESS)  then
        CF.getLoginModule("Login"):changeGroupSessionLogin(srsGroupID)
    else
        self:startJoinGoldRoom(srsGroupID)
    end
end

function ChangeLevelModule:onLoginCallback(event)
    if self._confID and self._confID ~= 0 then
        self:reqChangeLevelGT(self._confID, self._roomFlag,self._srsGroupID)
    end
end

function ChangeLevelModule:startJoinGoldRoom(srsGroupID)
    if not self._roomFlag or self._roomFlag == -1 then
        return
    end
	srsGroupID = srsGroupID or XH.areaData:getGoldSrsGroupID()
    local goldRoomInfo = CF.goldConfigManager:getLastGoldRoomInfo()
    if goldRoomInfo and goldRoomInfo.roomInfo and goldRoomInfo.roomLevelInfos[self._roomFlag] then
        local srsGroupID = goldRoomInfo.roomInfo.SrsGroupId[self._roomFlag]
        local enterRooms = goldRoomInfo.roomLevelInfos[self._roomFlag].room
        CF.goldManager:linkReqJoinRoomGT(CF.roomData:getGameID(), enterRooms, CF.roomData:getChairs(), srsGroupID, 15, self._roomFlag)
        CF.goldManager:setChangeLevelType(CF.goldManager.ENUM_CHANGE_TYPE.SIMPLE, self._roomFlag)
    end
end

return ChangeLevelModule