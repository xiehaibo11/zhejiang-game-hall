local MsgManager = CF.gameClass("MsgManager", "game.GameBase.Manager.MsgManager")

function MsgManager:sendPass()
    local msgOutCard = CF.GameProtocol.msgOutCard:new()
    msgOutCard.sSeat = self._selfSeat
    msgOutCard.ucCardCount = 0
    self:sendStreamPacket(msgOutCard)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendOutCard(gameCardGroup)
    if gameCardGroup == nil then
        return
    end
    local msgOutCard = CF.GameProtocol.msgOutCard:new()
    msgOutCard.sSeat = self._selfSeat
    msgOutCard.ucCardCount = #gameCardGroup
    for i = 1,msgOutCard.ucCardCount do
        msgOutCard.ucCard[i] = gameCardGroup[i]
    end
    msgOutCard.sCardType = 0

    self:sendStreamPacket(msgOutCard)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then
        return
    end
    local msgSpecfCard = CF.GameProtocol.msgSpecfCard:new()
    msgSpecfCard.sSeat = self._selfSeat
    msgSpecfCard.ucCount = #gameCardGroup
    for i = 1,msgSpecfCard.ucCount do
        msgSpecfCard.ucCards[i] = gameCardGroup[i]
    end

    self:sendStreamPacket(msgSpecfCard)
end

function MsgManager:sendSelfHeadUrl()
    local avatarUrl = CF.selfPlayerData:getWeChatURL()
    if CF.roomData:isGoldRoom() and XH and XH.playerData and XH.playerData:getGoldHeadUrl() then
        avatarUrl = XH.playerData:getGoldHeadUrl()
    end
    avatarUrl = string.gsub(avatarUrl, "https://", "http://")
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID  = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.HeadUrl
    msgBaseClientForwardEx.sType = CF.GameProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = avatarUrl
    self:sendStreamPacket(msgBaseClientForwardEx)
end

--定时器道具
function MsgManager:sendUseMarker(endTime, flag)
    local msgUseMarker = CF.GameProtocol.msgUseMarker:new()
    msgUseMarker.seat = self._selfSeat
    msgUseMarker.markerState = flag or 0
    msgUseMarker.endTime = endTime
    self:sendStreamPacket(msgUseMarker)
end

function MsgManager:sendUseMarkerEx(endTime, flag)
    self:sendUseMarker(endTime, flag)
end

function MsgManager:sendSpecfGetAllCards()
    local msgSpecfGetAllCards = CF.GameProtocol.msgSpecfGetAllCards:new()
    self:sendStreamPacket(msgSpecfGetAllCards)
end

function MsgManager:sendSpecfWallCards(gameCardGroup)
    if gameCardGroup == nil then
        return
    end
    local msgSpecfWallCards = CF.GameProtocol.msgSpecfWallCards:new()
    msgSpecfWallCards.ucCount = #gameCardGroup
    for i = 1, msgSpecfWallCards.ucCount do
        msgSpecfWallCards.ucCards[i] = gameCardGroup[i]
    end

    self:sendStreamPacket(msgSpecfWallCards)
end

return MsgManager