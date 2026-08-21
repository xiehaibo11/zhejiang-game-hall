local PlayBackModule = CF.gameClass("PlayBackModule", "game.GameBase.Modules.PlayBack.Module")

function PlayBackModule:onAdjustRecordGameMsgList()
    if not CF.roomData:isBoxRoom() then
        return
    end
    local msgAllDirCardsData = self:getFillGameMsgData()
    local gameMsgList = self:getGameMsgList()
    local insertPos = nil
    local XYID
    -- 删除断线重连多余的msgStartGame
    local isFindGameStart = false
    for i = 1, #gameMsgList do
        if i > #gameMsgList then
            break
        end
        XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID == CF.GameMProtocol.ServerToClientMessage.XY_ID then
            local tServerToClientMessageData = CF.GameMProtocol.ServerToClientMessage:new()
            tServerToClientMessageData:bistream(buff, len)
            local subXYID = tServerToClientMessageData.cmdid
            if subXYID == CF.GameProtocol.msgGameStart.XY_ID then
                if isFindGameStart then
                    table.remove(gameMsgList, i)
                else
                    isFindGameStart = true
                end
            end
        end
    end

    for i = #gameMsgList, 1, -1 do
        XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID == CF.GameMProtocol.ServerToClientMessage.XY_ID then
        local tServerToClientMessageData = CF.GameMProtocol.ServerToClientMessage:new()
            tServerToClientMessageData:bistream(buff, len)

            local subXYID = tServerToClientMessageData.cmdid
            if subXYID == CF.GameProtocol.msgHandCard.XY_ID then
                table.remove(gameMsgList, i)
                insertPos = i - 1
            end
        end
    end
    if not insertPos then
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
    newGameMsg.time = gameMsgList[insertPos].time + 1
    table.insert(gameMsgList, insertPos, newGameMsg)
end

return PlayBackModule
