local ChangePasswordView = class("ChangePasswordView", XH.ViewBase)

function ChangePasswordView:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterChangePassWordLayer.csb"
end

function ChangePasswordView:getBindingInfo()
    return {
        ["_KW_BTN_OK"] = { varName = "_btnOk", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventChangeAddress" },
        ["_KW_TEXTFIELD_OLD_PWD"] = { varName = "_inputOldPwd" },
        ["_KW_TEXTFIELD_NEW_PWD"] = { varName = "_inputNewPwd" },
        ["_KW_TEXTFIELD_CONFIRM_PWD"] = { varName = "_inputConfirmPwd" },
        ["_KW_BMFONT_PASSWORD_TIP"] = {varName = "_bmfontPwdTip"},
        ["_KW_TXT_RESET_PASSWORD"] = {varName = "_txtResetPwd" , type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventResetPassword" }, --  重置密码的按钮
        ["_KW_RED_UNDERLINE"] = {varName = "_restpwdLine"},
        
    }
end

function ChangePasswordView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_VIP_LAYER_VIP_CONFIG", callBack = "eventVipConfig" },
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_VIP_LAYER_CHANGE_PWD", callBack = "eventCleanInfo" },
        { module = XH.lobby:getModule("PersonalCenter"), eventKeyName = "EVENT_VIP_LAYER_PASSWD_STATE", callBack = "eventPasswdState" },
    }
end
 
function ChangePasswordView:ctor(param)
    param = param or {}
    self._data = {}
    ChangePasswordView.super.ctor(self, param)
    self._inputOldPwd:setFontColor(cc.c3b(255, 250, 237))
    self._inputOldPwd:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
    self._inputNewPwd:setFontColor(cc.c3b(255, 250, 237))
    self._inputNewPwd:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
    self._inputConfirmPwd:setFontColor(cc.c3b(255, 250, 237))
    self._inputConfirmPwd:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
    self:updateTip()
    XH.lobby:getModule("PersonalCenter"):reqVIPGetPasswdState()
end

function ChangePasswordView:initUI()
    XH.lobby:getModule("PersonalCenter"):reqVIPGetPasswdState()
end

-- 根据服务配置更新初始密码
function ChangePasswordView:updateTip()
    local defaultPwd = 123456
    self._bmfontPwdTip:setText("赠送房卡需要密码，初始密码为"..defaultPwd.."，请妥善保管！")
end

 --- 确认按钮回调函数
function ChangePasswordView:onTouchEventChangeAddress(send, event)
    self._data.oldPwd = self._inputOldPwd:getText()
    self._data.newPwd = self._inputNewPwd:getText()
    self._data.confirmPwd = self._inputConfirmPwd:getText()
    --XH.TipTool.showToast("未知错误", 2)
    if self._data.oldPwd == "" or self._data.newPwd == "" or self._data.confirmPwd == "" then
        XH.TipTool.showToast("请输入密码", 2)
    elseif not self:checkPwdFormat() then
        XH.TipTool.showToast("请输入正确密码", 2)
    elseif self._data.newPwd ~= self._data.confirmPwd then
        XH.TipTool.showToast("两次密码不一致", 2)
    else
        XH.lobby:getModule("PersonalCenter"):reqVIPChangePasswd(self._data.oldPwd, self._data.newPwd)
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_SET_BTN_CLICK)
end
 
function ChangePasswordView:onTouchEventResetPassword()
    if not XH.playerData:isBindPhone() then  -- 如果没有绑定手机就弹出提示
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function(  )
                XH.lobby:getModule("PersonalCenter"):showTabLayer("PersonalCenterGiveLayer")
            end,
        }, XH.ConstString.getStr("VIP_RESET_PWD_UNBIND_ERROR"))
    elseif self._pwdState.reset_count == self._pwdState.reset_max_count then
        XH.TipTool.showToast( "每日最多可重置" .. self._pwdState.reset_max_count .. "次，请联系客服", 2)
    else
        self:showAgainSureTipLayer()
    end
end

 
function ChangePasswordView:checkOldPwd()
    local oldPwd = "123456"
    return oldPwd == self._data.oldPwd
end

function ChangePasswordView:checkPwdFormat()
    for _, passward in pairs(self._data) do --普通的遍历，#t表示t的长度
        if string.len(passward) ~= 6 then
            return false
        end
    end
    return true
end

function ChangePasswordView:checkPhoneBind()
    local userPhoneBinded = false
    return userPhoneBinded
end

function ChangePasswordView:showAgainSureTipLayer()
    local showData = {}
    showData.tipText1 = "重置后，系统将随机生成6位密码，以短信的形式发送至您的手机上，请注意查收哦~"
    showData.tipText2 = "每日最多可重置" .. self._pwdState.reset_max_count .. "次，有问题可联系客服"
    showData.showBtn = "all"
    local callBack = function()
        XH.lobby:getModule("PersonalCenter"):reqVIPResetPasswd()
    end
    showData.okFun = callBack
    XH.viewManager:openView("PersonalCenterTipLayer", nil, showData)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_RESET_BTN_CLICK)
end

function ChangePasswordView:eventCleanInfo(event)
    self._inputOldPwd:setText("")
    self._inputNewPwd:setText("")
    self._inputConfirmPwd:setText("")
end

function ChangePasswordView:eventPasswdState(event)
    if event then
        if (event.data.reset_count == event.data.reset_max_count) then
            self._txtResetPwd:setTextColor(cc.c3b(160,160,160))
            self._restpwdLine:setBackGroundColor(cc.c3b(160,160,160))
        else
            self._txtResetPwd:setTextColor(cc.c3b(220,98,69))
            self._restpwdLine:setBackGroundColor(cc.c3b(220,98,69))
        end
        self._pwdState = event.data
        if event.data.reset_max_count == 0 then
            self._txtResetPwd:setVisible(false)
            self._restpwdLine:setVisible(false)
        end
    end
end

return ChangePasswordViewY