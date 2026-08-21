local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")

function ChatModule:onMsgClientForward(msgData)

end

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local speakText = self._speakCfg[speakTextIndex].SpeakText
    local sendType = CF.gameSub:getGameSpeakSendTypeByGameId()
    if speakText and sendType == 0 then
        CF.msgManager:sendQiaoPiHua(speakText)
    end
    if speakTextIndex and sendType == 1 then
        CF.msgManager:sendSpeak(speakTextIndex, CF.roomData:getSelfPlayerData():getSex() == 1)
    end
end

function ChatModule:onMsgClientForwardQaioPiHua(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player and CF.game:getModule("PlayerInfo"):getBlockedChat(player:getNumberID()) then
        return
    end
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local index = 0
    for k, v in pairs(self._speakCfg) do
        if v.SpeakText == msgData.strData then
            index = k
            break
        end
    end
    local msgInfo = {}
    msgInfo.nType = self.ChatType.QIAO_PI_HUA
    msgInfo.index = index
    msgInfo.speakText = self._speakCfg[index].SpeakText
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    msgInfo.nickName = player:getNickName()

    local msg = {}
    msg.seat = msgData.sSeat
    msg.data = msgInfo
    table.insert(self._chatMsgList, msg)
    self:dispatchChatMsgEvent(msg)
end


return ChatModuleP