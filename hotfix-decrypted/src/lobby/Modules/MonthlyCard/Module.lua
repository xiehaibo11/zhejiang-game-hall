local MonthlyCardModule = class("MonthlyCardModule", XH.ModuleBase)
local RedPointManager = require("lobby.Modules.GoldNew.Manager.RedPointManager")

MonthlyCardModule.MonthlyCardType = {
    CHAO_ZHI_PROP_ID = 150830, -- 超值月卡
    CAI_SHEN_PROP_ID = 150831 -- 财神月卡
}

MonthlyCardModule.EVENT_FLUSH_MONTHLY_CARD = "EVENT_FLUSH_MONTHLY_CARD"

function MonthlyCardModule:getReqConfig()
    return {
        ReqMonthlyCardRequest = {reqPath = "lobby.Modules.MonthlyCard.Req.ReqMonthlyCardRequest", callBack = self.onMonthlyCardInfo},
        ReqGetMonthlyCardRequest = {reqPath = "lobby.Modules.MonthlyCard.Req.ReqGetMonthlyCardRequest", callBack = self.onGetMonthlyCard}
    }
end

function MonthlyCardModule:getProxyEvents()
    return {
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp"}
    }
end

-- 月卡功能
function MonthlyCardModule:ctor()
    MonthlyCardModule.super.ctor(self)
    self._aid = 0

    -- self._monthlyCardInfos = {
    --     [MonthlyCardModule.MonthlyCardType.CHAO_ZHI_PROP_ID] = {
    --         title = "超值月卡",
    --         propId = MonthlyCardModule.MonthlyCardType.CHAO_ZHI_PROP_ID,
    --         id = "monthly_card_150830",
    --         price = 2800, -- 月卡价格
    --         diamond = 2800,
    --         returnRatio = 438, -- 收益率
    --         purchaseRewards = {{count = 100000, id = -1, name = "金币", icon = ""}}, -- 购买立得
    --         totalGold = 1200000, -- 共计可得
    --         dailyRewards = {
    --             {count = 221, id = 150130, name = "记牌器", icon = ""},
    --             {count = 22, id = -1, name = "金币", icon = ""},
    --             {count = 23, id = -1, name = "金币", icon = ""}
    --         },
    --         validityDays = 20, -- 有效期
    --         dailyGetLimit = 1 -- 剩余领取次数
    --     },
    --     [MonthlyCardModule.MonthlyCardType.CAI_SHEN_PROP_ID] = {
    --         title = "财神月卡",
    --         propId = MonthlyCardModule.MonthlyCardType.CAI_SHEN_PROP_ID,
    --         id = "monthly_card_150831",
    --         price = 5800,
    --         diamond = 5800,
    --         returnRatio = 838,
    --         purchaseRewards = {{count = 200000, id = -1, name = "金币", icon = ""}},
    --         totalGold = 2200000,
    --         dailyRewards = {
    --             {count = 21, id = -1, name = "金币", icon = ""},
    --             {count = 22, id = -1, name = "金币", icon = ""},
    --             {count = 23, id = -1, name = "金币", icon = ""}
    --         },
    --         validityDays = 0,
    --         dailyGetLimit = 0
    --     }
    -- }

    self._monthlyCardInfos = {}

    self:fullData()

    RedPointManager:registerNode("shop/rec/rec/monthlycard_150830")
    RedPointManager:registerNode("shop/rec/rec/monthlycard_150831")
    RedPointManager:registerNode("shop/vip/vip/monthlycard_150830")
    RedPointManager:registerNode("shop/vip/vip/monthlycard_150831")
end

-- 获取当前到次日凌晨零点的时间差（单位：秒）
function MonthlyCardModule:getSecondsToNextDayZero()
    local currentTime = XH.lobby:getModule("Shop"):getServerTime()
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG then
        currentTime = os.time()
    end
    local nowTable = os.date("*t", currentTime)
    local nextDayTable = {year = nowTable.year, month = nowTable.month, day = nowTable.day + 1, hour = 0, min = 0, sec = 0}
    local nextDayTime = os.time(nextDayTable)
    return nextDayTime - currentTime
end

function MonthlyCardModule:stopSchedule()
    if self._tomorrowScheduleScriptID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._tomorrowScheduleScriptID)
        self._tomorrowScheduleScriptID = nil
    end
end

function MonthlyCardModule:setActivityId(id)
    self._aid = id
    self:reqMonthlyCardInfo()
end

function MonthlyCardModule:reqMonthlyCardInfo()
    self:stopSchedule()
    if self._aid > 0 then
        self:startReq("ReqMonthlyCardRequest", {actId = self._aid})

        if next(self._monthlyCardInfos) then
            local minLeftTime = 60 * 60 * 24
            minLeftTime = math.min(minLeftTime, self:getSecondsToNextDayZero()) + 2

            self._tomorrowScheduleScriptID =
                cc.Director:getInstance():getScheduler():scheduleScriptFunc(
                function()
                    self:stopSchedule()
                    self:reqMonthlyCardInfo()
                end,
                minLeftTime,
                false
            )
        end
    end
end

function MonthlyCardModule:onMonthlyCardInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._showMonthlyCardPropId = nil
        self._monthlyCardInfos = {}
        for _, v in pairs(data.infos) do
            self._monthlyCardInfos[v.propId] = v
            if v.propId == MonthlyCardModule.MonthlyCardType.CHAO_ZHI_PROP_ID then
                v.title = "超值月卡"
            elseif v.propId == MonthlyCardModule.MonthlyCardType.CAI_SHEN_PROP_ID then
                v.title = "财神月卡"
            else
                v.title = ""
            end
            RedPointManager:setState("shop/rec/rec/monthlycard_" .. v.propId, v.dailyGetLimit > 0, false)
            RedPointManager:setState("shop/vip/vip/monthlycard_" .. v.propId, v.dailyGetLimit > 0, false)
        end
        -- data.show = math.random() > 0.5 and MonthlyCardModule.MonthlyCardType.CAI_SHEN_PROP_ID or MonthlyCardModule.MonthlyCardType.CHAO_ZHI_PROP_ID
        if data.show and data.show ~= 0 then
            self._showMonthlyCardPropId = data.show
        end
        self:fullData()
        self:dispatchEvent({name = MonthlyCardModule.EVENT_FLUSH_MONTHLY_CARD})
        if self._willShowView then
            self._willShowView()
        end
    end
end

function MonthlyCardModule:getMonthlyCardAward(cardId)
    self:startReq("ReqGetMonthlyCardRequest", {actId = self._aid, cardId = cardId})
end

function MonthlyCardModule:onGetMonthlyCard(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:startReq("ReqMonthlyCardRequest", {actId = self._aid})
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        for _, v in ipairs(data.rewards) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = v.name .. " x" .. XH.StringTool.numberToString(v.count)
            awardInfo.image_urls[#awardInfo.image_urls + 1] = v.icon or ""
        end
        XH.viewManager:openView(
            "BackActivityAwardView",
            nil,
            {
                closeFunc = function()
                    XH.playerData:flushGoldCoin()
                    self:reqMonthlyCardInfo()
                end
            },
            awardInfo
        )
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, req:getMessage())
    end
end

function MonthlyCardModule:isNeedReq()
    return false
end

function MonthlyCardModule:isValid()
    return self._aid ~= 0 and next(self._monthlyCardInfos) ~= nil
end

function MonthlyCardModule:isOpening()
    return XH.viewManager:isViewExist("MonthlyCardView")
end

function MonthlyCardModule:isHaveAward()
    for _, v in pairs(self._monthlyCardInfos) do
        if v.dailyGetLimit > 0 then
            return true
        end
    end
    return false
end

function MonthlyCardModule:openView(scenefrom, isInGame, pos, changeSceneName)
    self:openMonthlyCardView(nil, {auto = true, changeSceneName = changeSceneName})
end

function MonthlyCardModule:openMonthlyCardView(zorder, params)
    params = params or {}
    self._willShowView = function()
        if params.propId == nil then
            local showPropId = self:getShowMonthlyCardPropId()
            if showPropId then
                params.propId = showPropId
            end
        end
        XH.viewManager:openView("MonthlyCardView", zorder, params)
        self._willShowView = nil
    end
    self:reqMonthlyCardInfo()
end

function MonthlyCardModule:fullData()
    local index = 1
    for _, v in pairs(self._monthlyCardInfos) do
        v.sort = 30 + index
        v.classPath = "lobby.Modules.MonthlyCard.ShopRecItem"
        index = index + 1
    end
end

function MonthlyCardModule:getYmnProductByPropId(propid)
    local rmbGoods = XH.Bridge:getModule("YGiftBankruptcy"):getRMBGoods()
    for i = 1, #rmbGoods do
        if rmbGoods[i].productId == "monthly_card_" .. propid then
            return rmbGoods[i]
        end
    end
    return nil
end

function MonthlyCardModule:getProductPrice(propid)
    local info = self._monthlyCardInfos[propid]
    return (self:getYmnProductByPropId(propid) or {})["price"] or (info and info.price and info.price / 100) or "-"
end

function MonthlyCardModule:getMonthlyCardInfos()
    return self._monthlyCardInfos
end

function MonthlyCardModule:getShowMonthlyCardPropId()
    return self._showMonthlyCardPropId -- 返回nil表示不指定显示哪一个
end

function MonthlyCardModule:getMonthlyCardInfo(propid)
    return self._monthlyCardInfos[propid]
end

function MonthlyCardModule:showGetAward(propid)
    local info = self._monthlyCardInfos[propid]
    if info then
        local awardInfo = {}
        awardInfo.isPromote = true
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        for _, v in pairs(info.purchaseRewards) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = v.name .. " x" .. XH.StringTool.numberToString(v.count)
            awardInfo.image_urls[#awardInfo.image_urls + 1] = v.icon or ""
        end
        XH.viewManager:openView(
            "BackActivityAwardView",
            nil,
            {
                closeFunc = function()
                    XH.playerData:flushGoldCoin()
                    self:reqMonthlyCardInfo()
                end
            },
            awardInfo
        )
    end
    XH.TipTool.showToast("月卡开通成功（有效期30天）")
end

function MonthlyCardModule:buyMonthlyCard(propid)
    local product = self:getYmnProductByPropId(propid)
    if product then
        XH.Bridge:getModule("Shop"):reqBuyDiamond(product, nil, product.productId, nil, nil, nil, "gift", {})
        return
    end
    XH.TipTool.showToast("未找到匹配档位的商品" .. propid .. "，请联系客服!")
end

function MonthlyCardModule:isPayWithGift(msg)
    if not msg then
        return false
    end
    local data = msg.productInfo
    if data and data.productId then
        for key, v in pairs(self._monthlyCardInfos) do
            if data.productId == v.id then
                self:showGetAward(key)
                return true
            end
        end
    end
    return false
end

return MonthlyCardModule
 S+  