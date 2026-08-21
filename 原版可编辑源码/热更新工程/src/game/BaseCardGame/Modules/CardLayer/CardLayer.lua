----------------------------------------
--
-- Description: 牌层
-- Author: hejiafeng
-- Date: 2019-07-09
--
----------------------------------------
local CardArea = CF.gameRequire("Modules.CardLayer.CardArea")
local HandCardArea = CF.gameRequire("Modules.CardLayer.HandCardArea")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLayer = CF.gameClass("CardLayer", CF.ViewBase)

function CardLayer:getCSBPath()
    return CardLayerDefine.KW_CSB_BASE_CARD_LAYER
end

function CardLayer:getBindingInfo()
    return {
        ["_KW_PANEL_TOUCH"] = {varName = "_touchPanel"},
        --手牌区
        ["_KW_POS_HANDCARD_"] = {varName = "_handCardPos", beginIndex = 1, endIndex = 4},
        --手牌区
        ["_KW_POS_OUTCARD_"] = {varName = "_outCardPos", beginIndex = 1, endIndex = 4}
    }
end

function CardLayer:ctor(param)
    param = param or {}
    CardLayer.super.ctor(self, param)

    self:initData()
    self:initTouchPanel()
end

function CardLayer:initData()
    self._tHandCardArea = {}
    self._tOutCardArea = {}
end

function CardLayer:initTouchPanel()
    self._touchPanel:setTouchEnabled(true)
    self._touchPanel:setSwallowTouches(false)
    self._touchPanel:addTouchEventListener(handler(self, self.onTouchEventTouchLayer))
end

--牌层点击事件
function CardLayer:onTouchEventTouchLayer(send, eventType)
    if eventType ~= ccui.TouchEventType.began then
        return
    end
    --重置牌层操作状态
    self:resetHandCards()
end

----------------------------------------
--重置牌层操作状态(收回)
----------------------------------------
function CardLayer:resetHandCards(localSeat)
    localSeat = localSeat or CardLayerConfig.LocalSeat.Bottom
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom then
        --暂时只处理自己手牌，只有自己手牌可以触摸
        return
    end
    if self._tHandCardArea[localSeat] then
        self._tHandCardArea[localSeat]:resetCards()
    end
end

----------------------------------------
--设置手牌数据
--bShowAni表示是否显示动画效果（发牌）
----------------------------------------
function CardLayer:setHandCards(localSeat, cardIDs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end

    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni)
    -- self._tHandCardArea[localSeat]:updateCardsPositionAndOrder()
end

function CardLayer:getHandCards(localSeat)
    if not self._tHandCardArea[localSeat] then
        return {}
    end

    return self._tHandCardArea[localSeat]:getCardIDs()
    -- self._tHandCardArea[localSeat]:updateCardsPositionAndOrder()
end

----------------------------------------
--清除手牌数据
----------------------------------------
function CardLayer:clearHandCard(localSeat)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:clearCards()
end

----------------------------------------
--设置自己选中牌数据
----------------------------------------
function CardLayer:setSelfSelectCards(cardIDs)
    self:setSelectCards(CardLayerConfig.LocalSeat.Bottom, cardIDs)
end

----------------------------------------
--设置选中牌数据
----------------------------------------
function CardLayer:setSelectCards(localSeat, cardIDs)
    --只有自己的手牌才能选中
    if localSeat ~= CardLayerConfig.LocalSeat.Bottom then
        return
    end
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    self._tHandCardArea[localSeat]:setSelectCards(cardIDs)
end

----------------------------------------
--获取选中牌数据
----------------------------------------
function CardLayer:getSelectCardIDs(localSeat)
    local tempLocalSeat = localSeat
    if tempLocalSeat == nil then
        tempLocalSeat = CardLayerConfig.LocalSeat.Bottom
    end
    --只有自己的手牌才能选中
    if tempLocalSeat ~= CardLayerConfig.LocalSeat.Bottom then
        return
    end
    if not self._tHandCardArea[tempLocalSeat] then
        return
    end
    return self._tHandCardArea[tempLocalSeat]:getSelectCardIDs()
end

----------------------------------------
--设置打出牌数据
----------------------------------------
function CardLayer:setOutCards(localSeat, cardIDs, isShowFire)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, nil, nil, isShowFire)
    -- self._tOutCardArea[localSeat]:updateCardsPositionAndOrder()
end

function CardLayer:getOutCards(localSeat)
    if not self._tOutCardArea[localSeat] then
        return {}
    end
    return self._tOutCardArea[localSeat]:getCardIDs()
end


----------------------------------------
--清除打出牌数据
----------------------------------------
function CardLayer:clearOutCard(localSeat)
    if not self._tOutCardArea[localSeat] then
        return
    end
    self._tOutCardArea[localSeat]:clearCards()
end

----------------------------------------
--清除所有牌
----------------------------------------
function CardLayer:clearAllCards()
    for _, cardArea in pairs(self._tHandCardArea) do
        cardArea:clearCards()
    end
    for _, cardArea in pairs(self._tOutCardArea) do
        cardArea:clearCards()
    end
end

----------------------------------------
--设置牌区的通用配置
----------------------------------------
function CardLayer:setCardAreaNormalConf(cardArea, conf)
    cardArea:setLayoutType(conf.layoutType)
    cardArea:setLineCardCount(conf.lineCardCount)
    cardArea:setStartPosition(conf.startPosX, conf.startPosY)
    cardArea:setCardDistance(conf.cardDistanceX, conf.cardDistanceY)
    cardArea:setCarAddDistance(conf.cardAddDirectionX, conf.cardAddDirectionY)
end

----------------------------------------
--创建玩家手牌
----------------------------------------
function CardLayer:createHandCardArea(localSeat)
    local cardArea
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        cardArea = HandCardArea.new()
    else
        cardArea = CardArea.new()
    end
    local handCardConf = CardLayerConfig.HandCardConf[localSeat]
    self:setCardAreaNormalConf(cardArea, handCardConf)
    cardArea:setMaxCarDistance(handCardConf.maxCardDistanceX)
    cardArea:setScale(CardLayerConfig.HandCardScale[localSeat])
    self["_handCardPos" .. localSeat]:addChild(cardArea)
    self._tHandCardArea[localSeat] = cardArea
end

----------------------------------------
--创建玩家打出的牌
----------------------------------------
function CardLayer:createOutCardArea(localSeat)
    local cardArea = CardArea.new()
    self:setCardAreaNormalConf(cardArea, CardLayerConfig.OutCardConf[localSeat])
    cardArea:setScale(CardLayerConfig.OutCardScale)
    self["_outCardPos" .. localSeat]:addChild(cardArea)
    self._tOutCardArea[localSeat] = cardArea
end

----------------------------------------
--设置需要显示特殊颜色的牌
----------------------------------------
function CardLayer:setHandCardAreaSpecialColorCardIDs(localSeat, cardIDs, normalBomb)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:setSpecialColorCardIDs(cardIDs, normalBomb)
end

function CardLayer:setCardDisableCard(localSeat, cardIDs)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:setCardDisableCard(cardIDs)
end

function CardLayer:clearDisableCard(localSeat)
    if not self._tHandCardArea[localSeat] then
        return
    end
    self._tHandCardArea[localSeat]:clearDisableCard()
end

return CardLayer
