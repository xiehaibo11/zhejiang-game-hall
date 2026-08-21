local ActPeGPModule = class("ActPeGPModule", XH.ModuleBase)
local RedPointManager = import("...Manager.RedPointManager")
local Utils = import("...Tool.Utils")
local Config = import(".Config")
local LocalConfig = import("...Configs.LocalConfig")
local RemoteConfig = import("...Configs.RemoteConfig")
ActPeGPModule.ActName = "TeHuiLiBao"
ActPeGPModule.ActNameMRFL = "TeHuiLiBaoMrfl"
ActPeGPModule.EVENT_ACT_INFO = "EVENT_ACT_INFO"
local LOCAL_SAVEINFO_KEY = "LOCAL_SAVEINFO_KEY_ACTFIRSTRECHARE"

function ActPeGPModule:ctor()
    ActPeGPModule.super.ctor(self)
    self:initRedPoint()
    -- self._actInfo = {
    --     {title = "每日礼包", randGift = {}, gift = {}, cycle = 1}, {
    --         title = "每周礼包",
    --         randGift = {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
    --         gift = {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
    --         cycle = 7
    --     }, {
    --         title = "每月礼包",
    --         randGift = {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
    --         gift = {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
    --         cycle = 30
    --     }
    -- } -- 基础活动信息

    -- self._actInfo = {{}, {}, {}} -- 基础活动信息
    self._actInfo = {}
    self._actInfoMRFL = nil
    self._aid = 0
    self._aidMRFL = 0

    local info = cc.UserDefault:getInstance():getStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), "{}")
    self._saveInfo = json.decode(info)

    self:onActs({info = XH.Bridge:getModule("GoldNew"):getActs()})
end

function ActPeGPModule:getReqConfig()
    return {
        reqActDetail = {reqPath = XH.Bridge:getReqPath("ReqActDetail"), callBack = self.onActDetailResp},
        reqActInfo = {reqPath = XH.Bridge:getReqPath("ReqPeriodicGiftPackageInfo"), callBack = self.onActInfoResp},
        reqActInfoMRFL = {reqPath = XH.Bridge:getReqPath("ReqPeriodicGiftPackageInfo"), callBack = self.onActInfoMRFLResp},
        reqGetAward = {reqPath = XH.Bridge:getReqPath("ReqGetDailyFreeGift"), callBack = self.onGetAwardResp}
    }
end

function ActPeGPModule:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_ACT_LIST", callBack = "onActs"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_DAY_CHANGE", callBack = "onDayChange"}
        -- {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyDiamond"}
    }
end

function ActPeGPModule:onActs(event)
    local acts = clone(event.info) or {}
    table.sort(acts, function(a, b)
        return a.aid < b.aid
    end)
    local now = self:getServerTime()
    local actInfo = Utils:find(acts, function(info)
        local start = tonumber(info.online)
        local endTime = tonumber(info.offline)
        return info.type == ActPeGPModule.ActName and now > start and now < endTime
    end)
    local actInfoMRFL = Utils:find(acts, function(info)
        local start = tonumber(info.online)
        local endTime = tonumber(info.offline)
        return info.type == ActPeGPModule.ActNameMRFL and now > start and now < endTime
    end)
    if actInfoMRFL then
        self._aidMRFL = actInfoMRFL.aid
    end
    if actInfo then
        self._aid = actInfo.aid
    end
    self:reqActInfo()
    -- for _, info in pairs(acts) do
    --     local act = info
    --     local start = tonumber(act.online)
    --     local endTime = tonumber(act.offline)
    --     local now = self:getServerTime()
    --     if info.type == ActPeGPModule.ActName and now > start and now < endTime then
    --         self:setActivityId(info.aid)
    --     end
    --     print("ActPeGPModule:onActs", info.type, info.aid, start, endTime)
    -- end
    -- self:setActivityId(100766)
end

-- 排除每个福利任务
function ActPeGPModule:isValid()
    return #self._actInfo > 0
end

function ActPeGPModule:isAllValid()
    return self:isValid() or self._actInfoMRFL ~= nil
end

function ActPeGPModule:initRedPoint()
    -- RedPointManager:registerNode("shop/rec/firstrecharge")
    RedPointManager:registerNode("shop/rec/rec/freegift")
    RedPointManager:registerNode("act/giftPackage/actPeGP/freegift")
    -- RedPointManager:registerNode("shop/rec/cycle1")
    -- RedPointManager:registerNode("shop/rec/cycle7")
    -- RedPointManager:registerNode("shop/rec/cycle30")
end

function ActPeGPModule:updateRedPointState()
    local isHave = self:isHaveFreeGift()
    RedPointManager:setState("shop/rec/rec/freegift", isHave, false)
    RedPointManager:setState("act/giftPackage/actPeGP/freegift", isHave, false)
end

function ActPeGPModule:getActInfo(bWithDailyFree)
    local info = {unpack(self._actInfo)}
    local beiShu = {}
    for i = #info, 1, -1 do
        if info[i].lblx == Config.LBLX.CYCLE1 then
            beiShu[info[i].dayIdx] = info[i].gift[1].beiShu
            if info[i].buyNum >= info[i].limitNum and info[i].dayIdx ~= info[i].limitNum then
                table.remove(info, i)
            elseif info[i].buyNum < info[i].limitNum and info[i].dayIdx ~= info[i].buyNum + 1 then
                table.remove(info, i)
            else
                info[i].beiShu = beiShu
            end
        end
    end
    if bWithDailyFree and self._actInfoMRFL then
        return {self._actInfoMRFL, unpack(info)}
    end
    return info
end

function ActPeGPModule:getActInfoInShop()
    local actInfo = self:getActInfo(true)
    local rt = {}
    local title = {"每日福利", "每日礼包", "每周礼包", "每月礼包"}
    for i, v in ipairs(actInfo) do
        local temp = clone(v)
        temp.title = title[v.lblx]
        temp.sort = 20 + v.lblx
        temp.isInShop = true
        temp.classPath = "lobby.Modules.GoldNew.SubModules.ActPeriodicGiftPackage.ActPeGPItem"
        if temp.buyNum >= temp.limitNum then
            temp.sort = 999 + v.lblx -- 已领的放最后
        end
        rt[i] = temp
    end
    return rt
end

function ActPeGPModule:updateSaveInfo(k, v)
    self._saveInfo[k] = v
    cc.UserDefault:getInstance():setStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), json.encode(self._saveInfo))
end

function ActPeGPModule:getSaveInfo(k)
    return self._saveInfo[k]
end

function ActPeGPModule:getActivityId()
    return self._aid
end

function ActPeGPModule:getServerTime()
    return XH.Bridge:getModule("GoldNew"):getServerTime()
end

function ActPeGPModule:reqActInfo(id)
    if self._aid > 0 then
        self:startReq("reqActInfo", self._aid)
    end
    if self._aidMRFL > 0 then
        self:startReq("reqActInfoMRFL", self._aidMRFL)
    end
    -- self:onActInfoResp() -- test
end

function ActPeGPModule:onActInfoResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local reqInfo = cell.reqData
        self._actInfo = {}
        local dayIdx = 1
        for i, v in ipairs(data.info) do
            local temp = {
                lbid = v.lbid,
                lblx = v.lblx,
                gift = v.bdhdReward,
                randGift = v.ewhdReward,
                limitNum = v.xgcs,
                buyNum = v.dqygmcs,
                dayIdx = 1, -- 每日礼包序号1-3
                beiShu = {}, -- 每日礼包保存的3个倍数
                golds = {}, -- 每日礼包保存的3个金币数量
                lbids = {}, -- 每日礼包保存的3个礼包id
                actid = reqInfo.act_id
            }
            for j, vg in ipairs(temp.gift) do
                local propInfo = string.split(vg.rewardName, "×")
                vg.propName = propInfo[1] or ""
                vg.propCnt = propInfo[2]
                vg.beiShu = propInfo[3]
                print(i, "gift" .. j, vg.rewardName)
            end
            for j, vg in ipairs(temp.randGift) do
                local propInfo = string.split(vg.rewardName, "×")
                vg.propName = propInfo[1] or ""
                vg.propCnt = propInfo[2]
                print(i, "gift2" .. j, vg.rewardName)
            end
            if v.lblx == Config.LBLX.CYCLE1 then -- 每日礼包有3个配置项，其中awardname是倍数信息，需要根据已购买次数去对应ymn商品id
                temp.dayIdx = dayIdx
                dayIdx = dayIdx + 1
            end
            --     local idx = Utils:findIdx(self._actInfo, function(x)
            --         return x.lblx == v.lblx
            --     end)
            --     if idx > 0 then
            --         temp.beiShu = self._actInfo[idx].beiShu
            --         temp.golds = self._actInfo[idx].golds
            --         temp.lbids = self._actInfo[idx].lbids
            --         table.remove(self._actInfo, idx)
            --     end
            --     temp.beiShu[#temp.beiShu + 1] = temp.gift[1].beiShu or ""
            --     temp.golds[#temp.golds + 1] = temp.gift[1].propCnt or "0"
            --     temp.lbids[#temp.lbids + 1] = temp.lbid
            --     table.insert(self._actInfo, temp)
            -- else
            table.insert(self._actInfo, temp)
            -- end

            -- if v.lbid == 1 then
            --     self:showGetAward(v.lbid)
            -- end
        end
        table.sort(self._actInfo, function(a, b)
            if a.lblx == b.lblx then
                return a.lbid < b.lbid
            end
            return a.lblx < b.lblx
        end)
        self:updateRedPointState()
        self:dispatchEvent({name = self.EVENT_ACT_INFO, info = self:getActInfo()})
    end
end

function ActPeGPModule:onActInfoMRFLResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local reqInfo = cell.reqData
        local v = data.info[1]
        if v then
            local temp = {
                lbid = v.lbid,
                lblx = v.lblx,
                gift = v.bdhdReward,
                randGift = v.ewhdReward,
                limitNum = v.xgcs,
                buyNum = v.dqygmcs,
                beiShu = {},
                golds = {},
                actid = reqInfo.act_id
            }
            if v.lblx == Config.LBLX.FREE then
                -- 约定，每日礼包只配置1个奖励，但需要限时2个，第二个与附赠2一样，名称显示？
                temp.gift[2] = clone(temp.randGift[2] or temp.randGift[1])
                temp.gift[2].rewardName = "金币×0×？"
            end
            for _, v in ipairs(temp.gift) do
                local propInfo = string.split(v.rewardName, "×")
                v.propName = propInfo[1] or ""
                v.propCnt = propInfo[2]
                v.showName = propInfo[3]
            end
            for _, v in ipairs(temp.randGift) do
                local propInfo = string.split(v.rewardName, "×")
                v.propName = propInfo[1] or ""
                v.propCnt = propInfo[2]
            end
            self._actInfoMRFL = temp
        end
        self:updateRedPointState()
        self:dispatchEvent({name = self.EVENT_ACT_INFO, info = self:getActInfo()})
    end
end

function ActPeGPModule:reqActDetail(aid)
    self:startReq("reqActDetail", aid)
end

function ActPeGPModule:onActDetailResp(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
    elseif flag == XH.Req.TYPE.TIMEOUT then
    else
    end
end

function ActPeGPModule:reqGetAward()
    -- for _, v in ipairs(self._actInfo) do
    --     if v.lblx == Config.LBLX.FREE then
    XH.TipTool.showLoading()
    self:startReq("reqGetAward", self._actInfoMRFL.actid, self._actInfoMRFL.lbid)
    -- end
    -- end
end

function ActPeGPModule:onGetAwardResp(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:showGetAwardFree(data.reward)
    elseif type == XH.Req.TYPE.FAIL then
        XH.TipTool.showToast(cell:getMessage())
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("请求奖励超时")
    end
end

-- 请求下单
function ActPeGPModule:reqBuyGift(lbid)
    if self:getActivityId() == 0 then
        return
    end
    self._buyLBID = lbid
    self:reqBuyPropByProductId(lbid)
end

function ActPeGPModule:getProductInfo(lbid)
    if not lbid then
        return
    end
    local productId = ActPeGPModule.ActName .. "_" .. lbid
    local rmbGoods = XH.Bridge:getModule("YGiftBankruptcy"):getRMBGoods()
    for i = 1, #rmbGoods do
        if rmbGoods[i].productId == productId then
            return rmbGoods[i]
        end
    end
    return nil
end

-- 寻找商品id对应的商品礼包并下单
function ActPeGPModule:reqBuyPropByProductId(lbid)
    local productInfo = self:getProductInfo(lbid)
    if not productInfo then
        XH.TipTool.showToast("未找到匹配档位的商品" .. ActPeGPModule.ActName .. "_" .. lbid .. "，请联系客服~")
        return
    end
    XH.Bridge:getModule("Shop"):reqBuyDiamond(productInfo, nil, productInfo.productId, nil, nil, nil, "gift", {})
end

function ActPeGPModule:onRechargeSuccess()
    -- XH.TipTool.showToast("onRechargeSuccess" .. self._buyLBID)
    -- if self._buyLBID == 1 then
    --     self:updateSaveInfo("autoShowSecondView", false)
    -- end
    self:showGetAward(self._buyLBID)
    -- XH.SysTool.performWithDelayGlobal(function()
    --     -- self:getActAward(0)
    -- end, 0.5)
end

-- 充值礼包后活动
function ActPeGPModule:showGetAward(lbid)
    local awardInfo = {prize_names = {}, prize_pic = {}, propid = {}, count = {}, image_urls = {}, prize_count = {}}
    local info = Utils:find(self._actInfo, function(v)
        return v.lbid == lbid
    end)
    if not info then
        return
    end

    for i, e in pairs(info.gift) do
        awardInfo.prize_names[i] = e.propName
        awardInfo.prize_count[i] = e.propCnt
        awardInfo.image_urls[i] = e.rewardImg
    end
    for i, e in pairs(info.randGift) do
        local idx = #awardInfo.prize_names + 1
        awardInfo.prize_names[idx] = e.propName
        awardInfo.prize_count[idx] = e.propCnt
        awardInfo.image_urls[idx] = e.rewardImg
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.Bridge.viewManager:openView("BackActivityAwardView", nil, {
        closeFunc = function()
            self:startReq("reqActInfo", self._aid)
        end
    }, awardInfo)
end

function ActPeGPModule:showGetAwardFree(award)
    local awardInfo = {prize_names = {}, prize_pic = {}, propid = {}, count = {}, image_urls = {}, prize_count = {}}
    for i, e in pairs(award) do
        local propInfo = string.split(e.rewardName, "×")
        awardInfo.prize_names[i] = propInfo[1]
        awardInfo.prize_count[i] = propInfo[2]
        awardInfo.image_urls[i] = e.rewardImg
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.Bridge.viewManager:openView("BackActivityAwardView", nil, {
        closeFunc = function()
            self:startReq("reqActInfoMRFL", self._aidMRFL)
        end
    }, awardInfo)
end

function ActPeGPModule:isHaveFreeGift()
    return self._actInfoMRFL and (self._actInfoMRFL.buyNum < self._actInfoMRFL.limitNum)
end

function ActPeGPModule:getAddGiveNum(lblx, idx)
    local cfg = RemoteConfig:getConfigByName("act")
    local numStr = (cfg and cfg.PeGP and cfg.PeGP.num or "") or ""
    local info = string.split(numStr, "_")
    for i, v in ipairs(info) do
        local tmp = string.split(v, "#")
        if tonumber(tmp[1]) == lblx and tonumber(tmp[2]) == idx then
            return tmp[3]
        end
    end
end

function ActPeGPModule:onDayChange()
    XH.SysTool.performWithDelayGlobal(function()
        self:reqActInfo()
    end, 5)
end

function ActPeGPModule:isNeedReq()
    return false
end

function ActPeGPModule:isHaveAward()
    return false
end

function ActPeGPModule:isOpening()
    return XH.Bridge.viewManager:isViewExist("GoldHallPeGPView")
end

function ActPeGPModule:openView(fromScene)
    XH.Bridge.viewManager:openView("GoldHallPeGPView", nil, fromScene, {auto=true})
end
return ActPeGPModule
�@