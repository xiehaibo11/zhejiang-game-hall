local HandCardArea = CF.gameClass("CardArea", CF.gameScriptRootPath .. ".BaseCardGame.Modules.CardLayer.HandCardArea")
local Card = CF.gameRequire("Modules.CardLayer.Card")
local CardLayerFunction = CF.gameRequire("Modules.CardLayer.CardLayerFunction")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local KW_OUTCARD_LIMIT = 300 --牌拖动距离限制（超过限制即为出牌操作）

function HandCardArea:getCardPositionByIndex(index)
    if self._cards[index] then
        local node = self._cards[index]
        if node then
            return node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
        end
    end
    return self:convertToWorldSpace(cc.p(0, 0))
end

-- function HandCardArea:setCardVisible(index, isShow)
--     self._cards[index]:setVisible(isShow)
-- end

--点击事件
function HandCardArea:onCardTouchEvent(send, eventType)
    --正在执行发牌动画，不允许操作
    if self._bPlayingSendCardAni or CF.roomData:getIsSeer() then
        return
    end
    if self._isDraging and send ~= self._dragCard then
        return
    end
    if eventType == ccui.TouchEventType.began then
        if send:isDisSelect() then
            return
        end
        self:saveCardsState()
        self:saveCardsColor()

        self._startMovePos = send:getTouchBeganPosition()
        self._endMovePos = self._startMovePos
        self._startTouchIndex = send:getTag()
        self._currentTouchIndex = self._startTouchIndex
        self._endTouchIndex = 0

        if send:isNormal() then
            send:setColorState(Card.COLOR_STATE.SELECT)
            send:playSelectSound()
        end
    elseif eventType == ccui.TouchEventType.moved then
        local movePos = send:getTouchMovePosition()

        if self._isDraging then
            local tempPos = self:convertToNodeSpace(movePos) --世界坐标转换为本地坐标
            self._dragCardArea:setPosition(tempPos)
        else
            --更新状态
            self:updateMoveState(send, movePos)
            if self._currentState == HandCardArea.MOVESTATE.NORMAL then
                self:dealCardSlide(movePos)
            elseif self._currentState == HandCardArea.MOVESTATE.SLIDER then
                self:dealCardSlide(movePos)
            elseif self._currentState == HandCardArea.MOVESTATE.DRAG then
                self:dealCardDrag(send, movePos)
            end
        end
    elseif eventType == ccui.TouchEventType.canceled or eventType == ccui.TouchEventType.ended then
        self._endMovePos = send:getTouchEndPosition()
        if self._isDraging then
            local disY = self._endMovePos.y - self._startMovePos.y
            if disY >= KW_OUTCARD_LIMIT and CardLayerConfig.bMoveOut then
                self:dealOutCardEvent()
            else
                self:dealRecoverCards()
            end
            self._isDraging = false
            self._dragCard = nil
            self._currentState = HandCardArea.MOVESTATE.NONE
        else
            local haveUnSelect = self:dealCardSelect()
            self:dealCardSelectEvent(haveUnSelect)
        end
        --清除选中颜色
        self:clearCardSelectColor()
    end
end

--通过坐标位置找牌
function HandCardArea:getCardByPosition(pos)
    for _, card in ipairs(self._cards) do
        if not card:isDisSelect() then
            local boundingBox = card:getBoundingBox()
            local tempPos = self:convertToNodeSpace(pos) --世界坐标转换为本地坐标
            -- if card:hitTest(pos) then
            if cc.rectContainsPoint(boundingBox, tempPos) then
                return card
            end
        end
    end
    return nil
end

--处理滑选状态
function HandCardArea:dealCardSlide(movePos)
    local hitCard = self:getCardByPosition(movePos)
    if hitCard and not hitCard:isDisSelect() and hitCard:getTag() ~= self._currentTouchIndex and not hitCard:isMaskLayerShow() then
        hitCard:playSelectSound()
        self._currentTouchIndex = hitCard:getTag()
        local startIndex = CardLayerFunction.getSmallNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
        local endIndex = CardLayerFunction.getBigNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
        self:clearSlideCardColor()
        for i = startIndex, endIndex do
            self._cards[i]:setColorState(Card.COLOR_STATE.SELECT)
        end
    end
end

function HandCardArea:dealCardSelect()
    local startIndex = CardLayerFunction.getSmallNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
    local endIndex = CardLayerFunction.getBigNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
    local haveUnSelect = false
    for i = startIndex, endIndex do
        if self._cards[i] and not self._cards[i]:isSelect() and not self._cards[i]:isDisSelect() then
            haveUnSelect = true
            self._cards[i]:setCardState(Card.STATE.SELECT)
        end
    end
    if not haveUnSelect then
        for i = startIndex, endIndex do
            if self._cards[i] and self._cards[i]:isSelect() and not self._cards[i]:isDisSelect() then
                self._cards[i]:setCardState(Card.STATE.NORMAL)
                self._cards[i]:setColorState(Card.COLOR_STATE.NORMAL)
            end
        end
    end
    return haveUnSelect
end

--设置牌间距
function HandCardArea:setCardDistance(cardDistanceX, cardDistanceY)
    HandCardArea.super.super.setCardDistance(self, cardDistanceX, cardDistanceY)
end

--重置手牌(状态和颜色)
function HandCardArea:resetCards()
    HandCardArea.super.resetCards(self)
    self:dealCardSelectEvent({})
end

function HandCardArea:dealCardSelectEvent(haveUnSelect)
    HandCardArea.super.dealCardSelectEvent(self, haveUnSelect)
    local selectCardIDs = self:getSelectCardIDs()
    if CF.soundManager and CF.soundManager.playSoundSelectCard and #selectCardIDs > 0 then
        CF.soundManager:playSoundSelectCard()
    end
end

function HandCardArea:dealCardDrag(send, movePos)
end

return HandCardArea
W