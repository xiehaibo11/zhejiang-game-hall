local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Manager.MsgManager")

function MsgManager:sendGPSMsg(data)
    local msgBaseClientForwardEx = CF.GameProtocol.msgClientForward:new()
    msgBaseClientForwardEx.seat = CF.roomData:getSelfSeat()
    msgBaseClientForwardEx.id =  CF.GameProtocol.msgClientForward.CF_ID.GPS_MSG
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

--发送聊天消息
function MsgManager:sendQiaoPiHua(data)
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgClientForwardEx.sSeat = self._selfSeat
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgClientForwardEx.strData = data
    self:sendStreamPacket(msgClientForwardEx)
end

return MsgManager