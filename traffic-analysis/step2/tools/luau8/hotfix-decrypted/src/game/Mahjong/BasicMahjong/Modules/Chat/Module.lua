local ChatModule = CF.gameClass("ChatModule", "game.GameBase.Modules.Chat.Module")

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local rd = CF and CF.roomData
    local selfPlayer = rd and rd:getSelfPlayerData()
    if not selfPlayer then
        return
    end
    if not CF.roomData or not CF.gameSub then
        return
    end
    local msgInfo = {}
    msgInfo.nType = self.ChatType.QIAO_PI_HUA
    msgInfo.index = speakTextIndex
    if self._speakCfg[speakTextIndex] then 
        msgInfo.speakText = self._speakCfg[speakTextIndex].SpeakText
    end
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

function ChatModule:onMsgClientForwardQaioPiHua(msgData)
    if msgData.sSeat then
        local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
        if player and CF.game:getModule("PlayerInfo"):getBlockedChat(player:getNumberID()) then
            return
        end
    end
    self:addChatMsg(msgData)
end


return ChatModule�