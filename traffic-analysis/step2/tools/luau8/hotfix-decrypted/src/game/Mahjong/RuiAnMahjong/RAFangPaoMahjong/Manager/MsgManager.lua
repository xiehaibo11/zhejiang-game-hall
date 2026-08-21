local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Manager.MsgManager")

--发送聊天消息
function MsgManager:sendQiaoPiHua(data, index)
    local msgQiaoPiHua = CF.GameProtocol.msgQiaoPiHua:new()
    msgQiaoPiHua.sSeat = CF.roomData:getSelfSeat()
    msgQiaoPiHua.ucQiaoPiHua = index
    self:sendStreamPacket(msgQiaoPiHua)
end

return MsgManager�