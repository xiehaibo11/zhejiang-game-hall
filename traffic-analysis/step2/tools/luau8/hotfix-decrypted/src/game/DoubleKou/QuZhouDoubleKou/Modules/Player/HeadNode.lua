local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.DoubleKou.BaseDoubleKou.Modules.Player.HeadNode")

--俏皮话文字和表情
function PlayerHeadNode:onChatMsgChanged(event)
    local chatData = event.msg
    if self._seatId ~= chatData.seat then
        return
    end
    if CF.game:getModule("PlayerInfo"):getBlockedChat(self._playerData:getNumberID()) then
        return
    end
    local data = chatData.data
    if not data.index then
        return
    end
    if data.nType == CF.game:getModule("Chat").ChatType.QIAO_PI_HUA then
        self:showSpeakText(data.speakText)
        --播放俏皮话音效
        local bMan = self._playerData:getSex() == 1
        local bFangYan = not CF.settingData:getIsNormalVoice()
        local gameType = chatData.gameType
        local gameid = CF.roomData:getGameID() .. "_" .. gameType
        CF.soundManager:playSoundWisecrack(self._localSeat, bMan, bFangYan, gameid, data.index)
    elseif data.nType == CF.game:getModule("Chat").ChatType.EXPRESSION then
        local aniName = data.aniName
        local exportJsonPath = data.exportJsonPath .. "/"
        local exportJsonName = data.exportJsonName
        self:showEmojiAni(exportJsonPath, exportJsonName, aniName)
    end
end

return PlayerHeadNode
