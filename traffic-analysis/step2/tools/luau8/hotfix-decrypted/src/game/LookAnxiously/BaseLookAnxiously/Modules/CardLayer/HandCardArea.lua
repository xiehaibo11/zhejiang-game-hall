local CardArea = CF.gameRequire("Modules.CardLayer.CardArea")
local HandCardArea = CF.gameClass("HandCardArea", "game.BaseCardGame.Modules.CardLayer.HandCardArea")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local Card = CF.gameRequire("Modules.CardLayer.Card")

function HandCardArea:setShowCards(cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    CardArea.setShowCards(self, cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    if not aniBool then
        self:setAddTouchInfo()
    end
end

-- 重置手牌(状态和颜色)
-- 正在播放动画的时候，不重置手牌
function HandCardArea:resetCards()
    for _, card in ipairs(self._cards) do
        if card:getNumberOfRunningActions() > 0 then
            return
        end
    end
    HandCardArea.super.resetCards(self)
end

function HandCardArea:setAddTouchInfo()
    for _, card in pairs(self._cards) do
        card:setSelectAddY(CardLayerConfig.selectAddY)
        card:setTouchEnabled(true)
        card:addTouchEventListener(handler(self, self.onCardTouchEvent))
    end
end 

--处理拖拽状态，干瞪眼不允许拖拽
function HandCardArea:dealCardDrag(send, movePos)

end

function HandCardArea:canTouchCard()
    for _, card in ipairs(self._cards) do
        if card and not card:isTouchEnabled() then
            return false
        end
    end
    return true
end

function HandCardArea:dealCardSelect()
    self:resetHandCardActions()
    HandCardArea.super.dealCardSelect(self)
end

function HandCardArea:setSelectCards(cardIDs)
    if not self:canTouchCard() then
        return
    end
    self:resetHandCardActions()
    HandCardArea.super.setSelectCards(self, cardIDs)
end

-- 选择手牌的情况下，如果有动画，直接清除手牌动画，并且重置手牌位置
function HandCardArea:resetHandCardActions()
    local haveAction = false
    for _, card in ipairs(self._cards) do
        if card:getNumberOfRunningActions() > 0 then
            haveAction = true
            card:setRotation(0)
            card:stopAllActions()
        end
    end
    if haveAction then
        self:updateCardsPositionAndOrder()
    end
end

return HandCardArea
�