local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local fileData = self._speakCfg[speakTextIndex]
    local data = tostring(fileData.index)
    
    local sendType = CF.gameSub:getGameSpeakSendTypeByGameId()
    if data and sendType == 0 then
        CF.msgManager:sendQiaoPiHua(data)
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
    local index = msgData.strData
    if not self._speakCfg then
        self:readLocalSpeakConfig()
    end
    local speakTxt = self._speakCfg[tonumber(index)].SpeakText
    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    local nickName = playerData:getNickName()
    msgData.strData = "{'nType':1,'speakText':'"..speakTxt.."','nickName':'"..nickName.."','index':"..index.."}"
    self:addChatMsg(msgData)
end

return ChatModuleE