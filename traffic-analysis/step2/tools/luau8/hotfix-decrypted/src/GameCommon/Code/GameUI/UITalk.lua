local UITalk = class("UITalk")
local CURRENT_MODULE_NAME = ...
local GameCommonDefine = require("GameCommon.Code.GameCommonDefine")
local KW_UI_TALK_CSB_PATH = GameCommonDefine.KW_PATH_RESOUCE_CSB .. "/GameTalk.csb"


local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_TALK_PANEL = "KW_TALK_PANEL"
local KW_TALK_PANEL_OUT_POS = "KW_TALK_PANEL_OUT_POS"
local KW_TALK_PANEL_IN_POS = "KW_TALK_PANEL_IN_POS"
local KW_TALK_TEXT = "KW_TALK_TEXT"
local KW_SCROLL_VIEW = "KW_SCROLL_VIEW"
local KW_BTN_TALK = "KW_BTN_TALK_"
function UITalk:ctor()
    self._rootNode = nil
    self._defaultItem = nil
    self._listPanel = nil
    self._gameID = 0
end

function UITalk:init(node,gameid)
    local strCSB = GameCommonDefine.KW_PATH_RESOUCE_CSB .. "/Talk/Talk.csb"
    if gameid ~= nil then
        self._gameID = gameid
        strCSB = GameCommonDefine.KW_PATH_RESOUCE_CSB .. "/Talk/Talk_" .. gameid .. ".csb"
        if cc.FileUtils:getInstance():isFileExist(strCSB) == false then
            strCSB = GameCommonDefine.KW_PATH_RESOUCE_CSB .. "/Talk/Talk.csb"
        end
    end
    local csbNode = cc.CSLoader:createNode(strCSB)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    local scrollView = ccui.Helper:seekWidgetByName(self._rootNode,KW_SCROLL_VIEW)
    if scrollView then
        local childrenNode = scrollView:getChildren()
    	for i = 1,#childrenNode do
    		if string.find(childrenNode[i]:getName(),KW_BTN_TALK) then
    			childrenNode[i]:addTouchEventListener(handler(self,self.onBtnEventQiaoPiHuaItem))
    		end
    	end
    end

    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,self._rootNode:getName(),self,self.onTouchEventBg)
end

function UITalk:getSpeakText(speakIndex)
    local eleNode = ccui.Helper:seekWidgetByName(self._rootNode,"KW_BTN_TALK_" .. speakIndex)
    if eleNode then
        local textNode = ccui.Helper:seekWidgetByName(eleNode,KW_TALK_TEXT)
        if textNode then
            return textNode:getString()
        end
    end
    return ""
end

function UITalk:onBtnEventQiaoPiHuaItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended then
        self:showTalkPanel() 
        local speakIndex = Game.StringFunction.getNumberSuffixByString(send:getName())
--        Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_MAHJONG_TALK_NUM + (self._gameID * 100) + (speakIndex % 100))
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        local event = cc.EventCustom:new("UITalk.Speak")
        event.speakIndex = speakIndex
        eventDispatcher:dispatchEvent(event)
    end
end

function UITalk:onTouchEventBg(send,eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType == ccui.TouchEventType.ended then
        self:showTalkPanel()
    end
end
           
function UITalk:showTalkPanel()
    if self._rootNode == nil then
        return
    end
    local talkPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_TALK_PANEL)
    if talkPanel then
        talkPanel:stopAllActions()
        if self._isIn then
            self._isIn = false
            local outNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_TALK_PANEL_OUT_POS)
            if outNode then
                local action = cc.Sequence:create(cc.MoveTo:create(0.2,cc.p(outNode:getPositionX(),outNode:getPositionY())),
                    cc.CallFunc:create(function()
                        self._rootNode:setVisible(false)
                    end))
                talkPanel:runAction(action)
            end
        else
            self._isIn = true
            self._rootNode:setVisible(true)
            local inNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_TALK_PANEL_IN_POS)
            if inNode then
                local action = cc.Sequence:create(cc.MoveTo:create(0.2,cc.p(inNode:getPositionX(),inNode:getPositionY())))
                talkPanel:runAction(action)
            end
        end
    end
end

return UITalk�