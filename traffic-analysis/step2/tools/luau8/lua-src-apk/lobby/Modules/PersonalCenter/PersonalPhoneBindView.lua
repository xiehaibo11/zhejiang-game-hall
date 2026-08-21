local viewBase = require("lobby.Modules.PhoneBind.View")
local PersonalPhoneBindView = class("PersonalPhoneBindView", viewBase)

function PersonalPhoneBindView:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterPhoneBindLayer.csb"
end


function PersonalPhoneBindView:getBindingInfo()
    return {
        ["_KW_PHONE_BIND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_SEND_CODE"] = { varName = "_btnSendCode", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSendCode" },
        ["_KW_BTN_NEXT"] = { varName = "_btnNext", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventNext" },
        ["_KW_BTN_FINISH"] = { varName = "_btnFinish", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventFinsh" },
        ["_KW_INPUT_PHONE"] = { varName = "_inputPhone" },
        ["_KW_INPUT_CODE"] = { varName = "_inputCode" },
        ["_KW_TEXT_TIME"] = { varName = "_textTime" },
        ["_KW_TXT_BIND_TIP"] = { varName = "_txtBindTip" },
        ["_KW_TXT_REBIND_TIP"] = { varName = "_txtRebindTip" },
        ["_KW_TXT_PHONE_TIP"] = { varName = "_textPhoneTip"},
        ["_KW_TXT_PHONE"] = { varName = "_textPhone"},
    }
end

function PersonalPhoneBindView:ctor(param)
    param = param or {}
    PersonalPhoneBindView.super.ctor(self,param)
    self:showPhoneTip()
end

function PersonalPhoneBindView:initLayerNode()
    self._inputPhone:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputPhone:setFontSize(42)
    self._inputPhone:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputPhone:setFontColor(cc.c3b(253, 249, 245))
    self._inputCode:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputCode:setFontSize(42)
    self._inputCode:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputCode:setFontColor(cc.c3b(253, 249, 245))
    self._btnNext:setVisible(false)
    if XH.playerData:isBindPhone() then 
        self._txtBindTip:setVisible(false)
        self._txtRebindTip:setVisible(true)
    else
        self._txtBindTip:setVisible(true)
        self._txtRebindTip:setVisible(false)
    end
end

-- 显示绑定的手机号
function PersonalPhoneBindView:showPhoneTip()
    if XH.areaData:isSupportPhoneLogin() or XH.areaData:isSupportAutoPhoneBind() then
        local isBindPhone = XH.playerData:isBindPhone()
        self._textPhoneTip:setVisible(isBindPhone)
        self._textPhone:setVisible(isBindPhone)
        if isBindPhone then
            self._textPhone:setString(XH.playerData:getEncryptBindPhone())
        end
    else
        self._textPhoneTip:setVisible(false)
        self._textPhone:setVisible(false)
    end
end

function PersonalPhoneBindView:onClose()
    self._inputPhone:setText("")
    self._inputCode:setText("")
    self:showPhoneTip()
    self._textTime:stopAllActions()
    self._textTime:setVisible(false)
    self._btnSendCode:setBright(true)
    self._btnSendCode:setEnabled(true)
end

return PersonalPhoneBindView�