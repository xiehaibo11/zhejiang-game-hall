local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

--发送聊天消息
function MsgManager:sendQiaoPiHua(index)
    local msgQiaoPiHua = CF.GameProtocol.msgQiaoPiHua:new()
    msgQiaoPiHua.sSeat = CF.roomData:getSelfSeat()
    msgQiaoPiHua.ucQiaoPiHua = index
    self:sendStreamPacket(msgQiaoPiHua)
end

--发送聊天消息
function MsgManager:sendQiaoPiHuaEx(data)
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgClientForwardEx.sSeat = CF.roomData:getSelfSeat()
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgClientForwardEx.strData = data
    self:sendStreamPacket(msgClientForwardEx)
end

function MsgManager:sendDismissCountdown()
    local msgDismissCountdown = CF.GameProtocol.msgDismissCountdown:new()
    msgDismissCountdown.sSeat = CF.roomData:getSelfSeat()
    msgDismissCountdown.nTime = 0
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        msgDismissCountdown.iAgrees[i] = 0
    end
    self:sendStreamPacket(msgDismissCountdown)
end

return MsgManagerf