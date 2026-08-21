local GameCardLayer     = CF.gameClass("GameCardLayer", "game.BaseCardGame.Modules.CardLayer.CardLayer")

function GameCardLayer:getCSBPath()
    return "res/cocosStudio/Landlords/GameLayer/CSB/CardLayer.csb"
end

function GameCardLayer:getBindingInfo()
    local bindInfo = GameCardLayer.super.getBindingInfo(self)
    return bindInfo
end

function GameCardLayer:ctor(param)
    GameCardLayer.super.ctor(self, param)
end

function GameCardLayer:getProxyEvents()
    local eventTable = GameCardLayer.super.getProxyEvents(self) or {}
    eventTable[#eventTable+1] = {module = CF.roomData, eventKeyName = "EVENT_CARD_HOLDER_CHANGED", callBack = "onCardHolderChanged"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel"}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_LANDLORDS_BACK_STYLE_CHANGED", callBack = "onEventCardStyle"}
    return eventTable
end

function GameCardLayer:getAdaptationConfig()
    return
    {
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

function GameCardLayer:createHandCardArea(localSeat)
    GameCardLayer.super.createHandCardArea(self, localSeat)
    self["_handCardPos"..localSeat]:getParent():setLocalZOrder(99)
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

-- 手牌的位置
function GameCardLayer:getOutCardPanel(localSeat)
    return self["_outCardPos"..localSeat]
end

-- 显示隐藏地主标识
function GameCardLayer:setLandlordFlagVisible(localSeat, visible)
    local cardArea = self._tHandCardArea[localSeat]
    if cardArea then
        cardArea:setLandlordFlagVisible(visible)
    end
end

-- 显示隐藏明牌标识
function GameCardLayer:setShowHandFlagVisible(localSeat, visible)
    local cardArea = self._tHandCardArea[localSeat]
    if cardArea then
        cardArea:setShowHandFlagVisible(visible)
    end
end

function GameCardLayer:setHandCards(localSeat, cardIDs, bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    local cardStyle = 0
    if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni, nil, nil, cardStyle)
    -- self._tHandCardArea[localSeat]:updateCardsPositionAndOrder()
end

function GameCardLayer:setOutCards(localSeat, cardIDs, isShowFire)
    if not self._tOutCardArea[localSeat] then
        self:createOutCardArea(localSeat)
    end
    local cardStyle = 0
    if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tOutCardArea[localSeat]:setShowCards(cardIDs, nil, nil, isShowFire, cardStyle)
    -- self._tOutCardArea[localSeat]:updateCardsPositionAndOrder()
end

function GameCardLayer:onEventCardStyle()
    local changeStyle = 0
    if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
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