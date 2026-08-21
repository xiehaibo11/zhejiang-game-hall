local UITalk = class("UITalk")
local CURRENT_MODULE_NAME = ...
-- local KW_UI_TALK_CSB_PATH = "LiangBang/LiangBang/CSB/GameTalk.csb"

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_TALK_PANEL = "KW_TALK_PANEL"
local KW_TALK_PANEL_OUT_POS = "KW_TALK_PANEL_OUT_POS"
local KW_TALK_PANEL_IN_POS = "KW_TALK_PANEL_IN_POS"
local KW_TALK_TEXT = "KW_TALK_TEXT"
local KW_SCROLL_VIEW = "KW_SCROLL_VIEW"
local KW_BTN_TALK = "KW_BTN_TALK_"
local KW_TITLE_HOT = "KW_TITLE_1"
local KW_TITLE_TIAO_KAN = "KW_TITLE_2"
local KW_SHOW_OUT_VIEW = "KW_SHOW_OUT_VIEW"

local KW_BOTTOM_PANEL = "KW_BOTTOM_PANEL"
local KW_SEND_BTN = "KW_SEND_BTN"
local KW_EXPREESION_PANEL = "KW_EXPREESION_PANEL"
local KW_BTN_EXP = "KW_BTN_EXP_"
local KW_MESSAGE_EDIT = "KW_MESSAGE_EDIT"
local KW_TALK_BTN ="KW_TALK_BTN"
local KW_EXPREESION_BTN = "KW_EXPREESION_BTN"
local KW_PANEL_TOUCH = "KW_PANEL_TOUCH"

local KW_NUM_YD_SPEAK_FIRST_PAGE_START = 1
local KW_NUM_YD_SPEAK_EVERY_PAGE_COUNT = 18
local KW_NUM_PC_SPEAK_FIRST_PAGE_START = 0
local KW_NUM_PC_SPEAK_EVERY_PAGE_COUNT = 100


function UITalk:ctor()
    self._rootNode = nil
    self._defaultItem = nil
    self._listPanel = nil
    self._gameID = 0
    self._editOverTime = nil
    self._cancelQPH = nil
end

function UITalk:init(node,gameid)
    local strCSB = "LiangBang/LiangBang/CSB/Talk/Talk.csb"
    if gameid ~= nil then
        strCSB = "LiangBang/LiangBang/CSB/Talk/game_talk_SKWZ.csb"
        if cc.FileUtils:getInstance():isFileExist(strCSB) == false then
            strCSB = "LiangBang/LiangBang/CSB/Talk/Talk.csb"
        end
        self._gameID = gameid
    end
    local csbNode = cc.CSLoader:createNode(strCSB)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode, KW_TALK_BTN, self, self.onTouchEventTalkBtn)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode, KW_EXPREESION_BTN, self, self.onTouchEventExpressionBtn)

    local sendBtn = ccui.Helper:seekWidgetByName(self._rootNode,KW_SEND_BTN)
    if sendBtn then
        sendBtn:addTouchEventListener(handler(self,self.onBtnEventSend))
    end
    local showOutView = ccui.Helper:seekWidgetByName(self._rootNode,KW_SCROLL_VIEW)
    if showOutView then
        local talkListNode = showOutView:getChildren()
        for i = 1,#talkListNode do
            talkListNode[i]:addTouchEventListener(handler(self,self.onBtnEventQiaoPiHuaItem))
        end
    end
    local expressionPanel = ccui.Helper:seekWidgetByName(self._rootNode,KW_EXPREESION_PANEL)
    if expressionPanel then
        local childrenNode = expressionPanel:getChildren()
        for i = 1,#childrenNode do
            if string.find(childrenNode[i]:getName(),KW_BTN_EXP) then
                childrenNode[i]:addTouchEventListener(handler(self,self.onBtnEventExpressionItem))
            end
        end
    end
    -- Game.UIFunction.addTouchEventListenerByObj(self._rootNode,self._rootNode:getName(),self,self.onTouchEventBg)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_PANEL_TOUCH,self,self.onTouchEventBg)
    local eleNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_MESSAGE_EDIT)
    if eleNode then
        eleNode:setFontColor(cc.c3b(188,98,63))
        eleNode:registerScriptEditBoxHandler(function(eventName,sender) self:editboxHandle(eventName,sender) end) 
    end
end

function UITalk:editboxHandle(eventName, sender)
    if eventName == "began" then
    elseif eventName == "ended" then
        self._editOverTime = socket.gettime()
    elseif eventName == "return" then
    elseif eventName == "changed" then
    end
end

function UITalk:onBtnEventExpressionItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setColor(cc.c3b(160,160,160))
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended then
        send:setColor(cc.c3b(255,255,255))
        self:showTalkPanel() 
        local speakIndex = Game.StringFunction.getNumberSuffixByString(send:getName())
        if self._sendExpreesionFunc then
            self._sendExpreesionFunc(speakIndex)
        end
    else
        send:setColor(cc.c3b(255,255,255))
    end
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
function UITalk:onBtnEventSend(send, eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    elseif eventType == ccui.TouchEventType.ended then
        self:showTalkPanel()
        local message = self:getSendEditText()
        if message == nil or message == "" then
            return
        end
        --[[
        local speakIndex = Game.StringFunction.getNumberSuffixByString(send:getName())
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        local event = cc.EventCustom:new("UITalk.Speak")
        event.speakContent = message
        eventDispatcher:dispatchEvent(event)
        ]]
        if self._sendChatFunc then
            self._sendChatFunc(message)
        end
    end
end

function UITalk:getSendEditText()
    local eleNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_MESSAGE_EDIT)

    if eleNode then
        local chatText = eleNode:getText()
        eleNode:setText("")
        return chatText
    end
    return ""
end

function UITalk:onTouchEventTalkBtn(send,eventType)
    if eventType == ccui.TouchEventType.began then
        if self._editOverTime == nil or socket.gettime() - self._editOverTime > 0.3 then
            self._cancelQPH = nil
            Game.GameSound.playButtonClick()
        else
            self._cancelQPH = true
        end
    end

    if eventType == ccui.TouchEventType.ended then
        Game.UIFunction.setButtonState(self._rootNode,KW_EXPREESION_BTN,true)
        Game.UIFunction.setButtonState(self._rootNode,KW_TALK_BTN,false)
        Game.UIFunction.setVisible(self._rootNode,KW_SCROLL_VIEW,true)
        Game.UIFunction.setVisible(self._rootNode,KW_EXPREESION_PANEL,false)
        Game.UIFunction.setVisible(self._rootNode,KW_BOTTOM_PANEL,false)
    end
end

function UITalk:onTouchEventExpressionBtn(send,eventType)
    if eventType == ccui.TouchEventType.began then
        if self._editOverTime == nil or socket.gettime() - self._editOverTime > 0.3 then
            self._cancelQPH = nil
            Game.GameSound.playButtonClick()
        else
            self._cancelQPH = true
        end
    end
    if eventType == ccui.TouchEventType.ended then
        Game.UIFunction.setButtonState(self._rootNode, KW_EXPREESION_BTN, false)
        Game.UIFunction.setButtonState(self._rootNode, KW_TALK_BTN, true)
        Game.UIFunction.setVisible(self._rootNode, KW_SCROLL_VIEW, false)
        Game.UIFunction.setVisible(self._rootNode, KW_EXPREESION_PANEL, true)
        Game.UIFunction.setVisible(self._rootNode, KW_BOTTOM_PANEL, false)
    end
end

function UITalk:onBtnEventQiaoPiHuaItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        if self._editOverTime == nil or socket.gettime() - self._editOverTime > 0.3 then
            self._cancelQPH = nil
            Game.GameSound.playButtonClick()
        else
            self._cancelQPH = true
        end
    elseif eventType == ccui.TouchEventType.ended then
        if self._cancelQPH == nil then
            self:showTalkPanel()
            local speakIndex = Game.StringFunction.getNumberSuffixByString(send:getName())
            local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
            local event = cc.EventCustom:new("UITalk.Speak")
            event.speakIndex = speakIndex
            event.speakContent = self:getSpeakText(speakIndex)
            eventDispatcher:dispatchEvent(event)
            Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DOUBLE_BUCKLE_TALK_NUM + (self._gameID * 100) + (speakIndex % 100))
        end
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
    self._rootNode:setVisible(false)
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

function UITalk:setSendMessageFunc(QPHFunc, chatFunc, ExpressionFunc)
    if QPHFunc then
        self._sendQPHFunc = QPHFunc
    end

    if chatFunc then
        self._sendChatFunc = chatFunc
    end

    if ExpressionFunc then
        self._sendExpreesionFunc = ExpressionFunc
    end
end
return UITalk(