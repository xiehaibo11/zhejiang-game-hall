local SxvipInfoView = class("SxvipInfoView", XH.ViewBase)

local UrlConf = require("app.Config.UrlConf")

function SxvipInfoView:ctor(param)
    SxvipInfoView.super.ctor(self)
    self._buyData = param or {}
    self._useSubscription = self:getSubScription()
    self:initUI()
end

function SxvipInfoView:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipInfoLayer.csb"
end

function SxvipInfoView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_LISTVIEW_SUB"] = { varName = "_listViewSub"},
        ["_KW_TEXT_RULE_SUB"] = { varName = "_textRuleSub"},
        ["_KW_LISTVIEW_NORMAL"] = { varName = "_listViewNormal"},
        ["_KW_TEXT_RULE_NORMAL"] = { varName = "_textRuleNormal"},
        ["_KW_TEXT_TITLE"] = { varName = "_textTitle"},
        ["_KW_PANEL_ITEM"] = { varName = "_vipItem"},
        ["_KW_BTN_CANCEL"] = { varName = "_btnCancel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_BUY"] = { varName = "_btnBuy", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnBuy"},
    }
end

function SxvipInfoView:getProxyEvents()
    return {
    }
end

function SxvipInfoView:getSubScription()
    if self._buyData.tags and self._buyData.tags[1] and self._buyData.tags[1].key and self._buyData.tags[1].key == "Subscription" then
        return true
    end
    return false
end

function SxvipInfoView:initUI()
    self._listViewNormal:setVisible(not self._useSubscription)
    self._listViewSub:setVisible(self._useSubscription)
    self._textTitle:setString("您正在通过AppStore购买" .. (self._useSubscription and "订阅会员" or "普通会员"))
    self:initItemView()
    self:initText()
end

function SxvipInfoView:initText()
    local txtRule = self._textRuleNormal:getString()
    if self._useSubscription then
        txtRule = self._textRuleSub:getString()
    end
    local finalStr = string.format(txtRule, self._buyData.prop_count, self._buyData.real_price, self._buyData.prop_count)
    if self._useSubscription then
        self._textRuleSub:setString(finalStr)
    else
        self._textRuleNormal:setString(finalStr)
    end
end

function SxvipInfoView:initItemView()
    local btnBuy = self._vipItem:getChildByName("_KW_BTN_BUY_TMP")
    -- 名字
    XH.UITool.setText(self._vipItem, "_KW_TIME_TXT", self._buyData.name or '')
    -- icon
    local item = self._vipItem:getChildByName("_KW_ICON_PANEL")
    local itemIcon = item:getChildByName("ITEM_ICON")
    if itemIcon == nil then
        local size = item:getContentSize()
        itemIcon = XH.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName("ITEM_ICON")
        :addTo(item)
    end
    itemIcon:setUrl(self._buyData.image)
    -- 价值
    XH.UITool.setText(self._vipItem, "_KWA_VALUE", "价值" .. self._buyData.display_price .. "元")
    -- 价格
    local price = self._buyData.real_price or 0
    XH.UITool.setText(btnBuy, "_KW_TXT_PRICE", self._useSubscription and "订阅价:".. price .. "元" or price .. "元")
end

function SxvipInfoView:onBtnBuy(send, event)
    if event ~= ccui.TouchEventType.ended then
        return
    end
    XH.lobby:getModule("Sxvip"):reqBuy(self._buyData, nil, true)
    self:close()
end

function SxvipInfoView:onBtnClose(sender, eventType)
    self:close()
end

return SxvipInfoView