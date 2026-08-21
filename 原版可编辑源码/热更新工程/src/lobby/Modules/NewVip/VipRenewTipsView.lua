local VipRenewTipsView = class("VipRenewTipsView", XH.ViewBase)
local ShopConfig = require("lobby.Modules.Shop.Config")

local KW_PROP_DATA = {
    [150103] = "月卡会员",
    [150104] = "周卡会员",
}

function VipRenewTipsView:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipRenewTips.csb"
end

function VipRenewTipsView:getBindingInfo()
    return {
        ["_KW_VIP_NAME"] = { varName = "_vipName"},
        ["_KW_VIP_AWARD"] = { varName = "_vipAward"},
        ["_KW_BTN_GIVE_UP"] = { varName = "_btnGiveUp", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGiveUp" },
        ["_KW_BTN_RENEW"] = { varName = "_btnRenew", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRenew" },
    }
end

function VipRenewTipsView:ctor(param)
    self._canTouchBackGround = false
    param = param or { }
    VipRenewTipsView.super.ctor(self, param)
    self._data = param
    self:initUI()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.VipRenewTipsView, {userid = XH.playerData:getNumberID()})
end

function VipRenewTipsView:initUI()
    if self._data.nOldVIP and KW_PROP_DATA[self._data.nOldVIP] then
        self._vipName:setText(KW_PROP_DATA[self._data.nOldVIP])
    end
    if self._data.nAward then
        self._vipAward:setText(self._data.nAward)
    end
end

function VipRenewTipsView:onTouchEventGiveUp(send, eventType)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.VIP_GIVE_UP_VIP)
    self:close()
end

function VipRenewTipsView:onTouchEventRenew(send, eventType)
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.VIP})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.VIP_RENEW_VIP)
    self:close()
end

return VipRenewTipsView