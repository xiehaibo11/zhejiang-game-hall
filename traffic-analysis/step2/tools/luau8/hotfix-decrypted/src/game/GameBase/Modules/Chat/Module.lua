local ChatModule = class("ChatModule", CF.ModuleBase)

ChatModule.EVENT_CHATMSG_CHANGED = "EVENT_CHATMSG_CHANGED"

ChatModule.ChatType = {
    QIAO_PI_HUA = 1,
    EXPRESSION = 2,
    RECORD = 3
}

function ChatModule:ctor()
    ChatModule.super.ctor(self)
    self:initDatas()
end

function ChatModule:initDatas()
    self._chatMsgList = {}
    self._speakCfg = nil
end

function ChatModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForwardEx},
        {callback = handler(self, self.onMsgClientForward), msgClass = CF.GameProtocol.msgClientForward},
        {callback = handler(self, self.onMsgSpeak), msgClass = CF.GameProtocol.msgSpeak},
    }
end

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local fileData = self._speakCfg[speakTextIndex]
    local data = tostring(fileData.index) .. "/" .. self._speakCfg[speakTextIndex].SpeakText
    CF.msgManager:sendQiaoPiHua(data)
end

function ChatModule:readLocalSpeakConfig()
    self._speakCfg = CF.soundManager:getSpeakConfig() or {}
    local speakCfByIndex = {}
    for _, v in pairs(self._speakCfg) do
        speakCfByIndex[v.index] = v
    end
    self._speakCfg = speakCfByIndex
end

function ChatModule:onMsgSpeak(msgData)
    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.speakSeat)
    if not playerData or CF.game:getModule("PlayerInfo"):getBlockedChat(playerData:getNumberID()) then
        return
    end
    local chatMsg = {}
    chatMsg.sSeat = msgData.speakSeat
    local data = {
        index = msgData.id,
        nType = self.ChatType.QIAO_PI_HUA,
        speakText = CF.soundManager:getSpeakTextByIndex(msgData.id),
        nickName = playerData:getNickName()
    }
    chatMsg.strData = json.encode(data)
    self:addChatMsg(chatMsg)
end

function ChatModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.Emoji then
        self:onMsgClientForwardEmoji(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua then
        self:onMsgClientForwardQaioPiHua(msgData)
    end
end

function ChatModule:onMsgClientForward(msgData)
    if msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.Speak then
        self:onMsgClientForwardQaioPiHua(msgData)
    elseif msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.ChatMsgEmoji then
        self:onMsgClientForwardEmoji(msgData)
    end
end

function ChatModule:onMsgClientForwardEmoji(msgData)
    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if not playerData or CF.game:getModule("PlayerInfo"):getBlockedChat(playerData:getNumberID()) then
        return
    end
    self:addChatMsg(msgData)
end

function ChatModule:onMsgClientForwardQaioPiHua(msgData)
    local speakInfo = CF.StringTool.spiltStringByFlag(msgData.strData, "/")
    local index = 0
    if speakInfo[1] then
        index = speakInfo[1]
    end
    local content = ""
    if speakInfo[2] then
        content = speakInfo[2]
    end
    local isExist, index = self:isExistMsg(content)
    if not isExist then
        return
    end
    local msgInfo = {}
    msgInfo.nType = self.ChatType.QIAO_PI_HUA
    msgInfo.index = tonumber(index)
    msgInfo.speakText = content
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player then
        msgInfo.nickName = player:getNickName()
    end

    if player and CF.game:getModule("PlayerInfo"):getBlockedChat(player:getNumberID()) then
        return
    end

    local msg = {}
    msg.seat = msgData.sSeat
    msg.data = msgInfo
    table.insert(self._chatMsgList, msg)
    self:dispatchChatMsgEvent(msg)
end

function ChatModule:addChatMsg(chatMsg)
    local msg = {}
    msg.seat = chatMsg.sSeat
    if type(chatMsg.strData) == "string" then --简单判断一下
        if string.sub(chatMsg.strData, 1, 1) == "{" and string.sub(chatMsg.strData, -1) == "}" then
            msg.data = json.decode(chatMsg.strData)
            table.insert(self._chatMsgList, msg)
            self:dispatchChatMsgEvent(msg)
        end
    end
end

function ChatModule:getChatMsgList()
    return self._chatMsgList
end

function ChatModule:dispatchChatMsgEvent(msg)
    self:dispatchEvent({name = self.EVENT_CHATMSG_CHANGED, msg = msg})
end

function ChatModule:sendEmoji(data)
    CF.msgManager:sendEmoji(data)
end

function ChatModule:isExistMsg(content)
    -- 判断文字不同，就不播放语音
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    for k, v in pairs(self._speakCfg) do 
        if v.SpeakText == content then
            return true, v.index
        end
    end
    return false
end

return ChatModule
d