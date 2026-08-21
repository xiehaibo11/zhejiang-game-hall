local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendTingWait(bTing)
    local msgTingWait = CF.GameProtocol.msgTingWait:new()
    msgTingWait.nSeat = self._selfSeat
    msgTingWait.bTingWait = bTing
    self:sendStreamPacket(msgTingWait)
end

function MsgManager:sendAheadVote(bAgree)
    local msgAheadVote = CF.GameProtocol.msgAheadVote:new()
    msgAheadVote.sAheadVoteSeat = self._selfSeat
    msgAheadVote.sAheadVoteStatus = bAgree
    self:sendStreamPacket(msgAheadVote)
end

function MsgManager:sendAheadGameRule(gameRule)
    local msgAheadRule = CF.GameProtocol.msgAheadRule:new()
    msgAheadRule.sSeat = self._selfSeat
    msgAheadRule.sAheadRule = gameRule or ""
    self:sendStreamPacket(msgAheadRule)
end

return MsgManager;