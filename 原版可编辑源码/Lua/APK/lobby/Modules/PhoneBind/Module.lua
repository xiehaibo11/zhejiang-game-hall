local PhoneBindModule = class("PhoneBindModule", XH.ModuleBase)

PhoneBindModule.EVENT_PHONE_BEBING_STATUS = "EVENT_PHONE_BEBING_STATUS"

function PhoneBindModule:ctor()
    PhoneBindModule.super.ctor(self)
    self._isFirstBind = false
end

function PhoneBindModule:getReqConfig()
    return {
        ReqPhoneVerificationCode = { reqPath = "login.Req.PhoneLogin.ReqPhoneVerificationCode", callBack = self.onReqCodeCallback },
        ReqPhoneRebind = { reqPath = "lobby.Req.PhoneBind.ReqPhoneRebind", callBack = self.onPhoneCallback },
        ReqPhoneBind = { reqPath = "lobby.Req.PhoneBind.ReqPhoneBind", callBack = self.onPhoneCallback },
    }
end

function PhoneBindModule:reqPhoneVerificationCode(strPhone)
    local isNew = false
    local isAutoReg = false
    if XH.areaData:isSupportPhoneLogin() or XH.areaData:isSupportAutoPhoneBind() then
        isNew = true
    end
    if XH.areaData:isSupportPhoneLogin() then
        isAutoReg = true
    end
    self:startReq("ReqPhoneVerificationCode", "bind", strPhone, isNew, isAutoReg, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PhoneBindModule:onReqCodeCallback(cell, type, data)
    if type == XH.Req.TYPE.FAIL then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, cell:getMessage())
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, XH.ConstString.getStr("PHONE_CODE_ERROR"))
    end
end

function PhoneBindModule:reqPhoneBind(strPhone, code)
    self._isFirstBind = false
    if XH.playerData:isBindPhone() then
        if XH.areaData:isSupportPhoneLogin() or XH.areaData:isSupportAutoPhoneBind() then
            self:startReq("ReqPhoneRebind", strPhone, code, XH.KW_CONFIG_LOGIC_TIME_OUT)
        end
    else
        self._isFirstBind = true
        self:startReq("ReqPhoneBind", strPhone, code, XH.KW_CONFIG_LOGIC_TIME_OUT)
    end
end

function PhoneBindModule:onPhoneCallback(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.phone then
            XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_PHONE_STATE, tostring(data.phone))
            XH.playerData:setPlayerPhone(tostring(data.phone))
        else
            XH.playerData:setPlayerPhone("")
        end
        XH.playerData:flushBindUserData()
        if self._isFirstBind then
            XH.lobby:getModule("TabsActivity"):reqPhoneBindActBindState()
        else
            XH.TipTool.showTip( {
                type = XH.TIP_LAYER_TYPE.OK,
            } , "PHONE_BIND_SUCCESS")
        end
        XH.playerData:flushPlayerDrop()
        XH.playerData:flushGoldCoin()
        self:dispatchEvent( { name = PhoneBindModule.EVENT_PHONE_BEBING_STATUS })
    else
        local message = cell:getMessage()
        print(message)
        XH.playerData:setPlayerPhone("")
        XH.TipTool.showTip( {
            type = XH.TIP_LAYER_TYPE.OK,
        } , message)
    end
end

function PhoneBindModule:isSpecialCode()
    return cc.UserDefault:getInstance():getBoolForKey("KW_SPECIAL_CODE_PHONE_"..XH.playerData:getNumberID(),false)
end

--输入特殊号码，视为绑定成功  
function PhoneBindModule:SpecialCodeBind()
    local specialPhone = 15356558599
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_PHONE_STATE, tostring(specialPhone))
    XH.playerData:setPlayerPhone(tostring(specialPhone))
    --XH.playerData:flushBindUserData()
    XH.TipTool.showTip( {
                type = XH.TIP_LAYER_TYPE.OK,
            } , "PHONE_BIND_SUCCESS")
    self:dispatchEvent( { name = PhoneBindModule.EVENT_PHONE_BEBING_STATUS })
    if not cc.UserDefault:getInstance():getBoolForKey("KW_SPECIAL_CODE_PHONE_"..XH.playerData:getNumberID(), false) then
        cc.UserDefault:getInstance():setBoolForKey("KW_SPECIAL_CODE_PHONE_"..XH.playerData:getNumberID(), true)
    end
end

return PhoneBindModule