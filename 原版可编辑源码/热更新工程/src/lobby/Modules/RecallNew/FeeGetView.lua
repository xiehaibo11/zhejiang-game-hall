local RecallNewFeeGetView = class("RecallNewFeeGetView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function RecallNewFeeGetView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewFeeGet.csb"
end

function RecallNewFeeGetView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_INPUT_PHONE_1"] = { varName = "_KW_INPUT_PHONE_1" },
        ["_KW_INPUT_PHONE_2"] = { varName = "_KW_INPUT_PHONE_2" },
        ["_KW_BTN_RECHARGE"] = { varName = "_KW_BTN_RECHARGE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRecharge" },
        ["_KW_BTN_BIND"] = { varName = "_KW_BTN_BIND", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBind" },
    }
end

function RecallNewFeeGetView:onClickClose()
    self:close()
end

function RecallNewFeeGetView:checkPhoneLegality(strPhone)
    if strPhone == nil then
        return
    end
    if not string.match(strPhone, "^%d+$") or string.len(strPhone) < 11 then
        return false
    end
    return true
end

function RecallNewFeeGetView:onClickRecharge()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = 0, block_label = "手机充值", block_item_id = 0, page_item_id = "话费放送", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = self._cur, count2 = RecallNewConfig.FeeTarget })
    local phone1 = tonumber(self._KW_INPUT_PHONE_1:getText())
    local phone2 = tonumber(self._KW_INPUT_PHONE_2:getText())
    if phone1 ~= phone2 then
        XH.TipTool.showToast("两次手机号输入不一致")
        return
    end
    if not self:checkPhoneLegality(phone1) then
        XH.TipTool.showToast("手机号输入格式错误")
        return
    end
    if self._cur >= self._target then
        XH.TipTool.showTip(
        {
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                XH.lobby:getModule("RecallNew"):reqRecharge(phone1)
                XH.viewManager:closeView("FeeGetView")
            end
        },
        "确认充值到号码" .. phone1 .. "吗？"
        )
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_FEE_LOCALSTORAGE_PHONE, tostring(phone2))
    self:close()
end

function RecallNewFeeGetView:onClickBind()
    local bindPhone = XH.playerData:getBindPhone()
    if #bindPhone ~= 11 then
        XH.TipTool.showToast("还未绑定手机号")
        return
    end
    self._KW_INPUT_PHONE_1:setText(bindPhone)
    self._KW_INPUT_PHONE_2:setText(bindPhone)
end

function RecallNewFeeGetView:initUI()
    local phone = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FEE_LOCALSTORAGE_PHONE, "")
    if phone ~= "" then
        self._KW_INPUT_PHONE_1:setText(phone)
        self._KW_INPUT_PHONE_2:setText(phone)
    end
end

function RecallNewFeeGetView:ctor(cur, target, isFirst)
    RecallNewFeeGetView.super.ctor(self)
    self._isFirst = isFirst
    self._cur = cur
    self._target = target
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "手机界面", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = cur, count2 = RecallNewConfig.FeeTarget })
    self:initUI()
end

function RecallNewFeeGetView:onDestroy()
    RecallNewFeeGetView.super.onDestroy(self)
end

return RecallNewFeeGetView