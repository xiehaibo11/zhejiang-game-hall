-- -*- coding: utf-8 -*-
--- 请神 Module 分片：商城兑换 / 购买 / 库存（注入到 QingShenModule，对外 API 不变）
local Util = require("lobby.Modules.QingShen.Logic.Util")
local Compat = require("lobby.Modules.PropPush.Compat")
local Define = Util.Define
local PropPushDefine = Util.PropPushDefine
local cjson = Util.cjson

local _getPropPushModule = Util.getPropPushModule
local _chairIdFromRoomUserId = Util.chairIdFromRoomUserId
local _userIdFromChairId = Util.userIdFromChairId
local _isEquipWorn = Util.isEquipWorn
local _iconBadgeSaveKey = Util.iconBadgeSaveKey
local _exchangeLevelFromGood = Util.exchangeLevelFromGood
local _enrichGoodInfoForQingShen = Util.enrichGoodInfoForQingShen
local _priceTripleFromGood = Util.priceTripleFromGood
local _onSpineCompleteRemove = Util.onSpineCompleteRemove

local HEAD_LOOP_SPINE_NAME = Util.HEAD_LOOP_SPINE_NAME
local HEAD_UP_SPINE_NAME = Util.HEAD_UP_SPINE_NAME
local QS_ICON_ANIM_LOOP = Util.QS_ICON_ANIM_LOOP
local QING_SHEN_PROP_ID = Util.QING_SHEN_PROP_ID
local QING_SHEN_PROP_SET = Util.QING_SHEN_PROP_SET
local ICON_CANDIDATE_PROP_IDS = Util.ICON_CANDIDATE_PROP_IDS

--- nike 兑换商城错误码（29001–29999）→ 玩家可读文案
local SHOP_EXCHANGE_ERR_TEXT = {
    [29001] = "没有商城资格",
    [29002] = "商品购买中（限购类还有未支付的订单等待支付）",
    [29003] = "该商品限购",
    [29004] = "该商品不存在",
    [29005] = "兑换服务异常，请稍后重试",
    [29006] = "使用的兑换商城货币非法",
    [29007] = "兑换的货币道具不足",
    [29008] = "兑换的道具库存不足",
}

return function(QingShenModule)

    -------------兑换商城2.0----------------------
function QingShenModule:reqExchangeGoodListV2(info)
    info = info or {}
    self:startReq("ReqExchangeGoodsListV2", {business = info.business, reqType = Define.BUSINESS_GAME_PROPPUSH}, 8)
end

function QingShenModule:respExchangeGoodsListV2(reqObj, flag, data)
    local reqType = (data and data.reqType) or ""
    local resp = data and data.resp
    local errCode = resp and tonumber(resp.errCode)
    local errReason = (resp and resp.errReason) or ""
    if errCode and SHOP_EXCHANGE_ERR_TEXT[errCode] then
        errReason = SHOP_EXCHANGE_ERR_TEXT[errCode]
    elseif flag ~= XH.Req.TYPE.SUCCESS and reqObj and reqObj.getMessage then
        local msg = reqObj:getMessage()
        if msg and msg ~= "" then
            errReason = msg
        end
    end

    if flag == XH.Req.TYPE.SUCCESS then
        self._exSid2Business = {}
        for _, v in ipairs(data.info) do
            self._exSid2Business[v.strategyId] = v.business
        end
        table.sort(data.list, function(a, b)
            if a.sort == b.sort then
                return tonumber(a.gid) < tonumber(b.gid)
            end
            return a.sort > b.sort
        end)
        local goodList = data.list
        self._exGoodsList = goodList
        for _, v in ipairs(goodList) do
            v.id = v.gid
            v.propid = v.propId
            v.value = v.propValue
            v.image = v.pic
            v.scoreConf = v.scoreConf or {}
            v.scoreConf[1] = v.scoreConf[1] or {propId = 0, score = 0}
            v.condition = v.scoreConf[1].score
            v.defaultCostPropid = v.scoreConf[1].propId
            -- 接口用 displayPrice 标价、scoreConf 实付；sort 等逻辑仍走 price 字段
            v.price = tonumber(v.condition) or tonumber(v.displayPrice) or 0
            v.data = {}
            if not v.act then
                v.act = {}
            end
            if v.act.tags ~= "" then
                local _, _ = pcall(function()
                    v.data = cjson.decode(v.act.tags) or {}
                end)
            end
            if type(v.data) ~= "table" then
                v.data = {}
            end
            v.act.corner = string.split(v.act.corner, ",")
            v.act.cornerName = string.split(v.act.cornerName, ",")
            v.act.business = self._exSid2Business[v.act.strategyId]
        end
        self:sortGoodsList(self._exGoodsList, data.info[1] and data.info[1].sortType == 1, "gid")

        self._propsWithBusiness = {}
        for _, infoItem in ipairs(data.info or {}) do
            local business = infoItem.business
            local strategyId = infoItem.strategyId
            if business and strategyId ~= nil then
                self._propsWithBusiness[business] = {}
                for _, g in ipairs(goodList) do
                    if g.act and tonumber(g.act.strategyId) == tonumber(strategyId) then
                        table.insert(self._propsWithBusiness[business], g)
                    end
                end
            end
        end
    end
    local event = {
        name = self.EVENT_SHOP_GOODS_LIST_V2,
        data = {
            reqType = reqType,
            --- 客户端请求结果类型：XH.Req.TYPE.SUCCESS / FAIL / TIMEOUT
            flag = flag,
            --- 服务端业务错误码（仅 FAIL 且回包含 resp 时有值）
            errCode = errCode,
            --- 服务端或网络错误说明
            errReason = errReason,
            response = data,
        },
    }
    self:_onShopGoodsListV2ForPropPush(event)
    self:dispatchEvent(event)
end

function QingShenModule:reqExchangeGoodsV2(info)
    info = info or {}
    local goodInfo = info.goodInfo
    if not goodInfo or not goodInfo.act or not goodInfo.act.strategyId or not goodInfo.act.business or not goodInfo.gid then
        XH.TipTool.showToast("商品信息异常，请稍后重试", 3)
        return
    end
    local cnt = info.cnt
    local propId = info.propId
    self._exchangeGoodsV2Param = info
    XH.TipTool.showLoading()
    self:startReq("ReqExchangeGoodsV2", {
        strategy_id = goodInfo.act.strategyId,
        business = goodInfo.act.business,
        gid = goodInfo.gid,
        prop_id = propId,
        buy_num = cnt,
        reqType = info.reqType,
        param = info.param,
    }, 8)
end

function QingShenModule:respExchangeProductV2(reqObj, type, data)
    XH.TipTool.hideLoading()
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
    local param = self._exchangeGoodsV2Param
    self._exchangeGoodsV2Param = nil
    local reqType = (data and data.reqType) or (param and param.reqType) or ""
    local resp = data and data.resp
    local errCode = resp and tonumber(resp.errCode)
    local errReason = (resp and resp.errReason) or ""
    if errCode and SHOP_EXCHANGE_ERR_TEXT[errCode] then
        errReason = SHOP_EXCHANGE_ERR_TEXT[errCode]
    end
    local event = {
        name = self.EVENT_SHOP_EXCHANGE_GOODS_V2,
        data = {
            reqType = reqType,
            param = param,
            flag = type,
            errCode = errCode,
            errReason = errReason,
            response = data,
        },
    }
    self:_onShopExchangeGoodsV2ForQingShen(event)
    self:dispatchEvent(event)
end

function QingShenModule:getPropsWithBusiness(business)
    if not business or business == "" then
        return {}
    end
    return self._propsWithBusiness[business] or {}
end

function QingShenModule:sortGoodsList(goods, recommondFirst, sortSecondKey)
    if recommondFirst then -- 推荐在前
        table.sort(goods, function(a, b)
            if a.data.recommend == b.data.recommend then
                if a.act.sort == b.act.sort then
                    return tonumber(a[sortSecondKey or "price"]) < tonumber(b[sortSecondKey or "price"])
                end
                return a.act.sort > b.act.sort
            end
            if a.data.recommend then
                return true
            end
            return false
        end)
    else
        table.sort(goods, function(a, b)
            if a.act.sort == b.act.sort then
                return tonumber(a[sortSecondKey or "price"]) < tonumber(b[sortSecondKey or "price"])
            end
            return a.act.sort > b.act.sort
        end)
    end
end

function QingShenModule:_schedulePostPurchaseRefresh(delay)
    XH.SysTool.performWithDelayGlobal(function()
        local propPush = _getPropPushModule()
        if propPush and propPush.reqQingShenLevel then
            propPush:reqQingShenLevel()
        end
        self:getPropsCount({ fromPurchase = true })
    end, delay or 0.5)
end


function QingShenModule:_onPropPushPrepareReady()
    local barrier = self._propPushOpenBarrierRef
    if not barrier then
        return
    end
    if barrier.propsCount and barrier.discount and barrier.shopList then
        if self._goodInfo == nil then
            return
        end
        local propPush = _getPropPushModule()
        if not propPush then
            return
        end
        if propPush:isGameStart() then
            return
        end
        -- 浙江不展示 PropPush 弹窗：推送数据就绪后只刷新 Icon
        self:_showIconViewWithLoopAni()
    end
end


function QingShenModule:_syncGoodInfoFromExchangeMap()
    local good = self:_getExchangeGoodForProp(self._propId, self._level)
    self._goodInfo = good or nil
    _enrichGoodInfoForQingShen(self._goodInfo)
end


function QingShenModule:_getExchangeGoodForProp(propId, curLevel)
    propId = tonumber(propId)
    local byProp = propId and self._exchangeGoodsByPropId[propId]
    if not byProp then
        return nil
    end
    local maxLv = tonumber(self._maxLevel) or 3
    local lv = tonumber(curLevel) or 0
    local goodsLv = math.min(lv + 1, maxLv)
    goodsLv = math.max(goodsLv, 1)
    local good = byProp[goodsLv]
    local pay = select(1, _priceTripleFromGood(good))
    if good and pay > 0 then
        return good
    end
    for tryLv = goodsLv + 1, maxLv do
        local g2 = byProp[tryLv]
        local p2 = select(1, _priceTripleFromGood(g2))
        if g2 and p2 > 0 then
            return g2
        end
    end
    for tryLv = goodsLv - 1, 1, -1 do
        local g2 = byProp[tryLv]
        local p2 = select(1, _priceTripleFromGood(g2))
        if g2 and p2 > 0 then
            return g2
        end
    end
    return good
end


function QingShenModule:_onShopGoodsListV2ForPropPush(event)
    local payload = event and event.data or {}
    local reqType = payload.reqType or (payload.param and payload.param.reqType) or ""
    if reqType ~= Define.BUSINESS_GAME_PROPPUSH then
        return
    end
    local barrier = self._propPushOpenBarrierRef
    if barrier then
        barrier.shopList = true
    end

    local rt = payload.flag
    if rt == XH.Req.TYPE.SUCCESS then
        local shopMod = XH.lobby:getModule("Shop")
        local list = self:getPropsWithBusiness(Define.BUSINESS_GAME_PROPPUSH) or {}

        self._exchangeGoodsByPropId = {}
        for _, g in ipairs(list) do
            local pid = tonumber(g.propId or g.propid)
            local lv = _exchangeLevelFromGood(g)
            if pid and lv and lv >= 1 then
                if not self._exchangeGoodsByPropId[pid] then
                    self._exchangeGoodsByPropId[pid] = {}
                end
                _enrichGoodInfoForQingShen(g)
                self._exchangeGoodsByPropId[pid][lv] = g
            end
        end

        self:_syncGoodInfoFromExchangeMap()
        -- self:dispatchEvent({ name = Define.INTEGRATE_EVENT_REFRESH })
    elseif rt == XH.Req.TYPE.TIMEOUT then
        print("获取兑换列表超时，请刷新重试")
    else
        print("获取兑换列表失败", payload.errReason)
    end

    self:_onPropPushPrepareReady()
end

--- 兑换 V2（game_proppush）：成功则刷新掉落与请神等级；失败/超时提示
function QingShenModule:_onShopExchangeGoodsV2ForQingShen(event)
    local payload = event and event.data or {}
    local reqType = payload.reqType or (payload.param and payload.param.reqType) or ""
    if reqType ~= Define.BUSINESS_GAME_PROPPUSH then
        return
    end
    local propPush = _getPropPushModule()
    -- response 在失败/超时场景可能缺失；有 propId 时才按请神白名单过滤。
    -- 无 propId 时不直接 return，交给后续成功/失败分支（请神推送/整合页购买仍需 toast + 埋点）
    local respPropId = payload.response and tonumber(payload.response.propId)
    local isQSpropid = respPropId and self:isQingShenPropId(respPropId)
    if not isQSpropid and (not propPush or propPush:getPropPushType() == PropPushDefine.PushType.LiBao) then
        return
    end
    local rt = payload.flag
    local throwScene = ""
    if propPush and propPush.getThrowScene then
        throwScene = propPush:getThrowScene()
    end
    local sceneType = self:getPurchaseSceneType()
    local function _throwBuyResult(throwId, extra)
        if not (propPush and propPush.throwData) then
            return
        end
        local data = {
            page_item_id = throwScene ~= "" and throwScene or "首局准备阶段",
            item_id = self._level or 0,
            scene_type = sceneType,
        }
        if type(extra) == "table" then
            for k, v in pairs(extra) do
                data[k] = v
            end
        end
        propPush:throwData(throwId, data)
    end
    if rt == XH.Req.TYPE.SUCCESS then
        if XH.playerData and XH.playerData.flushPlayerDrop then
            XH.playerData:flushPlayerDrop()
        end
        self:_schedulePostPurchaseRefresh(0.5)
        _throwBuyResult(XH.NewThrowDataDefine.oh26042104)
        return
    end
    if rt == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("购买超时，请刷新重试", 3)
        _throwBuyResult(XH.NewThrowDataDefine.oh26042105, { block_label = "购买超时" })
        return
    end
    XH.TipTool.showToast(payload.errReason or "购买失败", 3)
    _throwBuyResult(XH.NewThrowDataDefine.oh26042105, { block_label = payload.errReason or "购买失败" })
end


function QingShenModule:_onShopBuyPropsV2ForQingShen(event)
    local propPush = _getPropPushModule()
    if not propPush or propPush:getPropPushType() ~= PropPushDefine.PushType.QingShen then
        return
    end
    self._payData = event and event.data or nil
end


function QingShenModule:onEnterForeground()
    -- if not self._payData then
    --     return
    -- end
    -- self._payData = nil
    -- local info = self:getInfo()
    -- local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    -- local preTimeStamp = serverTime + (info.propTimeLeft or 0)
    -- -- 充值后延迟1秒再获取道具库存，避免道具库存还没更新
    -- XH.SysTool.performWithDelayGlobal(function()
    --     self:getPropsCount({ fromPurchase = true,
    --     callback = function()
    --         local curInfo = self:getInfo()
    --         local curTimeStamp = serverTime + (curInfo.propTimeLeft or 0)
    --         if curTimeStamp > preTimeStamp then
    --             local propPush = _getPropPushModule()
    --             if propPush and propPush.reqQingShenLevel then
    --                 propPush:reqQingShenLevel()
    --             end
    --         end
    --     end})
    -- end, 1)
end


function QingShenModule:purchaseGod(propId)
    self:setPurchaseSceneType(Define.ThrowSceneType.Integrate)
    self:purchase(propId)
end


function QingShenModule:purchase(propId)
    propId = tonumber(propId)
    local isFree
    local propCount
    local good
    local usePropId

    if propId then
        local info = self:getInfoForPropId(propId)
        if not info then
            XH.TipTool.showToast("商品信息异常，请稍后重试", 3)
            return
        end
        isFree = info.isFree
        propCount = tonumber(info.propCount) or 0
        usePropId = propId
        good = self:_getExchangeGoodForProp(propId, info.level)
        if good then
            _enrichGoodInfoForQingShen(good)
        end
    else
        isFree = self.isFree
        propCount = self._propCount or 0
        usePropId = tonumber(self._propId)
        good = self._goodInfo
    end

    if isFree then
        if usePropId then
            self:markPurchasePropId(usePropId)
        end
        self:getFreeProp()
        return
    end

    if propCount > 0 then
        if usePropId then
            self:markPurchasePropId(usePropId)
        end
        self:useProp(usePropId)
        return
    end

    if not good or not good.act or good.gid == nil then
        XH.TipTool.showToast("商品信息异常，请稍后重试", 3)
        return
    end
    if usePropId then
        self:markPurchasePropId(usePropId)
    end    
    local payType = 1
    local costPropId = 0
    if good.scoreConf and good.scoreConf[payType] and good.scoreConf[payType].propId then
        costPropId = good.scoreConf[payType].propId
    end
    local isHave, tipMsg, isHideTips = XH.lobby:getModule("GoldNew.SubModules.Shop"):isHaveEnoughDiamond(good, costPropId, tonumber(good.price) or 0, 1)
    if isHave then
        self._buyData = nil
        self:reqExchangeGoodsV2({
            goodInfo = good,
            cnt = 1,
            propId = good.costPropId,
            reqType = Define.BUSINESS_GAME_PROPPUSH,
        })
    else
        -- 钻石不足走快捷充值时记录上下文，供 EVNET_DIAMOND_BUY_RESULT 埋点/刷新
        if isHideTips then
            self._buyData = {
                goodInfo = good,
                propId = usePropId,
            }
            XH.SysTool.performWithDelayGlobal(function()
                if self._buyData and self._buyData.propId == usePropId then
                    self._buyData = nil
                end
            end, 30)
        elseif not isHideTips then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
                funcOK = function()
                end
            }, tipMsg)
        end
    end
end

function QingShenModule:onPayResut(event)
    if self._buyData == nil then
        return
    end
    local result = event.msg and event.msg.resultTag
    local shopMod = XH.lobby and XH.lobby:getModule("Shop")
    local successTag = (shopMod and shopMod.BUY_DIAMOND_RESULT and shopMod.BUY_DIAMOND_RESULT.SUCCESS) or 1
    local bSuccess = result == successTag
    self._buyData = nil

    local propPush = _getPropPushModule()
    local throwScene = ""
    if propPush and propPush.getThrowScene then
        throwScene = propPush:getThrowScene()
    end
    local sceneType = self:getPurchaseSceneType()
    local function _throwBuyResult(throwId, extra)
        if not (propPush and propPush.throwData) then
            return
        end
        local data = {
            page_item_id = throwScene ~= "" and throwScene or "首局准备阶段",
            item_id = self._level or 0,
            scene_type = sceneType,
        }
        if type(extra) == "table" then
            for k, v in pairs(extra) do
                data[k] = v
            end
        end
        propPush:throwData(throwId, data)
    end

    -- 对齐 _onShopExchangeGoodsV2ForQingShen：成功刷新掉落/等级并报 oh26042104；失败报 oh26042105
    if bSuccess then
        if XH.playerData and XH.playerData.flushPlayerDrop then
            XH.playerData:flushPlayerDrop()
        end
        -- 快捷充值商品带 pay_attach，服务端会自动兑换；延迟拉取请神等级与库存
        self:_schedulePostPurchaseRefresh(1)
        _throwBuyResult(XH.NewThrowDataDefine.oh26042104)
        return
    end
    XH.TipTool.showToast("支付取消", 3)
    _throwBuyResult(XH.NewThrowDataDefine.oh26042105, { block_label = "支付取消" })
end

-- 兑换商城2.0,购买钻石后直接兑换成对应道具（目前请神在用）
-- function QingShenModule:reqBuyPropsV2(goodInfo)
--     local diamondInfo = self:findFitDiamondInfo(goodInfo.price)
--     if not diamondInfo then
--         XH.TipTool.showToast("钻石不足，请充值", 3)
--         return
--     end
--     local strText = string.format('钻石不足，是否充值%d元\n获取%s', tonumber(diamondInfo.nPrice), tostring(goodInfo.name))
--     XH.TipTool.showTip({
--         type = XH.TIP_LAYER_TYPE.OK_CANCEL,
--         funcOK = function()
--             local data = {}
--             table.insert(data, "sid=" .. AREA_CONFIG.sid)
--             table.insert(data, "id=" .. goodInfo.propId)
--             table.insert(data, "areaid=" .. MAIN_AREA_ID)
--             table.insert(data, "numid=" .. XH.playerData:getNumberID())
--             table.insert(data, "strategy_id=" .. goodInfo.act.strategyId)
--             table.insert(data, "business=" .. goodInfo.act.business)
--             table.insert(data, "gid=" .. goodInfo.gid)
--             table.insert(data, "prop_id=" .. goodInfo.costPropId)
--             table.insert(data, "buy_num=1")
--             table.insert(data, "nike_shop=1")
--             if goodInfo.param then
--                 table.insert(data, "param=" .. goodInfo.param)
--             end
--             diamondInfo.sPinCode = table.concat(data, "&")
--             self:dispatchEvent({
--                 name = self.EVENT_SHOP_BUY_PROPS_V2,
--                 data = data,
--             })
--             xn.FuncUtils.OpenShopPayView(self, diamondInfo)
--         end,
--     }, strText)
-- end

function QingShenModule:findFitDiamondInfo(good)
    local diamond = XH.playerData:getDiamnd()
    if diamond >= good.price then
        return true
    end
    return false
end


function QingShenModule:getFreeProp()
    if not self.isFree or not self._activityId then
        return
    end
    self:startReq("ReqAcceptPresenter", tonumber(self._activityId), 10)
end

function QingShenModule:onRespAcceptPresenter(req, type, data)
    if type ~= XH.Req.TYPE.SUCCESS then
        return
    end
    local resp = data and data.resp
    if resp and tonumber(resp.errCode) ~= 0 then
        print("获取免费请神失败，错误码("..tostring(resp.errCode)..")", resp.errReason)
        return
    end
    self.isFree = false
    self._activityId = nil
    self:_schedulePostPurchaseRefresh(0.5)
end


function QingShenModule:useProp(propId)
    propId = tonumber(propId)
    local info
    if propId then
        info = {
            propId = propId,
            level = self:getGodRecommendLevel(propId) or 0,
        }
    else
        info = self:getInfo()
    end
    local usePropId = tonumber(info.propId)
    local data = {
        prop = {
            prop_id = usePropId,
            count = 1,
            burse_type = CF.GameDefine.BURSETYPE.User,
            time = 0,
            count_big = 0,
            zero_time = 0,
            expire = 0,
        },
        params = self:_buildTransferParams(info),
    }
    self._pendingUseEquipPropId = usePropId
    self:startReq("ReqUseEquipCard", data, 15)
end

function QingShenModule:onRespUseEquipCard(req, type, data)
    local usePropId = self._pendingUseEquipPropId
    self._pendingUseEquipPropId = nil
    if type ~= XH.Req.TYPE.SUCCESS then
        return
    end
    if data and data.resp and data.resp.errCode ~= 0 then
        XH.TipTool.showToast("使用请神道具失败，错误码("..tostring(data.resp.errCode)..")", 3)
        return
    end
    if usePropId then
        self._propCounts[usePropId] = math.max(0, (self._propCounts[usePropId] or 0) - 1)
    end
    if tonumber(self._propId) == usePropId then
        self._propCount = math.max(0, (self._propCount or 0) - 1)
    end
    self:_schedulePostPurchaseRefresh(0.5)
end


function QingShenModule:_buildTransferParams(info)
    local gameid = Compat.safeKindId() or 0
    local maxLv = self._maxLevel or 3
    local toLv = math.min((info.level or 0) + 1, maxLv)
    local s = string.format("taskname=qing_shen_lv%d;gameid=%d;logtype=1601;",toLv,gameid)
    if Compat.safeTeaHouseId() > 0 then
        s = string.format("%steaid=%d;", s, Compat.safeTeaHouseId())
    end
    return s
end


function QingShenModule:getPropsCount(opt)
    if CF == nil or CF.GameDefine == nil then
        return
    end
    opt = opt or {}
    self._pendingGetPropsCountOpt = opt

    local godList = self:getGodList()
    local props = {}
    local n = 0
    for i = 1, #godList do
        local v = godList[i]
        n = n + 1
        props[n] = { prop_id = v, burse_type = CF.GameDefine.BURSETYPE.User }
        n = n + 1
        props[n] = { prop_id = v, burse_type = CF.GameDefine.BURSETYPE.UserTimeNoCount }
    end
    self:startReq("ReqPropsCount50", props, 10)
end

function QingShenModule:onRespPropsCount50(req, type, data)
    local opt = self._pendingGetPropsCountOpt or {}
    self._pendingGetPropsCountOpt = nil
    local callback = opt.callback
    local fromPurchase = opt.fromPurchase == true
    local bSuccess = type == XH.Req.TYPE.SUCCESS
    local propList = data and (data.props or (data.reply and data.reply.props))

    if bSuccess and propList then
        local wantId = tonumber(self._propId)
        local myKey = self:_getMyUserId()
        -- 只刷新本机时效，保留同桌其他人的 _propTimeMap（否则对方进房重建头像后无法按缓存恢复）
        local remotePropTime = {}
        local remotePropLevel = {}
        for uid, pmap in pairs(self._propTimeMap or {}) do
            if myKey == nil or tonumber(uid) ~= tonumber(myKey) then
                remotePropTime[uid] = pmap
            end
        end
        for uid, lmap in pairs(self._propLevelMap or {}) do
            if myKey == nil or tonumber(uid) ~= tonumber(myKey) then
                remotePropLevel[uid] = lmap
            end
        end
        self._propTimeMap = remotePropTime
        self._propLevelMap = remotePropLevel
        if myKey ~= nil then
            self._propLevelMap[myKey] = {}
        end
        for _, v in ipairs(propList) do
            local pid = tonumber(v.propId)
            if pid then
                if v.burseType == "UserTimeNoCount" then
                    if myKey ~= nil then
                        self:_setPropTimeForUserProp({
                            userId = myKey,
                            propId = pid,
                            endTime = tonumber(v.time) or 0,
                            level = self:getGodRecommendLevel(pid),
                        })
                    end
                end
                if v.burseType == "User" then
                    self._propCounts[pid] = v.count or 0
                    if pid == wantId then
                        self._propCount = v.count or 0
                    end
                end
            end
        end
    end
    if bSuccess then
        local pid = self:getEquippedPropId()
        if pid and self:getGodPropTimeLeft(pid) > 0 then
            local playLv = self:_resolveGodPlayLevel(pid, self:_getMyUserId())
            local myChair = Compat.getSelfSeat()
            if myChair ~= nil then
                self:playHeadAniLoop(myChair, playLv, pid)
            end
            -- 已在桌内：同步给同桌（对方同神已在播会跳过，不闪）；覆盖重连后进桌时尚无时效无法 notice 的窗口
            if Compat.isSelfInTable and Compat.isSelfInTable() then
                self:noticeMyQingShen2Other({ ani = "loop" })
                self._pendingTableQingShenNotice = nil
            end
        end
    end
    if callback then
        callback(fromPurchase)
    end
    if bSuccess then
        if fromPurchase then
            -- 兑换后拉装扮态时若服务端已自动换装，需通知同桌刷新头像
            self._pendingPurchaseEquipBroadcast = true
            self:_tryAutoWearPendingPurchase()
        end
        self:reqEquipState()
        self:refreshIconView()
    end
end


function QingShenModule:prepareOpenPropPushView()
    -- 浙江不弹 PropPush：仍预拉兑换/库存/折扣，供 Icon / 整合页使用

    local barrier = {
        propsCount = false,
        discount = false,
        shopList = false,
    }
    self._propPushOpenBarrierRef = barrier

    self:reqEquipState()
    self:reqExchangeGoodListV2({ business = { Define.BUSINESS_GAME_PROPPUSH } })

    self._activityId = nil
    self:getPropsCount({
        callback = function()
            barrier.propsCount = true
            self:_onPropPushPrepareReady()
        end,
    })

    self._pendingDiscountBarrier = barrier
    self:startReq("ReqPropsDiscount", { "qingshen_free" }, 10)
end

function QingShenModule:onRespPropsDiscount(req, rtype, data)
    local barrier = self._pendingDiscountBarrier
    self._pendingDiscountBarrier = nil
    self.isFree = false
    local bSuccess = rtype == XH.Req.TYPE.SUCCESS
    local reply = data and data.reply
    if bSuccess and reply and reply.activitys then
        local rc = data.resp
        if not rc or tonumber(rc.errCode) == 0 then
            local wantPropId = tonumber(self._propId)
            for _, act in pairs(reply.activitys) do
                if type(act) == "table" and act.discounts then
                    for _, d in ipairs(act.discounts) do
                        local priceCount = tonumber(d.priceCount)
                        local pid = tonumber(d.propId)
                        if priceCount == 0 and wantPropId and pid == wantPropId then
                            self.isFree = true
                            self._activityId = act.activityId
                            break
                        end
                    end
                end
                if self.isFree then
                    break
                end
            end
        end
    end
    if barrier then
        barrier.discount = true
        self:_onPropPushPrepareReady()
    end
end


function QingShenModule:prepareIntegrateView()
    self:reqEquipState()
    self:reqExchangeGoodListV2({ business = { Define.BUSINESS_GAME_PROPPUSH } })
    self:getPropsCount()
end


function QingShenModule:_closeIntegrateViewAfterPurchase()
    
end


function QingShenModule:getInfo()
    local good = self._goodInfo
    self._costPropId = self._propCount > 0 and self._propId
        or tonumber(good and good.costPropId)
        or Compat.getDiamondPropId()
    local pay, show, disc = _priceTripleFromGood(self._goodInfo)
    return {
        propId = self._propId, -- 请神道具 id
        level = self._level, -- 当前请神等级（1~3）
        price = pay, -- 当前请神实付（由 goodInfo 推导）
        originalPrice = show, -- 标价（由 goodInfo 推导）
        discount = disc, -- 折扣系数（由 goodInfo 推导）
        costPropId = self._costPropId, -- 当前请神消耗道具 id
        propCount = self._propCount, -- 请神道具库存数量（getPropsCount User）
        propTimeLeft = self:_getMyPropTimeLeft(self._propId), -- 时效剩余秒数（getPropsCount UserTimeNoCount）
        isFree = self.isFree, -- 是否仍有免费请神
        freeInfo = {
            title = "偶得赐福",
        }
    }
end


function QingShenModule:getInfoForPropId(propId)
    propId = tonumber(propId)
    if not propId then
        return nil
    end
    local curLv = self:getGodRecommendLevel(propId) or 0
    local good = self:_getExchangeGoodForProp(propId, curLv)
    if good then
        _enrichGoodInfoForQingShen(good)
    end
    local pay, show, disc = _priceTripleFromGood(good)
    local isSameAsCurrent = tonumber(self._propId) == propId
    local propCount = tonumber(self._propCounts[propId]) or 0
    -- 免费请神仅挂在当前推送神上，其它神不走免费
    local isFree = isSameAsCurrent and self.isFree == true
    local costPropId = Compat.getDiamondPropId()
    if propCount > 0 then
        costPropId = propId
    elseif good then
        costPropId = tonumber(good.costPropId) or Compat.getDiamondPropId()
    end
    return {
        propId = propId,
        level = curLv,
        price = pay,
        originalPrice = show,
        discount = disc,
        costPropId = costPropId,
        propCount = propCount,
        propTimeLeft = self:getGodPropTimeLeft(propId),
        isFree = isFree,
        freeInfo = {
            title = "偶得赐福",
        },
    }
end



function QingShenModule:setRecommendList(recommendList)
    if type(recommendList) ~= "table" then
        return
    end

    self._recommendLevelByPropId = {}
    for key, item in pairs(recommendList) do
        local propId, level
        if type(item) == "table" then
            propId = tonumber(item.propId or item.prop_id) or tonumber(key)
            level = tonumber(item.curLv or item.level or item.lv)
        else
            -- 值直接是等级数字时，键即道具 id
            propId = tonumber(key)
            level = tonumber(item)
        end
        if not propId then
            -- 非法项跳过，避免 nil 键污染推荐等级表
        else
            self._recommendLevelByPropId[propId] = level
        end
    end
    -- self:dispatchEvent({ name = Define.INTEGRATE_EVENT_REFRESH })
end


function QingShenModule:getGodRecommendLevel(propId)
    propId = tonumber(propId)
    local level = propId and tonumber(self._recommendLevelByPropId[propId])
    if level and level >= 1 then
        return level
    end
    return 0
end


function QingShenModule:hasPurchasedGod(propId)
    return self:getGodPropTimeLeft(propId) > 0
end


function QingShenModule:getGodCardState(propId)
    propId = tonumber(propId)
    local equipped = self:getEquippedPropId()
    if equipped and equipped == propId then
        return Define.CardState.Active
    end
    if self:hasPurchasedGod(propId) then
        return Define.CardState.PurchasedInactive
    end
    return Define.CardState.NotPurchased
end


function QingShenModule:formatBlessTimeLeft(seconds)
    seconds = tonumber(seconds) or 0
    if seconds <= 0 then
        return ""
    end
    if seconds < 3600 then
        local mins = math.floor(seconds / 60)
        mins = math.max(mins, 1)
        return tostring(mins) .. "分钟"
    end
    local hours = math.floor(seconds / 3600)
    if hours < 1 then
        hours = 1
    end
    return tostring(hours) .. "小时"
end


end
