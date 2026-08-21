local ActFirstRecharge = class("ActFirstRecharge", XH.ModuleBase)
local RedPointManager = import("...Manager.RedPointManager")
local RemoteConfig = import("...Configs.RemoteConfig")
local Utils = import("...Tool.Utils")
ActFirstRecharge.ActName = "GoldFirstPayGift"
ActFirstRecharge.EVENT_ACT_VAILD = "EVENT_ACT_VAILD"
ActFirstRecharge.EVENT_ACT_INFO = "EVENT_ACT_INFO"
local LOCAL_SAVEINFO_KEY = "LOCAL_SAVEINFO_KEY_ACTFIRSTRECHARE"
local LOCAL_TEST = false

function ActFirstRecharge:ctor()
    ActFirstRecharge.super.ctor(self)
    self:initRedPoint()
    if LOCAL_TEST then
        self._actInfo = {
            {
                gfpgId = 0,
                status = 1,
                expire = 0,
                awardStatus = {2, 1, 1},
                gift = {
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150153, prop_cnt = 1}},
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150153, prop_cnt = 1}}
                }
            }, {
                gfpgId = 0,
                status = 0,
                expire = math.floor(os.time()) + 5,
                awardStatus = {0, 0, 0},
                gift = {
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150153, prop_cnt = 1}},
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150153, prop_cnt = 1}}
                }
            }, {
                gfpgId = 0,
                status = 0,
                expire = 1746079116,
                awardStatus = {0, 0, 0},
                gift = {
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}},
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150153, prop_cnt = 1}},
                    {{prop_id = 150143, prop_cnt = 1}, {prop_id = 150300, prop_cnt = 1}, {prop_id = 150153, prop_cnt = 1}}
                }
            }
        } -- 基础活动信息
    else
        self._actInfo = {{}, {}, {}} -- 基础活动信息
    end
    self._aid = 0

    local info = cc.UserDefault:getInstance():getStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), "{}")
    self._saveInfo = json.decode(info)

    self:onActs({info = XH.Bridge:getModule("GoldNew"):getActs()})
end

function ActFirstRecharge:getReqConfig()
    return {
        reqActDetail = {reqPath = XH.Bridge:getReqPath("ReqActDetail"), callBack = self.onActDetailResp},
        reqActInfo = {reqPath = XH.Bridge:getReqPath("ReqGoldFirstPayGift"), callBack = self.onActInfoResp},
        reqGetAward = {reqPath = XH.Bridge:getReqPath("ReqGoldFirstPayGift"), callBack = self.onGetAwardResp}
    }
end

function ActFirstRecharge:getProxyEvents()
    return {{module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_ACT_LIST", callBack = "onActs"}}
end

function ActFirstRecharge:onActs(event)
    local acts = event.info or {}
    for _, info in pairs(acts) do
        local act = info
        local start = tonumber(act.online)
        local endTime = tonumber(act.offline)
        local now = self:getServerTime()
        if info.type == ActFirstRecharge.ActName and now > start and now < endTime then
            self:setActivityId(info.aid)
            return
        end
    end
end

function ActFirstRecharge:isValid()
    if self._aid <= 0 then
        return false
    end
    local cfg = RemoteConfig:getConfigByName("act")
    local lastId = cfg and cfg.FR and cfg.FR.lastId or {0, 1}
    local myLastId = XH.playerData:getNumberID() % 10
    if not table.indexof(cfg.FR.lastId, myLastId) then
        return false
    end
    local actInfo = self:getActInfo()
    if not actInfo or not actInfo[1] or not actInfo[1].gift then
        return false
    end
    if actInfo[1].status == nil then
        return false
    end
    if actInfo[1].status == 2 and actInfo[2].status == 2 and actInfo[3].status == 2 then
        return false
    end
    return true
end

function ActFirstRecharge:isSecondValid()
    if not self:isValid() then
        return false
    end
    local actInfo = self:getActInfo()
    if not actInfo or not actInfo[2] or not actInfo[2].expire then
        return false
    end
    local leftTime = actInfo[2].expire - self:getServerTime()
    return leftTime > 0 and actInfo[1].status >= 1
end

function ActFirstRecharge:setActivityId(id)
    self._aid = id
    if LOCAL_TEST then
    else
        if self._aid > 0 then
            self:reqActDetail(self._aid)
            self:reqActInfo()
        end
    end
    self:dispatchEvent({name = self.EVENT_ACT_VAILD, info = self._aid > 0})
end

function ActFirstRecharge:initRedPoint()
    RedPointManager:registerNode("act/giftPackage/firstRecharge/show")
    -- RedPointManager:registerNode("act/giftPackage/firstRecharge/award")
    RedPointManager:registerNode("act/giftPackage/firstRecharge/time")
    RedPointManager:registerNode("act/giftPackage/firstRecharge/tab1")
    RedPointManager:registerNode("act/giftPackage/firstRecharge/tab2")
    RedPointManager:registerNode("act/giftPackage/firstRecharge/tab3")
end

function ActFirstRecharge:updateRedPointState()
    if self._saveInfo.showed == nil then
        -- 礼包上新用户未查看过时，有红点显示
        RedPointManager:setState("act/giftPackage/firstRecharge/show", true, false)
    end
    local actInfo = self:getActInfo()
    -- local isCanGetAward = actInfo[1].status == 1 or actInfo[2].status == 1 or actInfo[3].status == 1
    -- 有奖励未领取时，页签有，红点显示
    RedPointManager:setState("act/giftPackage/firstRecharge/tab1", actInfo[1].status == 1 and table.indexof(actInfo[1].awardStatus, 1) ~= false, false)
    RedPointManager:setState("act/giftPackage/firstRecharge/tab2", actInfo[2].status == 1 and table.indexof(actInfo[2].awardStatus, 1) ~= false, false)
    RedPointManager:setState("act/giftPackage/firstRecharge/tab3", actInfo[3].status == 1 and table.indexof(actInfo[3].awardStatus, 1) ~= false, false)
    -- 购买剩余小于等于24小时，红点显示
    local leftTime = actInfo[2].expire - self:getServerTime()
    local isInTime = leftTime > 0 and leftTime <= 86400 and (actInfo[2].status == 0 or actInfo[3].status == 0)
    RedPointManager:setState("act/giftPackage/firstRecharge/time", isInTime, false)
end

function ActFirstRecharge:getActInfo()
    return self._actInfo
end

function ActFirstRecharge:updateSaveInfo(k, v)
    self._saveInfo[k] = v
    cc.UserDefault:getInstance():setStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), json.encode(self._saveInfo))
end

function ActFirstRecharge:getSaveInfo(k)
    return self._saveInfo[k]
end

function ActFirstRecharge:getActivityId()
    return self._aid
end

function ActFirstRecharge:getServerTime()
    return XH.Bridge:getModule("Shop"):getServerTime()
end

function ActFirstRecharge:reqActInfo()
    if LOCAL_TEST then
    else
        self:startReq("reqActInfo", 0, self._aid)
    end
end

function ActFirstRecharge:onActInfoResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        for i = 1, #data.gfpgInfo do
            local gift = self._actInfo[i].gift
            self._actInfo[i] = data.gfpgInfo[i]
            self._actInfo[i].gift = gift
        end
        self:updateRedPointState()
        if self._actInfo[1].gift then
            self:dispatchEvent({name = self.EVENT_ACT_INFO, info = self:getActInfo()})
            XH.Bridge:getModule("GoldNew"):updateBanner()
        end
    end
end

function ActFirstRecharge:reqGetAward(idx, day)
    self:startReq("reqGetAward", 1, self._aid, idx, day)
    -- self:onGetAwardResp(idx, day) -- test
end

function ActFirstRecharge:onGetAwardResp(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:showGetAward(cell.reqData.gfpg_id, cell.reqData.day)
        self:dispatchEvent({name = self.EVENT_ACT_INFO, info = self:getActInfo()})
        XH.Bridge:getModule("GoldNew"):updateBanner()
    elseif type == XH.Req.TYPE.FAIL then
        XH.TipTool.showToast(cell:getMessage())
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("请求奖励超时")
    end
end

function ActFirstRecharge:reqActDetail(aid)
    self:startReq("reqActDetail", aid)
end

function ActFirstRecharge:onActDetailResp(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        local acts = {}
        local success, acts = pcall(function()
            local jsonInfo = json.decode(data.res.special or '{"info":[]}')
            jsonInfo.actInfo = json.decode(jsonInfo.info)

            local subActIdMap = {[6] = 1, [30] = 2, [68] = 3}
            local propidMap = {[101034] = "diamond", [101473] = 'gold'}
            for i = 1, 3 do
                self._actInfo[i].gift = {}
            end
            for k, v in pairs(jsonInfo.actInfo) do
                local idx = subActIdMap[v.price]
                v.prop_id = propidMap[v.prop_id] or v.prop_id
                self._actInfo[idx].gift = self._actInfo[idx].gift or {}
                self._actInfo[idx].gift[v.day] = self._actInfo[idx].gift[v.day] or {}
                table.insert(self._actInfo[idx].gift[v.day], v)
            end
            return jsonInfo.actInfo
        end)
        if not success then
            print("Failed to parse special string:")
            return
        end
        if self._actInfo[1].gfpgId then
            self:dispatchEvent({name = self.EVENT_ACT_INFO, info = self:getActInfo()})
            XH.Bridge:getModule("GoldNew"):updateBanner()
        end
    elseif flag == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("请求活动详细超时")
    else
        XH.TipTool.showToast(cell:getMessage())
    end
end

-- 请求下单
function ActFirstRecharge:reqBuyGift(idx)
    if self:getActivityId() == 0 then
        return
    end
    self._buyIdx = idx
    local productId = ActFirstRecharge.ActName .. "_" .. idx
    self:reqBuyPropByProductId(productId)
end

-- 寻找商品id对应的商品礼包并下单
function ActFirstRecharge:reqBuyPropByProductId(productId)
    local rmbGoods = XH.Bridge:getModule("YGiftBankruptcy"):getRMBGoods()
    if #rmbGoods == 0 then
        XH.TipTool.showToast("未找到匹配档位的商品" .. productId .. "，请联系客服~")
        return
    end
    for i = 1, #rmbGoods do
        print(rmbGoods[i].productId)
        if rmbGoods[i].productId == productId then
            local extParam = {}
            XH.Bridge:getModule("Shop"):reqBuyDiamond(rmbGoods[i], nil, productId, nil, nil, nil, "gift", extParam)
            return
        end
    end
    XH.TipTool.showToast("未找到匹配档位的商品" .. productId .. "，请联系客服!")
end

function ActFirstRecharge:onRechargeSuccess()
    -- XH.TipTool.showToast("onRechargeSuccess", self._buyIdx)
    if self._buyIdx == 1 then
        self:updateSaveInfo("autoShowSecondView", false)
    end
    self:showGetAward(self._buyIdx, 1)
    -- XH.SysTool.performWithDelayGlobal(function()
    --     -- self:getActAward(0)
    -- end, 0.5)
end

function ActFirstRecharge:showGetAward(idx, day)
    local awardInfo = {prize_names = {}, prize_pic = {}, propid = {}, count = {}, image_urls = {}}
    for i, e in pairs(self._actInfo[idx].gift[day]) do
        e.prop_cnt = e.prop_cnt or 1
        local propInfo = Utils:getBasePropInfo(e.prop_id)
        awardInfo.prize_names[i] = Utils:getAwardDesc(propInfo.propsname or "", e.prop_id, e.prop_cnt, e.expire)
        if propInfo.imageUrl then
            awardInfo.image_urls[i] = propInfo.imageUrl
        end
        if propInfo.imageName then
            awardInfo.prize_pic[i] = propInfo.imageName
        end
        awardInfo.propid[i] = e.prop_id
        awardInfo.count[i] = e.prop_cnt
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.Bridge.viewManager:openView("BackActivityAwardView", nil, {
        closeFunc = function()
            self:reqActInfo()
            -- self._actInfo[1].status = 1
            -- self:onActInfoResp()
        end
    }, awardInfo)
end

function ActFirstRecharge:isNeedReq()
    return false
end

function ActFirstRecharge:isHaveAward()
    return false
end

function ActFirstRecharge:isOpening()
    return XH.Bridge.viewManager:isViewExist("GoldHallFRFirstView")
end

function ActFirstRecharge:openView(fromScene)
    XH.Bridge.viewManager:openView("GoldHallFRFirstView", nil, fromScene, {auto=true})
end
return ActFirstRecharge
