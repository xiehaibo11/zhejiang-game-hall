local DarkShuangKouChallengeRuleView = class("DarkShuangKouChallengeRuleView", XH.ViewBase)

function DarkShuangKouChallengeRuleView:getCSBPath()
    return "hall/CSB/DarkShuangKouChallenge/RuleLayer.csb"
end

function DarkShuangKouChallengeRuleView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function DarkShuangKouChallengeRuleView:ctor()
    DarkShuangKouChallengeRuleView.super.ctor(self)
end

function DarkShuangKouChallengeRuleView:onTouchEventClose(send, event)
    self:close()
end

return DarkShuangKouChallengeRuleView
�