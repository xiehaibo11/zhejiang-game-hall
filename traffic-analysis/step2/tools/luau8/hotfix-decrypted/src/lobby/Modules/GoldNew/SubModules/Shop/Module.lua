-- local Base = XH.Bridge:require("lobby.Modules.Shop.Module")
local ShopModule = class("GoldShopModule", XH.ModuleBase)
local ShopConfig = import(".Config")
local RedPointManager = import("...Manager.RedPointManager")
local LocalConfig = import("...Configs.LocalConfig")
local RemoteConfig = import("...Configs.RemoteConfig")
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local TaskDefine = XH.Bridge:require("app.Define.TaskDefine")
local LOCAL_SAVEINFO_KEY = "NEW_GOLD_SHOP_SAVE_INFO"
local GlobalConfig = XH.Bridge:require("app.Config.GlobalConfig")
local Utils = import("...Tool.Utils")
ShopModule.EVENT_GOLDHALL_EXCHANGE_INFO = "EVENT_GOLDHALL_EXCHANGE_INFO"
ShopModule.EVNET_DIAMONDS_GOODS_LIST = "EVNET_DIAMONDS_GOODS_LIST"

function ShopModule:ctor()
    ShopModule.super.ctor(self)
    self._propsWithTag = {}
    self._allPropTags = RemoteConfig:getShopTagConfig() or {}
    if XH.Bridge:getModule("GoldNew"):isSupport("shop") then
        self:reqDiamondProductsInfo()
        self:reqAllGoodsV2()
    end
    local info = cc.UserDefault:getInstance():getStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), "{}")
    self._redPointInfo = json.decode(info)
end

-- 获取请求配置
function ShopModule:getReqConfig()
    return {
        ReqDiamondProductsInfo = {reqPath = "lobby.Req.Shop.ReqProductList", callBack = self.respDiamondProductsInfo},
        ReqShopGoodsListRequest = {reqPath = XH.Bridge:getReqPath("ReqShopGoodsListRequest"), callBack = self.respShopGoodsList},
        ReqExchangeGoodsListV2 = {reqPath = XH.Bridge:getReqPath("ReqExchangeGoodsListV2"), callBack = self.respExchangeGoodsListV2},
        ReqExchangeGoodsV2 = {reqPath = XH.Bridge:getReqPath("ReqExchangeGoodsV2"), callBack = self.respExchangeProductV2}
    }
end

function ShopModule:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("Shop"), eventKeyName = "EVNET_SHOP_PAGE_MARK_TOP", callBack = "onEventMarkTop"},
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration"},
        {module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_OPERATE_PROPS", callBack = "onOperateProps"},
    }
end

function ShopModule:onGetConfiguration(event)
    if not XH.isEmbeddedApp() then
        return
    end
    local key = event.data.key
    local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
    if key and key == ConfigurationDefine.Config.GOLD then
        self._allPropTags = RemoteConfig:getShopTagConfig() or {}
    end
end

function ShopModule:reqAllGoodsV2()
    self:reqActGoodList()
    self:reqExchangeGoodListV2(RemoteConfig:getShopConfig("exBusiness"))
end

function ShopModule:getShopAllTags()
    return self._allPropTags
end

function ShopModule:getFirstTabInfo(firstTag)
    for _, firstList in pairs(self._allPropTags) do
        if firstList.tag == firstTag then
            return firstList
        end
    end
    return {}
end

function ShopModule:getSecondTabInfo(firstTag, secondTag)
    local firstList = self:getFirstTabInfo(firstTag)
    if firstList.sub then
        for _, secondList in pairs(firstList.sub) do
            if secondList.tag == secondTag then
                return secondList
            end
        end
    end
    return {}
end

function ShopModule:getTagsWithName(tagName)
    if tagName and tagName ~= "" then
        for _, firstList in pairs(self._allPropTags) do
            for _, secondList in pairs(firstList.sub) do
                if secondList.tag == tagName then
                    return firstList.tag, secondList.tag
                end
            end
        end
    end
    return nil, nil
end

-- 获取是否存在某标签
function ShopModule:getTagWithShop(productInfo, tag)
    if productInfo.tags and productInfo.tags ~= "" then
        for i = 1, #productInfo.tags do
            if productInfo.tags[i].key == tag then
                return true
            end
        end
    end
    return false
end

-- 获取 LobbyShopModule 实例
function ShopModule:getLobbyShopModule()
    return XH.Bridge:getModule("Shop")
end

function ShopModule:isGoldProduct(productInfo)
    return productInfo.type == "gold"
end

-- 获取到道具命名
function ShopModule:getShopNameById(propId)
    if propId == 0 then
        return "gold"
    end
    local propList = XH.areaData:getPropList()
    for propName, propValue in pairs(propList) do
        if propValue == propId then
            return propName
        end
    end
    return nil
end

-- 检查玩家是否拥有足够的钻石
function ShopModule:isHaveEnoughDiamond(productInfo, propid, needNum, excnt)
    local playerPropsInfo = XH.playerData:getPlayerDrop()
    local personPropCount = playerPropsInfo[propid] or 0
    if propid == XH.areaData:getGoldPropId() then
        personPropCount = XH.playerData:getSR()
    end
    needNum = tonumber(needNum)
    local isEnough = propid and needNum <= personPropCount
    local needPropName = self:getShopNameById(propid)
    local needPropId = propid
    -- 支持快捷购买
    local tipMsg = ""
    local isHideTips = false
    if (not isEnough) and (XH.areaData:isSupportGoldQuickRecharge() or true) then
        local targetPropNum = excnt
        local targetPropId = productInfo.propId
        local goodInfo = clone(self:checkMaxShelvesEnough(needPropId, needNum - personPropCount))
        if goodInfo then
            goodInfo.orderCheck = false
            goodInfo.pay_attach = goodInfo.pay_attach or {}
            goodInfo.pay_attach.exgid = productInfo.gid
            goodInfo.pay_attach.buss = productInfo.act and productInfo.act.business
            goodInfo.pay_attach.exstid = productInfo.act and productInfo.act.strategyId
            goodInfo.pay_attach.excnt = excnt
            goodInfo.pay_attach.stid = nil --不触发活动
            
            self:arrangeQuickInfo(needPropId, needNum, productInfo.name, targetPropNum, targetPropId, goodInfo, productInfo.id)
            isHideTips = true
        end
    end
    if ShopConfig.NotEnoughPropsTips and ShopConfig.NotEnoughPropsTips[needPropName] then
        tipMsg = ShopConfig.NotEnoughPropsTips[needPropName]
    end
    return isEnough, tipMsg, isHideTips
end

-- 检查快速充值类型
function ShopModule:checkQuickReChargeType(productType)
    if not productType then
        return false
    end
    for _, v in pairs(ShopConfig.QuickReChargeType) do
        if productType == v then
            return true
        end
    end
    return false
end

-- 检查最大货架是否足够
function ShopModule:checkMaxShelvesEnough(propId, propNum)
    if propId == XH.areaData:getPropList().propDiamndID or propId == 101034 then
        local productList = clone(self._propsWithTag[ShopConfig.SpecialTag.DIAMOND]) or {}
        table.sort(productList, function(a, b)
            return tonumber(a.value) < tonumber(b.value)
        end)
        for i, v in ipairs(productList) do
            if tonumber(v.value) >= propNum then
                return v
            end
        end
    end
    return nil
end

-- 整理道具不足信息
-- @param needPropId 需要消耗的道具id
-- @param needCostPrize 需要消耗的道具数量
-- @param targetName 最终需要兑换的商品名称
-- @param targetPropNum 最终需要兑换的商品数量
-- @param targetPropId 最终需要兑换的道具id
-- @return 无
function ShopModule:arrangeQuickInfo(needPropId, needCostPrize, targetName, targetPropNum, targetPropId, buyGood, productId)
    if not needPropId or not needCostPrize then
        return
    end
    local param = {}
    param.targetDiamond = needCostPrize
    param.targetValue = targetPropNum
    param.name = targetName
    param.targetPropId = targetPropId
    param.buyGood = buyGood
    param.showFunc = function(product)
        self._rechareProduct = product
        XH.Bridge:throwData("sp25032002", {page = "金币大厅", item_id = productId}, {count2 = product.price})
    end
    param.sureFunc = function(product)
        XH.Bridge:throwData("sp25032003", {page = "金币大厅", item_id = productId}, {count2 = product.price})
    end
    XH.Bridge.viewManager:openView("GoldHallQuickRechareView", nil, param)
end

function ShopModule:getQuickRechargeProduct()
    return self._rechareProduct
end

-- 请求商品列表
function ShopModule:reqProductList(tag)
    if tag == ShopConfig.SpecialTag.DIAMOND then
        self:reqActGoodList()
    else
        self:reqExchangeGoodListV2(RemoteConfig:getShopConfig("exBusiness"))
    end
end

-- 获取商品对应红点路径
function ShopModule:getTagPath(productData)
    if not productData.tags or not productData.tags[1] then
        return {}
    end
    local path = {}
    for i, tag in ipairs(productData.tags) do
        for _, firstList in pairs(self._allPropTags) do
            for _, secondList in pairs(firstList.sub) do
                if secondList.tag == tag then
                    table.insert(path, string.format("%s/%s/", firstList.tag, secondList.tag) .. productData.gid)
                end
            end
        end
    end
    return path
end

function ShopModule:getTagPathByTag(tag)
    for _, firstList in pairs(self._allPropTags) do
        for _, secondList in pairs(firstList.sub) do
            if secondList.tag == tag then
                return string.format("%s/%s/", firstList.tag, secondList.tag)
            end
        end
    end
end

function ShopModule:getShopItemsWithTag(tag)
    if tag == ShopConfig.SpecialTag.REC then
        return self:getActGiftInfo()
    end
    return self._propsWithTag[tag]
end

-- 是否支持红点
function ShopModule:isSupportRedPoint(mark)
    return mark == "redpoint"
end

-- 是否需要显示红点
function ShopModule:isSNeedShowRedPoint(product)
    local mark = product.goods_mark or ""
    local markInfo = string.split(mark, '=') -- 1.mark  2.版本
    if not self:isSupportRedPoint(markInfo[1]) or not markInfo[2] then
        return false
    end
    local lastClickVer = self._redPointInfo[product.gid .. ""] or 0
    if lastClickVer < tonumber(markInfo[2]) then
        return true
    end
end

-- 添加红点信息
function ShopModule:addRedPointInfo(product)
    local mark = product.goods_mark or ""
    local markInfo = string.split(mark, '=') -- 1.mark  2.版本
    if not self:isSupportRedPoint(markInfo[1]) or not markInfo[2] then
        return
    end
    self._redPointInfo[product.gid .. ""] = tonumber(markInfo[2])
    cc.UserDefault:getInstance():setStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), json.encode(self._redPointInfo))
end

-- 获取推荐里面的获得礼包数据
function ShopModule:getActGiftInfo()
    local gift = {}
    local recallNewGifts = XH.lobby:getModule("RecallNew"):getShopGiftData()
    if #recallNewGifts > 0 then
        for i = 1, #recallNewGifts do
            table.insert(gift, {sort = 9, classPath = "lobby.Modules.RecallNew.ShopItem", index = i})
        end
    end
    if XH.Bridge:getModule(LocalConfig.MP.ActFR):isValid() then
        table.insert(gift, {sort = 10, classPath = "lobby.Modules.GoldNew.SubModules.ActFirstRecharge.ActFRShopView"})
    end
    local actInfo = XH.Bridge:getModule(LocalConfig.MP.ActPeGP):getActInfoInShop()
    for _, v in ipairs(actInfo) do
        table.insert(gift, v)
    end
    local monthlyCardInfo = XH.lobby:getModule("MonthlyCard"):getMonthlyCardInfos()
    for _, v in pairs(monthlyCardInfo) do
        table.insert(gift, v)
    end
    table.sort(gift, function(a, b)
        return a.sort < b.sort
    end)
    return gift
end

-- 请求钻石商品信息
function ShopModule:reqDiamondProductsInfo(hideLoading)
    if not hideLoading then
        XH.TipTool.showLoading()
    end
    self:startReq("ReqDiamondProductsInfo", XH.configerManager:getShopAppId(), XH.configerManager:getShopPackageAppId())
end

-- 钻石信息结果
function ShopModule:respDiamondProductsInfo(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._ymnProducts = self:newFliterDataByArea(data)
        for _, v in ipairs(data) do
            v.act = {actType = 0, sort = 0, rebate = {}}
            v.gid = v.id
            v.data = {}
        end
        if self._propsWithTag[ShopConfig.SpecialTag.DIAMOND] == nil or #self._propsWithTag[ShopConfig.SpecialTag.DIAMOND] == 0 then
            self._propsWithTag[ShopConfig.SpecialTag.DIAMOND] = self._ymnProducts
        end
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, req:getMessage())
    end
    self:dispatchEvent({name = self.EVNET_DIAMONDS_GOODS_LIST, data = {tag = ShopConfig.SpecialTag.DIAMOND}})
end

-- 新商城筛选对应AREAID商品
function ShopModule:newFliterDataByArea(data)
    data = data or {}
    local props = {}
    local isTiShenMode = require("app.Config.GlobalConfig").IsIosTiShen and (device.platform == "ios")
    for _, v in pairs(data) do
        local productId = tostring(v.productId)
        local areaIdStr = tostring(XH.areaData:getAreaID())
        -- 提审模式：iOStishen_7128_23 这类也符合，不过滤
        local matchArea = string.find(productId, areaIdStr)
        local isTiShenProduct = productId and string.sub(productId, 1, #UrlConf.TISHEN_PRODUCT_PREFIX) == UrlConf.TISHEN_PRODUCT_PREFIX
        if matchArea or (isTiShenMode and isTiShenProduct) then
            props[#props + 1] = v
        end
    end
    return props
end

-------------钻石商城2.0----------------------
function ShopModule:getActGoodsList()
    return self._actGoodsList
end
function ShopModule:getShopStrategy()
    return self._shopStrategy
end

function ShopModule:reqActGoodList(bLoading)
    if bLoading then
        XH.TipTool.showLoading()
    end
    if XH.lobby:getModule("RecallNew"):isInAct() then
        self:startReq("ReqShopGoodsListRequest", {business = ShopConfig.BussinessNameRecall.GoldLobbyDiamond}, 8)
    else
        self:startReq("ReqShopGoodsListRequest", {business = ShopConfig.BussinessName.GoldLobbyDiamond}, 8)
    end

    -- self:reqDiamondProductsInfo()
end

function ShopModule:respShopGoodsList(req, flag, data)
    XH.TipTool.hideLoading()
    if flag == XH.Req.TYPE.SUCCESS then
        local temp = {}
        local isTiShenMode = GlobalConfig.IsIosTiShen and (device.platform == "ios")
        for _, v in ipairs(data.list) do
            -- 提审模式：全部加入（含提审计费点）；非提审模式：不把提审计费点加进去
            local productId = tostring(v.productId)
            local isTiShenProduct = productId and #productId >= #UrlConf.TISHEN_PRODUCT_PREFIX and string.sub(productId, 1, #UrlConf.TISHEN_PRODUCT_PREFIX) == UrlConf.TISHEN_PRODUCT_PREFIX
            if isTiShenMode or not isTiShenProduct then
                if temp[v.productId] then
                    if v.act.actType > 0 and temp[v.productId].act.actType == 0 then
                        temp[v.productId] = v
                    end
                else
                    temp[v.productId] = v
                end
            end
        end
        self._actGoodsList = {}
        for _, v in pairs(temp) do
            self._actGoodsList[#self._actGoodsList + 1] = v
        end
        self._propsWithTag[ShopConfig.SpecialTag.DIAMOND] = self._actGoodsList
        for _, v in ipairs(data.list) do
            v.name = v.productName
            v.orderCheck = true
            v.gid = v.id
            v.data = {}
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
            v.pay_attach = {package_id = XH.configerManager:getShopPackageAppId(), transfer = 1, stid = v.act.strategyId}

            if GlobalConfig.IsDebug then
                v.pay_attach.package_id = 9040
            end
        end
        self._shopStrategy = data.info
        self:sortGoodsList(self._actGoodsList, data.info[1] and data.info[1].sortType == 1)
        self:dispatchEvent({name = self.EVNET_DIAMONDS_GOODS_LIST, data = {tag = ShopConfig.SpecialTag.DIAMOND}})
    else
        if self._ymnProducts and next(self._ymnProducts) then
            self:dispatchEvent({name = self.EVNET_DIAMONDS_GOODS_LIST, data = {tag = ShopConfig.SpecialTag.DIAMOND}})
        else
            self:reqDiamondProductsInfo(true)
        end
        local errcode = (data and data.resp and data.resp.errCode) or -1
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "活动商品请求异常",
            Monitoring_content = {info_des = "活动商品请求异常", code = errcode, info = tostring(flag)}
        })
    end
end

function ShopModule:sortGoodsList(goods, recommondFirst, sortSecondKey)
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

function ShopModule:getActInfoByTag(data)
    local tag = data and data.tag or ""
    local getTagInfo = function(goods)
        local actTypeSortV = {[0] = 0, 1, 2, 3, 4, 5}
        local temp = clone(goods) or {}
        table.sort(temp, function(a, b)
            return (actTypeSortV[a.act.actType] or a.act.actType) > (actTypeSortV[b.act.actType] or a.act.actType)
        end)
        if temp[1] == nil then
            return {cornerName = "", actType = 0, style = 0}
        end
        local crName = temp[1].act.cornerName or {}
        local tagName = crName[1] or ""
        return {cornerName = string.gsub(tagName, "=", ""), actType = temp[1].act.actType, style = temp[1].data.style or temp[1].act.actType}
    end
    if tag == ShopConfig.SpecialTag.DIAMOND then
        return getTagInfo(self._actGoodsList)
    else
        local tags = {}
        for _, firstList in pairs(self._allPropTags) do
            if firstList.tag == tag then
                for _, secondList in pairs(firstList.sub) do
                    table.insert(tags, secondList.tag)
                end
            end
        end
        local allGoods = {}
        for _, v in ipairs(tags) do
            for _, good in ipairs(self._propsWithTag[v] or {}) do
                table.insert(allGoods, good)
            end
        end
        return getTagInfo(allGoods)
    end
end

-------------兑换商城2.0----------------------
function ShopModule:reqExchangeGoodListV2(businessScene, bLoading)
    if bLoading then
        XH.TipTool.showLoading()
    end
    local reqBusiness = clone(businessScene or ShopConfig.BussinessName.GoldLobbyExchange)
    if XH.lobby:getModule("RecallNew"):isInAct() and reqBusiness and #reqBusiness > 0 then
        for i = 1, #reqBusiness do
            if reqBusiness[i] == "gold_lobby_exchange" then
                reqBusiness[i] = "gold_lobby_exc_re"
            elseif reqBusiness[i] == "fk_lobby_exchange" then
                reqBusiness[i] = "fk_lobby_exchange_re"
            end
        end
    end
    self:startReq("ReqExchangeGoodsListV2", {business = reqBusiness}, 8)
end

function ShopModule:respExchangeGoodsListV2(req, flag, data)
    XH.TipTool.hideLoading()
    -- flag = XH.Req.TYPE.SUCCESS
    -- local reply = {
    --     list = {
    --         {
    --             gid = 101,
    --             canMulti = 1, -- 可批量兑换
    --             shopId = "shop_001",
    --             name = "金币1W",
    --             pic = "https://img1-cdn.bianfeng.com/uploads/materials/images/202504/B4177144763987I7.png",
    --             category = "virtual", -- 虚拟商品
    --             type = "prop", -- 开心豆
    --             propId = 101473,
    --             propValue = 10000,
    --             brief = "兑换即可获得大量金币",
    --             description = "每日限量兑换，数量有限",
    --             sort = 1,
    --             scoreConf = {{propId = 101034, score = 100}},
    --             displayPrice = 9.9,
    --             commodity = "jb,tablebg",
    --             goods_mark = "redpoint=2",
    --             act = {actType = 1, sort = 1, cornerName = "充值=赠送,加送", rebate = {{propId = 101473, award = 200}}}
    --         }, {
    --             gid = 102,
    --             canMulti = 0, -- 不可批量兑换
    --             shopId = "shop_002",
    --             name = "黄金卡1张",
    --             pic = "https://img1-cdn.bianfeng.com/uploads/materials/images/202504/B4177144763987I7.png",
    --             category = "virtual",
    --             type = "prop", -- 道具
    --             propId = 150756,
    --             propValue = 1,
    --             brief = "兑换后获得钻石",
    --             description = "限时优惠，仅限今日",
    --             sort = 2,
    --             scoreConf = {{propId = 150107, score = 200}},
    --             displayPrice = 19.9,
    --             commodity = "rck,tablebg",
    --             act = {actType = 2, sort = 2, cornerName = "热销=赠送,推荐", rebate = {{propId = 150107, award = 10}}, strategyId = 2}
    --         }, {
    --             gid = 103,
    --             canMulti = 0, -- 不可批量兑换
    --             shopId = "shop_002",
    --             name = "黄金卡1张",
    --             pic = "https://img1-cdn.bianfeng.com/uploads/materials/images/202504/B4177144763987I7.png",
    --             category = "virtual",
    --             type = "prop", -- 道具
    --             propId = 150756,
    --             propValue = 1,
    --             brief = "兑换后获得钻石",
    --             description = "限时优惠，仅限今日",
    --             sort = 2,
    --             scoreConf = {{propId = 150107, score = 200}},
    --             displayPrice = 19.9,
    --             commodity = "prop_emoji,tablebg",
    --             act = {actType = 2, sort = 3, cornerName = "热销=赠送,推荐", rebate = {{propId = 150107, award = 10}}, strategyId = 1}
    --         }
    --     },
    --     info = {
    --         {strategyId = 1, title = "普通兑换", desc = "默认策略", business = "aa"},
    --         {strategyId = 2, title = "限时折扣", desc = "活动期间兑换更划算", business = "bb"}
    --     }
    -- }
    -- data = reply

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
        -- local goodList = Utils:filter(data.list, function(shopInfo)
        --     for i, v in ipairs(shopInfo.scoreConf) do
        --         if v.propId == XH.areaData:getPropList().propDiamndID then
        --             return true
        --         elseif v.propId == XH.areaData:getPropCouponID() then
        --             return true
        --         end
        --     end
        -- end)
        self._exGoodsList = goodList
        for _, v in ipairs(goodList) do
            v.id = v.gid
            v.propid = v.propId
            v.value = v.propValue
            v.image = v.pic
            v.scoreConf[1] = v.scoreConf[1] or {propId = 0, score = 0}
            v.condition = v.scoreConf[1].score
            v.defaultCostPropid = v.scoreConf[1].propId
            -- v.goods_mark = "redpoint=2" --测试红点
            v.data = {}
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

        self._propsWithTag = {[ShopConfig.SpecialTag.DIAMOND] = self._propsWithTag[ShopConfig.SpecialTag.DIAMOND]}
        for _, firstList in pairs(self._allPropTags) do
            if firstList.tag ~= ShopConfig.SpecialTag.DIAMOND then
                for _, secondList in pairs(firstList.sub) do
                    self._propsWithTag[secondList.tag] = {}
                end
            end
        end
        for _, v in ipairs(goodList) do
            -- self._propsWithTag[v.act.business] = self._propsWithTag[v.act.business] or {}
            -- table.insert(self._propsWithTag[v.act.business], v)
            local tags = string.split(v.commodity, ",")
            v.tags = tags
            -- 默认插入商品场景的标签
            if not table.indexof(tags, v.act.business) then
                table.insert(tags, v.act.business)
                if v.act.business == "jbhy_gift" then
                    v.act.rebate = {}
                end
            end
            for _, tag in ipairs(tags or {}) do
                self._propsWithTag[tag] = self._propsWithTag[tag] or {}
                table.insert(self._propsWithTag[tag], v)

                if self:isSNeedShowRedPoint(v) then
                    local allPath = XH.Bridge:getModule("GoldNew"):getRedPointPath("shop", v)
                    for _, path in ipairs(allPath) do
                        RedPointManager:registerNode(path)
                        RedPointManager:setState(path, true, false)
                    end
                end
            end
        end
        self:dispatchEvent({name = self.EVENT_GOLDHALL_EXCHANGE_INFO, data = {tag = self._tag}})
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, req:getMessage())
    end
end

function ShopModule:setRedPointStateByGoodInfo(goodInfo)
    local tags = string.split(goodInfo.commodity, ",")
    for _, _ in ipairs(tags or {}) do
        if self:isSNeedShowRedPoint(goodInfo) then
            local allPath = XH.Bridge:getModule("GoldNew"):getRedPointPath("shop", goodInfo)
            for _, path in ipairs(allPath) do
                RedPointManager:registerNode(path)
                RedPointManager:setState(path, false, false)
            end
        end
    end
end

function ShopModule:reqExchangeGoodsV2(goodInfo, cnt, callback, bLoading, propId)
    if bLoading then
        XH.TipTool.showLoading()
    end
    self._exchangeCallback = callback
    propId = propId or goodInfo.defaultCostPropid
    self:startReq("ReqExchangeGoodsV2", {
        strategy_id = goodInfo.act.strategyId,
        business = goodInfo.act.business,
        gid = goodInfo.gid,
        prop_id = propId,
        buy_num = cnt
    })
end

function ShopModule:respExchangeProductV2(req, type, data)
    XH.TipTool.hideLoading()
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("兑换成功", 3)
        if self._exchangeCallback then
            self._exchangeCallback(true)
        end
        local props = data.awards
        if data.propCount > 0 then
            table.insert(props, 1, {propId = data.propId, award = data.propCount, propName = data.name})
        end
        -- table.insert(props, 1, {propId = 150105, value = 1})
        local propList = XH.areaData:getPropList()
        if data.propId == propList.seniorVip or data.propId == propList.superVip then
            XH.lobby:getModule("NewVip"):reqVipUser(data.propId)
        elseif data.propId == 150830 or data.propId == 150831 then
            XH.lobby:getModule("MonthlyCard"):showGetAward(data.awards[1].propId)
        else
            local isShowUseBtn = false
            local useFunc = nil
            if #props == 1 then 
                local propid = props[1].propId
                local baseInfo = XH.Bridge:getModule("BagSysNew"):getBagData():getPropInfo(propid)
                if baseInfo and ShopConfig.isZhuangBanType(baseInfo.props_tag_id) then
                    local isWear = XH.lobby:getModule("XiaGuang"):getWearState(propid)
                    if not isWear then
                        isShowUseBtn = true
                        XH.lobby:getModule("BagSysNew"):reqSelfBagData()
                        useFunc = function(callback) 
                            local bagsysModule = XH.Bridge:getModule("BagSysNew")
                            local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
                            local propcnt = 0
                            for _, v in ipairs(selfBagData.count_prop_info or {}) do
                                if v.propsid == propid then
                                    propcnt = v.propscnt
                                end
                            end
                            self._autoWearPropId = propid
                            self._autoWearCallback = callback
                            if propcnt == 0 then --有库存要先使用掉，会自动进行装扮
                                bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP, propid, true, false)
                            else
                                bagsysModule:reqUseProps(propid, propcnt > 0 and propcnt or 1, true)
                            end
                        end
                    end
                end
            end
            Utils:showGetAward(props, nil, isShowUseBtn, useFunc)
        end
    elseif type == XH.Req.TYPE.FAIL then
        if self._exchangeCallback then
            self._exchangeCallback(false)
        end
        XH.TipTool.showToast(ShopConfig.getErrMsg(data and data.resp and data.resp.errCode), 3)
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("兑换超时，请刷新重试", 3)
    end
    self._exchangeCallback = nil
    self:reqExchangeGoodListV2(RemoteConfig:getShopConfig("exBusiness"), true)
end

function ShopModule:onOperateProps(event)
    local opeInfo = event.info
    if opeInfo == nil then
        return
    end
    local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
    if opeInfo and self._autoWearPropId then
        if opeInfo.operate_props == XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP then
            XH.TipTool.showToast("使用成功！")
        end
        XH.lobby:getModule("BagSysNew"):reqSelfBagData()
        XH.TipTool.hideLoading()
        self._autoWearPropId = nil
        if self._autoWearCallback then
            pcall(self._autoWearCallback)
        end
        self._autoWearCallback = nil
    end
end
return ShopModule
�~