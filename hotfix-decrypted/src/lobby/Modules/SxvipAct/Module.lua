local SxvipActModule = class("SxvipActModule", XH.ModuleBase)
local SxvipActConfig = require("src.lobby.Modules.SxvipAct.Config")

SxvipActModule.SXVIP_ACT_FINISH = "SXVIP_ACT_FINISH"

function SxvipActModule:ctor()
    SxvipActModule.super.ctor(self)
    self._aidInfos = {} -- 可用的活动列表
    self._aidRealInfos = {} -- 各个活动详情
    self._aidDetails = {} -- 各个活动数值
    self._isReqAct = false
    self._isReqInfo = false
end

function SxvipActModule:getReqConfig()
    return {
        reqActDetails = { reqPath = "lobby.Req.LuckTask.ReqActDetails", callBack = self.onActDetailResp },
        reqSxvipInfos = { reqPath = "lobby.Req.LuckTask.ReqSxvipInfos", callBack = self.onSxvipInfosResp },
    }
end

function SxvipActModule:isReqActFinish()
    return self._isReqAct and self._isReqInfo
end

function SxvipActModule:flushAct()
    if self:isReqActFinish() then
        self:dispatchEvent({ name = self.SXVIP_ACT_FINISH })
    end
end

function SxvipActModule:reqActDetails()
    local aids = {}
    for i = 1, #self._aidInfos do
        aids[#aids + 1] = self._aidInfos[i].aid
    end
    if #aids <= 0 then
        self._aidDetails = {}
        return
    end
    self:startReq("reqActDetails", aids)
end

function SxvipActModule:onActDetailResp(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._aidDetails = {}
        for i = 1, #data.act do
            local success, actDetail = pcall(
            function()
                return json.decode(data.act[i].special)
            end
            )
            if success then
                data.act[i].actDetail = actDetail
            end
            self._aidDetails[#self._aidDetails + 1] = data.act[i]
        end
        self._isReqAct = true
        self:flushAct()
    end
end

function SxvipActModule:reqSxvipInfos(isShow)
    if isShow then
        XH.TipTool.showLoading()
    end
    local aids = {}
    for i = 1, #self._aidInfos do
        aids[#aids + 1] = self._aidInfos[i].aid
    end
    if #aids <= 0 then
        self._aidRealInfos = {}
        return
    end
    self:startReq("reqSxvipInfos", aids)
end

function SxvipActModule:onSxvipInfosResp(cell, flag, data)
    XH.TipTool.hideLoading()
    if flag == XH.Req.TYPE.SUCCESS then
        if data.avdInfo then
            self._aidRealInfos = data.avdInfo
        end
        self._isReqInfo = true
        self:flushAct()
    end
end

function SxvipActModule:flushAids(data)
    self:subjectLoginCallBack()
    for _, info in pairs(data.act) do
        if info.type == SxvipActConfig.ACT and self:isInActTimeAllTime(info) then
            self._aidInfos[#self._aidInfos + 1] = info
        end
    end
    if #self._aidInfos > 0 then
        self:reqActDetails()
        self:reqSxvipInfos()
    end
end

-- 判断活动是否在线
function SxvipActModule:isInActTimeAllTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) then
        return true
    end
    return false
end

function SxvipActModule:subjectLoginCallBack()
    self._aidInfos = {}
    self._aidRealInfos = {}
    self._aidDetails = {}
    self._isReqAct = false
    self._isReqInfo = false
end

-- 获取符合的活动商品
function SxvipActModule:getActItems()
    if not self:isReqActFinish() then
        return {}
    end
    local items = {}
    for i = 1, #self._aidDetails do
        for j = 1, #self._aidRealInfos do
            if self._aidDetails[i].aid == self._aidRealInfos[j].actId then
                if self._aidRealInfos[j].status == 1 and self:getRemainTime(self._aidDetails[i].aid) > 0 then
                    self._aidDetails[i].aidRealInfos = self._aidRealInfos[i]
                    items[#items + 1] = self._aidDetails[i]
                end
            end
        end
    end
    return items
end

-- 获取最便宜档位的商品
function SxvipActModule:getShowAct()
    if not self:isReqActFinish() then
        return nil
    end
    local items = self:getActItems()
    local preItem = nil
    for i = 1, #items do
        if preItem == nil then
            preItem = items[i]
        elseif preItem.actDetail.discounted_price > items[i].actDetail.discounted_price then
            preItem = items[i]
        end
    end
    return preItem
end

-- 通过时间+原价获取是否有对应活动档位的商品(找最便宜的)
function SxvipActModule:getTargetAct(time, prize, isSub)
    if not self:isReqActFinish() then
        return nil
    end
    local items = self:getActItems()
    local preItem = nil
    for i = 1, #items do
        if items[i].actDetail.day == time and items[i].actDetail.original_price == prize and ((items[i].actDetail.is_sub == 0 and isSub == false) or (items[i].actDetail.is_sub == 1 and isSub)) then
            if preItem == nil then
                preItem = items[i]
            elseif preItem.actDetail.discounted_price > items[i].actDetail.discounted_price then
                preItem = items[i]
            end
        end
    end
    return preItem
end

-- 通过时间+原价获取优惠商品
function SxvipActModule:getActShopInfo(time, prize, isSub)
    local item = self:getTargetAct(time, prize, isSub)
    if item then
        local productData = XH.lobby:getModule("Sxvip"):getOriVipShopList()
        if productData and productData.goods_list then
            for i = 1, #productData.goods_list do
                if productData.goods_list[i].real_price == item.actDetail.discounted_price and productData.goods_list[i].prop_count == item.actDetail.day then
                    if productData.goods_list[i].tags and productData.goods_list[i].tags[1] then
                        if (isSub and productData.goods_list[i].tags[1].key == "Discounted-subscription") or (isSub == false and productData.goods_list[i].tags[1].key == "Discounted-Non-subscription") then
                            return productData.goods_list[i]
                        end
                    end
                end
            end
        end
    end
    return nil
end

-- 通过时间+原价获取是否有对应商品
function SxvipActModule:getTargetInfo(time, prize, isSub)
    local productData = XH.lobby:getModule("Sxvip"):getVipShopList()
    if productData and productData.goods_list and #productData.goods_list > 0 then
        for i = 1, #productData.goods_list do
            if productData.goods_list[i].real_price == prize and productData.goods_list[i].prop_count == time and productData.goods_list[i].tags and productData.goods_list[i].tags[1] then
                if (isSub and productData.goods_list[i].tags[1].key == "Subscription") or (isSub == false and productData.goods_list[i].tags[1].key == "Non-subscription") then
                    return productData.goods_list[i]
                end
            end
        end
    end
    return nil
end

-- 获取剩余时间
-- 服务倒计时 + 活动倒计时 取小值
function SxvipActModule:getRemainTime(aid)
    if not self:isReqActFinish() then
        return -1
    end
    local remainTimeA = -1
    local remainTimeB = -1
    local time = XH.lobby:getModule("Shop"):getServerTime()
    for i = 1, #self._aidRealInfos do
        if self._aidRealInfos[i].actId == aid then
            remainTimeA = tonumber(self._aidRealInfos[i].endTime) - time
        end
    end
    for i = 1, #self._aidDetails do
        if self._aidDetails[i].aid == aid then
            remainTimeB = tonumber(self._aidDetails[i]["end"]) - time
        end
    end
    return remainTimeA < remainTimeB and remainTimeA or remainTimeB
end

function SxvipActModule:reqPay(time, prize, isSub, param)
    if not self:isReqActFinish() then
        return
    end
    local prizeInfo = self:getActShopInfo(time, prize, isSub)
    local oriInfo = self:getTargetInfo(time, prize, isSub)
    XH.lobby:getModule("Sxvip"):reqBuy(prizeInfo, nil, nil, param, oriInfo)
end

function SxvipActModule:isNeedReq(from)
    return from == "login"
end

function SxvipActModule:isValid()
    return self:getShowAct() ~= nil
end

function SxvipActModule:isOpening()
    return XH.viewManager:isViewExist("SxvipActView")
end

function SxvipActModule:openView()
    local shopItem = self:getShowAct()
    if shopItem == nil then
        return
    end
    XH.viewManager:openView("SxvipActView")
end

function SxvipActModule:checkScene(from)
    return from == "login" and self:isInGame()
end

function SxvipActModule:isInGame()
    return CF and CF.isInGameScene()
end

function SxvipActModule:isHaveAward()
    return false
end

return SxvipActModule �"  