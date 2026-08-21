local UnlimitedGiftRuleView = class("UnlimitedGiftRuleView", XH.ViewBase)

function UnlimitedGiftRuleView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/UnlimitedGift/RuleLayer.csb"
end

function UnlimitedGiftRuleView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function UnlimitedGiftRuleView:ctor()
    UnlimitedGiftRuleView.super.ctor(self)
end

function UnlimitedGiftRuleView:onTouchEventClose(send, event)
    self:close()
end

return UnlimitedGiftRuleView
