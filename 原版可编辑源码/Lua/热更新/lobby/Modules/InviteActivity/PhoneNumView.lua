local PhoneNumView = class("PhoneNumView", XH.ViewBase)

function PhoneNumView:getCSBPath()
    return "hall/CSB/Activity/Invite/InvitePhoneNumLayer.csb"
end

function PhoneNumView:getProxyEvents()
    return {}
end

function PhoneNumView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_root"},
        ["_body"] = {varName = "_body"},
        ["_input1"] = {varName = "_input1"},
        ["_input2"] = {varName = "_input2"},
        ["_txtHuaFeiStr"] = {varName = "_txtHuaFeiStr"},
        ["_txtHuaFeiStr2"] = {varName = "_txtHuaFeiStr2"},
        ["_btnSure"] = {varName = "_btnSure", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickSure"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose"}
    }
end

function PhoneNumView:ctor(param)
    PhoneNumView.super.ctor(self, param)
    -- self._input1:setInputMode(3)
    -- self._input2:setInputMode(3)
    self._data = param
    self._txtHuaFeiStr:setString("["..param.prizeName.."]")
    self._txtHuaFeiStr2:setString(param.prizeName)
end

function PhoneNumView:initCodeBind()
    local selfSize = self:getContentSize()
    local rootSize = self._root:getContentSize()
    local scaleX = selfSize.width / rootSize.width
    local scaleY = selfSize.height / rootSize.height
    self._rootScale = scaleX > scaleY and scaleY or scaleX
    self._body:setScale(self._rootScale)
    self._root:setPosition(selfSize.width / 2, selfSize.height / 2)
    -- self._KW_TOUCH_LAYER:setContentSize(selfSize.width, selfSize.height)
end
function PhoneNumView:updateInfo(item, info, idx)
    XH.UITool.setText(item, "txtTime", info.created_at)
    XH.UITool.setText(item, "txtName", string.gsub(info.prize_name, ";", "\n"))
end
function PhoneNumView:clickClose(send, eventType)
    self:close()
end

function PhoneNumView:checkPhoneLegality(strPhone)
    if strPhone == nil then
        return
    end
    if not string.match(strPhone, "^%d+$") or string.len(strPhone) < 11 then
        return false
    end
    return true
end
function PhoneNumView:clickSure(send, eventType)
    local strPhone = self._input1:getText()
    local strPhone2 = self._input2:getText()
    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showToast("请输入正确的手机号")
        return
    end
    -- if not self:checkPhoneLegality(strPhone2) then
    --     XH.TipTool.showToast("请输入正确的手机号")
    --     return
    -- end
    if strPhone ~= strPhone2 then
        XH.TipTool.showToast("2次输入的手机号不一致")
        return
    end
    XH.lobby:getModule("InviteActivity"):reqInviteGetStagePrize(self._data.id, self._input1:getText())
    self:close()
end
return PhoneNumView
