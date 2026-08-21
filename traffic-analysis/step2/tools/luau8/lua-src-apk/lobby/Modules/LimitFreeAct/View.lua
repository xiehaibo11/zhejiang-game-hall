local LimitFreeActView = class("LimitFreeActView", XH.ViewBase)

function LimitFreeActView:ctor()
    LimitFreeActView.super.ctor(self)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hd240111)
    self:flushUI()
end

function LimitFreeActView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LimitFreeAct/LimitFreeMainLayer.csb"
end

function LimitFreeActView:getBindingInfo()
    return {
        ["_KW_BTN_GO"] = { varName = "_KW_BTN_GO", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGoAct" },
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_BTN_TIP"] = { varName = "_KW_BTN_TIP", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTip" },
        ["_KW_TEXT_FREE"] = { varName = "_KW_TEXT_FREE" },
        ["_KW_PANEL_BG"] = { varName = "_KW_PANEL_BG", onTouchEnded = "onClickClose" },
        ["_KW_TOUCH"] = { varName = "_KW_TOUCH", onTouchEnded = "onClickClose" },
        ["_KW_PANEL_BG2"] = { varName = "_KW_PANEL_BG2", onTouchEnded = "onClickClose" },
    }
end

function LimitFreeActView:flushUI()
    local text = XH.lobby:getModule("LimitFreeAct"):getShareStrByTime("\n")
    self._KW_TEXT_FREE:setString(text)
end

function LimitFreeActView:onClickGoAct()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hd240110)
    XH.viewManager:openView("CreateBoxRoomView")
    self:close()
end

function LimitFreeActView:onClickTip()
    XH.lobby:getModule("LimitFreeAct"):openTipView()
end

function LimitFreeActView:onClickClose()
    self:close()
end

return LimitFreeActViewe