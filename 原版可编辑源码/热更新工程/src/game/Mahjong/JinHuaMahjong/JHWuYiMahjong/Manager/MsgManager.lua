local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Manager.MsgManager")

function MsgManager:sendPlayMahIndex(mahindex)--已查看
    local msgPlayMahIndex = CF.GameProtocol.msgPlayMahIndex:new()
    msgPlayMahIndex.nSeat = self._selfSeat
    msgPlayMahIndex.nMahIndex = mahindex
    CF.netEngine.sendStreamPacket(msgPlayMahIndex)
end

return MsgManager