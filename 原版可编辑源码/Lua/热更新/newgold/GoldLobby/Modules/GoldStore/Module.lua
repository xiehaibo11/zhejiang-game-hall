local GoldStoreModule = class("GoldStoreModule", NG.ModuleBase)
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")

GoldStoreModule.EVNET_SHOPMANAGER_SHOW_SHOP = "EVNET_SHOPMANAGER_SHOW_SHOP"
GoldStoreModule.EVNET_SHOPMANAGER_EXCHANGE_SUCCESS = "EVNET_SHOPMANAGER_EXCHANGE_SUCCESS"

function GoldStoreModule:ctor()
    GoldStoreModule.super.ctor(self)
    self._allProps = {}
    self._allProps[GoldStoreDefine.TYPE.DIAMOND] = {}
    self._allProps[GoldStoreDefine.TYPE.GOLD] = {}
    self._allProps[GoldStoreDefine.TYPE.GOLD_DISCOUNT] = {}

    self._rmbPropsAdd = {} -- 所有付费商品
    self:clearLastShopInfo()
end

function GoldStoreModule:clearLastShopInfo()
    self._bHideBuySuccessTip = false -- 是否隐藏提示弹窗
    self._lastExchangeInfo = nil -- 支付完成兑换的商品
end

function GoldStoreModule:getReqConfig()
    return {
        --
        ReqDiamondProductsInfo = { reqPath = "newgold.GoldLobby.Req.Store.GoldReqProductList", callBack = self.respDiamondProductsInfo },
        ReqProductsInfo = { reqPath = "newgold.GoldLobby.Req.Store.GoldReqExchangeProductList", callBack = self.respProductsInfo },
        ReqExchangeProduct = { reqPath = "newgold.GoldLobby.Req.Store.GoldReqExchangeProduct", callBack = self.respBuyProp }
    }
end

function GoldStoreModule:getProxyEvents()
    return {
        --  
        { module = NG.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyDiamond" }
    }
end

-- 购买钻石结果
function GoldStoreModule:respBuyDiamond(event)
    if XH.SceneManager:getInstance():getTopSceneTag() ~= NG.SCENE_TAG.NEWGOLD_LOBBY and XH.SceneManager:getInstance():getTopSceneTag() ~= NG.SCENE_TAG.NEWGOLD_GAME then
        return
    end
    local code = event.data.code
    local msg = event.data.msg
    NG.TipTool.hideLoading()

    local isShowTip = false
    local tipStr = msg
    if code == 200 then
        isShowTip = true
        if self._isDisBuy then
            local times = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_BUY_SUCCESS_TIMES, 0)
            NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_ACT_BUY_SUCCESS_TIMES, times + 1)
            NG.goldLobby:getModule("GoldBankrupt"):updateShowActState(true, false, true)
            self._isDisBuy = false
        end
        -- 200001 补单信息不提示
        for _, value in pairs(event.data) do
            if string.find(value, 200001) then
                isShowTip = false
                break
            end
        end
        if self._bHideBuySuccessTip then -- 判断是否走兑换，走兑换就不提示了
            isShowTip = false
            if self._lastExchangeInfo ~= nil and type(self._lastExchangeInfo) ~= "string" then
                self:reqBuyProp(self._lastExchangeInfo, true)
                self._lastExchangeInfo = nil
            end
            self:clearLastShopInfo()
        end
        tipStr = "购买成功"
        if self._lastExchangeInfo ~= nil and type(self._lastExchangeInfo) == "string" then
            if string.find(self._lastExchangeInfo, GoldNewDefine.ACTLIST.RECHARGE) then
                tipStr = "超值畅玩购买成功，奖励已发放到账~"
                XH.SysTool.performDelayOnce(function()
                    NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
                    NG.goldLobby:getModule("GoldPlayAward"):reqActInfo()
                end, 0.5)
                NG.goldLobby:getModule("GoldCommon"):setNeedChangeTable(true)
                self._lastExchangeInfo = nil
            elseif string.find(self._lastExchangeInfo, GoldNewDefine.ACTLIST.BANK_RUPT) then
                isShowTip = false
                NG.TipTool.showToast("购买成功，奖励已发放到账~")
                XH.SysTool.performDelayOnce(function()
                    NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
                end, 0.5)
                NG.goldLobby:getModule("GoldCommon"):setNeedChangeTable(true)
                self._lastExchangeInfo = nil
            end
        end
        NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
    elseif code == 208 or code == 209 then
        -- 漏单恢复,重新下单
        local data
        pcall(function()
            data = cjson.decode(msg)
        end)
        if data and data.product_id then
            local productInfo = nil
            local productInfos = self:getPropsThisAreaID(GoldStoreDefine.TYPE.DIAMOND)
            if productInfos == nil then
                return
            elseif #productInfos == 0 then
                return
            end
            for _, v in pairs(productInfos) do
                if v.productId == data.product_id then
                    productInfo = v
                    break
                end
            end
            if productInfo then
                self:reqBuyDiamond(productInfo, nil, nil, 1)
            end
        end
    elseif code == 202 then
        -- 用户取消
        tipStr = "支付取消"
        isShowTip = true
    end

    if isShowTip then
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, tipStr)
    end
end

-- 请求购买道具
function GoldStoreModule:reqBuyItem(productType, idx, obj, callFunc)
    local props = self:getPropsThisAreaID(productType)
    if props[idx] == nil then
        NG.TipTool.showToast("商品异常，请重新打开商城重试~")
        return
    end
    self._isDisBuy = false
    if productType == GoldStoreDefine.TYPE.DIAMOND then
        self:reqBuyDiamond(props[idx])
    else
        self:reqBuyProp(props[idx], false, obj, callFunc)
    end
end

-- 寻找最近的一批档位
function GoldStoreModule:findFitDiamondInfo(propsInfo)
    local props = self:getPropsThisAreaID(GoldStoreDefine.TYPE.DIAMOND)
    if #props == 0 then
        return nil
    end
    local diamond = GoldPlayerData.Diamond
    for i = 1, #props do
        if diamond + tonumber(props[i].value) >= propsInfo.price then
            return props[i]
        end
    end
    return nil
end

-- 判断钻石是否充足
function GoldStoreModule:judgePropEnough(propsInfo)
    local diamond = GoldPlayerData.Diamond
    if diamond >= propsInfo.price then
        return true
    end
    local diamondInfo = self:findFitDiamondInfo(propsInfo)
    if diamondInfo ~= nil then
        NG.TipTool.showTip({
            type = NG.TIP_LAYER_TYPE.OK,
            funcOK = function()
                self._bHideBuySuccessTip = true
                self._lastExchangeInfo = propsInfo
                self:reqBuyDiamond(diamondInfo)
            end
        }, "当前钻石不足，是否花费" .. tonumber(diamondInfo.price) .. "元购买" .. diamondInfo.name .. "，购买成功后自动兑换" .. propsInfo.name)
        return false
    end
    return true
end

-- 请求购买金币
function GoldStoreModule:reqBuyProp(productInfo, skipJudge, obj, callFunc)
    -- 判断钻石是否充足
    if not skipJudge and not self:judgePropEnough(productInfo) then
        return
    end
    self:clearLastShopInfo()
    NG.TipTool.showLoading()
    obj = obj or {}
    obj.cost = productInfo.price
    self:startReq("ReqExchangeProduct", GoldAreaConfig.WindId, GoldAreaConfig.BridgeAreaID, GoldPlayerData.BridgeNumID, productInfo.id, productInfo.prop_type or GoldStoreDefine.GOLD_TYPE, obj, callFunc)
end

function GoldStoreModule:respBuyProp(req, type, data)
    NG.TipTool.hideLoading()
    if type == NG.Req.TYPE.SUCCESS then
        GoldPlayerData.Diamond = GoldPlayerData.Diamond - data.obj.cost
        NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
        if data.cCallFunc ~= nil and data.obj ~= nil then
            data.cCallFunc(data.obj)
        else
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "兑换成功")
        end
        self:dispatchEvent({ name = self.EVNET_SHOPMANAGER_EXCHANGE_SUCCESS, data = data })
    else
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, req:getMessage())
    end
end

-- 请求购买钻石
function GoldStoreModule:reqBuyDiamond(productInfo)
    self._isDisBuy = false
    self:reqBuyDiamond(productInfo, "deliver_award")
end

-- 实际下单接口
function GoldStoreModule:reqBuyDiamond(productInfo, scriptName, gifttype, autoOrder)
    if not XH.sdkManager:isSupportBuy() then
        return
    end
    NG.TipTool.showLoading()
    local gameId = GoldAreaConfig.BridgeGameID
    local channelID = NG.SysTool.getChannelID()
    local numId = GoldPlayerData.BridgeNumID
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(GoldPlayerData.BridgeUserID)
    local areaId = tostring(GoldAreaConfig.BridgeAreaID)
    local propid = GoldAreaConfig.BridgeDiamndID
    local groupid = GoldAreaConfig.BridgeGroupID
    local gd_user_id = GoldPlayerData.NumId
    local gd_area_id = GoldAreaConfig.AreaID
    -- 传了这个表示走新的发货流程
    local defaultScriptName = scriptName or "deliver_award"
    gifttype = gifttype or ""
    local ext = json.encode({
        --  
        gameid = gameId,
        areaid = areaId,
        propid = propid,
        channelid = channelID,
        numid = numId,
        source = areaId .. GoldAreaConfig.BridgeLobbyID,
        script_name = defaultScriptName,
        order_id = "",
        groupid = groupid,
        gifttype = gifttype,
        gd_user_id = gd_user_id,
        gd_area_id = gd_area_id
    })

    local proForpey = {
        --  
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

    local proForH5 = ({
        --  
        channel_id = 2,
        product_id = "prop" .. propid,
        product_name = productInfo.name,
        product_price = "1.00",
        product_qty = tonumber(productInfo.value),
        trade_attach = ext,
        client_info = { device_id = NG.SysTool:GetDevid(), client_ip = un.Device.getIp() }
    })

    local target = cc.Application:getInstance():getTargetPlatform()
    if target == cc.PLATFORM_OS_IPHONE or target == cc.PLATFORM_OS_IPAD then
        NG.sdkManager:xhCallOCFunc("XH_IAP", "xhBuy:", proForpey)
    elseif device.platform == "android" then
        if NG.ChannelTool.checkIsECarChannel() then -- 车载渠道，传H5道具参数
            NG.TipTool.hideLoading()
            NG.viewManager:openView("PayTypeView", nil, proForH5)
        elseif NG.SysTool.CompareToBundleVersion("1.2.1") then
            NG.TipTool.hideLoading()
            NG.viewManager:openView("PayTypeView", nil, proForpey)
        else
            NG.sdkManager:callFunctionWithMap("iosBuy", {["0"] = proForpey })
        end
    else
        NG.TipTool.hideLoading()
    end
end


-- 获取商品信息-通过商品id+数量
function GoldStoreModule:getProductByPropNum(propType, propid, propcnt)
    if self._allProps[propType] == nil then
        return
    end
    local props = self._allProps[propType][GoldAreaConfig.BridgeAreaID]
    if props then
        for i=1, #props do
            if tonumber(props[i].value) == propid and props[i].prop_count == propcnt then
                return props[i]
            end
        end
    end
end

-- 请求商品列表
function GoldStoreModule:reqProductList(productType)
    if productType == GoldStoreDefine.TYPE.DIAMOND then
        self:reqDiamondProductsInfo()
    elseif productType == GoldStoreDefine.TYPE.GOLD_DISCOUNT then
        self:reqGoldDIscountProductsInfo()
    else
        self:reqExchangeProductsInfo()
    end
end

-- 请求金币-折扣商品信息
function GoldStoreModule:reqGoldDIscountProductsInfo()
    NG.TipTool.showLoading()
    local numId = GoldPlayerData.NumId
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(GoldPlayerData.UserId)
    self:startReq("ReqProductsInfo", numId, userId, GoldAreaConfig.AreaID, GoldAreaConfig.WindId, GoldStoreDefine.TYPE.GOLD_DISCOUNT, GoldStoreDefine.GOLD_TYPE_DISCOUNT)
end
-- 请求金币商品信息
function GoldStoreModule:reqExchangeProductsInfo()
    NG.TipTool.showLoading()
    local numId = GoldPlayerData.NumId
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(GoldPlayerData.UserId)
    self:startReq("ReqProductsInfo", numId, userId, GoldAreaConfig.AreaID, GoldAreaConfig.WindId, GoldStoreDefine.TYPE.GOLD, GoldStoreDefine.GOLD_TYPE)
end

function GoldStoreModule:respProductsInfo(req, type, data)
    NG.TipTool.hideLoading()
    local productType = req:getProductType()
    self:clearPropsThisAreaID(productType)
    if type == NG.Req.TYPE.SUCCESS then
        self:setCurrentAreaProps(productType, data)
    else
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, req:getMessage())
    end
    self:dispatchEvent({ name = self.EVNET_SHOPMANAGER_SHOW_SHOP, data = { tag = productType } })
end

-- 请求钻石商品信息F
function GoldStoreModule:reqDiamondProductsInfo()
    NG.TipTool.showLoading()
    self:startReq("ReqDiamondProductsInfo", GoldStoreDefine.SHOPCONFIG.ZHEJIANG.ShopAppId, GoldStoreDefine.SHOPCONFIG.ZHEJIANG.ShopPackgeId)
end

-- 钻石信息结果
function GoldStoreModule:respDiamondProductsInfo(req, type, data)
    NG.TipTool.hideLoading()
    if type == NG.Req.TYPE.SUCCESS then
        self._rmbPropsAdd = data
        self:setCurrentAreaProps(GoldStoreDefine.TYPE.DIAMOND, self:fliterDataByArea(data))
    else
        self:clearPropsThisAreaID(GoldStoreDefine.TYPE.DIAMOND)
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, req:getMessage())
    end
    self:dispatchEvent({ name = self.EVNET_SHOPMANAGER_SHOW_SHOP, data = { tag = GoldStoreDefine.TYPE.DIAMOND } })
end

-- 设置商品
function GoldStoreModule:setCurrentAreaProps(propType, data)
    if self._allProps[propType] == nil then
        return
    end
    self._allProps[propType][GoldAreaConfig.BridgeAreaID] = data
end

-- 新商城筛选对应AREAID商品
function GoldStoreModule:fliterDataByArea(data)
    data = data or {}
    local props = {}
    for _, v in pairs(data) do
        if string.find(tostring(v.productId), tostring(GoldAreaConfig.BridgeAreaID)) then
            props[#props + 1] = v
        end
    end
    return props
end

function GoldStoreModule:clearPropsThisAreaID(propType)
    if not propType then
        return
    end
    if not self._allProps[propType] then
        return
    end
    self._allProps[propType][GoldAreaConfig.BridgeAreaID] = {}
end

function GoldStoreModule:getPropsThisAreaID(propType)
    if not propType then
        return {}
    end
    if not self._allProps[propType] then
        return {}
    end
    return self._allProps[propType][GoldAreaConfig.BridgeAreaID] or {}
end

-- 寻找商品id对应的商品礼包并下单
function GoldStoreModule:reqBuyPropByProductId(productId, isDisBuy)
    if #self._rmbPropsAdd == 0 then
        NG.TipTool.showToast("未找到匹配档位的商品，请联系客服~")
        return
    end
    self._isDisBuy = isDisBuy
    for i = 1, #self._rmbPropsAdd do
        if self._rmbPropsAdd[i].productId == productId then
            self:clearLastShopInfo()
            self:reqBuyDiamond(self._rmbPropsAdd[i])
            self._lastExchangeInfo = productId
            return
        end
    end
    NG.TipTool.showToast("未找到匹配档位的商品，请联系客服!")
end

return GoldStoreModule