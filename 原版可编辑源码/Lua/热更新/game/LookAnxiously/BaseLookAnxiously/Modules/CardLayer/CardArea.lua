local CardArea = CF.gameClass("CardLayer", "game.BaseCardGame.Modules.CardLayer.CardArea")
local Card = CF.gameRequire("Modules.CardLayer.Card")
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")

function CardArea:getCSBPath()
    return "cocosStudio/LookAnxiously/BaseCardLayer/CSB/BaseCardLayer.csb"
end

function CardArea:initData()
    CardArea.super.initData(self)
    self._position = {}
end

function CardArea:aniCreateCards(sizeType, cardStyle)
    self._isShowCardsAning = true 
    self._addingCardsIndex = self._addingCardsIndex + 1
    local card = self:createCard(self._addingCardsIDs[self._addingCardsIndex], self._addingCardsIndex, sizeType, nil, nil, nil, cardStyle) -- 这里假设isBig参数固定为false，你可根据实际情况修改
    card:setVisible(false) -- 这里假设aniBool固定为false，你可根据实际情况修改，意思是先显示卡片
    self:addChild(card)

    local insertCard = function()
        card:setVisible(true)
        if self._addingInsertIndexs[self._addingCardsIndex] == -1 then 
            self._cards[self._addingCardsIndex] = card
        else
            local insertIndex = self._addingInsertIndexs[self._addingCardsIndex]
            if insertIndex > #self._cards then 
                self._cards[self._addingCardsIndex] = card
            else
                local newTable = {}
                for i = 1, #self._cards do
                    if i < insertIndex then
                        table.insert(newTable, self._cards[i])
                        newTable[#newTable]:setTag(#newTable)
                    elseif i == insertIndex then
                        table.insert(newTable, card)
                        newTable[#newTable]:setTag(#newTable)
                    end
                    if i >= insertIndex then
                        table.insert(newTable, self._cards[i])
                        newTable[#newTable]:setTag(#newTable)
                    end
                    
                end
                self._cards = newTable
            end 
        end
        if CardLayerConfig.isFirstDivide then
            self:updateCardsPositionAndOrder()
        else
            self:saveNewPosition()
        end
    end

    card:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(CardLayerConfig.distanceDivideCardsTime),
            cc.CallFunc:create(
                function()
                    -- 补牌的情况，增加一个手牌插入的动画
                    if not CardLayerConfig.isFirstDivide then
                        -- 如果还没有播放完插入动画，手牌里就已经有这张牌了，不播放动画，直接返回
                        for k,v in pairs(self._cards) do
                            if v:getCardID() == card:getCardID() then
                                card:removeFromParent()
                                return
                            end
                        end
                        insertCard()
                        local newCardPos = {}
                        -- 是不是第一张或最后一张牌
                        local isFirstOrLastCard = false
                        for k,v in pairs(self._cards) do
                            if v:getCardID() == card:getCardID() and (k == 1 or k == #self._cards) then
                                isFirstOrLastCard = true
                            end
                            -- 循环移动手牌
                            for _,pos in pairs(self._position) do
                                if pos.cardID == v:getCardID() then
                                    if pos.cardID == card:getCardID() then
                                        newCardPos = pos
                                    else
                                        v:runAction(cc.MoveTo:create(0.2, cc.p(pos.x, pos.y)))
                                    end
                                end
                            end
                        end
                        card:setPositionY(70)
                        card:setPositionX(newCardPos.x)
                        if not isFirstOrLastCard then
                            card:setRotation(10)
                        end
                        card:runAction(cc.Sequence:create(
                            cc.Spawn:create(  -- 同时开始旋转和向上移动
                                cc.RotateTo:create(0.2, 0),  -- 0.2秒内旋转10度
                                cc.MoveTo:create(0.2, cc.p(newCardPos.x, newCardPos.y))
                            )
                            ))
                    end
                end
            ),
            cc.CallFunc:create(
            function()
                if self._addingCardsIndex < #self._addingCardsIDs then 
                    self:aniCreateCards(sizeType, cardStyle)
                end
                if self._addingCardsIndex == #self._addingCardsIDs then 
                    self._isShowCardsAning = false
                    if self.setAddTouchInfo then
                        self:setAddTouchInfo()
                    end
                end
            end
        )))
    if CardLayerConfig.isFirstDivide then
        insertCard()
    end
end

function CardArea:setShowCards(cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    if not aniBool then
        CardArea.super.setShowCards(self,cardIDs, aniBool, sizeType, isShowFire, cardStyle)
        self._addingCardsIDs = clone(cardIDs)
        self._addingCardsIndex = #self._addingCardsIDs
        for i = 1,#self._addingCardsIDs do 
            self._addingInsertIndexs[i] = -1
        end 
        return 
    end 
    self:clearCards()
    if cardIDs == nil or #cardIDs == 0 then
        return
    end
    self._addingCardsIDs = clone(cardIDs)
    self._addingInsertIndexs = {}
    for i = 1,#self._addingCardsIDs do 
        self._addingInsertIndexs[i] = -1
    end 
    self._addingCardsIndex = 0
    if self._lineCardCount > 0 then
        self._lineCount = math.ceil(#self._addingCardsIDs / self._lineCardCount)
    end
    if self._isShowCardsAning == false then 
        self:aniCreateCards(sizeType, cardStyle)
    end 
end

function CardArea:addShowCards(cardIDs,indexs, aniBool, sizeType, cardStyle)
    local handCards = self:getCardIDs()
    if not aniBool then
        for i = 1, #indexs do
            table.insert(handCards,indexs[i],cardIDs[i])
        end

        CardArea.super.setShowCards(self,handCards, aniBool, sizeType, cardStyle)
        return 
    end 
    if cardIDs == nil or #cardIDs == 0 then
        return
    end

    if self._lineCardCount > 0 then
        self._lineCount = math.ceil((#handCards + #cardIDs) / self._lineCardCount)
    end
    self._addingCardsIDs = self._addingCardsIDs or {}
    self._addingCardsIndex = self._addingCardsIndex or 0
    for i = 1, #cardIDs do
        table.insert(self._addingCardsIDs,cardIDs[i])
    end
    for i = 1, #indexs do
        table.insert(self._addingInsertIndexs,indexs[i])
    end
    if self._isShowCardsAning == false then 
        self:aniCreateCards(sizeType, cardStyle)
    end 
end

function CardArea:clearCards()
    self._addingCardsIDs = {}
    self._addingCardsIndex = 1
    self._addingInsertIndexs = {}
    self._isShowCardsAning = false
    CardArea.super.clearCards(self)
end 

--刷新牌的坐标和层级
function CardArea:saveNewPosition()
    self._position = {}
    self:updateRealCardDistanceX()
    local cardsInfo = self:getCardsPositionAndZorder()
    for index, card in ipairs(self._cards) do
        local tempInfo = cardsInfo[index]
        if tempInfo ~= nil then
            local pos = {}
            pos.cardID = card:getCardID()
            pos.x = tempInfo.x
            pos.y = card:getPositionY()
            pos.z = tempInfo.z
            table.insert(self._position, pos)
            card:setLocalZOrder(tempInfo.z)
        end
    end
end

return CardArea