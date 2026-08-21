local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendTingWait()
    local msgTWait = CF.GameProtocol.msgTWait:new()
    msgTWait.nSeat = self._selfSeat
    self:sendStreamPacket(msgTWait)
end

function MsgManager:sendReqHuMah()
    local msgReqHuMahFan = CF.GameProtocol.msgReqHuMahFan:new()
    msgReqHuMahFan.seat = self._selfSeat
    self:sendStreamPacket(msgReqHuMahFan)
end

function MsgManager:sendErRenJiaBei()
    local msgReqHuCanceDouble = CF.GameProtocol.msgReqHuCanceDouble:new()
    msgReqHuCanceDouble.seat = self._selfSeat
    self:sendStreamPacket(msgReqHuCanceDouble)
end

return MsgManager�