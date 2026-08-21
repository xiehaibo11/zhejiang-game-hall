local ChatModule = CF.gameClass("ChatModule", "game.GameBase.Modules.Chat.Module")

function ChatModule:getSubXYDealList()
    local xyTable = ChatModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForward}
    return xyTable
end

function ChatModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.Emoji then
        self:onMsgClientForwardEmoji(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.QiaoPiHua then
        self:onMsgClientForwardQaioPiHua(msgData)
    end
end

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local msgInfo = {}
    msgInfo.nType = self.ChatType.QIAO_PI_HUA
    msgInfo.index = speakTextIndex
    msgInfo.speakText = self._speakCfg[speakTextIndex].SpeakText
    msgInfo.nickName = CF.roomData:getSelfPlayerData():getNickName()
    local data = json.encode(msgInfo)
    
    local sendType = CF.gameSub:getGameSpeakSendTypeByGameId()
    if data and sendType == 0 then
        CF.msgManager:sendQiaoPiHua(data)
    end
    if speakTextIndex and sendType == 1 then
        CF.msgManager:sendSpeak(speakTextIndex, CF.roomData:getSelfPlayerData():getSex() == 1)
    end
end

return ChatModule�