local HandCardArea    = CF.gameClass("HandCardArea", "game.BaseCardGame.Modules.CardLayer.HandCardArea")
local CardLayerFunction = CF.gameRequire("Modules.CardLayer.CardLayerFunction")
local Card = CF.gameRequire("Modules.CardLayer.Card")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardEnum = CF.gameRequire("Define.CardEnum")

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
            -- send:setColorState(Card.COLOR_STATE.SELECT)
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
        local haveUnSelect = self:dealCardSelect()
        self:dealCardSelectEvent(haveUnSelect)
        --清除选中颜色
        self:clearCardSelectColor()
    end
end

function HandCardArea:getJokerCnt()
    local cnt = 0
    for i = 1, #self._cards do
        if self._cards[i]:getCardID() == CardEnum.CARD_ID.CID_SJ or self._cards[i]:getCardID() == CardEnum.CARD_ID.CID_BJ then
            cnt = cnt + 1
        end
    end
    return cnt
end

-- 只处理最后选中的牌对应的重复值
function HandCardArea:dealCardSelect()
    local cur = self._currentTouchIndex
    local haveUnSelect = false
    local jokerCnt = self:getJokerCnt()
    if self._cards[cur] and not self._cards[cur]:isSelect() then
        haveUnSelect = true
        for i = 1, #self._cards do
            if jokerCnt >= 4 and (self._cards[cur]:getCardID() == CardEnum.CARD_ID.CID_SJ or self._cards[cur]:getCardID() == CardEnum.CARD_ID.CID_BJ) and (self._cards[i]:getCardID() == CardEnum.CARD_ID.CID_SJ or self._cards[i]:getCardID() == CardEnum.CARD_ID.CID_BJ) then
                self._cards[i]:setCardState(Card.STATE.SELECT)
            elseif CardEnum.CardID2Power[self._cards[cur]:getCardID()] == CardEnum.CardID2Power[self._cards[i]:getCardID()] then
                self._cards[i]:setCardState(Card.STATE.SELECT)
            else
                self._cards[i]:setCardState(Card.STATE.NORMAL)
            end
        end
    end
    if not haveUnSelect then
        if self._cards[cur] and self._cards[cur]:isSelect() then
            for i = 1, #self._cards do
                self._cards[i]:setCardState(Card.STATE.NORMAL)
                self._cards[i]:setColorState(Card.COLOR_STATE.NORMAL)
            end
        end
    end
    return haveUnSelect
end

function HandCardArea:dealCardSlide(movePos)
    local hitCard = self:getCardByPosition(movePos)
    if hitCard and hitCard:getTag() ~= self._currentTouchIndex and not hitCard:isMaskLayerShow() then
        hitCard:playSelectSound()
        self._currentTouchIndex = hitCard:getTag()
        local startIndex = CardLayerFunction.getSmallNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
        local endIndex = CardLayerFunction.getBigNumberBetweenTwo(self._startTouchIndex, self._currentTouchIndex)
        self:clearSlideCardColor()
        for i = startIndex, endIndex do
            -- self._cards[i]:setColorState(Card.COLOR_STATE.SELECT)
        end
    end
end

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
                -- self._currentState = HandCardArea.MOVESTATE.DRAG
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

return HandCardArea�