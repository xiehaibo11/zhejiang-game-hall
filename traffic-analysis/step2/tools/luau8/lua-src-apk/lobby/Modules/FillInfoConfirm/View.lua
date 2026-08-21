local AccountConfirmView = class("AccountConfirmView", XH.ViewBase)

function AccountConfirmView:getCSBPath()
    return "cocosStudio/hall/CSB/window/AccountConfirmView.csb"
end

function AccountConfirmView:getBindingInfo()
    return {
        ["_KW_TEXT_PHONE"] = { varName = "_textPhone" },
        ["_KW_TEXT_NAME"] = { varName = "_textName" },
        ["_KW_TEXT_ID"] = { varName = "_textID" },
        ["_KW_BTN_SWITCH"] = { varName = "_btnSwitch", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onSwitchClicked" },
        ["_KW_BTN_OK"] = { varName = "_btnOK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onSwithOK" },
    }
end

function AccountConfirmView:ctor(param)
    AccountConfirmView.super.ctor(self)

    self._param = param

    self:initUI()
end

function AccountConfirmView:initUI()
    if self._textPhone then
        self._textPhone:setString(XH.playerData:getBindPhone())
    end
    if self._textID then
        self._textID:setString(tostring(XH.playerData:getNumberID()))
    end
end

function AccountConfirmView:onSwitchClicked(send, eventType)
    local isShowYouKe = false
    if XH.playerData:getPlayerIsAgent() and XH.areaData:getAgentShowYouKe() then
        isShowYouKe = true
    end
    XH.login:getModule("Login"):clearLoginStates()
    XH.Controller:getInstance():enterLogin(isShowYouKe)
end

function AccountConfirmView:onSwithOK(send, eventType)
    if self._param.callback then
        self._param.callback()
    end

    self:close()
end

return AccountConfirmView