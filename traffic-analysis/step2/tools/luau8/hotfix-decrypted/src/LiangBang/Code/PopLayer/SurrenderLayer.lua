local PopLayer = import(".PopLayer")
local SurrenderLayer = class("SurrenderLayer",PopLayer)
local CURRENT_MOUDLE_NAME = ...
local pathKeyWord = import("..Config.PathKeyWord",CURRENT_MOUDEL_NAME)
local KW_UI_SET_CSB_PATH                      = pathKeyWord.KW_PATH_POP_LAYER_ART_RESOURCE .. "/req_touxiang_or_maipai.csb"

local KW_BTN_SURRENDER = "KW_BTN_SURRENDER"
local KW_BTN_BUYCARD = "KW_BTN_BUYCARD"
local KW_BUTTON_HINT_CLOSE = "KW_BUTTON_HINT_CLOSE"
local KW_FRIEND_NAME = "KW_FRIEND_NAME"

function SurrenderLayer:ctor()
    SurrenderLayer.super.ctor(self)
end

function SurrenderLayer:init()
    
    self._canTouchBackground = false
    self._csbResourcePath = KW_UI_SET_CSB_PATH
    SurrenderLayer.super.init(self)
    --投降
    Game.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_SURRENDER, handler(self, self.reqSurrenderOK))
    --买牌
    Game.UIFunction.addTouchEventListener(self._popLayer, KW_BTN_BUYCARD, handler(self, self.reqBuyCardOK))

    Game.UIFunction.addTouchEventListener(self._popLayer, KW_BUTTON_HINT_CLOSE, handler(self, self.onTouchEventClose))
    --默认隐藏 关闭按钮
    Game.UIFunction.setVisible(self._popLayer, KW_BUTTON_HINT_CLOSE, false)
end

function SurrenderLayer:setTextToPanel(text)
    if text ~= "" then
        Game.UIFunction.setText(self._popLayer, KW_FRIEND_NAME, text)
    end
end

function SurrenderLayer:isShowSurrenderBtn(isShow)

    Game.UIFunction.setVisible(self._popLayer, KW_BTN_SURRENDER, isShow)
    Game.UIFunction.setVisible(self._popLayer, KW_BTN_BUYCARD, isShow)
end

function SurrenderLayer:showCloseBtn(isShow)
    Game.UIFunction.setVisible(self._popLayer, KW_BUTTON_HINT_CLOSE, isShow)
end

function SurrenderLayer:showTextInfo(isShow)
    Game.UIFunction.setVisible(self._popLayer, "KW_TEXT_INFO", isShow)
    Game.UIFunction.setVisible(self._popLayer, "KW_TEXT_DUIYOU", isShow)
end

function SurrenderLayer:reqSurrenderOK(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))

    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("SurrenderLayer.SurrenderOK")
    eventDispatcher:dispatchEvent(event)
    self:showLayer(false)
end

function SurrenderLayer:reqBuyCardOK(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))

    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("SurrenderLayer.BuyCard")
    eventDispatcher:dispatchEvent(event)

    self:showLayer()
end

function SurrenderLayer:onTouchEventClose(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))

    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:showLayer(false)
end

function SurrenderLayer:closeSurrenderLayer()
    self:showLayer(false)
end

function SurrenderLayer:closeSurrenderLayerDelay()
    local delay = cc.DelayTime:create(2)
    local cfk = cc.CallFunc:create(function()
        self:showLayer(false)
    end)
    local seq = cc.Sequence:create(delay , cfk)
    if self._popLayer then
        self._popLayer:runAction(seq)
    end
end

function SurrenderLayer:setLeftTime(time)
    local timeNode = ccui.Helper:seekWidgetByName(self._popLayer, "KW_TEXT_TIME")
    if timeNode then
        timeNode:setString(tonumber(time))
    end
    local nTime = time
    if timeNode then
        timeNode:stopAllActions()
        timeNode:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1),
        cc.CallFunc:create(function()
            nTime = nTime - 1
            if nTime >= 0 then
                local strTime = tonumber(string.format("%02d",nTime))
                timeNode:setString(tonumber(nTime))
            else
                self:showLayer(false)
            end
        end))))
    end
   
end

function SurrenderLayer:showLayer(isShow)
    if self._popLayer then
        self._popLayer:setVisible(isShow)
    end
    if isShow == false then
        local timeNode = ccui.Helper:seekWidgetByName(self._popLayer, "KW_TEXT_TIME")
        if timeNode then
            timeNode:stopAllActions()
        end
        if self._popLayer then
            self._popLayer:stopAllActions()
        end
    end
end

return SurrenderLayer�