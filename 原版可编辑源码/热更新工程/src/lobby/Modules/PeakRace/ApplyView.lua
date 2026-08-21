local ApplyView = class("ApplyView", XH.ViewBase)

function ApplyView:ctor(param)
    param = param or {}
    ApplyView.super.ctor(self, param)
    self._teaId = param.teaId
end

function ApplyView:getCSBPath()
    return "cocosStudio/hall/CSB/PeakRace/ApplyView.csb"
end

function ApplyView:getBindingInfo()
    return {
        ["_KW_BTN_APPLY"] = { varName = "_KW_BTN_APPLY", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventApply" },
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
    }
end

function ApplyView:onTouchEventApply()
    local key = XH.lobby:getModule("PeakRace"):getMatchKey(self._teaId)
    local start = os.date("%Y-%m", os.time())
    cc.UserDefault:getInstance():setStringForKey(key, start)
    XH.TipTool.showToast("报名成功，快去参与选拔赛吧~")
    self:close()
end

function ApplyView:onTouchEventClose()
    self:close()
end

return ApplyView