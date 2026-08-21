local PhoneBindView = class("PhoneBindView", XH.ViewBase)
local KW_SPECIAL_CODE = 123698741

function PhoneBindView:getCSBPath()
    return "cocosStudio/hall/CSB/window/PhoneBindLayer.csb"
end

function PhoneBindView:getBindingInfo()
    return {
        ["_KW_PHONE_BIND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_SEND_CODE"] = { varName = "_btnSendCode", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSendCode" },
        ["_KW_BTN_NEXT"] = { varName = "_btnNext", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventNext" },
        ["_KW_BTN_FINISH"] = { varName = "_btnFinish", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventFinsh" },
        ["_KW_INPUT_PHONE"] = { varName = "_inputPhone" },
        ["_KW_INPUT_CODE"] = { varName = "_inputCode" },
        ["_KW_TEXT_TIME"] = { varName = "_textTime" },
        ["_KW_IMG_BIND_TITEL"] = { varName = "_imgBindTitle" },
        ["_KW_IMG_REBIND_TITEL"] = { varName = "_imgRebindTitle" },
    }
end

function PhoneBindView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PhoneBind"), eventKeyName = "EVENT_PHONE_BEBING_STATUS", callBack = "onPhonePwdStatus" },
    }
end

function PhoneBindView:ctor(param)
    param = param or {}
    PhoneBindView.super.ctor(self, param)
    self:initLayerNode()
end

function PhoneBindView:initLayerNode()
    self._inputPhone:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputPhone:setFontSize(42)
    self._inputPhone:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputPhone:setFontColor(cc.c3b(253, 249, 245))
    self._inputCode:setInputMode(cc.EDITBOX_INPUT_MODE_DECIMAL)
    self._inputCode:setFontSize(42)
    self._inputCode:setPlaceholderFontColor(cc.c3b(174, 137, 93))
    self._inputCode:setFontColor(cc.c3b(253, 249, 245))

    if XH.playerData:isBindPhone() then
        self._imgBindTitle:setVisible(false)
        self._imgRebindTitle:setVisible(true)
    else
        self._imgBindTitle:setVisible(true)
        self._imgRebindTitle:setVisible(false)
    end
end

function PhoneBindView:onTouchEventFinsh(send, eventType)
    self:postActData("完成")
    local strPhone = self._inputPhone:getText()
    local strCode = self._inputCode:getText()

    if strPhone and strPhone ~= "" then
        strPhone = XH.StringTool.trim(strPhone)
    end
    if strCode and strCode ~= "" then
        strCode = XH.StringTool.trim(strCode)
    end

    if self:checkSpecialCode(strPhone) then
        XH.lobby:getModule("PhoneBind"):SpecialCodeBind()
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
        self:onPhonePwdRequest(strPhone, strCode)
        if XH.teaHouseManager:isTeaHouseRemodelListViewExist() then
            XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_72)
        else
            XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_10)
        end  
    end
end

function PhoneBindView:onTouchEventSendCode(send, eventType)
    self:postActData("发送验证码")
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

function PhoneBindView:showCodeText()
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

function PhoneBindView:checkPhoneLegality(strPhone)
    if strPhone == nil then
        return
    end
    if not string.match(strPhone, "^%d+$") or string.len(strPhone) < 11 then
        return false
    end
    return true
end

function PhoneBindView:checkCodeLegality(strCode)
    if strCode == nil then
        return
    end
    if not string.match(strCode, "^%d+$") or string.len(strCode) ~= 6 then
        return false
    end
    return true
end

function PhoneBindView:checkSpecialCode(strPhone)
    if tonumber(strPhone) == KW_SPECIAL_CODE then
        return true
    else
        return false
    end
end

function PhoneBindView:onTouchEventNext(send, eventType)
    self:postActData("下次再说")
    self:onClose()
    if XH.teaHouseManager:isTeaHouseRemodelListViewExist() then
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_73)
    else
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_11)
    end  
end

function PhoneBindView:onTouchEventClose(send, eventType)
    self:postActData("关闭")
    self:onClose()
end

function PhoneBindView:show()
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

function PhoneBindView:onCodeRequest(strPhone)
    if strPhone == nil then
        return
    end
    XH.lobby:getModule("PhoneBind"):reqPhoneVerificationCode(strPhone)
end

function PhoneBindView:onPhonePwdRequest(strPhone, code)
    if strPhone == nil or code == nil then
        return
    end
    XH.lobby:getModule("PhoneBind"):reqPhoneBind(strPhone, code)
end

function PhoneBindView:onPhonePwdStatus()
    self:onClose()
end

function PhoneBindView:onClose()
    self:close()
end

function PhoneBindView:postShowData()
    if XH.lobby and XH.lobby:getModule("UserPath") then
        XH.lobby:getModule("UserPath"):throwDataRepeat(XH.NewThrowDataDefine.xyh24081409, {})
    end
end

function PhoneBindView:postActData(str)
    if XH.lobby and XH.lobby:getModule("UserPath") then
        local eventData = {
            block_label = str,
            customize = {
                choice = XH.lobby:getModule("UserPath"):firstStart(),
            }
        }
        XH.lobby:getModule("UserPath"):throwDataRepeat(XH.NewThrowDataDefine.xyh24081410, eventData, true)
    end
end

return PhoneBindView