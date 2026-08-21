local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendLocationMsg(data)
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.HeadUrl
    msgBaseClientForwardEx.strData = data
    CF.netEngine.sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = self._selfSeat
    msgRequestDismiss.time = 0
    msgRequestDismiss.respondDismiss = {0, 0, 0, 0}
    CF.netEngine.sendStreamPacket(msgRequestDismiss)
end

return MsgManager