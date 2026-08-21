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

    CF.msgManager:sendQiaoPiHua(data, speakTextIndex)
end

function ChatModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua then
        self:onMsgClientForwardQiaoPiHua(msgData)
    else
        ChatModule.super.onMsgClientForwardBase(self, msgData)
    end
end

function ChatModule:onMsgClientForwardQiaoPiHua(msgData)
    local strData = {}
    strData.nType = self.ChatType.QIAO_PI_HUA
    strData.index = tonumber(msgData.strData)

    local respPlayer = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if not respPlayer then
        return
    end
    if respPlayer and CF.game:getModule("PlayerInfo"):getBlockedChat(respPlayer:getNumberID()) then
        return
    end

    strData.nickName = respPlayer:getNickName()
    strData.speakText = CF.soundManager:getSpeakTextByIndex(tonumber(msgData.strData))
    local data = json.encode(strData)
    msgData.strData = data

    self:addChatMsg(msgData)
end

return ChatModule