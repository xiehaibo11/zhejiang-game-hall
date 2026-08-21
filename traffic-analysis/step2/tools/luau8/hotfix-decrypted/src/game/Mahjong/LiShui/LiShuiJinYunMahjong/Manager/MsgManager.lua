local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendPlayerYaZi(anteNum)
	local msgAnte = CF.GameProtocol.msgAnte:new()
    msgAnte.seat = CF.roomData:getSelfSeat()
    msgAnte.anteNum = anteNum
    msgAnte.anteMinNum = anteNum
    self:sendStreamPacket(msgAnte)
end

return MsgManageri