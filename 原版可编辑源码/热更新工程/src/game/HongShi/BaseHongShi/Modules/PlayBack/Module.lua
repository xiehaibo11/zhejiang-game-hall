local PlayBackModule = CF.gameClass("PlayBackModule", "game.GameBase.Modules.PlayBack.Module")

function PlayBackModule:onAdjustRecordGameMsgList()
    if not CF.roomData:isBoxRoom() then
        return
    end
    local XYID
    local gameMsgList = self:getGameMsgList()
    for i = #gameMsgList,1,-1 do
        XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
            return
        end
        
        local tServerToClientMessageData = CF.GameMProtocol.ServerToClientMessage:new()
        tServerToClientMessageData:bistream(buff, len)
            
        local tmpMsgData = nil
        if tmpMsgData then
            local tServerToClientMessageDataNew = CF.GameMProtocol.ServerToClientMessage:new()
            tServerToClientMessageDataNew.cmdid = CF.GameProtocol.msgHandCard.XY_ID
            tServerToClientMessageDataNew.message = tmpMsgData:getBytes()
            tServerToClientMessageDataNew.msglen = tmpMsgData:getLength()
    
            local buffMessageDataNew = tServerToClientMessageDataNew:bostream()
            local bis = un.network.OStream.new(buffMessageDataNew:getBytes())
            local writeBuff = bis:read(buffMessageDataNew:getLength())
            local newGameMsg = {}
            newGameMsg.subXYID = XYID
            newGameMsg.subBuff = writeBuff
            newGameMsg.subLen = buffMessageDataNew:getLength()
            newGameMsg.time = gameMsgList[i].time
            gameMsgList[i] = newGameMsg
        end
    end
end

return PlayBackModule
