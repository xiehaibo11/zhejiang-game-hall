local PlayersModule = NG.GAME.gameClass("PlayersModule", NG.GAME.ModuleBase)
local RoomTableData = NG.GAME.gameRequire("Data.RoomTableData")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local Is50Room = true

PlayersModule.EVENT_NEW_PLAYER_DATA = "EVENT_NEW_PLAYER_DATA"
PlayersModule.EVENT_PLAYER_STATE_CHANGE = "EVENT_PLAYER_STATE_CHANGE"
PlayersModule.EVENT_PLAYER_LEAVE = "EVENT_PLAYER_LEAVE"

function PlayersModule:ctor()
    PlayersModule.super.ctor(self)
    self._uiData = {}
end

function PlayersModule:getSubXYDealList()
    local protocol = NG.LogicBaseProtocol
    return {
        {callback = handler(self,self.onMsgPlayerData),msgClass = protocol.msgPlayerData},
        {callback = handler(self,self.onMsgPlayerDataEx),msgClass = protocol.msgPlayerDataEx},
        {callback = handler(self,self.onMsgPlayerEnter),msgClass = protocol.msgPlayerEnter},
        {callback = handler(self,self.onMsgPlayerLeave),msgClass = protocol.msgPlayerLeave},
        {callback = handler(self,self.onMsgPlayerStart),msgClass = protocol.msgPlayerStart},
    }
end

function PlayersModule:getEventKey()
    return NG.GameMProtocol.ServerToClientMessage.event_key
end

function PlayersModule:onServerToClientMessage(event)
    local sToClientData = NG.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)
    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen
    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        -- dump(msgData)
        self:doServerToClientMessage(record, msgData, subXYID)
    end
end

function PlayersModule:onMsgPlayerData(msgData)
    NG.GAME.roomTableData:addPlayer(msgData)
    self:dispatchEvent({name = self.EVENT_NEW_PLAYER_DATA, msg = {seat = msgData.nSeat}})
end

function PlayersModule:onMsgPlayerDataEx(msgData)
    NG.GAME.roomTableData:setPlayerDataEx(msgData)
    local seat = NG.GAME.roomTableData:getSeatByNumid(msgData.nBrandID, msgData.nNumberID)
    self:dispatchEvent({name = self.EVENT_PLAYER_STATE_CHANGE, msg = {seat = seat}})
end

function PlayersModule:onMsgPlayerEnter(msgData)
    NG.GAME.roomTableData:setPlayerEnter(msgData)
end

function PlayersModule:onMsgPlayerLeave(msgData)
    local seat = NG.GAME.roomTableData:getSeatByNumid(msgData.nBrandID, msgData.nNumberID)
    self:removeWhenPlayerLeave(seat)
end

function PlayersModule:onMsgPlayerStart(msgData)
    -- local playerData = NG.GAME.roomTableData:getSeatByNumid(msgData.nBrandID, msgData.nNumberID)
    -- if playerData then  
    --     NG.GAME.roomTableData:onPlayerStart(playerData:getSeat())
    -- end
end

function PlayersModule:removeWhenPlayerLeave(seat)
    if NG.goldGame:getModule("GameMain"):getData():getGameStart() then
    else
        if seat == NG.GAME.roomTableData:getSelfSeat() then
            NG.TipTool.showToast("有玩家退出，请点击继续按钮继续匹配~")
            NG.GAME.roomTableData:clearAllPlayers()
            NG.goldGame:getModule("GameMain"):showContinueBtn()
        else
            NG.GAME.roomTableData:removePlayerBySeat(seat)
        end
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_LEAVE, msg = {seat = seat}})
end

function PlayersModule:setUIData(type, localSeat, data)
    self._uiData = self._uiData or {}
    self._uiData[type] = self._uiData[type] or {}
    self._uiData[type][localSeat] = data
end

function PlayersModule:getUIData(type, localSeat)
    self._uiData = self._uiData or {}
    self._uiData[type] = self._uiData[type] or {}
    return self._uiData[type][localSeat]
end
return PlayersModule