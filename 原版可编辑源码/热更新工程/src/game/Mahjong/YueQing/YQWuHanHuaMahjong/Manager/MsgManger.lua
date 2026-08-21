local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendQiaoPiHua(data, index)
    local sendType = CF.gameSub:getGameSpeakSendTypeByGameId()
    if data and sendType == 0 then
        local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
        msgClientForwardEx.sSeat = CF.roomData:getSelfSeat()
        msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
        msgClientForwardEx.strData = data
        self.sendStreamPacket(msgClientForwardEx)
    end
    if index and sendType == 1 then
        local msgQPH = CF.GameProtocol.msgQiaoPiHua:new()
        msgQPH.sSeat = CF.roomData:getSelfSeat()
        msgQPH.ucQiaoPiHua = index
        self.sendStreamPacket(msgQPH)
    end
end

return MsgManager