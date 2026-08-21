local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Manager.MsgManager")

function MsgManager:sendPlayerMaiDi(num)
    local msgReponseMaiDi = CF.GameProtocol.msgReponseMaiDi:new()
    msgReponseMaiDi.seat = CF.roomData:getSelfSeat()
    msgReponseMaiDi.maidiNum = num
    self:sendStreamPacket(msgReponseMaiDi)
end

return MsgManager