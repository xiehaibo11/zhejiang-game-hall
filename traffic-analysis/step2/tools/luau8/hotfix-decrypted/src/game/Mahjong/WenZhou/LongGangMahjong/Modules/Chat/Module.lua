local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.BasicMahjong.Modules.Chat.Module")


function ChatModule:getSubXYDealList()
    local subXYDealList = ChatModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQiaoPiHua), msgClass = CF.GameProtocol.msgQiaoPiHua}
    return subXYDealList
end

function ChatModule:onMsgSpeak(msgData)
    --龙港麻将中的1028协议表示的是msgRoom，和父类的1028msgSpeak冲突。所以把这个协议继承一下暂时不处理。解决进入房间是显示俏皮话的问题
end 

function ChatModule:onMsgQiaoPiHua(msgData)
    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if not playerData then
        return
    end
    local chatMsg = {}
    chatMsg.sSeat = msgData.sSeat
    local data = {
        index = msgData.ucQiaoPiHua,
        nType = self.ChatType.QIAO_PI_HUA,
        speakText = CF.soundManager:getSpeakTextByIndex(msgData.ucQiaoPiHua),
        nickName = playerData:getNickName()
    }
    chatMsg.strData = json.encode(data)
    self:addChatMsg(chatMsg)
end

function ChatModule:sendQiaoPiHua(speakTextIndex)
    if not self._speakCfg then
        self:readLocalSpeakConfig()
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
    elseif speakTextIndex and sendType == 1 then
        CF.msgManager:sendQiaoPiHua(speakTextIndex)
    end
end

return ChatModule=