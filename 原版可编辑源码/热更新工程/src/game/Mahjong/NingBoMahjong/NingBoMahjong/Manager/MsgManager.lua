local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.NingBoMahjong.NBMahjongBase.Manager.MsgManager")

function MsgManager:sendZuoShengYi(flag)
    local msg = CF.GameProtocol.msgZuoShengYi:new()
    msg.nSeat = self._selfSeat
    msg.nFlag = flag
    self:sendStreamPacket(msg)
end

return MsgManager