local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")

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
    if speakTextIndex then
        CF.msgManager:sendSpeak(speakTextIndex, CF.roomData:getSelfPlayerData():getSex() == 1)
    end
end

function ChatModule:addChatMsg(chatMsg)
    local msg = {}
    msg.seat = chatMsg.sSeat
    if type(chatMsg.strData) == "string" then --简单判断一下
        if string.sub(chatMsg.strData, 1, 1) == "{" and string.sub(chatMsg.strData, -1) == "}" then
            msg.data = json.decode(chatMsg.strData)
            if msg.data.speakText and msg.data.speakText == "" then
                return
            end
            table.insert(self._chatMsgList, msg)
            self:dispatchChatMsgEvent(msg)
        end
    end
end

return ChatModule