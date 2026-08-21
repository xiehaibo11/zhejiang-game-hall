local BattlePassRuleView = class("BattlePassRuleView", XH.ViewBase)

function BattlePassRuleView:getCSBPath()
    return "hall/CSB/BattlePass/RuleLayer.csb"
end

function BattlePassRuleView:getBindingInfo()
    return {
        ["_KW_TEXT"] = {varName = "_textNode"},
        ["_KW_TEXT_TIME"] = {varName = "_textTimeNode"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function BattlePassRuleView:ctor(param)
    param = param or {}
    BattlePassRuleView.super.ctor(self)

    local dateTable = os.date("*t", param.endTime)
    local textTime = param.textTime or string.format("活动时间：\n    %d月%d日 %02d:%02d结束", dateTable.month, dateTable.day, dateTable.hour, dateTable.min)
    local content = param.content or ""
    self._textTimeNode:setString(textTime)
    self._textNode:setString(content)
end

function BattlePassRuleView:onTouchEventClose(send, event)
    self:close()
end

return BattlePassRuleView
