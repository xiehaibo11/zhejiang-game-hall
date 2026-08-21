local CURRENT_MODULE_NAME    = ...
local UISpecfCardLayer = class("UISpecfCardLayer")
local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MODULE_NAME)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)
local UICardDefine = import(".UICardDefine")

local KW_UI_HAND_CARDS          =   "KW_UI_HAND_CARDS"
local KW_PANEL_SPECF_CARDS      =   "KW_PANEL_SPECF_CARDS"
local KW_BTN_SEND               =   "KW_BTN_SEND"
local KW_BTN_CANCAL             =   "KW_BTN_CANCAL"
local KW_BTN_CLOSE              =   "KW_BTN_CLOSE"
local KW_BTN_RANDOM             =   "KW_BTN_RANDOM"
local KW_SPECF_CARD_            =   "KW_SPECF_CARD_"
local KW_HAND_CARD_             =   "KW_HAND_CARD_"

function UISpecfCardLayer:ctor()
    self._rootNode = nil
    self._specfCardTable = {}
    self._handCardTable = {}
end

function UISpecfCardLayer:init(node)
    local csbNode = cc.CSLoader:createNode(UICardDefine.KW_UI_SPECF_CARD_LAYER_CSB_PATH)

    self._rootNode = csbNode:getChildByName(GameSceneDefine.KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)

    local specfCardPanel = ccui.Helper:seekWidgetByName(self._rootNode, KW_PANEL_SPECF_CARDS)
    if specfCardPanel then
        local children = specfCardPanel:getChildren()
        for i = 1 , #children do 
            children[i]:addTouchEventListener(handler(self,self.onTouchEventSpecfCard))            
        end
    end

    local handCardPanel = ccui.Helper:seekWidgetByName(self._rootNode, KW_UI_HAND_CARDS)
    if handCardPanel then
        local children = handCardPanel:getChildren()
        for i = 1, #children do
            children[i]:addTouchEventListener(handler(self,self.onTouchEventHandCard))
        end
    end

    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_SEND,self,self.onTouchEventSendSpecf)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_CANCAL,self,self.onTouchEventSpecfCancal)
end

function UISpecfCardLayer:onTouchEventSpecfCard(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9 * 0.53)
        send:setColor(cc.c3b(160,160,160))
        --Game.GameSound.playTouchCard()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(0.53)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end 

    local strName = send:getName()
    local specfCardID = Game.StringFunction.getNumberSuffixByString(strName)
    if self._specfCardTable[specfCardID] > 0 then
        local findHandCard = ccui.Helper:seekWidgetByName(self._rootNode, KW_HAND_CARD_ .. #self._handCardTable + 1)
        if findHandCard then
            self._specfCardTable[specfCardID] = self._specfCardTable[specfCardID] - 1
            self._handCardTable[#self._handCardTable + 1] = specfCardID
        end
    end
    self:showHandCard()
    self:showSpecfCard()
end

function UISpecfCardLayer:onTouchEventHandCard(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
        --Game.GameSound.playTouchCard()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local strName = send:getName()
    local touchIndex = Game.StringFunction.getNumberSuffixByString(strName)
    local specfMahID = self._handCardTable[touchIndex]
    self._specfCardTable[specfMahID] = self._specfCardTable[specfMahID] + 1
    table.remove(self._handCardTable,touchIndex)
    self:showHandCard()
    self:showSpecfCard()
end

function UISpecfCardLayer:onTouchEventSendSpecf(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local event = cc.EventCustom:new("UISpecfCardLayer.SpecfCard")
    event.cards = self._handCardTable
    cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
    self:clearHandCard()
    self:showSpecfLayer(false)
end

function UISpecfCardLayer:onTouchEventSpecfCancal(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    for i = 1, #self._handCardTable do
        self._specfCardTable[self._handCardTable[i]] = self._specfCardTable[self._handCardTable[i]] + 1
    end
    self:clearHandCard()
    self:showSpecfCard()
end

function UISpecfCardLayer:setAllCards(cards,cardsCount)
    cardsCount = cardsCount or #cards
    self._specfCardTable = {}
    for k,v in pairs(MyCard.CardID) do
        self._specfCardTable[v] = 0
    end
    for i = 1,cardsCount do
        self._specfCardTable[cards[i]] = (self._specfCardTable[cards[i]] or 0) + 1
    end

    self:showSpecfCard()
end

function UISpecfCardLayer:showSpecfLayer(bShow)
    if self._rootNode then
        self._rootNode:setVisible(bShow)
    end
end

function UISpecfCardLayer:showHandCard()
    local handMahPanel = ccui.Helper:seekWidgetByName(self._rootNode, KW_UI_HAND_CARDS)
    if handMahPanel then
        local children = handMahPanel:getChildren()
        for j = 1, #children do
            if j <=  #self._handCardTable then
                children[j]:setVisible(true)   
                children[j]:loadTexture(string.format("%s%d.png","Card_", self._handCardTable[j]),ccui.TextureResType.plistType)         
            else
                children[j]:setVisible(false)
            end         
        end
    end
end

function UISpecfCardLayer:showSpecfCard()
    local specfMahPanel = ccui.Helper:seekWidgetByName(self._rootNode, KW_PANEL_SPECF_CARDS)
    if specfMahPanel then
        local children = specfMahPanel:getChildren()
        for j = 1, #children do
            local strName = children[j]:getName()
            local specfMahID = Game.StringFunction.getNumberSuffixByString(strName)
            if self._specfCardTable[specfMahID] == 0 then
                children[j]:setTouchEnabled(false)
                children[j]:setColor(cc.c3b(160,160,160))
            else
                children[j]:setTouchEnabled(true)
                children[j]:setColor(cc.c3b(255,255,255))
            end    
        end
    end
end

function UISpecfCardLayer:clearHandCard()
    for i = 1, #self._handCardTable do
        local findMah = ccui.Helper:seekWidgetByName(self._rootNode, KW_HAND_CARD_ .. i)
        if findMah then
            findMah:setVisible(false)        
        end    
    end
    self._handCardTable = {}
end

return UISpecfCardLayer