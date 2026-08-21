local CeLueAgeView = class("CeLueAgeView", XH.ViewBase)

function CeLueAgeView:getCSBPath()
    return "cocosStudio/hall/CSB/window/YinSiCeLue/YsclAgeTipView.csb"
end

function CeLueAgeView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
    }
end

function CeLueAgeView:ctor()
    CeLueAgeView.super.ctor(self)
end

-- 关闭按钮
function CeLueAgeView:onTouchEventClose(send, eventType)
    self:close()
end

return CeLueAgeView