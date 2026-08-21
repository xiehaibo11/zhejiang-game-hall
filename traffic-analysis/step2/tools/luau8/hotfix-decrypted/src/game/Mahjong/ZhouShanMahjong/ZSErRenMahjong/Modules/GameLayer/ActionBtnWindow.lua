
local ActionBtnWindow = class("ActionBtnWindow", CF.ViewBase)

function ActionBtnWindow:ctor(param)
    local param = param or {}
	ActionBtnWindow.super.ctor(self,param)
    self:initUI()
end

function ActionBtnWindow:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/ZhouShan/ActionBtn.csb"
end

function ActionBtnWindow:getBindingInfo()
    return {
        ["_KW_BTN_CANCEL_TING"] = {varName = "_btnCancelTing" ,type = XH.UI_TYPE.BUTTON, onTouch = "onCancelTingBtnClick"},
    }
end

function ActionBtnWindow:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CANCEL_TING", callBack = "onShowCancelTing"},
    }
    return eventTable
end

function ActionBtnWindow:initUI()
    self._btnCancelTing:setVisible(false)
end

function ActionBtnWindow:onShowCancelTing(event)
    if event.msg == nil then return end
    if event.msg.value == nil then return end
    self._btnCancelTing:setVisible(event.msg.value)
end

function ActionBtnWindow:onCancelTingBtnClick(send, eventType)
    if eventType == ccui.TouchEventType.began then
        CF.soundManager:playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    CF.msgManager:sendTingWaitCancel()

    self._btnCancelTing:setVisible(false)
end

return ActionBtnWindowy