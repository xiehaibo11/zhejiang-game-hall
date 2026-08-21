local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendPowerBack(powerID)
    local msgPowerBack = CF.GameProtocol.msgPowerBack:new()
    msgPowerBack.nPowerID = powerID
    self:sendStreamPacket(msgPowerBack)
end

function MsgManager:sendPlayerAnte(AnteType)
    local msgAnte = CF.GameProtocol.msgAnte:new()
    msgAnte.nSeat = CF.roomData:getSelfSeat()
    msgAnte.nAnte = AnteType
    self:sendStreamPacket(msgAnte)
end

return MsgManager	