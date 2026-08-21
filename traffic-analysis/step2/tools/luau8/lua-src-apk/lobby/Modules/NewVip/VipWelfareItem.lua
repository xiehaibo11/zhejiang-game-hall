-- 会员权益item
local VipWelfareItem = class("VipWelfareItem",XH.ViewBase)
local VipDefine = require("lobby.Modules.NewVip.VipDefine")
local ShopConfig = require("lobby.Modules.Shop.Config")

local KW_EXPLAIN_PANEL_WHITE_HEIGHT = 30
local KW_EXPLAIN_PANEL_MOVE_HEIGHT = 260

function VipWelfareItem:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipWelfareItem.csb"
end

function VipWelfareItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName="_vipRoot"},
        ["_KW_IMG_PRODUCT_IMG"] = {varName="_vipIcon"},
        ["_KW_TEXT_REVIP"] = {varName="_revipText"},
        ["_KW_TEXT_AWARD"] = {varName="_vipExplainText"},
        ["_KW_TEXT_LEFTTIME"] = {varName="_vipLeftTimeText"},
        ["_KW_BTN_REWARD"] = {varName="_rewardBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchReward"},
        ["_KW_BTN_OPEN"] = {varName="_openBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchShop"},
        ["_KW_BTN_REVIP"] = {varName="_revipBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchShop"},
        ["_KW_EXPLAIN_BG"] = {varName="_explainBg"},
        ["_KW_TEXT_AWARD_TIP"] = {varName="_explainTitle"},
        ["_KW_PANEL_EXPLAIN"] = {varName="_explainPanel"},
    }
end

function VipWelfareItem:ctor(param)
    param = param or {}
    VipWelfareItem.super.ctor(self,param)
    self:initView()
end

function VipWelfareItem:initView()
    local size = self._vipRoot:getContentSize()
    self:setContentSize(size)
end

function VipWelfareItem:refreshView(url,desc,state,lefttime,propid,descRenew)
    self._vipExplainText:setText(desc)
    self._vipIcon:loadTexture(url,ccui.TextureResType.plistType)
    if lefttime > 0 then
        self._vipIcon:ignoreContentAdaptWithSize(true)
        if propid == VipDefine.PROPID.SUEPR then
            self._vipIcon:loadTexture("vip_img_month_small.png",ccui.TextureResType.plistType)
        elseif propid == VipDefine.PROPID.NORMAL then
            self._vipIcon:loadTexture("vip_img_week_small.png",ccui.TextureResType.plistType)
        end
        if descRenew then
            self._vipExplainText:setText(descRenew)
        end
        self:updateExplainPanelSize()
    end
    if state == VipDefine.VIP_STATE.NOT_ACTIVE then 
        self._openBtn:setVisible(true)
        self._rewardBtn:setVisible(false)
    elseif state == VipDefine.VIP_STATE.NOT_AWARD then
        self._openBtn:setVisible(false)
        self._rewardBtn:setVisible(true)
        self._rewardBtn:setEnabled(true)
    elseif state == VipDefine.VIP_STATE.HAS_AWARD then
        self._openBtn:setVisible(false)
        self._rewardBtn:setVisible(true)
        self._rewardBtn:setEnabled(false)
    end
    if state > VipDefine.VIP_STATE.NOT_ACTIVE then
        self._revipText:setVisible(true)
        self._revipText:setString(VipDefine.VIP_RE_VIP[propid])
    else
        self._revipText:setVisible(false)
    end
    self._propid = propid
    self:updateTime(lefttime,propid)
end

function VipWelfareItem:updateTime(leftTime,propid)
    local timeStr = ""
    if leftTime <= 0 then
        self._vipLeftTimeText:setString(timeStr)
        return
    end
    local leftDays = math.floor(leftTime / 86400)
    local leftDayConf = VipDefine.VIP_LEFT_CONF[propid]
    if leftDays < 1 then
        if leftTime < 60 * 60 then
            timeStr = "即将到期"
        else
            local leftHour = math.floor(leftTime / 3600)
            timeStr = "剩余" .. leftHour .. "小时"
        end
    elseif leftDays >= 1 and leftDays <= leftDayConf then
        timeStr = "还有" .. leftDays .. "天到期"
    else
        timeStr = "剩余" .. leftDays .. "天"
    end

    if leftDays > leftDayConf then
        self._vipLeftTimeText:setTextColor(VipDefine.YellowColor)
    else
        self._vipLeftTimeText:setTextColor(VipDefine.RedColor)
    end
    self._revipBtn:setVisible(true)

    self._vipLeftTimeText:setString(timeStr)
end

function VipWelfareItem:onTouchReward(send, eventType)
    if self._propid then 
        XH.lobby:getModule("NewVip"):reqVipAward(self._propid)
    end
end

function VipWelfareItem:onTouchShop(send, eventType)
    XH.viewManager:openView("ShopView", nil, {productType = ShopConfig.SpecialTag.VIP})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.VIP_LAYER_BUY_VIP_BTN)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_JOINACT)
    if send == self._revipBtn then
        XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.VIP_WELFARE_REVIP)
    end
end

function VipWelfareItem:updateExplainPanelSize()
    local textSize = self._vipExplainText:getContentSize()
    local titleSize = self._explainTitle:getContentSize()
    local panelSize = self._explainPanel:getContentSize()
    self._explainPanel:setContentSize(cc.size(panelSize.width, textSize.height + titleSize.height + KW_EXPLAIN_PANEL_WHITE_HEIGHT))
    self._explainBg:setContentSize(cc.size(self._explainPanel:getContentSize().width, self._explainPanel:getContentSize().height))
    self._explainPanel:setPositionY(self._explainPanel:getPositionY() + KW_EXPLAIN_PANEL_MOVE_HEIGHT)
end

return VipWelfareItem�