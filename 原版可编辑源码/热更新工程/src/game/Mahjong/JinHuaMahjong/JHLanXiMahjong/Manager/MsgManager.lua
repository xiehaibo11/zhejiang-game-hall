local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Manager.MsgManager")

function MsgManager:sendMaiZi(anteNum)
    local msgMaiZi = CF.GameProtocol.msgRequestMaiZi:new()
    msgMaiZi.seat = self._selfSeat
    msgMaiZi.maiziValue = anteNum or 0
    CF.netEngine.sendStreamPacket(msgMaiZi)
end

return MsgManager