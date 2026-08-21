local PlayerView    = CF.gameClass("PlayerView", "game.Landlords.BaseLandlords.Modules.Player.View")

function PlayerView:getProxyEvents()
    local proxyEvents = PlayerView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onSendCards"}
    proxyEvents[#proxyEvents+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_CARDS_COUNT", callBack = "onSendCardsCount"}
    return proxyEvents
end

function PlayerView:refrshSinglePlayer(seatId, playerData)
    PlayerView.super.refrshSinglePlayer(self, seatId, playerData)

    local localSeat = CF.roomData:seatToLocal(seatId)
    if  CF.roomData:getIsGameStart() and self._gameData:getLandlordSeat() == seatId then
        if self._gameData:getGameStep() > CF.GameDefine.GAME_STEP.GAME_STEP_CALL_BANKER and self._gameData:getGameStep() < CF.GameDefine.GAME_STEP.GAME_STEP_WIN_LOST then
            local playerHead = self._playerHeads[localSeat]
            if playerHead then
                playerHead:showDiZhuImg(true)
            end
        end
    end
end

function PlayerView:onShowAllPlayerHandCard(event)
    local handCards = event.msg.handCards
    for seat = 0, #handCards do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)

        local cardIDs = handCards[seat]
        if cardIDs ~= nil then
            self:moveHeadWithOpenHand(localSeat)
        end
        if CF.roomData:isPlayBack() and localSeat == 2 or localSeat == 4 then
            self:moveHeadWithOpenHand(localSeat)
        end
    end
end

-- 更新手牌数量
function PlayerView:onSendCardsCount(event)
    local seatId = event.msg.seatId
    local localSeat = CF.roomData:seatToLocal(seatId)
    local cardCount = self._gameData:getHandCardsCount(seatId)
    if not tolua.isnull(self._playerHeads[localSeat]) then
        self._playerHeads[localSeat]:setLeftCardNum(cardCount)
    end
end

function PlayerView:onSendCards(event)
    local seatId = event.msg.seatId
    local localSeat = CF.roomData:seatToLocal(seatId)
    self:moveHeadWithOpenHand(localSeat)--播放头像移动动画
end

return PlayerView