local CardArea = CF.gameClass("CardArea", "game.BaseCardGame.Modules.CardLayer.CardArea")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")

function CardArea:ctor()
    CardArea.super.ctor(self)
    self._areaName = nil
    self._lineCardCount = 71 --每行牌数
end

function CardArea:setAreaName(name)
    self._areaName = name
end

function CardArea:getAddDistanceY(cardCountThisLine)
    local addDistanceY = 0
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionY == CardLayerConfig.CardAddDirectionY.Center then
            addDistanceY = self._lineCount * self._cardDistanceY / 2 - self._cardDistanceY / 2
        end
    else
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionY.Down then
            addDistanceY = cardCountThisLine * self._cardDistanceY
        else
            addDistanceY = self._cardDistanceY
        end
    end
    return addDistanceY
end

function CardArea:getAddDistanceX(cardCountThisLine, max)
    local addDistanceX = 0
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
            addDistanceX = (cardCountThisLine - 1) * self._cardDistanceX
        elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
            addDistanceX = (cardCountThisLine - 1) * self._cardDistanceX / 2
        end
    elseif self._layoutType == CardLayerConfig.CardLayoutType.Vertical then
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
            addDistanceX = self._cardDistanceX
        end
    end
    return addDistanceX
end

function CardArea:getCardsPositionAndZorder()
    local cardsInfo = {}
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        for index, _ in ipairs(self._cards) do
            local lineIndex = math.floor((index - 1) / self._lineCardCount)
            local indexInThisLine = (index - 1) % self._lineCardCount
            local cardCountThisLine = self._lineCardCount
            if lineIndex == (self._lineCount - 1) then
                cardCountThisLine = #self._cards - lineIndex * self._lineCardCount
            end

            local addDistanceX = self:getAddDistanceX(cardCountThisLine)
            local addDistanceY = self:getAddDistanceY(cardCountThisLine)
            local _, symbleY, symbleZ = self:getSymble()

            local dixX = self._startPosX - indexInThisLine * self._cardDistanceX + addDistanceX
            local disY = self._startPosY + symbleY * lineIndex * self._cardDistanceY - addDistanceY
            -- 手牌中重复牌合并
            if self._areaName == "hand" then
                addDistanceX = self:getAddDistanceX(27)
                if index > 1 then
                    dixX = cardsInfo[index - 1].x - 90
                    if self._cards[index - 1] then
                        if (self._cards[index]:getCardID() == CardEnum.CARD_POWER.CP_SJ or self._cards[index]:getCardID() == CardEnum.CARD_POWER.CP_BJ) and (self._cards[index - 1]:getCardID() == CardEnum.CARD_POWER.CP_SJ or self._cards[index - 1]:getCardID() == CardEnum.CARD_POWER.CP_BJ) then
                            dixX = cardsInfo[index - 1].x - 6
                        elseif CardEnum.CardID2Power[self._cards[index]:getCardID()] == CardEnum.CardID2Power[self._cards[index - 1]:getCardID()] then
                            dixX = cardsInfo[index - 1].x - 6
                        end
                    end
                else
                    dixX = self._startPosX - indexInThisLine * self._cardDistanceX + addDistanceX
                end
                disY = 0
            end
            cardsInfo[index] = {}
            cardsInfo[index].x = dixX
            cardsInfo[index].y = disY
            cardsInfo[index].z = -index - symbleZ * lineIndex * (self._lineCardCount + 1)
        end
        if self._areaName == "hand" then
            local totalWidth = self:getAddDistanceX(27) * 2
            local curWidth = cardsInfo[1].x - cardsInfo[#cardsInfo].x
            for i = 1, #cardsInfo do
                cardsInfo[i].x = cardsInfo[i].x - (totalWidth - curWidth) / 2
            end
        end
    else
        local cardsInfo = {}
        local haveValues = {}
        for i = 1, #self._cards do
            local tValueKeyData = CardLogic.getCardPowerById(self._cards[i]:getCardID())
            local isFind = false
            for i = 1, #haveValues do
                if haveValues[i] == tValueKeyData then
                    isFind = true
                    break
                end
            end
            if not isFind then
                haveValues[#haveValues + 1] = tValueKeyData
            end
        end
        for index, _ in ipairs(self._cards) do
            local lineIndex = math.floor((index - 1) / self._lineCardCount)
            local indexInThisLine = (index - 1) % self._lineCardCount
            for i = 1, #haveValues do
                if haveValues[i] == CardLogic.getCardPowerById(self._cards[index]:getCardID()) then
                    indexInThisLine = i - 1
                    break
                end
            end
            local cardCountThisLine = self._lineCardCount
            if lineIndex == (self._lineCount - 1) then
                cardCountThisLine = #self._cards - lineIndex * self._lineCardCount
            end

            local showX = 0
            local showY = indexInThisLine
            if indexInThisLine >= 10 then
                showX = 2
                showY = showY - 10
            elseif indexInThisLine >= 5 then
                showX = 1
                showY = showY - 5
            end

            local addDistanceX = self:getAddDistanceX(showX, math.ceil(#haveValues / 5))
            local addDistanceY = self:getAddDistanceY(#haveValues)
            local symbleX, _, symbleZ = self:getSymble()

            self._cards[index]:flushXianRightTop()

            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX + symbleX * showX * self._cardDistanceX + addDistanceX
            cardsInfo[index].y = self._startPosY + showY * self._cardDistanceY - addDistanceY
            cardsInfo[index].z = -index + symbleZ * lineIndex * (self._lineCardCount + 1)
        end
        return cardsInfo
    end
    return cardsInfo
end

function CardArea:playSendCardAnimation()
    local lastScale = self._cards[1]:getParent():getScaleX()
    self._cards[1]:getParent():setScaleX(1.07 * lastScale)
    local midCard = math.floor(#self._cards / 2)
    local cardNode = self._cards[midCard]
    for i = #self._cards, 1, -1 do
        local lastPosx = self._cards[i]:getPositionX()
        self._cards[i]:setPositionX(cardNode:getPositionX())
        self._cards[i]:setVisible(true)
        self._cards[i]:runAction(
        cc.Sequence:create(
        cc.MoveTo:create(6 / 30, cc.p(lastPosx, self._cards[i]:getPositionY())),
        cc.CallFunc:create(
        function()
            if i == 1 then
                local parentNode = self._cards[1]:getParent()
                parentNode:runAction(
                cc.Sequence:create(
                cc.ScaleTo:create(5 / 30, lastScale, lastScale),
                cc.CallFunc:create(
                function()
                    self._bPlayingSendCardAni = false
                end
                )
                )
                )
            end
        end
        )
        )
        )
    end
    -- 玩家某种异常情况导致动画未来播放完成
    CF.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        if self._cards and self._cards[1] then
            local parentNode = self._cards[1]:getParent()
            if parentNode then
                local curScale = parentNode:getScaleX()
                if curScale ~= lastScale then
                    parentNode:setScaleX(lastScale)
                    self._bPlayingSendCardAni = false
                end
            end
        end
    end, 1)
end

function CardArea:setSpecialColorCardIDs(cardIDs, normalBomb)
    for _, card in pairs(self._cards) do
        card:clearSpecialColor()
        for _, cardID in pairs(cardIDs) do
            if card:getCardID() == cardID then
                card:showSpecialColor()
                break
            end
        end
    end
end

function CardArea:setShowCards(cardIDs, aniBool, sizeType, isShowFire, cardStyle)
    self:clearCards()
    if cardIDs == nil or #cardIDs == 0 then
        return
    end

    if self._lineCardCount > 0 then
        self._lineCount = math.ceil(#cardIDs / self._lineCardCount)
    end

    for index, cardId in ipairs(cardIDs) do
        local isRight = false
        if self._lineCardCount and self._lineCardCount > 0 and index % self._lineCardCount == 1 then
            isRight = true
        end
        -- 非第一排火焰往下移，不然会遮挡第一排的手牌
        local offsetY = 0
        if isShowFire and math.ceil(index / self._lineCardCount) ~= self._lineCount then
            offsetY = -20
        end
        local card = self:createCard(cardId, index, sizeType, isShowFire, isRight, offsetY, cardStyle)
        card:setVisible(not aniBool) --如果需要播放动画效果，则先隐藏
        self:addChild(card)
        self._cards[index] = card
    end

    self:updateCardsPositionAndOrder()

    local normalBomb = CardLogic.switchCardIDsToPowerKey(cardIDs)
    if normalBomb then
        for _, realCards in pairs(normalBomb) do
            local lastCard
            for _, card in pairs(self._cards) do
                if card:getCardID() == realCards[1] then
                    lastCard = card
                    break
                end
            end
            if lastCard then
                lastCard:showXian(#realCards)
            end
        end
    end

    if aniBool then
        self._bPlayingSendCardAni = true
        self:playSendCardAnimation()
    else
        self._bPlayingSendCardAni = false
    end
end

return CardArea   )  