local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendVote(bAgree)
    local msgVote = CF.GameProtocol.msgRespVote:new()
    msgVote.seat = self._selfSeat
    msgVote.respVote = bAgree and CF.GameProtocol.msgRespVote.RESP_TYPE.AGREE or CF.GameProtocol.msgRespVote.RESP_TYPE.REFUSE
    self:sendStreamPacket(msgVote)
end

return MsgManager�