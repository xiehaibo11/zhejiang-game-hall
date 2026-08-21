--
-- Description: 牌显示区域
-- Author: hejiafeng
-- Date: 2019-07-09
--
local Card = CF.gameRequire("Modules.CardLayer.Card")
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")

local CardArea =
    CF.gameClass(
    "CardArea",
    function()
        return ccui.Widget:create()
    end
)

function CardArea:ctor()
    self:initData()
end

function CardArea:initData()
    self._lineCardCount = 27 --每行牌数
    self._defaultCardDistanceX = 40 --牌间距初始默认值
    self._maxCardDistanceX = 40 --最大牌间距
    self._cardDistanceX = 40 --实际的水平牌间距
    self._cardDistanceY = 40 --实际的垂直牌间距
    self._layoutType = CardLayerConfig.CardLayoutType.Horizontal --布局方式（水平或垂直）
    self._cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center --水平增长方式
    self._cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center --垂直增长方式
    self._startPosX = 0
    self._startPosY = 0
    self._bAutoPositionX = true --是否自适应X坐标

    self._cards = {}
    self._bPlayingSendCardAni = false --是否正在播放发牌动画
end

--设置布局方向
--水平或者垂直
function CardArea:setLayoutType(layoutType)
    self._layoutType = layoutType
end

--设置单行最大牌数
function CardArea:setLineCardCount(lineCardCount)
    self._lineCardCount = lineCardCount
end

--设置牌的起始坐标
function CardArea:setStartPosition(posX, posY)
    self._startPosX = posX
    self._startPosY = posY
end

--自适应坐标的开关（默认开启）
function CardArea:setAutoPositionBool(bAutoPosition)
    self._bAutoPositionX = bAutoPosition
end

--设置牌间距
function CardArea:setCardDistance(cardDistanceX, cardDistanceY)
    self._defaultCardDistanceX = cardDistanceX
    self._cardDistanceX = cardDistanceX
    self._cardDistanceY = cardDistanceY
    self._maxCardDistanceX = cardDistanceX
end

--设置最大间距
function CardArea:setMaxCarDistance(cardDistanceX)
    self._maxCardDistanceX = cardDistanceX
end

--设置增长方向
function CardArea:setCarAddDistance(cardAddDirectionX, cardAddDirectionY)
    self._cardAddDirectionX = cardAddDirectionX
    self._cardAddDirectionY = cardAddDirectionY
end

--创建一张牌
function CardArea:createCard(cardId, cardIndex, sizeType, isShowFire, isRight, offsetY, cardStyle)
    local card = Card:new()
    card:setCardID(cardId, sizeType, isShowFire, isRight, offsetY, cardStyle)
    card:setName(string.format(CardLayerDefine.KW_CARD_NAME, cardIndex))
    card:setTag(cardIndex)
    return card
end

--设置显示牌数据
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

    if aniBool then
        self._bPlayingSendCardAni = true
        self:playSendCardAnimation()
    else
        self._bPlayingSendCardAni = false
    end
end

function CardArea:setSpecialColorCardIDs(cardIDs, normalBomb)
    for _, card in pairs(self._cards) do
        card:clearSpecialColor()
        card:clearXian()
        for _, cardID in pairs(cardIDs) do
            if card:getCardID() == cardID then
                card:showSpecialColor()
                break
            end
        end
    end
    if normalBomb then
        for _, realCards in pairs(normalBomb) do
            if #realCards >= 4 then
                local lastCard
                for _, card in pairs(self._cards) do
                    if card:getCardID() == realCards[#realCards] then
                        lastCard = card
                    end
                end
                if lastCard then
                    lastCard:showXian(#realCards)
                end
            end
        end
    end
end

function CardArea:getCardIDs()
    local cardIDs = {}
    for _, card in ipairs(self._cards) do
        table.insert(cardIDs, card:getCardID())
    end
    return cardIDs
end

--播放发牌动画
function CardArea:playSendCardAnimation()
    local delayTime = 0
    for i = #self._cards, 1, -1 do
        delayTime = delayTime + 0.05
        self._cards[i]:setOpacity(0)
        self._cards[i]:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(delayTime),
                cc.CallFunc:create(
                    function()
                        self._cards[i]:setVisible(true)
                    end
                ),
                cc.FadeIn:create(0.2),
                cc.CallFunc:create(
                    function()
                        if i == 1 then
                            self._bPlayingSendCardAni = false
                        end
                    end
                )
            )
        )
    end
end

--清除显示牌
function CardArea:clearCards()
    for _, card in pairs(self._cards) do
        card:removeFromParent()
    end
    self._cards = {}
    self._cardDistanceX = self._defaultCardDistanceX
end

function CardArea:getAddDistanceX(cardCountThisLine)
    local addDistanceX = 0
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
            addDistanceX = (cardCountThisLine - 1) * self._cardDistanceX
        elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
            addDistanceX = (cardCountThisLine - 1) * self._cardDistanceX / 2
        end
    elseif self._layoutType == CardLayerConfig.CardLayoutType.Vertical then
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
            addDistanceX = (self._lineCount - 1) * self._cardDistanceX / 2
        end
    end
    return addDistanceX
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
            addDistanceY = (cardCountThisLine - 1) * self._cardDistanceY / 2 - self._cardDistanceY / 2
        end
    end
    return addDistanceY
end

function CardArea:getSymble()
    local symbleX = 1
    local symbleY = 1
    local symbleZ
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionY == CardLayerConfig.CardAddDirectionY.Up then
            symbleY = 1
            symbleZ = 1
        elseif self._cardAddDirectionY == CardLayerConfig.CardAddDirectionY.Down then
            symbleY = -1
            symbleZ = -1
        else
            symbleY = 1
            symbleZ = 1
        end
    else
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
            symbleX = 1
            symbleZ = 1
        elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Left then
            symbleX = -1
            symbleZ = -1
        else
            symbleX = -1
            symbleZ = -1
        end
    end
    return symbleX, symbleY, symbleZ
end

--计算实际需要显示的间距
function CardArea:updateRealCardDistanceX()
    --验证是否开启自适应坐标
    if not self._bAutoPositionX then
        return
    end
    local nowCardCount = #self._cards
    if nowCardCount < self._lineCardCount then
        self._cardDistanceX = self._defaultCardDistanceX * self._lineCardCount / nowCardCount
        if self._cardDistanceX > self._maxCardDistanceX then
            self._cardDistanceX = self._maxCardDistanceX
        end
    end
end

--获取坐标和层级信息
function CardArea:getCardsPositionAndZorder()
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        local cardsInfo = {}
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

            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX - indexInThisLine * self._cardDistanceX + addDistanceX
            cardsInfo[index].y = self._startPosY + symbleY * lineIndex * self._cardDistanceY - addDistanceY
            cardsInfo[index].z = -index - symbleZ * lineIndex * (self._lineCardCount + 1)
        end
        return cardsInfo
    else
        local cardsInfo = {}
        for index, _ in ipairs(self._cards) do
            local lineIndex = math.floor((index - 1) / self._lineCardCount)
            local indexInThisLine = (index - 1) % self._lineCardCount
            local cardCountThisLine = self._lineCardCount
            if lineIndex == (self._lineCount - 1) then
                cardCountThisLine = #self._cards - lineIndex * self._lineCardCount
            end

            local addDistanceX = self:getAddDistanceX(cardCountThisLine)
            local addDistanceY = self:getAddDistanceY(cardCountThisLine)
            local symbleX, _, symbleZ = self:getSymble()

            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX + symbleX * lineIndex * self._cardDistanceX + addDistanceX
            cardsInfo[index].y = self._startPosY + indexInThisLine * self._cardDistanceY - addDistanceY
            cardsInfo[index].z = -index + symbleZ * lineIndex * (self._lineCardCount + 1)
        end
        return cardsInfo
    end
end

--刷新牌的坐标和层级
function CardArea:updateCardsPositionAndOrder()
    self:updateRealCardDistanceX()
    local cardsInfo = self:getCardsPositionAndZorder()
    for index, card in ipairs(self._cards) do
        local tempInfo = cardsInfo[index]
        if tempInfo ~= nil then
            card:setPositionX(tempInfo.x)
            card:setPositionY(tempInfo.y)
            card:setLocalZOrder(tempInfo.z)
        end
    end
end

function CardArea:deleteCards(cardIDs)
end

function CardArea:getCardCount()
    return #self._cards
end

function CardArea:getCardDistanceX()
    return self._cardDistanceX
end

function CardArea:setCardStyle(style)
    for index, card in ipairs(self._cards) do
        card:setCardStype(style)
    end
end

function CardArea:setCardFaceStyle(style)
    for index, card in ipairs(self._cards) do
        if card.setCardFaceStyle then
            card:setCardFaceStyle(style)
        end
    end
end

return CardArea
�/