local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Manager.MsgManager")

function MsgManager:sendPlayerMaiDi(maiDi)
    local msgMaiDi = CF.GameProtocol.msgMaiDi:new()
    msgMaiDi.nSeat = CF.roomData:getSelfSeat()
    msgMaiDi.maiDi = maiDi
    self:sendStreamPacket(msgMaiDi)
end

return MsgManagerZ