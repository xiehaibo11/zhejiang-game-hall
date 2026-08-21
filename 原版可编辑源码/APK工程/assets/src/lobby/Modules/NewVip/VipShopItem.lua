-- 会员权益item
local VipShopItem = class("VipShopItem",XH.ViewBase)
local VipDefine = require("lobby.Modules.NewVip.VipDefine")

function VipShopItem:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipShopItem.csb"
end

function VipShopItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName="_vipRoot"},
        ["_KW_IMG_PRODUCT_IMG"] = {varName="_vipIcon"},                                     -- 图标
        ["_KW_TEXT_REVIP"] = {varName="_revipText"},                                        -- 续费+
        ["_KW_IMG_FLAG"] = {varName="_vipFlag"},                                            -- 推荐角标
        ["_KW_TEXT_LEFTTIME"] = {varName="_vipLeftTimeText"},                               -- 剩余时间text
        ["_KW_PANEL_LEFTTIME"] = {varName="_vipLeftTimePanel"},                             -- 剩余时间panel
        ["_KW_TEXT_AWARD"] = {varName="_vipAwardText"},                                     -- 奖励立得信息
        ["_KW_IMAGE_DETAILS_BG"] = {varName="_vipDetailPanel"},                             -- 奖励详情
        ["_KW_TEXT_DETAILS"] = {varName="_vipDetailText"},                                  -- 开通立得奖励详情
        ["_KW_TEXT_EQUITYAWARD"] = {varName="_vipEquityText"},                              -- 每日权益奖励
        ["_KW_TEXT_EQUITYAWARD_TIP"] = {varName="_vipEquityTipText"},                       -- 每日权益描述
        ["_KW_TXT_PRICE"] = {varName="_vipPrice"},                                          -- 价格
        ["_KW_TXT_PRICE_REAL"] = {varName="_vipPriceReal"},                                 -- 真实价格
        ["_KW_BTN_BUY"] = {varName="_vipExchange",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchExchange"},
        ["_KW_BTN_DETAIL"] = {varName="_vipDetailBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchDetail"},
    }
end

function VipShopItem:ctor(param)
    param = param or {}
    VipShopItem.super.ctor(self,param)
    self._propType = 0
    self:initView()
end

function VipShopItem:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_REFRESH_SYSTEM", callBack = "onReqSystemTimeSuccess" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_TIME_DROPS_CHANGED", callBack = "onPropDataChanged" },
    }
end

function VipShopItem:setPropType(propType)
    self._propType = propType
end

function VipShopItem:initView()
    local size = self._vipRoot:getContentSize()
    self:setContentSize(size)
end

function VipShopItem:refreshView(price,propid,mark,index)
    local vipInfo = VipDefine.VIP_CONF[propid]
    self._vipIcon:loadTexture(vipInfo.url,ccui.TextureResType.plistType)
    self._vipPriceReal:setString(price)
    self._vipPrice:setString(vipInfo.price)
    self._vipEquityTipText:setString(vipInfo.desc)
    self._vipEquityText:setString(vipInfo.equityAward[1].desc)
    self._vipAwardText:setString(vipInfo.reward[1].desc)
    if mark == "五折" then
        self._vipFlag:loadTexture(VipDefine.VIP_FLAG.FIVE_DISCOUNT,ccui.TextureResType.plistType)
        self._vipFlag:setVisible(true)
    elseif mark == "七折" then
        self._vipFlag:loadTexture(VipDefine.VIP_FLAG.SEVEN_DISCOUNT,ccui.TextureResType.plistType)
        self._vipFlag:setVisible(true)
    elseif mark == "推荐" then
        self._vipFlag:loadTexture(VipDefine.VIP_FLAG.RECOMMEND,ccui.TextureResType.plistType)
        self._vipFlag:setVisible(true)
    else
        self._vipFlag:setVisible(false)
    end
    if #vipInfo.reward > 1 then
        self._vipDetailBtn:setVisible(true)
    end
    self._propid = propid
    self._price = price
    self._index = index
    self:calcTimeStamp()
end

function VipShopItem:updateTime(leftTime,propid)
    local timeStr = ""
    if leftTime <= 0 then
        self._vipLeftTimeText:setString(timeStr)
        self._vipLeftTimePanel:setVisible(false)
        self._revipText:setVisible(false)
        return
    end
    self._vipLeftTimePanel:setVisible(true)
    self._revipText:setVisible(true)
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

function VipShopItem:onTouchExchange(send, eventType)
    -- 未实名不能购买 海外玩家不用实名认证
    if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
    local vipInfo = VipDefine.VIP_CONF[self._propid]
    if self._leftTime > vipInfo.timeLimit then
        XH.TipTool.showToast("已达到最大购买上限！", 3)
        return
    end
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.SHOPPING_CENTER_17,{propID = vipInfo.propid})
    local isHave = self:isHaveEnoughDiamond()
    if isHave then
        XH.lobby:getModule("Shop"):reqBuyProduct(self._propType, self._index)
    else
        vipInfo = VipDefine.VIP_CONF[self._propid]
        local param = {}
        param.targetDiamond = self._price
        param.propStr = vipInfo.name
        param.propId = self._propid
        XH.viewManager:openView("VipChargeLayer", nil, param)
    end
end

-- 钻石是否足够
function VipShopItem:isHaveEnoughDiamond()
    local useCurDiamond = XH.playerData:getDiamnd()
    return self._price <= useCurDiamond
end

function VipShopItem:onTouchDetail(send, eventType)
    self._vipDetailPanel:setVisible(true)
    self._vipDetailPanel:stopAllActions()
    self._vipDetailPanel:runAction(cc.Sequence:create(cc.FadeIn:create(0.2), cc.DelayTime:create(3), cc.FadeOut:create(0.2)))
end

function VipShopItem:onReqSystemTimeSuccess(event)
    self._timeStamp = event.data
    self:calcTimeStamp()
end

-- 数据更新消息监听
function VipShopItem:onPropDataChanged()
    self:calcTimeStamp()
end

function VipShopItem:calcTimeStamp()
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
    self:updateTime(overdueTime,self._propid)
end

return VipShopItem