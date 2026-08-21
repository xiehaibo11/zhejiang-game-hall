-- 会员权益item
local MonthlyCardShopVipItem = class("MonthlyCardShopVipItem", XH.ViewBase)
local VipDefine = require("lobby.Modules.NewVip.VipDefine")
local RedPointManager = require("lobby.Modules.GoldNew.Manager.RedPointManager")

function MonthlyCardShopVipItem:getCSBPath()
    return "cocosStudio/hall/CSB/MonthlyCard/MonthlyCardVipShopItem.csb"
end

function MonthlyCardShopVipItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_vipRoot"},
        ["_KW_IMG_PRODUCT_IMG"] = {varName = "_vipIcon"}, -- 图标
        ["_KW_TEXT_REVIP"] = {varName = "_revipText"}, -- 续费+
        ["_KW_TEXT_AWARD"] = {varName = "_vipAwardText"}, -- 奖励立得信息
        ["_KW_TEXT_EQUITYAWARD"] = {varName = "_vipEquityText"}, -- 每日权益奖励
        ["_KW_TEXT_EQUITYAWARD_TIP"] = {varName = "_vipEquityTipText"}, -- 每日权益描述
        ["_KW_TEXT_AWARD_TIP"] = {varName = "_KW_TEXT_AWARD_TIP"},
        ["_KW_TXT_PRICE_REAL"] = {varName = "_vipPriceReal"}, -- 真实价格
        ["_KW_BG"] = {varName = "_KW_BG"},
        ["_KW_TITLE"] = {varName = "_KW_TITLE"}
    }
end

function MonthlyCardShopVipItem:ctor(param)
    param = param or {}
    MonthlyCardShopVipItem.super.ctor(self, param)
    self._param = param
    self._propType = 0
    self:initView()
    RedPointManager:addListener(
        "shop/vip/vip/monthlycard_" .. self._param.propId,
        function(state)
            if tolua.isnull(self) then
                return
            end
            XH.UITool.setVisible(self, "_imgRedPoint", state)
        end
    )
end

function MonthlyCardShopVipItem:getProxyEvents()
    return {}
end

function MonthlyCardShopVipItem:setPropType(propType)
    self._propType = propType
end

function MonthlyCardShopVipItem:initView()
    local size = self._vipRoot:getContentSize()
    self:setContentSize(size)
end

function MonthlyCardShopVipItem:refreshView(data)
    local propid = data.propId or 0
    local vipInfo = VipDefine.VIP_CONF[propid]
    if vipInfo then
        self._KW_BG:loadTexture(vipInfo.bg, ccui.TextureResType.plistType)
        self._vipIcon:loadTexture(vipInfo.url, ccui.TextureResType.plistType)
        self._vipEquityTipText:setString(vipInfo.desc)

        self._propid = propid
        self._vipEquityTipText:setTextColor(vipInfo.textColor)
        self._KW_TEXT_AWARD_TIP:setTextColor(vipInfo.textColor)
        self._KW_TITLE:setTextColor(vipInfo.titleColor)
        self._vipIcon:ignoreContentAdaptWithSize(true)

        self._KW_TITLE:setString(data.title or "")
        local price = XH.lobby:getModule("MonthlyCard"):getProductPrice(data.propId)
        self._vipPriceReal:setString(price .. "元")
        local goldCnt = 0
        local goldName = ""
        for i = 1, #data.dailyRewards do
            if data.dailyRewards[i].id == XH.areaData:getGoldPropId() then
                goldCnt = goldCnt + data.dailyRewards[i].count
                goldName = data.dailyRewards[i].name
            end
        end
        self._vipEquityText:setString(XH.StringTool.numberToString(goldCnt) .. goldName)
        self._vipAwardText:setString(XH.StringTool.numberToString(data.purchaseRewards[1].count) .. data.purchaseRewards[1].name)
    end
end

return MonthlyCardShopVipItem
