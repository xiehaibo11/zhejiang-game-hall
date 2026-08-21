local RemodelActRuleView = class("RemodelActRuleView", XH.ViewBase)

function RemodelActRuleView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/RemodelAct/TeaHouseRemodelRule.csb"
end

function RemodelActRuleView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_PRIZE_RULE"] = { varName = "_btnPrizeRule", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventPrizeRule" }
    }
end

function RemodelActRuleView:ctor(param)
    param = param or "record"
	RemodelActRuleView.super.ctor(self, param)
end

function RemodelActRuleView:onTouchEventClose(send, eventType)
    self:close()
end

function RemodelActRuleView:onTouchEventPrizeRule(send, eventType)
end

return RemodelActRuleView