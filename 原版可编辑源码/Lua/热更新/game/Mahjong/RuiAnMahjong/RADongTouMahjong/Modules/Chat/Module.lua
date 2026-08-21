local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")

function ChatModule:getSubXYDealList()
    local subXYDealList = ChatModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQiaoPiHua), msgClass = CF.GameProtocol.msgQiaoPiHua}
    return subXYDealList
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

    CF.msgManager:sendQiaoPiHua(data, speakTextIndex)
end

function ChatModule:onMsgQiaoPiHua(msgData)
    local newMsgData = {id = msgData.ucQiaoPiHua, bIsMan = false, speakSeat = msgData.sSeat}
    self:onMsgSpeak(newMsgData)
end

return ChatModule