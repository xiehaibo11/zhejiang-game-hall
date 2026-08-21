local BoxQuickRechargeModule = class("BoxQuickRechargeModule", XH.ModuleBase)
local ShopConfig = require("lobby.Modules.Shop.Config")
local BoxQuickRechargeConfig = require("lobby.Modules.BoxQuickRecharge.Config")

function BoxQuickRechargeModule:ctor()
    BoxQuickRechargeModule.super.ctor(self)
    
    self._isCreateRoom = false    -- 是否是创建房间
end

function BoxQuickRechargeModule:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_DIAMOND_BUY_RESULT", callBack = "onPayResut"},      -- 钻石支付结果
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onDiamondBack"}, -- 获取钻石
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_BUY_ROOMCARD", callBack = "onBuyRoomCardResult"}, --兑换成功
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_PAGE_PRODUCTS_CONFIG", callBack = "onEventGetPagProducts" },
    }
end

function BoxQuickRechargeModule:getReqConfig()
    return {
        -- ReqExchangeProductList = { reqPath = "lobby.Req.Shop.ReqExchangeProductList", callBack = self.respProductsInfo },
        -- ReqExchangeProduct = { reqPath = "lobby.Req.Shop.ReqExchange", callBack = self.respExchangeProduct },
    }
end

function BoxQuickRechargeModule:onPayResut(event)
    if not event.msg or not event.msg.resultTag then
        return
    end
    local bSuccess = event.msg.resultTag == XH.lobby:getModule("Shop").BUY_DIAMOND_RESULT.SUCCESS
    if bSuccess then
        if self._isCreateRoom then
            XH.lobby:getModule("CreateBoxRoom"):quickCreateLastGame()
        else
            XH.lobby:getModule("JoinBoxRoom"):quickJoinRoom()
        end
    end
    self:throwBuyData(true, bSuccess)
    XH.lobby:destroyModule("BoxQuickRecharge")
end

function BoxQuickRechargeModule:onDiamondBack(event)
    if event and event.data and event.data.tag == ShopConfig.SpecialTag.DIAMOND then
        self:quickBuyBoxRoomcard(self._isCreateRoom)
    end
end

function BoxQuickRechargeModule:onEventGetPagProducts(event)
    local specialTag = event.data.tag
    if ShopConfig.SpecialTag.CARD == specialTag then
        XH.TipTool.hideLoading()
        self:quickBuyBoxRoomcard(self._isCreateRoom)
    end
end

local isReq = false
function BoxQuickRechargeModule:quickBuyBoxRoomcard(isCreateRoom)
    self._isCreateRoom = isCreateRoom

    local _, cardSubId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.CARD)
    if not cardSubId then 
        XH.TipTool.showToast("商城未配置房卡")
        XH.lobby:destroyModule("BoxQuickRecharge")
        return
    end
    local cardProduct = XH.lobby:getModule("Shop"):getShopItemsWithId(cardSubId)
    if not cardProduct then
        XH.lobby:getModule("Shop"):reqShopProductByConfig(cardSubId)
        return
    end

    -- 钻石数据
    local propTag = ShopConfig.SpecialTag.DIAMOND
    local _, currencySubId = XH.lobby:getModule("Shop"):getTagsWithName(propTag)
    local productList = XH.lobby:getModule("Shop"):getShopItemsWithId(currencySubId)
    if not productList and not isReq then
        XH.lobby:getModule("Shop"):reqDiamondProductsInfo()
        isReq = true
        return
    end
    
    local needRoomCard = BoxQuickRechargeConfig[XH.areaData:getLobbyID()]
    local goodsList = cardProduct and cardProduct.goods_list or {}
    local index = 0
    for idx, v in pairs(goodsList) do
        if tonumber(v.condition ) == needRoomCard then
            index = idx
            break
        end
    end
    if index == 0 then
        XH.TipTool.showToast("未找到合适商品")
        XH.lobby:destroyModule("BoxQuickRecharge")
        return
    end
    if not productList then
        XH.TipTool.showToast("未找到合适充值档位")
        XH.lobby:destroyModule("BoxQuickRecharge")
        return
    end
    -- 检测是否超过最大钻石购买
    local needDiamond = goodsList[index].condition
    local isThanMax = true
    for _, v in ipairs(productList) do
        local diamond = tonumber(v.value)
        if diamond >= needDiamond then
            isThanMax = false
        end
    end

    if isThanMax then
        XH.TipTool.showToast("未找到合适充值档位")
        XH.lobby:destroyModule("BoxQuickRecharge")
        return
    end

    local isHave, _, _ = XH.lobby:getModule("Shop"):isHaveEnoughDiamond(cardProduct.id, index)
    if isHave then
        XH.lobby:getModule("Shop"):reqBuyProduct(cardProduct.id, index, nil, nil, false)
    end
    self:throwBuyData(false, false, true)
end

function BoxQuickRechargeModule:onBuyRoomCardResult(event)
    if event and event.data and event.data.result then
        if self._isCreateRoom then
            XH.lobby:getModule("CreateBoxRoom"):quickCreateLastGame()
        else
            XH.lobby:getModule("JoinBoxRoom"):quickJoinRoom()
        end
    else
        XH.TipTool.showToast("兑换失败")
    end
    XH.lobby:destroyModule("BoxQuickRecharge")
end

function BoxQuickRechargeModule:throwBuyData(isResult, isPaySucc, isPush)
    if not self._productInfo then
        return
    end
    local data = {
        block_item_id = "创建包厢",
        item_id = self._productInfo.productId 
    }
    local customize = {
        count2 = self._productInfo.price
    }
    local throwKey = XH.NewThrowDataDefine.oh25062607
    if isResult then
        throwKey = XH.NewThrowDataDefine.oh25062608
        data.page_item_id = isPaySucc and "成功" or "失败"
        if not isPaySucc then
            customize.info = "支付取消"
        end
    elseif isPush then
         throwKey = XH.NewThrowDataDefine.oh25062606
    end
    XH.NewThrowDataManager:throwData(throwKey, data, customize)
end

-- -- 请求兑换商城信息
-- function BoxQuickRechargeModule:reqExchangeProductsInfo(propType)
--     XH.TipTool.showLoading()
--     local numId = XH.playerData:getNumberID()
--     local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
--     local areaId = XH.playerData:getBrandID()
--     self:startReq("ReqExchangeProductList", numId, userId, areaId, XH.areaData:getAreaWindID(), 0, XH.KW_CONFIG_LOGIC_TIME_OUT, "", propType)
-- end

-- function BoxQuickRechargeModule:respProductsInfo(req, type, data)
--     XH.TipTool.hideLoading()
--     if type == XH.Req.TYPE.SUCCESS then
--         self._exchangeShopList = data
--         self:quickBuyBoxRoomcard(self._isCreateRoom)
--     else
--         XH.TipTool.showToast("请求兑换商城失败")
--     end
-- end

-- -- 请求兑换商品
-- function BoxQuickRechargeModule:reqExchangeProp()
--     XH.TipTool.showLoading()
--     local productId = self._exchangeShopList[1].id
--     local userId = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
--     local gameId = XH.areaData:getConfigGameID()
--     local productType = nil
--     local propType = self:getExchangPropType()
--     local propValue = nil 
--     local multiCfgId = nil
--     local gift_cfg = nil
--     self:startReq("ReqExchangeProduct",XH.playerData:getBrandID(), XH.areaData:getAreaWindID(), XH.playerData:getNumberID(), userId, gameId, productId, productType, XH.KW_CONFIG_LOGIC_TIME_OUT, propType, nil, nil, propValue, multiCfgId, gift_cfg )
-- end

-- function BoxQuickRechargeModule:respExchangeProduct(req, type, data)
--     XH.TipTool.hideLoading()
--     if type == XH.Req.TYPE.SUCCESS then
--         -- XH.TipTool.showToast("兑换成功")
        
--     else
--         XH.TipTool.showToast("兑换失败")
--     end
-- end

-- function BoxQuickRechargeModule:getExchangPropType()
--     local configModule = XH.lobby:getModule("Configuration")
--     if not configModule then
--         return
--     end
--     local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
--     local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
--     if configJsonData and configJsonData.BoxQuickRechargePropType then
--         local lobbyID = tostring(XH.areaData:getLobbyID())
--         return configJsonData.BoxQuickRechargePropType[lobbyID]
--     end
-- end

return BoxQuickRechargeModule �   