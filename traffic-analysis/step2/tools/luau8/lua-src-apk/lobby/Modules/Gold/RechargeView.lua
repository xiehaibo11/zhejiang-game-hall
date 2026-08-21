local RechargeView = class("RechargeView", XH.ViewBase)
local ShopConfig = require("lobby.Modules.Shop.Config")

local KW_RECHARGE_CONFIG = {
    [2] = "600",
    [3] = "3000",
}

local KW_GOLD_CONFIG = {
    [2] = "60000",
    [3] = "300000",
}

local KW_DEFAULT_LEVEL = 2

function RechargeView:getCSBPath()
    return "cocosStudio/hall/CSB/goldroom/GoldLevelCharge.csb"
end

function RechargeView:getBindingInfo()
    return {
        ["_KW_CHARGE_NUMBER"] = { varName = "_chargeNum" },
        ["_KW_CHARGE_GOLD_NUM"] = { varName = "_chargeGoldNum" },
        ["_KW_UI_BTND_CLOSE"] = { varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_UI_BTND_MORE"] = { varName = "_moreGoldBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventMoreGold" },
        ["_KW_UI_BTND_CHARGE"] = { varName = "_chargeBrn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCharge" },
    }
end

function RechargeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onEventProductRefresh" },
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_REQ_EXCHANGE_GOLD_SUCCESS", callBack = "onEventExchangeGold" },
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_EXCHANGE_DIAMOND_GOLD", callBack = "onEventExchangeDiamondToGold" },
    }
end

function RechargeView:ctor(param)
    self._levalCharge = param.levelCharge or KW_DEFAULT_LEVEL
    if KW_GOLD_CONFIG[self._levalCharge] == nil then
        self._levalCharge = KW_DEFAULT_LEVEL
    end
    RechargeView.super.ctor(self, param)
    self._diamondProducts = {}
    self._goldExchangeProducts = {}
    self._chargeNum:setVisible(false)
    self._chargeGoldNum:setVisible(false)
    XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.DIAMOND)
    XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.GOLD)
    XH.lobby:getModule("H5GameWidget"):addH5GameWidget("level_change")
end

function RechargeView:onTouchEventMoreGold(send, eventType)
    XH.viewManager:openView("ShopView", nil, { productType = ShopConfig.SpecialTag.GOLD })
    self:close()
end

function RechargeView:onTouchEventCharge(send, eventType)
    local playerDiamond = XH.playerData:getDiamnd() or 0
    if playerDiamond >= tonumber(KW_RECHARGE_CONFIG[self._levalCharge]) then
        local exchageProduct = self:getGoldExchangeProduct()
        if exchageProduct then
            XH.lobby:getModule("Shop"):reqExchangeProduct(ShopConfig.ProductType.GOLD, exchageProduct.id)
        end
    else
        local exchageProduct = self:getDiamondExchangeProduct()
        if exchageProduct then
            XH.lobby:getModule("Shop"):reqBuyDiamond(exchageProduct, "deliver_award", XH.lobby:getModule("Shop").BUY_DIAMOND_SEPCIAL_TAG, nil, nil, nil, -1)
        end
    end
end

function RechargeView:initUI()
    self._chargeNum:setText(KW_RECHARGE_CONFIG[self._levalCharge] .. "充值")
    local exchageProduct = self:getGoldExchangeProduct()
    if exchageProduct then
        self._chargeGoldNum:setText(exchageProduct.value .. "金币")
    else
        self._chargeGoldNum:setText((KW_GOLD_CONFIG[self._levalCharge]) .. "金币")
    end
    self._chargeNum:setVisible(true)
    self._chargeGoldNum:setVisible(true)
end

function RechargeView:onTouchEventClose(send, eventType)
    self:close()
end

function RechargeView:getDiamondExchangeProduct()
    if self._diamondProducts then
        for _,v in pairs(self._diamondProducts) do
            if tonumber(KW_RECHARGE_CONFIG[self._levalCharge]) == tonumber(v.value) then
                return v
            end
        end
    end
    return nil
end

function RechargeView:getGoldExchangeProduct()
    if self._goldExchangeProducts then
        for _,v in pairs(self._goldExchangeProducts) do
            if tonumber(KW_GOLD_CONFIG[self._levalCharge]) == tonumber(v.price * 100) then
                return v
            end
        end
    end
    return nil
end

function RechargeView:onEventProductRefresh(data)
    if data then
        self._diamondProducts = XH.lobby:getModule("Shop"):getProductList(ShopConfig.ProductType.DIAMOND) or { }
        self._goldExchangeProducts = XH.lobby:getModule("Shop"):getProductList(ShopConfig.ProductType.GOLD) or { }
        self:initUI()
    end
end

function RechargeView:onEventExchangeGold()
    XH.TipTool.hideLoading()
    XH.TipTool.showToast("兑换成功",3)
    self:close()
end

function RechargeView:onEventExchangeDiamondToGold(event)
    if event.msg ~= "" then
        local data = json.decode(event.msg)
        if data and next(data) then
            local exchageProduct =  self:getGoldExchangeProduct()
            if exchageProduct then
                XH.lobby:getModule("Shop"):reqExchangeProduct(ShopConfig.ProductType.GOLD, exchageProduct.id, nil, nil, nil, false)
            end
            self:close()
        end
    end
    XH.taskManager:reqPlayerDropData()
end

function RechargeView:close()
    XH.lobby:getModule("H5GameWidget"):close5GameWidget("level_change")
    RechargeView.super.close(self) 
end

return RechargeView
�