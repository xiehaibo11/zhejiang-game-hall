
local ChatModule = CF.gameClass("ChatModule", "game.GameBase.Modules.Chat.Module")

function ChatModule:onMsgClientForwardQaioPiHua(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player and CF.game:getModule("PlayerInfo"):getBlockedChat(player:getNumberID()) then
        return
    end
    local speakInfo = CF.StringTool.spiltStringByFlag(msgData.strData,"/")
    local index = 0
    if speakInfo[1] then
        index = speakInfo[1]
    end
    local content = ""
    if speakInfo[2] then
        content = speakInfo[2]
    end
    local isExist, index = self:isExistMsg(content)
    if not isExist then
        return
    end
    local msgInfo = {}
    msgInfo.nType = CF.game:getModule("Chat").ChatType.QIAO_PI_HUA
    msgInfo.index = tonumber(index)
    msgInfo.speakText = content
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    msgInfo.nickName = player:getNickName()

    local msg = {}
    msg.seat = msgData.sSeat
    msg.data = msgInfo
    msg.gameType = CF.game:getModule("GameLayer"):getGameData():getGameType()
    table.insert( self._chatMsgList, msg )
    self:dispatchChatMsgEvent(msg)
end

return ChatModule�