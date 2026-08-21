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

function MsgManager:sendReqEarlyStart()
    local msgReqAdvanceStart = CF.GameProtocol.msgReqAdvanceStart:new()
    msgReqAdvanceStart.nSeat = CF.roomData:getSelfSeat()
    msgReqAdvanceStart.nTime = 0
    self:sendStreamPacket(msgReqAdvanceStart)
end

function MsgManager:sendReqAdPlayerAgree(bAgree)
    local msgReqAdPlayerAgreeData = CF.GameProtocol.msgReqAdPlayerAgree:new()
    msgReqAdPlayerAgreeData.nSeat = CF.roomData:getSelfSeat()
    msgReqAdPlayerAgreeData.bAgree = bAgree
    self:sendStreamPacket(msgReqAdPlayerAgreeData)
end

function MsgManager:sendRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = CF.roomData:getSelfSeat()
    msgRequestDismiss.time = 0
    msgRequestDismiss.respondDismiss = {0, 0, 0, 0}
    self:sendStreamPacket(msgRequestDismiss)
end

--响应续桌
function MsgManager:sendRespContinue(bContinue)
    local msgRespContinue = CF.GameProtocol.msgRespContinue:new()
    msgRespContinue.bContinue = bContinue
    msgRespContinue.nSeat = CF.roomData:getSelfSeat()
    self:sendStreamPacket(msgRespContinue)
end

return MsgManager