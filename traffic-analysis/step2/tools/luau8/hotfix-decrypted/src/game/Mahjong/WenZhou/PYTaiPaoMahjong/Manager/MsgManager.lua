local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.WenZhou.WenZhouMahjongBase.Manager.MsgManager")

--响应续桌
function MsgManager:sendRespContinue(bContinue)
    local msgRespContinue = CF.GameProtocol.msgRespContinue:new()
    msgRespContinue.bContinue = bContinue
    msgRespContinue.nSeat = CF.roomData:getSelfSeat()
    self:sendStreamPacket(msgRespContinue)
end

return MsgManager�