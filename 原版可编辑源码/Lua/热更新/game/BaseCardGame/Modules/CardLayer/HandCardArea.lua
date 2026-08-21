--
-- Description: 手牌
-- Author: hejiafeng
-- Date: 2019-07-09
--
local Card = CF.gameRequire("Modules.CardLayer.Card")
local CardArea = CF.gameRequire("Modules.CardLayer.CardArea")
local CardLayerFunction = CF.gameRequire("Modules.CardLayer.CardLayerFunction")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local HandCardArea = CF.gameClass("HandCardArea", CardArea)

--对牌操作状态
HandCardArea.MOVESTATE = {
    NONE = 0,
    NORMAL = 1,
    SLIDER = 2,
    DRAG = 3
}

HandCardArea.DRAG_LIMIT = {
    ANGLE = 45, --触发拖动的角度限制
    DISTANCE = 40 --触发拖动的距离限制
}

local KW_CARD_DRAG_NODE_NAME = "CardDragNode"
local KW_OUTCARD_LIMIT = 300 --牌拖动距离限制（超过限制即为出牌操作）

function HandCardArea:initData()
    HandCardArea.super.initData(self)

    self._startTouchIndex = 0
    self._currentTouchIndex = 0
    self._isDraging = false --是否在拖动中
    self._saveCardsState = {}
    self._saveCardsColor = {}
end

--设置手牌可操作
function HandCardArea:setShowCards(cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    HandCardArea.super.setShowCards(self, cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    self._cardStyle = cardStyle
    for _, card in pairs(self._cards) do
        card:setSelectAddY(CardLayerConfig.selectAddY)
        card:setTouchEnabled(true)
        card:addTouchEventListener(handler(self, self.onCardTouchEvent))
    end
end

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

--处理滑选状态
function HandCardArea:dealCardSlide(movePos)
    local hitCard = self:getCardByPosition(movePos)
    if hitCard and hitCard:getTag() ~= self._currentTouchIndex and not hitCard:isMaskLayerShow() then
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

--清除选中的牌
function HandCardArea:clearSlideCardColor()
    for _, card in ipairs(self._cards) do
        if not card:isSelect() then
            card:setColorState(Card.COLOR_STATE.NORMAL)
        end
    end
end

--清除所有牌的选中颜色
function HandCardArea:clearCardSelectColor()
    for _, card in ipairs(self._cards) do
        card:setColorState(Card.COLOR_STATE.NORMAL)
    end
end

--处理拖拽状态
function HandCardArea:dealCardDrag(send, movePos)
    local selectCards = self:getSelectCards()
    local moveCardIDs = {}
    local dragCards = {}
    if #selectCards > 0 then
        if send:isSelect() then
            for _, card in ipairs(selectCards) do
                card:setCardState(Card.STATE.DRAG)
                table.insert(moveCardIDs, card:getCardID())
            end
            dragCards = selectCards
        end
    else
        send:setCardState(Card.STATE.DRAG)
        moveCardIDs = {send:getCardID()}
        dragCards = {send}
    end

    if #dragCards > 0 then
        self._isDraging = true
        self._dragCard = send
        self:setDragCards(moveCardIDs, movePos)
        self:showDragCards(false)
    end
end

function HandCardArea:dealCardSelect()
    local startIndex = CardLayerFunction.getSmallNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
    local endIndex = CardLayerFunction.getBigNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
    local haveUnSelect = false
    for i = startIndex, endIndex do
        if self._cards[i] and not self._cards[i]:isSelect() then
            haveUnSelect = true
            self._cards[i]:setCardState(Card.STATE.SELECT)
        end
    end
    if not haveUnSelect then
        for i = startIndex, endIndex do
            if self._cards[i] and self._cards[i]:isSelect() then
                self._cards[i]:setCardState(Card.STATE.NORMAL)
                self._cards[i]:setColorState(Card.COLOR_STATE.NORMAL)
            end
        end
    end
    return haveUnSelect
end

function HandCardArea:dealOutCardEvent()
    self:clearDragArea()
    local outCardIDs = self:getDragCardIDs()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventOutCards")
    event.outCardIDs = outCardIDs
    eventDispatcher:dispatchEvent(event)
end

function HandCardArea:dealRecoverCards()
    self:clearDragArea()
    self:showDragCards(true)
    self:recoverCardsState()
    self:recoverCardsColor()
end

--保存牌状态
function HandCardArea:saveCardsState()
    for index, card in ipairs(self._cards) do
        self._saveCardsState[index] = card:getCardState()
    end
end

--恢复牌状态
function HandCardArea:recoverCardsState()
    for index, card in ipairs(self._cards) do
        card:setCardState(self._saveCardsState[index])
    end
end

--保存牌颜色
function HandCardArea:saveCardsColor()
    for index, card in ipairs(self._cards) do
        self._saveCardsColor[index] = card:getColorState()
    end
end

--恢复牌颜色
function HandCardArea:recoverCardsColor()
    for index, card in ipairs(self._cards) do
        card:setColorState(self._saveCardsColor[index])
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

--刷新当前对牌操作状态
function HandCardArea:updateMoveState(send, movePos)
    if not self._startMovePos then
        return
    end
    if movePos.x == self._startMovePos.x and movePos.y == self._startMovePos.y then
        return
    end
    --判断角度和距离
    local angle = CardLayerFunction.getAngleWithTwoPostion(self._startMovePos, movePos)
    if math.abs(angle) >= HandCardArea.DRAG_LIMIT.ANGLE then
        --开始与结束点之间的距离
        local distance = CardLayerFunction.getDistanceWithTwoPostion(self._startMovePos, movePos)
        if distance <= HandCardArea.DRAG_LIMIT.DISTANCE then
            self._currentState = HandCardArea.MOVESTATE.NORMAL
        else
            if self._currentState ~= HandCardArea.MOVESTATE.SLIDER then
                self._currentState = HandCardArea.MOVESTATE.DRAG
            end
        end
    else
        local hitCard = self:getCardByPosition(movePos)
        if hitCard then
            if hitCard == send then
                self._currentState = HandCardArea.MOVESTATE.NORMAL
            else
                self._currentState = HandCardArea.MOVESTATE.SLIDER
            end
        end
    end
end

--通过坐标位置找牌
function HandCardArea:getCardByPosition(pos)
    for _, card in ipairs(self._cards) do
        local boundingBox = card:getBoundingBox()
        local tempPos = self:convertToNodeSpace(pos) --世界坐标转换为本地坐标
        -- if card:hitTest(pos) then
        if cc.rectContainsPoint(boundingBox, tempPos) then
            return card
        end
    end
    return nil
end

--设置选中的牌
function HandCardArea:setSelectCards(cardIDs)
    local tempCards = {}
    for _, card in ipairs(self._cards) do
        local tempCardId = card:getCardID()
        if card:isSelect() then
            if not CardLayerFunction.removeOneCardIDFromCardIDs(cardIDs, tempCardId) then
                card:setCardState(Card.STATE.NORMAL)
                card:setColorState(Card.COLOR_STATE.NORMAL)
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
                -- card:setColorState(Card.COLOR_STATE.SELECT)
                break
            end
        end
    end
end

--获取选中的牌
function HandCardArea:getSelectCards()
    local selectCards = {}
    for _, card in ipairs(self._cards) do
        if card:isSelect() then
            table.insert(selectCards, card)
        end
    end
    return selectCards
end

--获取选中的牌值
function HandCardArea:getSelectCardIDs()
    local selectCardIDs = {}
    for _, card in ipairs(self._cards) do
        if card:isSelect() then
            table.insert(selectCardIDs, card:getCardID())
        end
    end
    return selectCardIDs
end

--设置拖动牌
function HandCardArea:setDragCards(cardIDs, movePos)
    if not self._dragCardArea then
        local conf = CardLayerConfig.OutCardConf[CardLayerConfig.LocalSeat.Bottom]
        self._dragCardArea = CardArea.new()
        self._dragCardArea:setLayoutType(conf.layoutType)
        self._dragCardArea:setLineCardCount(conf.lineCardCount)
        self._dragCardArea:setStartPosition(conf.startPosX, conf.startPosY)
        self._dragCardArea:setCardDistance(conf.cardDistanceX, conf.cardDistanceY)
        self._dragCardArea:setCarAddDistance(conf.cardAddDirectionX, conf.cardAddDirectionY)
        self._dragCardArea:addTo(self)
    end
    local tempPos = self:convertToNodeSpace(movePos) --世界坐标转换为本地坐标
    self._dragCardArea:setPosition(tempPos)
    self._dragCardArea:setShowCards(cardIDs, nil, nil, nil, self._cardStyle)
    -- self._dragCardArea:updateCardsPositionAndOrder()
    self._dragCardArea:setVisible(true)
end

--拖动出去的手牌可见性
function HandCardArea:showDragCards(bshow)
    local dragCrads = self:getDragCards()
    for _, card in ipairs(dragCrads) do
        card:setVisible(bshow)
    end
end

function HandCardArea:clearDragArea()
    if not self._dragCardArea then
        return
    end
    self._dragCardArea:clearCards()
end

function HandCardArea:getDragNode()
    local dragNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_CARD_DRAG_NODE_NAME)
    if dragNode == nil then
        dragNode = ccui.Widget:create()
        dragNode:setName(KW_CARD_DRAG_NODE_NAME)
        dragNode:setAnchorPoint(0.5, 0.5)
        self:addChild(dragNode, 200)
    end
    return dragNode
end

--获取拖动的牌
function HandCardArea:getDragCards()
    local dragCards = {}
    for _, card in ipairs(self._cards) do
        if card:isDrag() then
            table.insert(dragCards, card)
        end
    end
    return dragCards
end

function HandCardArea:getDragCardIDs()
    local dragCardIDs = {}
    for _, card in ipairs(self._cards) do
        if card:isDrag() then
            table.insert(dragCardIDs, card:getCardID())
        end
    end
    return dragCardIDs
end

--重置手牌(状态和颜色)
function HandCardArea:resetCards()
    if self._isDraging then
        return
    end
    local selectCardIDs = self:getSelectCardIDs()
    if #selectCardIDs > 0 and self._cards[1] then
        self._cards[1]:playSelectSound()
    end
    for _, card in ipairs(self._cards) do
        card:setCardState(Card.STATE.NORMAL)
        card:setColorState(Card.COLOR_STATE.NONE)
    end
end

function HandCardArea:clearCards()
    HandCardArea.super.clearCards(self)

    self:clearDragArea()
    self._isDraging = false
end

--设置牌间距
function HandCardArea:setCardDistance(cardDistanceX, cardDistanceY)
    --手牌的牌间距根据分辨率自适应
    local frameSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    local designSize = CF.UITool.getDesignSizeHD()
    local frameRatio = frameSize.width / frameSize.height
    local designRatio = designSize.width / designSize.height
    if frameRatio > designRatio then
        cardDistanceX = cardDistanceX * (frameRatio / designRatio)
    end
    if display.notchWidth > 0 then
        cardDistanceX = cardDistanceX - display.notchWidth * 2 / (CardLayerConfig.MaxHandCardCount - 1)
    end
    HandCardArea.super.setCardDistance(self, cardDistanceX, cardDistanceY)
end

function HandCardArea:setCardDisableCard(cardIDs)
    if not cardIDs or #cardIDs <= 0 then
        self:clearDisableCard()
        return
    end
    for _, card in pairs(self._cards) do
        local include = false
        for i = 1, #cardIDs do
            if cardIDs[i] == card:getCardID() then
                include = true
            end
        end
        if not include then
            card:showMaskLayer()
        end
    end
end

function HandCardArea:clearDisableCard()
    for _, card in pairs(self._cards) do
        card:hideMaskLayer()
    end
end

return HandCardArea
