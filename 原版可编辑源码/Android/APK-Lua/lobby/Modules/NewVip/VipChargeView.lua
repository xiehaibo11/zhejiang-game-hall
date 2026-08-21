local VipChargeView = class("VipChargeView", XH.ViewBase)
local ShopConfig = require("lobby.Modules.Shop.Config")

function VipChargeView:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipChargeLayer.csb"
end

function VipChargeView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KWA_BTND_OK"] = { varName = "_btnConfirm", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventConfirm" },
        ["_KW_DIAMOND_TEXT"] = { varName = "_diamondNum"},
        ["_KW_PROP_TEXT"] = { varName = "_propText"},
        ["_KW_LEFT_DIAMOND_TEXT"] = { varName = "_diamondLeftNum"},
        ["_KW_LEFT_DESC_TEXT"] = { varName = "_leftTipText"},
        ["_KW_CUR_PROP_TEXT"] = { varName = "_curDiamondNum"},
        ["_KW_TIP_Text_1"] = { varName = "_chargeTip1"},
        ["_KW_TIP_Text_2"] = { varName = "_chargeTip2"},
        ["_KW_TIP_Text_3"] = { varName = "_chargeTip3"},
        ["_KW_TIP_Text_4"] = { varName = "_chargeTip4"},
        ["_KW_TIP_Text_5"] = { varName = "_chargeTip5"},
        ["_KW_TIP_Text_6"] = { varName = "_chargeTip6"},
        ["_KW_TIP_Text_7"] = { varName = "_chargeTip7"},
        ["_KW_YUAN_TEXT"] = { varName = "_yuanText"},
    }
end

function VipChargeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onEventProductList" },
    }
end

function VipChargeView:ctor(param)
    self._canTouchBackGround = false
    param = param or { }
    VipChargeView.super.ctor(self, param)
    self:initData(param)
end

function VipChargeView:initData(param)
    self._diamondProducts = nil
    self._targetDiamond = param.targetDiamond
    self._targetProp= param.propStr
    self._propId = param.propId
    self._buyProduct = nil
    local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
    if not XH.lobby:getModule("Shop"):getShopItemsWithId(subId) then
        XH.lobby:getModule("Shop"):reqShopProductByConfig(subId)
    else
        self:onEventProductList()
    end
end

-- 初始化界面UI
function VipChargeView:updateLayerUI()
    local useCurDiamond = XH.playerData:getDiamnd()
    for _, v in pairs(self._diamondProducts) do
        if tonumber(v.value) + useCurDiamond >= self._targetDiamond then
            self._buyProduct = v
            break
        end
    end
    if self._buyProduct then
        self._diamondNum:setText(self._buyProduct.value)
        self._yuanText:setText(tonumber(self._buyProduct.price))
        self._curDiamondNum:setText(useCurDiamond)
        self._propText:setText(self._targetProp)
        local leftDiamond = useCurDiamond + tonumber(self._buyProduct.value) -self._targetDiamond
        self._diamondLeftNum:setText(leftDiamond)
        if leftDiamond > 0 then
            self._diamondLeftNum:setVisible(true)
            self._leftTipText:setVisible(true)
            self._chargeTip6:setVisible(true)
        else
            self._chargeTip5:setVisible(false)
        end
    end
    self:dolayout()
end

function VipChargeView:dolayout()
    local KW_HORIZONTAL_DIS = 5
    local size1 = self._chargeTip1:getContentSize()
    local pos1 = self._chargeTip1:getPositionX() + size1.width + KW_HORIZONTAL_DIS
    self._curDiamondNum:setPositionX(pos1)
    local pos2 = self._curDiamondNum:getPositionX()  + self._curDiamondNum:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip7:setPositionX(pos2)
    local pos3 = self._chargeTip7:getPositionX()  + self._chargeTip7:getContentSize().width + KW_HORIZONTAL_DIS
    self._yuanText:setPositionX(pos3)
    local pos9 = self._yuanText:getPositionX()  + self._yuanText:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip2:setPositionX(pos9)
    local pos10 = self._chargeTip2:getPositionX()  + self._chargeTip2:getContentSize().width + KW_HORIZONTAL_DIS
    self._diamondNum:setPositionX(pos10)
    local pos5 = self._chargeTip4:getPositionX()  + self._chargeTip4:getContentSize().width + KW_HORIZONTAL_DIS
    self._propText:setPositionX(pos5)
    local pos6 = self._propText:getPositionX()  + self._propText:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip5:setPositionX(pos6)
    local pos7 = self._leftTipText:getPositionX()  + self._leftTipText:getContentSize().width + KW_HORIZONTAL_DIS
    self._diamondLeftNum:setPositionX(pos7)
    local pos8 = self._diamondLeftNum:getPositionX()  + self._diamondLeftNum:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip6:setPositionX(pos8)
    self._diamondNum:setVisible(true)
    self._propText:setVisible(true)
    self._curDiamondNum:setVisible(true)
    self._yuanText:setVisible(true)
end
    
function VipChargeView:onEventProductList(data)
    if not self._diamondProducts then
        local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
        self._diamondProducts = XH.lobby:getModule("Shop"):getShopItemsWithId(subId) or {}
        if next(self._diamondProducts) then
            self:updateLayerUI()
        end
    end
end

function VipChargeView:onTouchEventClose(send, eventType)
    self:close()
end

function VipChargeView:onTouchEventConfirm(send, eventType)
    if self._buyProduct then
        XH.lobby:getModule("Shop"):reqBuyDiamond(self._buyProduct, "deliver_award", self._propId, nil, nil, nil, self._propId)
    end
    self:close()
end

return VipChargeView