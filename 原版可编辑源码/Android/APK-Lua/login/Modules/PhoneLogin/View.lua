local PhoneLoginView = class("PhoneLoginView", XH.ViewBase)
local KW_SPECIAL_CODE = 123698741

function PhoneLoginView:ctor(param)
    local tipParam = param or {}
    PhoneLoginView.super.ctor(self, tipParam)
    self:initLayerNode()
end

function PhoneLoginView:getCSBPath()
    return "cocosStudio/hall/CSB/window/PhoneLoginLayer.csb"
end

function PhoneLoginView:getBindingInfo()
    return {
        ["_KW_INPUT_PHONE_BG"] = { varName = "_inputPhoneBg" },
        ["_KW_INPUT_CODE_BG"] = { varName = "_inputCodeBg" },
        ["_KW_PHONE_LOGIN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_SEND_CODE"] = { varName = "_btnSendCode", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSendCode" },
        ["_KW_BTN_LOGIN"] = { varName = "_btnLogin", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventFinsh" },
        ["_KW_TEXT_TIME"] = { varName = "_textTime" },
        ["_KW_INPUT_PHONE"] = { varName = "_inputPhone" },
        ["_KW_INPUT_CODE"] = { varName = "_inputCode" },
    }
end

function PhoneLoginView:getProxyEvents()
    return {
        { module = XH.login:getModule("PhoneLogin"),eventKeyName = "EVENT_PHONE_LOGIN", callBack = "onPhoneLoginFlush" },
    }
end

function PhoneLoginView:initLayerNode()
    self._inputPhone:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputPhone:setFontSize(42)
    self._inputPhone:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputPhone:setFontColor(cc.c3b(253, 249, 245))
    self._inputCode:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputCode:setFontSize(42)
    self._inputCode:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputCode:setFontColor(cc.c3b(253, 249, 245))

    local sendbtn = self._btnSendCode
    local timeTxtNode = self._textTime
    if sendbtn and timeTxtNode then
        sendbtn:setBright(true)
        sendbtn:setEnabled(true)
        timeTxtNode:stopAllActions()
        timeTxtNode:setString(tonumber(string.format("%02d", 60)))
        timeTxtNode:setVisible(false)
    end
end

function PhoneLoginView:onTouchEventFinsh(send, eventType)
    local strPhone = self._inputPhone:getText()
    local strCode = self._inputCode:getText()

    if strPhone and strPhone ~= "" then
        strPhone = XH.StringTool.trim(strPhone)
    end
    if strCode and strCode ~= "" then
        strCode = XH.StringTool.trim(strCode)
    end

    if self:checkSpecialCode(strPhone) then
        XH.login:getModule("Login"):reqTouristLogin(strPhone)
        return
    end

    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, XH.ConstString.getStr("ERROR_PHONE"))
        return
    end

    if not self:checkCodeLegality(strCode) then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, XH.ConstString.getStr("ERROR_PHONE_CODE"))
        return
    end

    if strPhone and strCode then
        self:onPhoneLoginRequest(strPhone, strCode)
    end
end

function PhoneLoginView:onTouchEventSendCode(send, eventType)
    local strPhone = self._inputPhone:getText()

    if strPhone and strPhone ~= "" then
        strPhone = XH.StringTool.trim(strPhone)
    end
    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, XH.ConstString.getStr("ERROR_PHONE"))
        return
    end
    self:onCodeRequest(strPhone)
    self:showCodeText()
end

function PhoneLoginView:showCodeText()
    local sendbtn = self._btnSendCode
    local timeTxtNode = self._textTime
    if sendbtn and timeTxtNode then
        sendbtn:setBright(false)
        sendbtn:setEnabled(false)
        timeTxtNode:setString(tonumber(string.format("%02d", 60)))
        timeTxtNode:setVisible(true)
        local nTime = 60
        timeTxtNode:stopAllActions()
        timeTxtNode:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1),
        cc.CallFunc:create(function()
            nTime = nTime - 1
            if nTime > 0 then
                local strTime = tonumber(string.format("%02d", nTime))
                timeTxtNode:setString(strTime)
            else
                timeTxtNode:stopAllActions()
                timeTxtNode:setVisible(false)
                sendbtn:setBright(true)
                sendbtn:setEnabled(true)
            end
        end))))
    end
end

function PhoneLoginView:checkPhoneLegality(strPhone)
    if strPhone == nil then
        return
    end
    if not string.match(strPhone, "^%d+$") or string.len(strPhone) < 11 then
        return false
    end
    return true
end

function PhoneLoginView:checkCodeLegality(strCode)
    if strCode == nil then
        return
    end
    if not string.match(strCode, "^%d+$") or string.len(strCode) ~= 6 then
        return false
    end
    return true
end

function PhoneLoginView:onTouchEventClose(send, eventType)
    self:close()
end

function PhoneLoginView:onCodeRequest(strPhone)
    if strPhone == nil then
        return
    end
    XH.login:getModule("PhoneLogin"):reqPhoneVerificationCode(strPhone)
end

function PhoneLoginView:onPhoneLoginRequest(strPhone, code)
    if strPhone == nil or code == nil then
        return
    end
    XH.login:getModule("PhoneLogin"):reqPhoneLogin(strPhone, code)
end

function PhoneLoginView:onPhoneLoginFlush(event)
    local data = event.data
    XH.playerData:setWeChatURL(data["imageurl"])
    XH.login:getModule("Login"):reqPlayerLogin(XH.SRSProtocol.PlayerConnect.USERTYPE.PHONENUM, data["phone"], data["identify"])
    self:close()
end

function PhoneLoginView:checkSpecialCode(strPhone)
    if tonumber(strPhone) == KW_SPECIAL_CODE then
        return true
    else
        return false
    end
end

return PhoneLoginView