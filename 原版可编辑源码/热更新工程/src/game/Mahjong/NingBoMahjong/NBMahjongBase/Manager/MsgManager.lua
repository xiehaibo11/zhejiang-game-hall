local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendDynamicTableRespond(respond)
    local msg = CF.GameProtocol.msgDynamicTableRespond:new()
    msg.sSeat = self._selfSeat
    msg.sRespond = respond
    self:sendStreamPacket(msg)
end

return MsgManager