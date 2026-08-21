local BattlePassModule = class("BattlePassModule", XH.ModuleBase)
-- 请求奖池成功
BattlePassModule.EVENT_POOL_PRIZES_SUCC = "EVENT_POOL_PRIZES_SUCC"
-- 客户端检测活动是否开放
BattlePassModule.EVENT_CHECK_ACT_ACTIVE = "EVENT_CHECK_ACT_ACTIVE"

local BattlePassConfig = require("lobby.Modules.BattlePass.Config")

function BattlePassModule:ctor()
    BattlePassModule.super.ctor(self)
    self._haveReqPoolID = {}
    self._haveReqBattlePassInfo = {}
end

function BattlePassModule:getReqConfig()
    return {
        ReqExchangeProductList = {reqPath = "lobby.Req.Shop.ReqExchangeProductList", callBack = self.respProductsInfo},
        ReqGetPoolPrizes = {reqPath = "lobby.Modules.BattlePass.Req.ReqGetPoolPrizes", callBack = self.respPoolPrizes},
        ReqBattlePassRequest = {reqPath = "lobby.Modules.BattlePass.Req.ReqBattlePassRequest", callBack = self.respBattlePassRequest},
        ReqBattlePassTask = {reqPath = "lobby.Modules.BattlePass.Req.ReqBattlePassRequest", callBack = self.respBattlePassTask},
        ReqBattleBassBuy = {reqPath = "lobby.Modules.BattlePass.Req.ReqBattlePassRequest", callBack = self.respBattleBassBuy},
        ReqBattlePassReward = {reqPath = "lobby.Modules.BattlePass.Req.ReqBattlePassRequest", callBack = self.respBattlePassReward}
    }
end

function BattlePassModule:reqBattlePassInfo(data, timeout, forceReq)
    forceReq = forceReq == nil and true or forceReq
    if data.func == "get" and self._haveReqBattlePassInfo[data.actId] and not forceReq then
        return
    end
    self:startReq("ReqBattlePassRequest", data, timeout)
    XH.lobby:getModule("Shop"):reqDiamondProductsInfoEx()
end

function BattlePassModule:respBattlePassRequest(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.funcOpt == 2 then
            -- 充值相关，不会返回下面的信息
            return
        end
        if data.awardList and next(data.awardList) then
            -- 恭喜获得展示
            local retData = {
                awardList = data.awardList,
                reqData = data.reqData
            }
            if data.reqData.callback then
                data.reqData.callback(retData)
            end
            return
        end
        local battlePassInfo = {
            level = data.zlInfo.level, --当前等级
            exp = data.zlInfo.exp, --当前经验值
            awardLv = {
                data.zlInfo.freeAwardLv,
                data.zlInfo.seniorAwardLv,
                data.zlInfo.superAwardLv
            },
            canBuyPropIds = data.zlInfo.canBuyPropIds, -- 该战令可购买升级的道具id
            buyPropIds = data.zlInfo.buyPropIds, -- 购买过的战令升级道具id
            seniorBuyPropIds = data.zlInfo.SeniorBuyPropIds, -- 高级购买道具id
            superBuyPropIds = data.zlInfo.SuperBuyPropIds, -- 至尊购买道具id
            startTime = data.zlInfo.startTime, -- 开始时间
            endTime = data.zlInfo.endTime, -- 结束时间
            isBuy = {true, #data.zlInfo.SeniorBuyPropIds > 0, #data.zlInfo.SuperBuyPropIds > 0}
        }

        local poolids = {}
        local lvAwardLists = {}
        for i = 1, #data.zlConf.awardList.lvAwardList do
            local x1 = {}
            local awardInfos = data.zlConf.awardList.lvAwardList[i]
            for j = 1, #awardInfos.freePoolGoods do
                local awardInfo = awardInfos.freePoolGoods[j]
                table.insert(x1, awardInfo.poolId .. "_" .. awardInfo.goodsId)
                if not table.has(poolids, awardInfo.poolId) then
                    table.insert(poolids, awardInfo.poolId)
                end
            end
            local x2 = {}
            for j = 1, #awardInfos.seniorPoolGoods do
                local awardInfo = awardInfos.seniorPoolGoods[j]
                table.insert(x2, awardInfo.poolId .. "_" .. awardInfo.goodsId)
                if not table.has(poolids, awardInfo.poolId) then
                    table.insert(poolids, awardInfo.poolId)
                end
            end
            local x3 = {}
            for j = 1, #awardInfos.superPoolGoods do
                local awardInfo = awardInfos.superPoolGoods[j]
                table.insert(x3, awardInfo.poolId .. "_" .. awardInfo.goodsId)
                if not table.has(poolids, awardInfo.poolId) then
                    table.insert(poolids, awardInfo.poolId)
                end
            end
            local lvAwardList = {x1, x2, x3, level = awardInfos.level, exp = awardInfos.exp}
            lvAwardLists[i] = lvAwardList
        end
        for i = 1, #poolids do
            self:reqPoolPrizes(poolids[i])
        end

        local maxAwardCnts = {}
        for i = 1, 3 do
            local maxAwardCnt = 0
            for j = 1, #(lvAwardLists[i] or {}) do
                maxAwardCnt = math.max(maxAwardCnt, #lvAwardLists[i][j])
            end
            maxAwardCnts[i] = maxAwardCnt
        end

        local battlePassConfig = {
            name = data.zlConf.name, -- 战令名称
            maxLevel = data.zlConf.maxLevel, --  最大等级
            buyLvDiamond = data.zlConf.buyLvDiamond, -- 购买每等级需要的钻石 不可购买为0
            taskList = data.zlConf.taskList, -- 任务列表 暗斗为空 和ju_game_id冲突 ZLTaskInfo
            juGameId = 0, -- 通过对局累计登记 类似暗斗gameId 30579 和task_list冲突
            buyProps = {{}, data.zlConf.awardList.seniorNeedPropId, data.zlConf.awardList.superNeedPropId},
            awardList = data.zlConf.awardList -- 奖励配置
        }

        local retData = {
            info = battlePassInfo,
            config = battlePassConfig,
            lvAwardLists = lvAwardLists,
            maxAwardCnts = maxAwardCnts,
            reqData = data.reqData
        }
        if data.reqData.callback then
            data.reqData.callback(retData)
        end
        self._haveReqBattlePassInfo[data.reqData.actId] = true
    end
end

function BattlePassModule:reqBattlePassTask(data, timeout)
    self:startReq("ReqBattlePassTask", data, timeout)
end

function BattlePassModule:respBattlePassTask(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local retData = {
            taskExp = data.taskExp,
            taskIds = data.taskIds,
            reqData = data.reqData,
            zlInfo = data.zlInfo
        }
        if data.reqData.callback then
            data.reqData.callback(retData)
        end
    else
        self:dispatchEvent({name = BattlePassModule.EVENT_CHECK_ACT_ACTIVE})
        XH.TipTool.showToast("领取任务奖励失败")
    end
end

function BattlePassModule:reqBattleBassBuy(data, timeout)
    self:startReq("ReqBattleBassBuy", data, timeout)
end

function BattlePassModule:respBattleBassBuy(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local retData = {}
        if data.reqData.callback then
            data.reqData.callback(retData)
        end
    else
        self:dispatchEvent({name = BattlePassModule.EVENT_CHECK_ACT_ACTIVE})
        XH.TipTool.showToast("购买等级失败")
    end
end

function BattlePassModule:reqBattlePassReward(data, timeout)
    self:startReq("ReqBattlePassReward", data, timeout)
end

function BattlePassModule:respBattlePassReward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.awardList and next(data.awardList) then
            -- 恭喜获得展示
            local retData = {
                awardList = data.awardList,
                reqData = data.reqData
            }
            if data.reqData.callback then
                data.reqData.callback(retData)
            end
        end
    else
        self:dispatchEvent({name = BattlePassModule.EVENT_CHECK_ACT_ACTIVE})
        XH.TipTool.showToast("领取奖励失败")
    end
end

-- 获取从lv1到lv2的奖励，包含lv1和lv2，返回奖励具体信息
-- 不传参数，为获取所有，表示 不同级别战令的奖励预览
function BattlePassModule:getAwardFromLvToLv(lvAwardLists, lv1, lv2)
    lvAwardLists = lvAwardLists or {}
    lv1 = lv1 or 0
    lv1 = math.max(lv1, 0)
    lv2 = lv2 or #lvAwardLists
    lv2 = math.min(lv2, #lvAwardLists)

    local battlePassAwardlist = {}
    for index = 1, 3 do
        local list = {}
        for _, v in pairs(lvAwardLists) do
            if v.level >= lv1 and v.level <= lv2 then
                local awards = v[index]
                for j = 1, #awards do
                    if self._awardPoolGoods and self._awardPoolGoods[awards[j]] then
                        local awardInfo = self._awardPoolGoods[awards[j]]
                        table.insert(list, awardInfo)
                    end
                end
            end
        end
        local mergeAwards = {}
        for i = 1, #list do
            local award = clone(list[i])
            local find = false
            for j = 1, #mergeAwards do
                local mergeAward = mergeAwards[j]
                if mergeAward.propId == award.propId then
                    mergeAward.propValue = mergeAward.propValue + award.propValue
                    find = true
                    break
                end
            end
            if not find then
                table.insert(mergeAwards, award)
            end
        end
        battlePassAwardlist[index] = mergeAwards
    end
    return battlePassAwardlist
end

function BattlePassModule:mergeAwardList(awardList1, awardList2)
    local mergeAwards = {}
    for i = 1, #awardList1 do
        local award = clone(awardList1[i])
        local find = false
        for j = 1, #mergeAwards do
            local mergeAward = mergeAwards[j]
            if mergeAward.propId == award.propId then
                mergeAward.propValue = mergeAward.propValue + award.propValue
                find = true
                break
            end
        end
        if not find then
            table.insert(mergeAwards, award)
        end
    end
    for i = 1, #awardList2 do
        local award = clone(awardList2[i])
        local find = false
        for j = 1, #mergeAwards do
            local mergeAward = mergeAwards[j]
            if mergeAward.propId == award.propId then
                mergeAward.propValue = mergeAward.propValue + award.propValue
                find = true
                break
            end
        end
        if not find then
            table.insert(mergeAwards, award)
        end
    end
    return mergeAwards
end

-- 开始支付
-- 如果是IOS订阅优惠商品，按原来的商品购买即可
function BattlePassModule:reqBuy(productParam, autoOrder, notShowTip)
    if not productParam then
        return
    end
    local product = {
        productId = productParam.product_id,
        name = productParam.name,
        price = tonumber(self:getYmnPriceByProductId(productParam.product_id)) or productParam.real_price,
        gameid = productParam.gameid
    }
    if notShowTip and device.platform ~= "android" then
        self._product = productParam
        self:doPay(product, autoOrder, productParam.id, productParam.prop_type)
        return
    end
    local tips = string.format("是否花费%s元购买%s？购买后自动兑换", product.price, product.name)
    local funcOK = function()
        self._product = productParam
        self:doPay(product, autoOrder, productParam.id, productParam.prop_type, tips)
    end
    if device.platform == "android" and not XH.ChannelTool.checkIsECarChannel() and XH.SysTool.CompareToBundleVersion and XH.SysTool:CompareToBundleVersion("1.2.1") then
        funcOK()
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK, funcOK = funcOK}, tips)
    end
end

function BattlePassModule:doPay(productInfo, autoOrder, itemId, propType, tips)
    if not XH.sdkManager:isSupportBuy() then
        return
    end
    XH.TipTool.showLoading()
    local gameId = productInfo.gameid or XH.areaData:getConfigGameID()
    local channelID = XH.SysTool:getChannelID()
    local numId = XH.playerData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local areaId = tostring(XH.playerData:getBrandID())
    local propid = XH.areaData:getPropDiamndID()
    local groupid = XH.areaData:getSrsGroupID()
    if XH.isEmbeddedApp() then
        local startParam = XH.PluginModule.getStartParams()
        groupid = startParam.groupID
        XH.TipTool.hideLoading()
    end
    -- 传了这个表示走新的发货流程
    local defaultScriptName = "deliver_award"
    local extTable = {
        gameid = gameId,
        areaid = areaId,
        propid = propid,
        channelid = channelID,
        numid = numId,
        source = areaId .. XH.areaData:getLobbyID(),
        script_name = defaultScriptName,
        order_id = "",
        groupid = groupid,
        gifttype = "",
        item_id = itemId,
        prop_type = propType,
        vip_sub = "1",
        sid = XH.areaData:getAreaWindID()
    }
    if XH.isEmbeddedApp() then
        local param = XH.PluginModule.getStartParams()
        extTable.embed_app_id = param.appID
        extTable.embed_shop = 1
        extTable.plugin_gold = 1
    end
    local ext = json.encode(extTable)
    XH.lobby:getModule("Shop"):recordBuyParam(productInfo, "deliver_award", "", autoOrder, false, XH.areaData:getPropDiamndID(), nil, {ext = ext})
    local proForpey = {
        order_id = "",
        product_id = productInfo.productId,
        product_name = productInfo.name,
        product_price = productInfo.price,
        product_count = "1",
        role_id = numId,
        role_name = userId,
        role_grade = "",
        role_balance = "",
        server_id = "",
        ext = ext,
        ["notify_url"] = "",
        is_auto_order = autoOrder and tostring(autoOrder) or "0"
    }
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG then
        proForpey.is_test = 1
    end
    local target = cc.Application:getInstance():getTargetPlatform()
    if target == cc.PLATFORM_OS_IPHONE or target == cc.PLATFORM_OS_IPAD then
        XH.sdkManager:xhCallOCFunc("XH_IAP", "xhBuy:", proForpey)
    elseif device.platform == "android" then
        if XH.isEmbeddedApp() then
            XH.TipTool.hideLoading()
            XH.viewManager:openView("PayTypeView", nil, proForpey, {tip = tips})
        elseif XH.ChannelTool.checkIsECarChannel() then --车载渠道，传H5道具参数 暂未处理
            XH.TipTool.hideLoading()
        elseif XH.SysTool.CompareToBundleVersion and XH.SysTool:CompareToBundleVersion("1.2.1") then
            XH.TipTool.hideLoading()
            XH.viewManager:openView("PayTypeView", nil, proForpey, {tip = tips})
        else
            XH.sdkManager:callFunctionWithMap(XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.BUY, {["0"] = proForpey})
        end
    else
        XH.TipTool.hideLoading()
    end
end

function BattlePassModule:reqExchangeProductsInfo(propType, hideLoading)
    if self._isRequestShopList then
        return
    end
    self._isRequestShopList = true
    self._hideLoading = nil
    if hideLoading == nil then
        XH.TipTool.showLoading()
    else
        self._hideLoading = true
    end
    local numId = XH.playerData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local areaId = XH.playerData:getBrandID()
    self:startReq("ReqExchangeProductList", numId, userId, areaId, XH.areaData:getAreaWindID(), 0, XH.KW_CONFIG_LOGIC_TIME_OUT, "", propType)
end

function BattlePassModule:respProductsInfo(req, type, data)
    self._isRequestShopList = false
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local repData = {goods_list = data}
        local goodsList = repData.goods_list or {}
        for _, goods in ipairs(goodsList) do
            goods.product_id = goods.mark
            goods.prop_type = goods.prop_type or BattlePassConfig:getBattlePassShopId()
        end
        repData.goods_list = goodsList
        self._battlePassShopList = repData
    end
end

function BattlePassModule:reqPoolPrizes(poolid)
    if self._haveReqPoolID[poolid] then
        return
    end
    self._poolIndex = self._poolIndex or 0
    self._poolIndex = self._poolIndex + 1
    self:startReq("ReqGetPoolPrizes", {poolid = poolid})
end

function BattlePassModule:respPoolPrizes(req, type, data)
    self._poolIndex = self._poolIndex or 0
    self._poolIndex = self._poolIndex - 1
    self._awardPoolGoods = self._awardPoolGoods or {}
    if data and data.poolPrize then
        for i = 1, #data.poolPrize do
            local pid = data.poolPrize[i].pid or 0
            local ppid = data.poolPrize[i].ppid or 0
            data.poolPrize[i] = data.poolPrize[i] or {}
            data.poolPrize[i].awardLv = BattlePassConfig:getAwardLevel(data.poolPrize[i].propId)
            self._awardPoolGoods[pid .. "_" .. ppid] = data.poolPrize[i]
            self._haveReqPoolID[pid] = true
        end
    end
    -- 请求奖次完成
    if self._poolIndex == 0 then
        self:dispatchEvent({name = BattlePassModule.EVENT_POOL_PRIZES_SUCC})
    end
end

function BattlePassModule:getAwardPoolGoods()
    return self._awardPoolGoods
end

function BattlePassModule:getBattlePassShopList()
    return self._battlePassShopList
end

function BattlePassModule:getYmnPriceByProductId(productId)
    local ymnProduct = XH.lobby:getModule("Shop"):getYmnProduct()
    if ymnProduct and ymnProduct[productId] then
        return tonumber(ymnProduct[productId].price)
    end
    return
end

function BattlePassModule:getNumberString(num)
    if type(num) ~= "number" then
        return ""
    end
    if num < 0 then
        return ""
    elseif num < 10000 then
        return tostring(num)
    elseif num < 100000 then
        local number_truncated = math.floor(num / 10000 * 100 + 0.0001) / 100
        return string.format("%.2f", number_truncated) .. "万"
    elseif num < 100000000 then
        local number_truncated = math.floor(num / 10000)
        return number_truncated .. "万"
    elseif num < 1000000000 then
        local number_truncated = math.floor(num / 100000000 * 100 + 0.0001) / 100
        return string.format("%.2f", number_truncated) .. "亿"
    else
        local number_truncated = math.floor(num / 100000000)
        return number_truncated .. "亿"
    end
end

function BattlePassModule:test()
    local product = {
        product_id = "war_token_1_30_1",
        name = "30元战令",
        real_price = 0.01,
        prop_type = 692,
        id = 12268
    }
    self:reqBuy(product, nil, true)
end

return BattlePassModule
