local VoiceModule = CF.gameClass("VoiceModule","game.GameBase.Modules.Voice.Module")

function VoiceModule:getProxyEvents()
    local proxyEvents = VoiceModule.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.netEngine, eventName = CF.AgBaseProtocol.ChatMsg.event_key, callBack = "onMsgChatMsgData"}
    return proxyEvents
end

function VoiceModule:getLimitXYIDs()
    -- 嘉兴区协议号与基类冲突，将原先协议对应监听置空
    return {1043}
end

function VoiceModule:onMsgChatMsgData(event)
    local chatMsg =  CF.AgBaseProtocol.ChatMsg:new()
    chatMsg:bistream(event.msg.buff, event.msg.len)
    local numid = chatMsg.m_numberid
    local player = CF.roomData:getPlayerDataNumberID(numid)
    if not player then
        return
    end
    local seat = player:getSeat()
    if chatMsg.m_color == 20001 then --语音
        local newMsgData = {sSeat=seat, strData=CF.sys.GB_18030_2000_TO_UTF8(chatMsg.m_msg)}
        self:onMsgClientForwardFastVoice(newMsgData)
    end
end

return VoiceModule