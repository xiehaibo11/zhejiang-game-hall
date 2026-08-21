-- 主界面
local RecallNewHelpView = class("RecallNewHelpView", XH.ViewBase)

function RecallNewHelpView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewHelp.csb"
end

function RecallNewHelpView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KWA_MSG_LABEL"] = { varName = "_KWA_MSG_LABEL" },
        ["_KWA_MSG_LABEL_FEE"] = { varName = "_KWA_MSG_LABEL_FEE" },
    }
end

function RecallNewHelpView:ctor()
    RecallNewHelpView.super.ctor(self)
    self._KWA_MSG_LABEL:setVisible(XH.lobby:getModule("RecallNew"):isHideFeeTab())
    self._KWA_MSG_LABEL_FEE:setVisible(not XH.lobby:getModule("RecallNew"):isHideFeeTab())
end

function RecallNewHelpView:onClickClose()
    self:close()
end

return RecallNewHelpViewb