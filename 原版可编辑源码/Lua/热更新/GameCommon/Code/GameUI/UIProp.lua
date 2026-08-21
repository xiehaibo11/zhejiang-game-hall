local UIProp = class("UIProp")
local CURRENT_MODULE_NAME = ...
local GameCommonDefine = require("GameCommon.Code.GameCommonDefine")
local KW_UI_PROP_CSB_PATH = GameCommonDefine.KW_PATH_RESOUCE_CSB .. "/Prop/Prop.csb"

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_PANEL_PROP = "KW_PANEL_PROP"
local KW_POS_PROP_PANEL_OUT = "KW_POS_PROP_PANEL_OUT"
local KW_POS_PROP_PANEL_IN = "KW_POS_PROP_PANEL_IN"
local KW_TEXT_REMAIND_GOLD = "KW_TEXT_REMAIND_GOLD"
local KW_TEXT_GOLD_LIMIT = "KW_TEXT_GOLD_LIMIT"
local KW_BTN_PROP = "KW_BTN_PROP_"
local KW_UI_CROSS = "KW_UI_CROSS"
local KW_PANEL_HEAD = "KW_PANEL_HEAD_"
local KW_UI_HEAD_PIC = "KW_UI_HEAD_PIC"
local KW_UI_PROP_READY_PIC = "ToolAin_%d_2.png"
local KW_UI_PROP_UNREADY_PIC = "ToolAin_%d_1.png"

function UIProp:ctor()
    self._rootNode = nil
    self._isIn = false
    self._propIndex = 0
    self._propReady = false
    self._remaindGold = 0
    self._seatThrowing = 0
    self._playingAniCount = 0
end

function UIProp:init(node)
    local csbNode = cc.CSLoader:createNode(KW_UI_PROP_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    local propNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_PANEL_PROP)
    if propNode then
        local childrenNode = propNode:getChildren()
    	for i = 1,#childrenNode do
            if string.find(childrenNode[i]:getName(),KW_BTN_PROP .. i) then
                childrenNode[i]:addTouchEventListener(handler(self,self.onTouchEventProp))
            end
    	end
    end  
    --self._rootNode:addTouchEventListener(handler(self,self.onTouchEventBg))
end

function UIProp:setRemaindGold(goldnum)
    self._remaindGold = goldnum
    local textNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_TEXT_REMAIND_GOLD)
    if textNode then
        textNode:setString(goldnum)
    end
end

function UIProp:getRemaindGold()
    return self._remaindGold 
end

function UIProp:getPropIndex()
    return self._propIndex 
end

function UIProp:isPropReady()
    return self._propReady 
end

function UIProp:isPropLayerIn()
    return self._isIn 
end

function UIProp:setSeatThrowing(seat)
    self._seatThrowing = seat
end

function UIProp:getSeatThrowing()
    return self._seatThrowing 
end

function UIProp:isThrowing()
    return self._seatThrowing > 0
end

function UIProp:addPlayingAniCount()
    self._playingAniCount = self._playingAniCount + 1
end

function UIProp:decPlayingAniCount()
    self._playingAniCount = self._playingAniCount - 1
end

function UIProp:getPlayingAniCount()
    return self._playingAniCount
end

function UIProp:onTouchEventProp(send,eventType)
    if not self:isPropLayerIn() then
        return
    end
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local propIndex = Game.StringFunction.getNumberSuffixByString(send:getName())    
    if self:isThrowing() and propIndex == self._propIndex then
       return
    end
    local selfLocalseat = Game.FrameworkFunction.getSelfLocalSeat()
    if propIndex == self._propIndex then
        self._propIndex = 0
        self._propReady = not self._propReady
        send:loadTexture(string.format(KW_UI_PROP_UNREADY_PIC,propIndex),ccui.TextureResType.plistType)        
    else
        Game.UIFunction.loadTexture(self._rootNode,KW_BTN_PROP .. self._propIndex,string.format(KW_UI_PROP_UNREADY_PIC,self._propIndex),ccui.TextureResType.plistType)
        self._propIndex = propIndex
        self._propReady = true
        send:loadTexture(string.format(KW_UI_PROP_READY_PIC,propIndex),ccui.TextureResType.plistType)
        Game.UIFunction.setPosition(self._rootNode,KW_UI_CROSS,cc.p(send:getPosition()))   
    end
    local crossNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_CROSS)
    if crossNode then
        crossNode:setVisible(self._propReady)
        crossNode:stopAllActions()
        if self._propReady == true then 
            local scaleTo1 = cc.ScaleTo:create(0.5,0.9,0.9)
            local scaleTo2 = cc.ScaleTo:create(0.5,1.0,1.0)
            local sequence = cc.Sequence:create(scaleTo1,scaleTo2)
            crossNode:runAction(cc.RepeatForever:create(sequence))                
        end
    end
    if self:getPlayingAniCount() == 0 or self._propReady == false then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        local event = cc.EventCustom:new("UIProp.Prop")
        event.propIndex = self._propIndex
        event.propReady = self._propReady
        eventDispatcher:dispatchEvent(event)
    end
end

function UIProp:onTouchEventBg(send,eventType)   
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    self:showPropPanel(false)
    if self._propReady == true then
        local findNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_BTN_PROP .. self._propIndex)
        if findNode then
            self:onTouchEventProp(findNode,ccui.TouchEventType.ended)
        end        
    end
end
        
function UIProp:showPropPanel(bShow)
    if self._rootNode == nil then
        return
    end
    if self._isIn == bShow then
        return
    end 
    local propPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_PANEL_PROP)
    if propPanel then
        propPanel:stopAllActions()
        if false == bShow then
            if self._propReady == true then
                local findNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_BTN_PROP .. self._propIndex)
                if findNode then
                    self:onTouchEventProp(findNode,ccui.TouchEventType.ended)
                end        
            end            
            local outNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_POS_PROP_PANEL_OUT)
            if outNode then
                local action = cc.Sequence:create(cc.MoveTo:create(0.2,cc.p(outNode:getPositionX(),outNode:getPositionY())),
                    cc.CallFunc:create(function()
                        self._rootNode:setVisible(false)
                    end))
                propPanel:runAction(action)
            end
        else
            self._rootNode:setVisible(true)
            local inNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_POS_PROP_PANEL_IN)
            if inNode then
                local action = cc.Sequence:create(cc.MoveTo:create(0.2,cc.p(inNode:getPositionX(),inNode:getPositionY())))
                propPanel:runAction(action)
            end
        end
    end
    self._isIn = bShow
end

function UIProp:showGoldLimitText(bShow)
    local textNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_TEXT_GOLD_LIMIT)
    if textNode then
        textNode:setVisible(bShow)
    end
end


return UIProp