local UISureCard = class("UISureCard")
local CURRENT_MODULE_NAME = ...
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)
local KW_UI_SURECARD_CSB_PATH = GameSceneDefine.KW_GAME_CSB_PATH .. "SureCardPanel.csb"
local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_BTN_CLOSE = "KW_BTN_CLOSE"
local KW_BTN_SURECARD = "KW_BTN_SURECARD_"
local KW_PANEL_SELECT = "KW_PANEL_SELECT"
local KW_UI_SURECARD = "KW_UI_SURECARD"
local KW_TXT_TYPE = "KW_TXT_TYPE"

local UICardsArea = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")
local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)

UISureCard.SureCards = 
    {
        touchEnable = false,
        checkDistance = 0,
        maxCardsCount = 27,
        cardsDistanceX = 30,
        cardsDistanceY = 40,
        arrangementWay = UICardsArea.CardArrangement.Horizontal,
        cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
        cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
        startPosX = 0,
        startPosY = 0,
    }

function UISureCard:ctor()
    self._rootNode = nil
    self._sureCards = {}
    self._sureCardIDs = {}
end

function UISureCard:init(node)
    local csbNode = cc.CSLoader:createNode(KW_UI_SURECARD_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_PANEL_SELECT,self,self.onTouchEventLayer)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_CLOSE,self,self.onTouchEventClose)
    for i = 1,2 do 
        Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_SURECARD .. i,self,self.onTouchEventSureCards)
    end
    
end

function UISureCard:showSureCardPanel(bShow,cardGroup)
    if cardGroup == nil or #cardGroup < 2 then
        bShow = false
    end
    
    if bShow then
        local sureCardIDs = {}
        local sureCardType = {}
        for i = 1,#cardGroup do
            sureCardIDs[i] = {}
            sureCardType[i] = cardGroup[i].tType
            for j = 1,#cardGroup[i].Cards do
                sureCardIDs[i][j] = {}
                sureCardIDs[i][j] = cardGroup[i].Cards[j]:getID()
            end
            self:setSureCards(sureCardIDs,i)
            self:setSureCardType(sureCardType,i)
            self._sureCardIDs[i] = sureCardIDs[i]
        end
        local sureCardPanelBG = Game.UIFunction.seekWidgetByName(self._rootNode,KW_PANEL_SELECT)
        if sureCardPanelBG then
            sureCardPanelBG:setVisible(true)
            sureCardPanelBG:setEnabled(true)
        end
    else
        local sureCardPanelBG = Game.UIFunction.seekWidgetByName(self._rootNode,KW_PANEL_SELECT)
        if sureCardPanelBG then
            sureCardPanelBG:setVisible(false)
            sureCardPanelBG:setEnabled(false)
        end
        self:clearSureCards()
    end
end



function UISureCard:setSureCards(cards,index)
    if self._sureCards then
        if self._sureCards[index] then
            self._sureCards[index]:destroyCards()
        end
    end
    local sureCardPanel = Game.UIFunction.seekWidgetByName(self._rootNode,KW_BTN_SURECARD .. index)
    if sureCardPanel then
        local sureCard = Game.UIFunction.seekWidgetByName(sureCardPanel,KW_UI_SURECARD)
        if sureCard then
            self._sureCards[index] = UICardsArea:new()
            self._sureCards[index]:init(sureCard)
            self._sureCards[index]:setCanTouch(self.SureCards.touchEnable)
            self._sureCards[index]:setCheckDistance(self.SureCards.checkDistance)
            self._sureCards[index]:setMaxCardsCount(self.SureCards.maxCardsCount)
            self._sureCards[index]:setCardsDistance(self.SureCards.cardsDistanceX,self.SureCards.cardsDistanceY)
            self._sureCards[index]:setArrangementWay(self.SureCards.arrangementWay)
            self._sureCards[index]:setCardsIncreaseDirection(self.SureCards.cardIncreaseDirectionX,self.SureCards.cardIncreaseDirectionY)
            self._sureCards[index]:setStartPos(self.SureCards.startPosX,self.SureCards.startPosY)
            self._sureCards[index]:setCards(cards[index])
            self._sureCards[index]:arrangeCards()
        end
    end
end

function UISureCard:setSureCardType(type,index)
    local sureCardPanel = Game.UIFunction.seekWidgetByName(self._rootNode,KW_BTN_SURECARD .. index)
    if sureCardPanel then
        local sureCardType = Game.UIFunction.seekWidgetByName(sureCardPanel,KW_TXT_TYPE)
        if sureCardType then
            local typeText = CardAlgorithm:getStringByCardType(type[index])
            sureCardType:setString(typeText)
        end
    end
end

function UISureCard:clearSureCards()
    if self._sureCards then
        for i = 1,#self._sureCards do
            if self._sureCards[i] then
                self._sureCards[i]:destroyCards()
            end
        end
    end
end

function UISureCard:onTouchEventSureCards(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playButtonClick()
    local index = Game.StringFunction.getNumberSuffixByString(send:getName())
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UISureCard.onEventSureCards")
    event.outCardIDs = self._sureCardIDs[index]
    event.outIndex = index
    eventDispatcher:dispatchEvent(event)
    self:showSureCardPanel(false)
end

function UISureCard:onTouchEventLayer(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playSoundCloseWindow()
    self:showSureCardPanel(false)
end

function UISureCard:onTouchEventClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    Game.GameSound.playSoundCloseWindow()
    self:showSureCardPanel(false)
end




return UISureCard