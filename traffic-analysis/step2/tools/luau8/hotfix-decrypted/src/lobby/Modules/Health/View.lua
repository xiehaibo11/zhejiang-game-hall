local HealthView = class("HealthView",XH.ViewBase)

function HealthView:getCSBPath()
    return "cocosStudio/hall/CSB/HealthTipLayer.csb"
end

function HealthView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_PANEL_BG"] = {varName="_panelBG",onTouchEnded = "onTouchEventBG"},
        ["_KW_ZFUB_REAL_BTN"] = {varName="_ZFUBRealBtn",onTouchEnded = "onTouchEventBG"},
    }
end

function HealthView:ctor(param)
    param = param or {}
	HealthView.super.ctor(self,param)
end

function HealthView:onTouchEventClose(send, event)
    self:close()
end

function HealthView:onTouchEventBG(send, event)
    self:close()
end

return HealthView
