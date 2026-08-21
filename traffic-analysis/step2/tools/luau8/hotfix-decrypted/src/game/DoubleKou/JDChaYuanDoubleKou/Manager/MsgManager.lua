local MsgManager = CF.gameClass("MsgManager", "game.DoubleKou.BaseDoubleKou.Manager.MsgManager")

function MsgManager:sendFastVoice(url)
    local msgClientForward = CF.GameProtocol.msgClientForward:new()
    msgClientForward.sSeat = self._selfSeat
    msgClientForward.sID = CF.GameProtocol.msgClientForward.CF_ID.FastVoice
    msgClientForward.strData = url

    self:sendStreamPacket(msgClientForward)
end

function MsgManager:sendMobileSignalMsg()
    local msgClientForward = CF.GameProtocol.msgClientForward:new()
    msgClientForward.sSeat = self._selfSeat
    msgClientForward.sID = CF.GameProtocol.msgClientForward.CF_ID.MobileSignal
    msgClientForward.strData = ""
    CF.roomData:setSignalMsgTime(socket.gettime())

    self:sendStreamPacket(msgClientForward, true)
end

function MsgManager:sendSpeak(index, speakText)
    local msgSpeak = CF.GameProtocol.msgClientForward:new()
    msgSpeak.sSeat = self._selfSeat
    msgSpeak.sID = CF.GameProtocol.msgClientForward.CF_ID.Speak
    msgSpeak.strData = tostring(index) .. "/" .. speakText

    self:sendStreamPacket(msgSpeak)
end

function MsgManager:sendWireBreakSignal()
    local msgWireBreak = CF.GameProtocol.msgClientForward:new()
    msgWireBreak.sSeat = self._selfSeat
    msgWireBreak.sID = CF.GameProtocol.msgClientForward.CF_ID.WireBreakSignal
    msgWireBreak.strData = ""

    self:sendStreamPacket(msgWireBreak)
end

function MsgManager:sendPlayerHeadEffect()
    local msgClientForward = CF.GameProtocol.msgClientForward:new()
    msgClientForward.sSeat = self._selfSeat
    msgClientForward.sID = CF.GameProtocol.msgClientForward.CF_ID.PlayerHeadEffect
    msgClientForward.strData = ""

    self:sendStreamPacket(msgClientForward)
end

--发送聊天消息
function MsgManager:sendQiaoPiHua(data)
    local msgSpeak = CF.GameProtocol.msgClientForward:new()
    msgSpeak.sSeat = self._selfSeat
    msgSpeak.sID = CF.GameProtocol.msgClientForward.CF_ID.Speak
    msgSpeak.strData = data
    self:sendStreamPacket(msgSpeak)
end

return MsgManager
!