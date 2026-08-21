
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local GameCardLayer = CF.gameClass("GameCardLayer", "game.BaseCardGame.Modules.CardLayer.CardLayer")
local Card = CF.gameRequire("Modules.CardLayer.Card")
local KW_CSB_GAME_CARD_LAYER = "res/cocosStudio/ShutCards/BaseCardLayer/CSB/BaseCardLayer.csb"

function GameCardLayer:getCSBPath()
    return KW_CSB_GAME_CARD_LAYER
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)

    self:initEvents()
end

function GameCardLayer:initEvents()
    self._gameManagerProxy = cc.EventProxy.new(CF.roomData, self):addEventListener(CF.roomData.EVENT_CARD_HOLDER_CHANGED, handler(self, self.onCardHolderChanged))
    self._settingDataProxy = cc.EventProxy.new(CF.settingData, self):addEventListener(CF.settingData.EVENT_CLEAR_MODEL, handler(self, self.onEventClearModel))
    self._settingData2Proxy = cc.EventProxy.new(CF.settingData, self):addEventListener(CF.settingData.EVENT_CARD_BACK_STYLE_CHANGED, handler(self, self.onEventCardStyle))
end

function GameCardLayer:onExit()
    GameCardLayer.super.onExit(self)
    if self._gameManagerProxy then
        self._gameManagerProxy:removeAllEventListeners()
        self._gameManagerProxy = nil
    end
    if self._settingDataProxy then
        self._settingDataProxy:removeAllEventListeners()
        self._settingDataProxy = nil
    end
    if self._settingData2Proxy then
        self._settingData2Proxy:removeAllEventListeners()
        self._settingData2Proxy = nil
    end
end

function GameCardLayer:getAdaptationConfig()
    return {
        {node = self._outCardPos1, bRight = false, bHalf = false},
        {node = self._handCardPos1, bRight = false, bHalf = false},
        {node = self._outCardPos3, bRight = true, bHalf = false},
        {node = self._handCardPos3, bRight = true, bHalf = false},
    }
end

function GameCardLayer:onTouchEventTouchLayer(send, eventType)
    GameCardLayer.super.onTouchEventTouchLayer(self, send, eventType)

    if CF.game:getModule("GameLayer") then
        CF.game:getModule("GameLayer"):onTouchCardLayerBg()
    end
end

function GameCardLayer:showLeftAndRightHandCardArea(bShow)
    self._handCardPos1:setVisible(bShow)
    self._handCardPos3:setVisible(bShow)
end

----------------------------------------
--创建玩家手牌
----------------------------------------
function GameCardLayer:createHandCardArea(localSeat)
    GameCardLayer.super.createHandCardArea(self, localSeat)
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        self["_handCardPos" .. localSeat]:getParent():setLocalZOrder(99)
    end
end

function GameCardLayer:onCardHolderChanged(event)
    self:updateCardHolder()
end

function GameCardLayer:onEventClearModel(event)
    self:updateCardHolder()
end

function GameCardLayer:updateCardHolder()
    local ypqData = CF.roomData:getSelfCardHolderData() or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showCardHolder(self:getChildByName("Layer"), CF.roomData:getSelfLocalSeat(), ypqData.ypq_url, ypqData.ypq)
end

----------------------------------------
--设置手牌数据
--bShowAni表示是否显示动画效果（发牌）
----------------------------------------
function GameCardLayer:setHandCards(localSeat, cardIDs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    local sizeType = Card.SIZETYPE.NORMAL
    if CF.settingData and CF.settingData:getCardBackStyle() == 2 then
        sizeType = Card.SIZETYPE.BIG
    end
    local pos
    if localSeat == CardLayerConfig.LocalSeat.Bottom and sizeType == Card.SIZETYPE.BIG then
        self._tHandCardArea[localSeat]:setPositionY(20)
    else
        self._tHandCardArea[localSeat]:setPositionY(0)
    end
    local scale = (sizeType == Card.SIZETYPE.BIG) and CardLayerConfig.HandCardScaleBig[localSeat] or CardLayerConfig.HandCardScale[localSeat]
    self._tHandCardArea[localSeat]:setScale(scale)
    local cardStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == 3 then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni, sizeType, nil, cardStyle)
end

----------------------------------------
--设置打出牌数据
----------------------------------------
function GameCardLayer:setOutCards(localSeat, cardIDs)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    local sizeType = Card.SIZETYPE.NORMAL
    if CF.settingData and CF.settingData:getCardBackStyle() == 2 then
        sizeType = Card.SIZETYPE.BIG
    end
    self:setCardAreaNormalConf(self._tOutCardArea[localSeat], (sizeType == Card.SIZETYPE.BIG) and CardLayerConfig.OutCardConfBig[localSeat] or CardLayerConfig.OutCardConf[localSeat])
    local cardStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == 3 then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, false, sizeType, nil, cardStyle)
    -- self._tOutCardArea[localSeat]:updateCardsPositionAndOrder()
end

function GameCardLayer:onEventCardStyle()
    local changeStyle = 0
    if CF.settingData and CF.settingData:getCardBackStyle() == 3 then
        changeStyle = XH.XG_CARD_STYLE
    end
    local cardAreas = {
        self._tHandCardArea,
        self._tOutCardArea,
    }
    for _, cardArea in ipairs(cardAreas) do
        for _, v in pairs(cardArea) do
            if v then
                v:setCardStyle(changeStyle)
            end
        end
    end
end

return GameCardLayer
