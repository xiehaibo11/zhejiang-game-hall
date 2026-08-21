local RelinkView = class("RelinkView", CF.ViewBase)

local KW_BUTTON_HINT_OK = "KW_BUTTON_HINT_OK"
local KW_BUTTON_HINT_CANCEL = "KW_BUTTON_HINT_CANCEL"
local KW_BUTTON_HINT_CLOSE = "KW_BUTTON_HINT_CLOSE"

function RelinkView:getCSBPath()
    return "cocosStudio/Common/TipLayer/CSB/share_tips_ok_cancel.csb"
end

function RelinkView:getBindingInfo()
    return {
    }
end

function RelinkView:getProxyEvents()
    return {
        {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE_TIP_CLOSE", callBack = "onCancelContinueGame"}
    }
end

function RelinkView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.TIPLAYER
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(RelinkView.ObjName)
        runningScene:addChild(self, zorder)
    end
    return self
end

function RelinkView:ctor(param)
    param = param or {}
    RelinkView.super.ctor(self, param)
    self._clickOK = param.clickOK or nil
    self._clickCancel= param.clickCancel or nil
    self:initUIEvent()
end 

function RelinkView:initUIEvent()
    local node = ccui.Helper:seekNodeByName(self._csbRoot, "game_prompt_txt")
    if node then
        node:setText("是否续桌？")
    end
    local node1 = CF.UITool.seekNodeByName(self._csbRoot, KW_BUTTON_HINT_OK)
    if node1 and self._clickOK then
        node1:addTouchEventListener(function (send,eventType)
            self:onButtonEventBase(send,eventType)
            self._clickOK()
            self:close()
        end)
    end 
    local node2 = CF.UITool.seekNodeByName(self._csbRoot, KW_BUTTON_HINT_CANCEL)
    if node2 and self._clickCancel then
        node2:addTouchEventListener(function (send,eventType)
            self:onButtonEventBase(send,eventType)
            self._clickCancel()
            self:close()
        end)
    end 
    local node3 = CF.UITool.seekNodeByName(self._csbRoot, KW_BUTTON_HINT_CLOSE)
    if node3 and self._clickOK then
        node3:addTouchEventListener(function (send,eventType)
            self:onButtonEventBase(send,eventType)
            self._clickCancel()
            self:close()
        end)
    end 
end

function RelinkView:onButtonEventBase(send, eventType)
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
end

function RelinkView:onCancelContinueGame(event)
    if event.msg and event.msg.showTip then
        CF.TipTool.showTip({funcOK = function()
            self._clickCancel()
            self:close()
        end},"有玩家离开，桌子解散。")
    else
        self:close()
    end
end

return RelinkView
