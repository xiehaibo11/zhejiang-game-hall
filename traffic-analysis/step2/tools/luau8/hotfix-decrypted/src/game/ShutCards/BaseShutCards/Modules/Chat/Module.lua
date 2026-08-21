local ChatModule = CF.gameClass("ChatModule", "game.GameBase.Modules.Chat.Module")

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local fileData = self._speakCfg[speakTextIndex]
    local data = tostring(fileData.index)
    CF.msgManager:sendQiaoPiHua(data)
end

function ChatModule:onMsgClientForwardQaioPiHua(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player and CF.game:getModule("PlayerInfo"):getBlockedChat(player:getNumberID()) then
        return
    end
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local index = tonumber(msgData.strData)
    if not self._speakCfg[index] then
        return
    end
    local msgInfo = {}
    msgInfo.nType = self.ChatType.QIAO_PI_HUA
    msgInfo.index = index
    msgInfo.speakText = self._speakCfg[index].SpeakText
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player then 
        msgInfo.nickName = player:getNickName()
    end 
    local msg = {}
    msg.seat = msgData.sSeat
    msg.data = msgInfo
    table.insert(self._chatMsgList, msg)
    self:dispatchChatMsgEvent(msg)
end

return ChatModule
�