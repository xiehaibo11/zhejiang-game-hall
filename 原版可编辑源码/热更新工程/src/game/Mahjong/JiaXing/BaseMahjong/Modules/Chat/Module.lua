local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")

function ChatModule:getProxyEvents()
    local proxyEvents = ChatModule.super.getProxyEvents(self) or {}
    proxyEvents[#proxyEvents + 1] = {module = CF.netEngine, eventName = CF.AgBaseProtocol.ChatMsg.event_key, callBack = "onMsgChatMsgData"}
    return proxyEvents
end

function ChatModule:getLimitXYIDs()
    -- 嘉兴区协议号与基类冲突，将原先协议对应监听置空
    return {1043}
end

function ChatModule:onMsgChatMsgData(event)
    local chatMsg =  CF.AgBaseProtocol.ChatMsg:new()
    chatMsg:bistream(event.msg.buff, event.msg.len)
    local numid = chatMsg.m_numberid
    local player = CF.roomData:getPlayerDataNumberID(numid)
    if not player then
        return
    end
    local seat = player:getSeat()
    if chatMsg.m_color >= 1000 then
        local newMsgData = {id=(chatMsg.m_color-1000-1)/10, bIsMan=false, speakSeat=seat}
        self:onMsgSpeak(newMsgData)
    elseif chatMsg.m_color ~= 0 and (chatMsg.m_msg == "" or chatMsg.m_msg == nil) then --表情
        local newMsgData = {sSeat=seat, strData=tostring(chatMsg.m_color)}
        self:onMsgClientForwardEmoji(newMsgData)
    end
end

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    CF.msgManager:sendQiaoPiHuaJinHua(self._speakCfg[speakTextIndex].SpeakText, speakTextIndex)
end

return ChatModule