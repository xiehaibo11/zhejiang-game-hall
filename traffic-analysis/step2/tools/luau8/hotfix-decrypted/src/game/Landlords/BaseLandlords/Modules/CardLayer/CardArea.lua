local CardArea = CF.gameClass("CardArea", "game.BaseCardGame.Modules.CardLayer.CardArea")

function CardArea:ctor()
    CardArea.super.ctor(self)
end

function CardArea:initData()
    CardArea.super.initData(self)
    self._landlordFlagVisible = false -- 是否显示斗地主标识
    self._showHandFlagVisible = false -- 是否实现是明牌标识
end

--设置显示牌数据
function CardArea:setShowCards(cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    self:clearCards()
    if cardIDs == nil or #cardIDs == 0 then
        return 
    end

    if self._lineCardCount > 0 then
        self._lineCount = math.ceil(#cardIDs/self._lineCardCount)
    end
    for index, cardId in ipairs(cardIDs) do
        local card = self:createCard(cardId, index, sizeType, isShowFire, nil, nil, cardStyle)
        card:setVisible(not aniBool)
        card:setLandlordFlagVisible(false)
        card:setShowHandFlagVisible(false)
        self:addChild(card)
        self._cards[index] = card
    end

    self:updateCardsPositionAndOrder()

    self:setLandlordFlagVisible(self._landlordFlagVisible)
    self:setShowHandFlagVisible(self._showHandFlagVisible)

    if aniBool then
        self._bPlayingSendCardAni = true
        self:playSendCardAnimation()
    end
end

--清除显示牌
function CardArea:clearCards()
    for _, card in pairs(self._cards) do
        card:stopAllActions()
        card:removeFromParent()
    end
    self._bPlayingSendCardAni = false
    self._cards = {}
    self._cardDistanceX = self._defaultCardDistanceX 
end

-- 显示隐藏地主标识
function CardArea:setLandlordFlagVisible(visible)
    if self._cards and #self._cards > 0 then
        local lastCard = self._cards[1]
        lastCard:setLandlordFlagVisible(visible)
    end
    self._landlordFlagVisible = visible
end

-- 显示隐藏明牌标识
function CardArea:setShowHandFlagVisible(visible)
    if self._cards and #self._cards > 0 then
        local lastCard = self._cards[1]
        lastCard:setShowHandFlagVisible(visible)
    end
    self._showHandFlagVisible = visible
end

return CardArea
s