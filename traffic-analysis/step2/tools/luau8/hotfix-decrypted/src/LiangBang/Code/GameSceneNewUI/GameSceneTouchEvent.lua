local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local CardAlgorithm = import("..GameAlgorithm.CardAlgorithm",CURRENT_MODULE_NAME)
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)
local SmartSelectCard = import("..GameAlgorithm.SmartSelectCards",CURRENT_MODULE_NAME)

function GameScene:onTouchEventBackGround(send,eventType) 
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    SmartSelectCard:reset()
    self._uiMenuIsIn = false
    self:showMenu(false)
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showInfoPanel(i,false)
    end
    if self._isRuleShow then
        local ruleInfoBtn = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_ROOM_RULE_BTN_RETRACT)
        self:onTouchEventRuleInfoRetract(ruleInfoBtn,ccui.TouchEventType.ended)
    end
end

function GameScene:onTouchEventRuleInfoShow(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(212,28,34))
    elseif eventType == ccui.TouchEventType.ended then  
        if self._isRuleShow == false then
            self._isRuleShow = true
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_RETRACT", true)
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_SHOW", false)
            local scaleX = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_LAYOUT"):getScaleX()        
            local ruleListNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BG")
            local distance = ruleListNode:getContentSize().width*scaleX       
            send:getParent():runAction(cc.MoveBy:create(0.2, cc.p(distance, 0)))
            ruleListNode:runAction(cc.FadeIn:create(0.2))
        end
        send:setColor(cc.c3b(255,255,255))
    elseif eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end
end

function GameScene:onTouchEventRuleInfoRetract(send,eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(212,28,34))                 
    elseif eventType == ccui.TouchEventType.ended then 
        if self._isRuleShow == true then
            self._isRuleShow = false
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_RETRACT", false)
            Game.UIFunction.setVisible(self:getRootNode(), "KW_ROOM_RULE_BTN_SHOW", true)
            local scaleX = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_LAYOUT"):getScaleX()
            local ruleListNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BG")
            local distance = ruleListNode:getContentSize().width * scaleX  
            send:getParent():runAction(cc.MoveBy:create(0.2, cc.p(-distance, 0)))
            ruleListNode:runAction(cc.FadeOut:create(0.2))
        end
        send:setColor(cc.c3b(255,255,255))
    elseif eventType == ccui.TouchEventType.canceled then
        send:setColor(cc.c3b(255,255,255))
    end
end


return GameScene
�