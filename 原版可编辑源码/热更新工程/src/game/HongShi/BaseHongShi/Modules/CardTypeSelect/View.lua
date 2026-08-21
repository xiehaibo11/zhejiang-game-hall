local CardTypeSelectUI = class("CardTypeSelectUI", CF.ViewBase)
local CardArea = CF.gameRequire("Modules.CardLayer.CardArea")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardLogic = CF.gameRequire("Logic.CardLogic")

function CardTypeSelectUI:ctor(param)
    CardTypeSelectUI.super.ctor(self,param)
    self._cardTypeData = {}
    self._cardTypeArea = {}
    self._selectPanel:setVisible(false)
end

function CardTypeSelectUI:getCSBPath()
    return "res/cocosStudio/HongShi/GameLayer/CSB/CardTypeSelectLayer.csb"
end

function CardTypeSelectUI:getBindingInfo()
    return {
        ["_KW_PANEL_CARDTYPE_SELECT"] = {varName="_selectPanel"},
        ["_KW_IMG_CARDTYPE_SELECT_BG"] = {varName="_selectBg",},
        ["_KW_PANEL_CARDTYPE_1"] = {varName="_cardType1",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSelectCardType1"},
        ["_KW_PANEL_CARDTYPE_2"] = {varName="_cardType2",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSelectCardType2"},
        ["_KW_BTN_CARDTYPE_SELECT_CLOSE"] = {varName="_closeBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCloseBtnClick"},
    }
end

local KW_CARDAREA_SCALE = 0.65
function CardTypeSelectUI:setCardTypeData(cardIDs, cardTypeData)
    if #cardTypeData ~= 2 then
        return 
    end

    local cardConf = CardLayerConfig.OutCardConf[CardLayerConfig.LocalSeat.Bottom]
    local cardCount = #cardIDs
    local cardWidth = (cardCount + 3)*cardConf.cardDistanceX
    cardWidth = cardWidth*KW_CARDAREA_SCALE

    local panelSize = self._selectBg:getContentSize()
    self._selectBg:setContentSize(cc.size(cardWidth*2 + 80, panelSize.height))
    self._closeBtn:setPositionX(30 + cardWidth)
    local panelSize1 = self._cardType1:getContentSize()
    self._cardType1:setContentSize(cc.size(cardWidth, panelSize1.height))
    self._cardType1:setPositionX(-20-cardWidth/2)
    local panelSize2 = self._cardType1:getContentSize()
    self._cardType2:setContentSize(cc.size(cardWidth, panelSize2.height))
    self._cardType2:setPositionX(20+cardWidth/2)
    
    self._cardTypeData = {}
    for i, obj in ipairs(cardTypeData) do
        local outCardType = obj.type
        local jokerReplaceData = obj.jokerReplaceData
        local finalCardIDs = CardLogic.getCardIDsWithJokerReplaceData(cardIDs, jokerReplaceData)
        self._cardTypeData[i] = {cardType = outCardType, finalCardIDs = finalCardIDs}
        if not self._cardTypeArea[i] then
            local cardArea = CardArea.new()
            cardArea:setAutoPositionBool(false)
            cardArea:setLayoutType(cardConf.layoutType)
            cardArea:setLineCardCount(cardConf.lineCardCount)
            cardArea:setStartPosition(cardConf.startPosX, cardConf.startPosY)
            cardArea:setCardDistance(cardConf.cardDistanceX, cardConf.cardDistanceY)
            cardArea:setCarAddDistance(cardConf.cardAddDirectionX, cardConf.cardAddDirectionY)
            cardArea:setScale(KW_CARDAREA_SCALE)
            cardArea:setPositionY(panelSize1.height/2)
            self["_cardType"..i]:addChild(cardArea)
            self._cardTypeArea[i] = cardArea
        end
        self._cardTypeArea[i]:setShowCards(finalCardIDs)
        self._cardTypeArea[i]:setPositionX(cardWidth/2)
    end
    self._selectPanel:setVisible(true)
end

function CardTypeSelectUI:onSelectCardType1(send, eventType)
    self:sendOutCard(1)
end

function CardTypeSelectUI:onSelectCardType2(send, eventType)
    self:sendOutCard(2)
end

function CardTypeSelectUI:sendOutCard(index)
    if not self._cardTypeData[index] then
        return 
    end

    local outCardType = self._cardTypeData[index].cardType
    local finalCardIDs = self._cardTypeData[index].finalCardIDs
    local gameCardGroup = {}
    gameCardGroup.tType = outCardType
    gameCardGroup.Cards = finalCardIDs

    CF.game:getModule("GameLayer"):sendOutCard(gameCardGroup)

    self._selectPanel:setVisible(false)
end

function CardTypeSelectUI:onCloseBtnClick(send, eventType)
    self._selectPanel:setVisible(false)
end

return CardTypeSelectUI