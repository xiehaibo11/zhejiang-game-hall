local HandCardArea      = CF.gameClass("HandCardArea", "game.BaseCardGame.Modules.CardLayer.HandCardArea")
local Card              = CF.gameRequire("Modules.CardLayer.Card")
local AnimationManager  = CF.gameRequire("Manager.AnimationManager")
local PokerCard         = CF.gameRequire("Modules.GameLayer.PokerCard")

local KW_OUTCARD_LIMIT = 300 --牌拖动距离限制（超过限制即为出牌操作）
local KW_CAN_MOVE_OUT  = false --允许滑动出牌

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
        end

    elseif eventType == ccui.TouchEventType.moved then
        local movePos = send:getTouchMovePosition()
        
        if self._isDraging then
            local tempPos = self:convertToNodeSpace(movePos)    --世界坐标转换为本地坐标
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
        send:playSelectSound()
        self._endMovePos = send:getTouchEndPosition()
        if self._isDraging then
            local disY = self._endMovePos.y - self._startMovePos.y
            if disY >= KW_OUTCARD_LIMIT and KW_CAN_MOVE_OUT then
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
            self:clearCardSelectColor()
        end
    end
end

function HandCardArea:dealCardSelectEvent(haveUnSelect)
    HandCardArea.super.dealCardSelectEvent(self,haveUnSelect) 
    self:dealZhaDanLiZi(self:getSelectCardIDs())
end

--设置选中的牌
function HandCardArea:setSelectCards(cardIDs)
    HandCardArea.super.setSelectCards(self,cardIDs)
    local tempCardIDs = {}
    for tag, cardId in pairs(cardIDs) do
        tempCardIDs[tag] = cardId
    end
    self:dealZhaDanLiZi(tempCardIDs)
    self:clearCardSelectColor()
end

--重置手牌(状态和颜色)
function HandCardArea:resetCards()
    HandCardArea.super.resetCards(self)
    if self._aniZhaDanLiZi then
        self._aniZhaDanLiZi:removeFromParent()
        self._aniZhaDanLiZi = nil
    end
end

function HandCardArea:JudgeIsZhaDan(selectCardIDs)
    if #selectCardIDs == 4 then
        local outCards = {}
        local normalCardCount = {}
        for i = 1,#selectCardIDs do
            outCards[i] = PokerCard:new()
            outCards[i]:setID(selectCardIDs[i])
        end
        for i = 1, #outCards do
            local power = outCards[i]:getPower()
            normalCardCount[power] = (normalCardCount[power] or 0) + 1
            if normalCardCount[power] == 4 then
                return true
            end
        end
    end
    return false
end

function HandCardArea:dealZhaDanLiZi(selectCardIDs)
    if self._aniZhaDanLiZi then
        self._aniZhaDanLiZi:removeFromParent()
        self._aniZhaDanLiZi = nil
    end
    local isZhaDan = self:JudgeIsZhaDan(selectCardIDs)
    if not isZhaDan then
        return
    end

    local startIndex = 0
    local endIndex = 0
    for i = 1, #self._cards do
        if self._cards[i]:isSelect() then
            startIndex = i
            endIndex = startIndex + 3
            break
        end
    end

    local zOrder = self._cards[endIndex]:getLocalZOrder() - 1
    local pMidX = (self._cards[endIndex]:getPositionX() + self._cards[startIndex]:getPositionX()) * 0.5
    local pMidY = self._cards[endIndex]:getPositionY()
    local aniPanel = self._cards[endIndex]:getParent()

    local armature = AnimationManager.playZhaDanLiZi(aniPanel)
    if armature then
        armature:setLocalZOrder(zOrder)
        armature:setPosition(cc.p(pMidX, pMidY))
        self._aniZhaDanLiZi = armature
    end
end

return HandCardArea