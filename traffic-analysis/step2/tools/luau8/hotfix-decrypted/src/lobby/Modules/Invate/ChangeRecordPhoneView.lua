local ChangeRecordPhoneView = class("ChangeRecordPhoneView", XH.ViewBase)

function ChangeRecordPhoneView:getCSBPath()
    return "cocosStudio/hall/CSB/ChangeInvateRecordPhoneLayer.csb"
end

function ChangeRecordPhoneView:getBindingInfo()
    return {
        ["_KW_PHONE_BIND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_SEND_CODE"] = { varName = "_btnSendCode", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSendCode" },
        ["_KW_BTN_FINISH"] = { varName = "_btnFinish", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventFinsh" },
        ["_KW_INPUT_PHONE"] = { varName = "_inputPhone" },
        ["_KW_INPUT_CODE"] = { varName = "_inputCode" },
        ["_KW_TEXT_TIME"] = { varName = "_textTime" },
        ["_KW_IMG_BIND_TITEL"] = { varName = "_imgBindTitle" },
    }
end

function ChangeRecordPhoneView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Invate"), eventKeyName = "EVENT_CHANGE_BIND_SUCCESS", callBack = "onChangeBindState" },
    }
end

function ChangeRecordPhoneView:ctor(param)
    param = param or {}
    ChangeRecordPhoneView.super.ctor(self, param)
    self:initLayerNode()
end

function ChangeRecordPhoneView:initLayerNode()
    self._inputPhone:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputPhone:setFontSize(42)
    self._inputPhone:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputPhone:setFontColor(cc.c3b(253, 249, 245))
    self._inputCode:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputCode:setFontSize(42)
    self._inputCode:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputCode:setFontColor(cc.c3b(253, 249, 245))
end

function ChangeRecordPhoneView:onTouchEventFinsh(send, eventType)
    local strPhone = self._inputPhone:getText()
    local strCode = self._inputCode:getText()

    if strPhone and strPhone ~= "" then
        strPhone = self:trim(strPhone)
    end
    if strCode and strCode ~= "" then
        strCode = self:trim(strCode)
    end

    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, XH.ConstString.getStr("ERROR_PHONE"))
        return
    end

    if strPhone and strCode then
        XH.lobby:getModule("Invate"):reqChangeBindAgent(strPhone, strCode)
    end
end

function ChangeRecordPhoneView:onTouchEventSendCode(send, eventType)
    local strPhone = self._inputPhone:getText()

    if strPhone and strPhone ~= "" then
        strPhone = self:trim(strPhone)
    end
    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, XH.ConstString.getStr("ERROR_PHONE"))
        return
    end
    XH.lobby:getModule("Invate"):reqVerifyCode(strPhone)
    self:showCodeText()
end

function ChangeRecordPhoneView:showCodeText()
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

function ChangeRecordPhoneView:checkPhoneLegality(strPhone)
    if strPhone == nil then
        return
    end
    if not string.match(strPhone, "^%d+$") or string.len(strPhone) < 11 then
        return false
    end
    return true
end

function ChangeRecordPhoneView:checkCodeLegality(strCode)
    if strCode == nil then
        return
    end
    if not string.match(strCode, "^%d+$") or string.len(strCode) ~= 4 then
        return false
    end
    return true
end

function ChangeRecordPhoneView:onTouchEventClose(send, eventType)
    self:close()
end

function ChangeRecordPhoneView:trim(s)
    return (string.gsub(s, "^%s*(.-)%s*$", "%1"))
end

--监听改绑状态
function ChangeRecordPhoneView:onChangeBindState(event)
    XH.playerData:setInvateCode(event.data)
end

return ChangeRecordPhoneViewZ