local WatchGameModule = CF.gameClass("WatchGameModule", "game.GameBase.Modules.WatchGame.Module")

function WatchGameModule:getFillGameMsgData()
    if self._msgAllDirCardsData and #self._msgAllDirCardsData > 0 then
        return self._msgAllDirCardsData
    end
    local gameMsgList = self._gameMsgList
    for i = #gameMsgList, 1, -1 do
        XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID == CF.GameProtocol.msgAllDirCards.XY_ID then
            self._msgAllDirCardsData = gameMsgList[i]
            break
        end
    end
    return self._msgAllDirCardsData
end

function WatchGameModule:onAdjustRecordGameMsgList()
    if not CF.roomData:getIsSeer() or not CF.roomData:isDelayWatch() then
        return
    end
    local msgAllDirCardsData = self:getFillGameMsgData()
    local insertPos = #self._gameMsgList
    local XYID

    -- 删除断线重连多余的msgStartGame
    local isFindGameStart = false
    for i = 1, #self._gameMsgList do
        if i > #self._gameMsgList then
            break
        end
        XYID = self._gameMsgList[i].subXYID
        local buff = self._gameMsgList[i].subBuff
        local len = self._gameMsgList[i].subLen
        if XYID == CF.GameMProtocol.ServerToClientMessage.XY_ID or XYID == CF.GameProtocol_TableInfo_XYID then
            local tServerToClientMessageData = CF.GameMProtocol.ServerToClientMessage:new()
            tServerToClientMessageData:bistream(buff, len)
            local subXYID = tServerToClientMessageData.cmdid
            if subXYID == CF.GameProtocol.msgGameStart.XY_ID then
                if isFindGameStart then
                    table.remove(self._gameMsgList, i)
                else
                    isFindGameStart = true
                end
            end
        end
    end

    for i = #self._gameMsgList, 1, -1 do
        XYID = self._gameMsgList[i].subXYID
        local buff = self._gameMsgList[i].subBuff
        local len = self._gameMsgList[i].subLen
        if XYID == CF.GameMProtocol.ServerToClientMessage.XY_ID or XYID == CF.GameProtocol_TableInfo_XYID then
            local tServerToClientMessageData = CF.GameMProtocol.ServerToClientMessage:new()
            tServerToClientMessageData:bistream(buff, len)
            local subXYID = tServerToClientMessageData.cmdid
            if subXYID == CF.GameProtocol.msgHandCards.XY_ID then
                table.remove(self._gameMsgList, i)
                insertPos = i - 1
            end
        end
    end

    if not msgAllDirCardsData then
        return
    end

    --在其之后插入其他玩家手牌的展示
    local tServerToClientMessageDataNew = CF.GameMProtocol.ServerToClientMessage:new()
    tServerToClientMessageDataNew.cmdid = CF.GameProtocol.msgAllHandCards.XY_ID
    tServerToClientMessageDataNew.message = msgAllDirCardsData.subBuff
    tServerToClientMessageDataNew.msglen = msgAllDirCardsData.subLen

    local buffMessageDataNew = tServerToClientMessageDataNew:bostream()
    local bis = un.network.OStream.new(buffMessageDataNew:getBytes())

    local writeBuff = bis:read(buffMessageDataNew:getLength())
    local newGameMsg = {}
    newGameMsg.subXYID = CF.GameMProtocol.ServerToClientMessage.XY_ID
    newGameMsg.subBuff = writeBuff
    newGameMsg.subLen = buffMessageDataNew:getLength()
    newGameMsg.time = self._gameMsgList[insertPos].time + 1
    table.insert(self._gameMsgList, insertPos, newGameMsg)
end

function WatchGameModule:clearTable()
    WatchGameModule.super.clearTable(self)
    CF.game:getModule("GameLayer"):onMsgGameStart()
end

return WatchGameModule