local HandCardArea      = CF.gameClass("HandCardArea", "game.Landlords.BaseLandlords.Modules.CardLayer.HandCardArea")
local Card              = CF.gameRequire("Modules.CardLayer.Card")
local CardLayerFunction = CF.gameRequire("Modules.CardLayer.CardLayerFunction")

function HandCardArea:initData()
    HandCardArea.super.initData(self)
    self._bombValue = {}
end

--设置手牌可操作
function HandCardArea:setShowCards(cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    HandCardArea.super.setShowCards(self, cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    for _, card in pairs(self._cards) do
        card:setTouchEnabled(true)
        --增加炸弹颜色。
        for _,bombV in pairs(self._bombValue) do
            if card:getValue() == bombV and bombV ~= 0 then
                card:setColorState(Card.COLOR_STATE.BOMB)
            end
        end
        card:addTouchEventListener(handler(self,self.onCardTouchEvent))
    end
end

--清除选中的牌
function HandCardArea:clearSlideCardColor()
    for _, card in ipairs(self._cards) do
        if not card:isSelect() then
            card:setColorState(Card.COLOR_STATE.NORMAL,self._bombValue)
        end
    end
end

function HandCardArea:dealCardSelect()
    local startIndex =  CardLayerFunction.getSmallNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex) 
    local endIndex = CardLayerFunction.getBigNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex) 
    local haveUnSelect = false
    for i = startIndex, endIndex do
        if not self._cards[i]:isSelect() then
            haveUnSelect = true
            self._cards[i]:setCardState(Card.STATE.SELECT)
            self._cards[i]:setColorState(Card.COLOR_STATE.SELECT,self._bombValue)
        end
    end
    if not haveUnSelect then
        for i = startIndex, endIndex do
            if self._cards[i]:isSelect() then
                self._cards[i]:setCardState(Card.STATE.NORMAL)
                self._cards[i]:setColorState(Card.COLOR_STATE.NORMAL,self._bombValue)
            end
        end
    end
    return haveUnSelect
end

--恢复牌颜色
function HandCardArea:recoverCardsColor()
    for _, card in ipairs(self._cards) do
        card:setColorState(Card.COLOR_STATE.NORMAL,self._bombValue)
    end
end

--清除所有牌的选中颜色
function HandCardArea:clearCardSelectColor()
    for _, card in ipairs(self._cards) do
        --card:setColorState(Card.COLOR_STATE.NORMAL)
        card:setColorState(Card.COLOR_STATE.NORMAL,self._bombValue)
    end
end

function HandCardArea:dealCardSelectEvent(haveUnSelect)
    local selectCardIDs = self:getSelectCardIDs()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventCheckedCard")
    event.selectCardIDs = selectCardIDs
    event.haveUnSelect = haveUnSelect
    eventDispatcher:dispatchEvent(event)  
end

--设置选中的牌
function HandCardArea:setSelectCards(cardIDs)
    local tempCards = {}
    for _, card in ipairs(self._cards) do
        local tempCardId = card:getCardID()
        if card:isSelect() then
            if not CardLayerFunction.removeOneCardIDFromCardIDs(cardIDs, tempCardId) then
                card:setCardState(Card.STATE.NORMAL)
                card:setColorState(Card.COLOR_STATE.NORMAL,self._bombValue)
                tempCards[tempCardId] = tempCards[tempCardId] or {}
                table.insert(tempCards[tempCardId], card)
            end
        else
            tempCards[tempCardId] = tempCards[tempCardId] or {}
            table.insert(tempCards[tempCardId], card)
        end
    end

    for _, cardId in ipairs(cardIDs) do
        local thisIdCards = tempCards[cardId] or {}
        for _, card in ipairs(thisIdCards) do
            if not card:isSelect() then
                card:setCardState(Card.STATE.SELECT)
                card:setColorState(Card.COLOR_STATE.SELECT,self._bombValue)
                break
            end
        end
    end
end

--重置手牌(状态和颜色)
function HandCardArea:resetCards()
    if self._isDraging then return end
    local selectCardIDs = self:getSelectCardIDs()
    if #selectCardIDs > 0 and self._cards[1] then
        self._cards[1]:playSelectSound()
    end
    for _, card in ipairs(self._cards) do
        card:setCardState(Card.STATE.NORMAL)
        card:setColorState(Card.COLOR_STATE.NONE,self._bombValue)
    end
end

-- 通过牌值设置炸弹牌
function HandCardArea:setBombValue(values)
    self._bombValue = values or {}
end

return HandCardArea\