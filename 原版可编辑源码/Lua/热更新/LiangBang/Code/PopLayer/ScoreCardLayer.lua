local CURRENT_MOUDLE_NAME = ...
local PopLayer = import(".PopLayer")
local ScoreCardLayer = class("ScoreCardLayer",PopLayer)
local pathKeyWord = import("..Config.PathKeyWord",CURRENT_MOUDEL_NAME)
local KW_UI_ENDTYPE_CSB_PATH =      pathKeyWord.KW_PATH_POP_LAYER_ART_RESOURCE .. "/ScoreCardLayer.csb"

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_IMG_ENDTYPE = "KW_IMG_ENDTYPE"
local KW_NODE_SCORE_CARD = "KW_NODE_SCORE_CARD"

local UICardsArea = require('LiangBang/Code/CardLayer/UICardsArea')

local endType = 
{
    win = 1,
    lose = 2,
    beyond = 3,
}

function ScoreCardLayer:ctor()
    ScoreCardLayer.super.ctor(self)
    self._cardPanel = nil
end

function ScoreCardLayer:init()
    self._csbResourcePath = KW_UI_ENDTYPE_CSB_PATH
    ScoreCardLayer.super.init(self)
    local bg = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_ROOT_LAYER)
    if bg ~= nil then
        bg:setTouchEnabled(true)
    end
    XH.GT.UIFunction.addTouchEventListener(self._popLayer,KW_ROOT_LAYER,
        function (send,eventType)
            self.onTouchEventBackGround(self,send,eventType)
        end)
end

function ScoreCardLayer:onTouchEventBackGround(send,eventType)
    if eventType == ccui.TouchEventType.began then     
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- XH.GT.GameSound.playSoundCloseWindow()
    self:showLayer(false)
end

function ScoreCardLayer:setOutScoreCard(cardsIDs)
    local panelCard = XH.GT.UIFunction.seekWidgetByName(self._popLayer,KW_NODE_SCORE_CARD)
    if panelCard then
        panelCard:setScale(1.2)
        panelCard:setVisible(true)
        self._cardPanel = UICardsArea:new()
        self._cardPanel:init(panelCard)
        self._cardPanel:setCanTouch(false)
        self._cardPanel:setCheckDistance(50)
        self._cardPanel:setMaxCardsCount(8)
        self._cardPanel:setCardsDistance(70,100)
        self._cardPanel:setArrangementWay(UICardsArea.CardArrangement.Horizontal)
        self._cardPanel:setCardsIncreaseDirection(UICardsArea.CardIncreaseDirectionX.Right,UICardsArea.CardIncreaseDirectionY.Down)
        self._cardPanel:setStartPos(0,0)
        self._cardPanel:setCards(cardsIDs)
        self._cardPanel:arrangeCards()
    end
end

return ScoreCardLayer