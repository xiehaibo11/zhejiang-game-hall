local MsgManager = CF.gameClass("HuZMahjongMsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendSelfHeadUrl()
    local msgAvatarUrl = CF.GameProtocol.msgAvatarUrl:new()
    msgAvatarUrl.seat = self._selfSeat
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if not selfPlayerData then
        return
    end
    local avatarUrl = selfPlayerData:getAvatarUrl()
    avatarUrl = string.gsub(avatarUrl, "https://", "http://")
    msgAvatarUrl.avatarUrl = avatarUrl
    self:sendStreamPacket(msgAvatarUrl)
end

function MsgManager:sendSoRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = self._selfSeat
    msgRequestDismiss.time = 0
    msgRequestDismiss.respondDismiss = {0, 0, 0, 0}
    self:sendStreamPacket(msgRequestDismiss)
end

function MsgManager:sendGPSMsg(data)
    local msgBaseClientForwardEx = CF.GameProtocol.msgClientForward:new()
    msgBaseClientForwardEx.seat = self._selfSeat
    msgBaseClientForwardEx.id =  CF.GameProtocol.msgClientForward.CF_ID.GPS_MSG
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendRequestIsPlayerIPLimit()
    local msgRequestIsPlayerIPLimit = CF.GameProtocol.msgRequestIsPlayerIPLimit:new()
    self:sendStreamPacket(msgRequestIsPlayerIPLimit)
end

return MsgManager