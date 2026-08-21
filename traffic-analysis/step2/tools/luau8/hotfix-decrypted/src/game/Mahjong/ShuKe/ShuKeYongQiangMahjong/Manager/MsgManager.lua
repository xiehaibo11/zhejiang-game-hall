local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = CF.roomData:getSelfSeat()
    msgRequestDismiss.time = 0
    msgRequestDismiss.respondDismiss = {0, 0, 0, 0}
    self:sendStreamPacket(msgRequestDismiss)
end

return MsgManager�