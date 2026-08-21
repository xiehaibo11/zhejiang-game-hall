local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    if not CF.roomData:getSelfPlayerData() then
        return
    end
    local sendType = CF.gameSub:getGameSpeakSendTypeByGameId()
    if sendType == 0 then
        local msgInfo = {}
        msgInfo.nType = self.ChatType.QIAO_PI_HUA
        msgInfo.index = speakTextIndex
        msgInfo.speakText = self._speakCfg[speakTextIndex].SpeakText
        msgInfo.nickName = CF.roomData:getSelfPlayerData():getNickName()
        local data = json.encode(msgInfo)
        CF.msgManager:sendQiaoPiHuaEx(data)
    end

    if speakTextIndex then
        CF.msgManager:sendSpeak(speakTextIndex, CF.roomData:getPlayerDataBySeatId(CF.roomData:getSelfSeat()):getSex() == 1)
    end
end

return ChatModule�