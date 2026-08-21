-- 会员权益item
local VipItem = class("VipItem", XH.ViewBase)
local VipDefine = require("lobby.Modules.NewVip.VipDefine")
local LocalConfig = import("...Configs.LocalConfig")

function VipItem:getCSBPath()
    return "cocosStudio/hall/CSB/NewGoldHall/Shop/VipShopItem.csb"
end

function VipItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_vipRoot"},
        ["_KW_IMG_PRODUCT_IMG"] = {varName = "_vipIcon"}, -- 图标
        ["_KW_TEXT_REVIP"] = {varName = "_revipText"}, -- 续费+
        ["_KW_TEXT_LEFTTIME"] = {varName = "_vipLeftTimeText"}, -- 剩余时间text
        ["_KW_PANEL_LEFTTIME"] = {varName = "_vipLeftTimePanel"}, -- 剩余时间panel
        ["_KW_TEXT_AWARD"] = {varName = "_vipAwardText"}, -- 奖励立得信息
        ["_KW_TEXT_EQUITYAWARD"] = {varName = "_vipEquityText"}, -- 每日权益奖励
        ["_KW_TEXT_EQUITYAWARD_TIP"] = {varName = "_vipEquityTipText"}, -- 每日权益描述
        ["_KW_TXT_PRICE"] = {varName = "_vipPrice"}, -- 价格
        ["_KW_TEXT_AWARD_TIP"] = {varName = "_KW_TEXT_AWARD_TIP"},
        ["_KW_TXT_PRICE_REAL"] = {varName = "_vipPriceReal"}, -- 真实价格
        ["_KW_BG"] = {varName = "_KW_BG"},
        ["_KW_TITLE"] = {varName = "_KW_TITLE"}
    }
end

function VipItem:ctor(param)
    param = param or {}
    VipItem.super.ctor(self, param)
    self._param = param
    self._propType = 0
    self:initView()
end

function VipItem:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_REFRESH_SYSTEM", callBack = "onReqSystemTimeSuccess"},
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_TIME_DROPS_CHANGED", callBack = "onPropDataChanged"}
    }
end

function VipItem:setPropType(propType)
    self._propType = propType
end

function VipItem:initView()
    local size = self._vipRoot:getContentSize()
    self:setContentSize(size)
end

function VipItem:refreshView(price, propid, mark, index)
    local vipInfo = VipDefine.VIP_CONF[propid]
    if vipInfo then
        self._KW_BG:loadTexture(vipInfo.bg, ccui.TextureResType.plistType)
        self._vipIcon:loadTexture(vipInfo.url, ccui.TextureResType.plistType)
        self._vipPriceReal:setString(price)
        self._vipPrice:setString(vipInfo.price)
        self._vipEquityTipText:setString(vipInfo.desc)
        self._vipEquityText:setString(vipInfo.equityAward[1].desc)
        self._vipAwardText:setString(vipInfo.reward[1].desc)
        self._propid = propid
        self._price = price
        self._index = index
        self:calcTimeStamp()
        self._vipEquityTipText:setTextColor(vipInfo.textColor)
        self._KW_TEXT_AWARD_TIP:setTextColor(vipInfo.textColor)
        self._KW_TITLE:setString(vipInfo.name)
        self._KW_TITLE:setTextColor(vipInfo.titleColor)
    end
end

function VipItem:updateTime(leftTime, propid)
    local timeStr = ""
    if leftTime <= 0 then
        self._vipLeftTimeText:setString(timeStr)
        self._vipLeftTimePanel:setVisible(false)
        self._revipText:setVisible(false)
        return
    end
    self._vipLeftTimePanel:setVisible(false)
    self._revipText:setVisible(false)
    -- self._vipLeftTimePanel:setVisible(true) -- 不要了
    -- self._revipText:setVisible(true) -- 不要了
    self._revipText:setString(VipDefine.VIP_RE_VIP[propid])
    local leftDays = math.floor(leftTime / 86400)
    if leftDays < 1 then
        if leftTime < 60 * 60 then
            timeStr = "即将到期"
        else
            local leftHour = math.floor(leftTime / 3600)
            timeStr = "剩余" .. leftHour .. "小时"
        end
    else
        timeStr = "剩余" .. leftDays .. "天"
    end

    self._vipLeftTimeText:setString(timeStr)
end

function VipItem:onReqSystemTimeSuccess(event)
    self._timeStamp = event.data
    self:calcTimeStamp()
end

-- 数据更新消息监听
function VipItem:onPropDataChanged()
    self:calcTimeStamp()
end

function VipItem:calcTimeStamp()
    if not self._timeStamp then
        self._timeStamp = XH.lobby:getModule("Shop"):getSysTimestamp()
    end
    local timeProps = XH.playerData:getPlayerTimeDrop()
    local overdueTime = 0
    if timeProps and #timeProps > 0 then
        for i = 1, #timeProps do
            if timeProps[i].id == self._propid and self._timeStamp <= timeProps[i].time then
                overdueTime = tonumber(timeProps[i]["time"]) - self._timeStamp
            end
        end
    end
    self._leftTime = overdueTime
    self:updateTime(overdueTime, self._propid)
end

return VipItem
