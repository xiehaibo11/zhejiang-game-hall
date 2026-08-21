local PhoneLoginModule = class("PhoneLoginModule", XH.ModuleBase)

PhoneLoginModule.EVENT_PHONE_LOGIN = "EVENT_PHONE_LOGIN"

function PhoneLoginModule:ctor()
    PhoneLoginModule.super.ctor(self)
end

function PhoneLoginModule:getReqConfig()
    return {
        ReqPhoneVerificationCode = { reqPath = "login.Req.PhoneLogin.ReqPhoneVerificationCode", callBack = self.onReqPhoneVerificationCodeCallback },
        ReqPhoneLogin = { reqPath = "login.Req.PhoneLogin.ReqPhoneLogin", callBack = self.onPhoneLoginCallback },
    }
end

function PhoneLoginModule:reqPhoneVerificationCode(strPhone)
    local isNew = false
    local isAutoReg = false
    if XH.areaData:isSupportPhoneLogin() or XH.areaData:isSupportAutoPhoneBind() then
        isNew = true
        if XH.areaData:isSupportPhoneLogin() then
            isAutoReg = true
        end
    end
    self:startReq("ReqPhoneVerificationCode", "pwd_get", strPhone, isNew, isAutoReg, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PhoneLoginModule:onReqPhoneVerificationCodeCallback(cell, type, data)
    if type == XH.Req.TYPE.FAIL then
        if device.platform ~= "ios" and data and data.code == 10005 then
            XH.viewManager:openView("PhoneBindGuideView")
            return
        end
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, cell:getMessage())
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, XH.ConstString.getStr("PHONE_CODE_ERROR"))
    end
end

function PhoneLoginModule:reqPhoneLogin(strPhone, code)
    local isNew = false
    local isAutoReg = false
    if XH.areaData:isSupportPhoneLogin() or XH.areaData:isSupportAutoPhoneBind() then
        isNew = true
        if XH.areaData:isSupportPhoneLogin() then
            isAutoReg = true
        end
    end
    self:startReq("ReqPhoneLogin", code, strPhone, isNew, isAutoReg, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PhoneLoginModule:onPhoneLoginCallback(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({name = PhoneLoginModule.EVENT_PHONE_LOGIN, data = data})
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, cell:getMessage())
    end
end

return PhoneLoginModule(	