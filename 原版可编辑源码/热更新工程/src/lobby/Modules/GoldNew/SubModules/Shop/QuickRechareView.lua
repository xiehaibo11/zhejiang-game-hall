local QuickRechareView = class("QuickRechareView", XH.Bridge.ViewBase)
local ShopConfig = import(".Config")
local Utils = import("...Tool.Utils")

function QuickRechareView:getCSBPath()
    return XH.Bridge:getCCSResPath("Shop/QuickRechareView.csb")
end

function QuickRechareView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KWA_BTND_OK"] = {varName = "_btnConfirm", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventConfirm"},
        ["_diamondNum"] = {varName = "_diamondNum"},
        ["_propText"] = {varName = "_propText"},
        ["_KW_LEFT_DIAMOND_TEXT"] = {varName = "_tips"},
        ["_curDiamondNum"] = {varName = "_curDiamondNum"},
        ["_KW_LEFT_DESC_TEXT"] = {varName = "_leftTipText"},
        ["_KW_TIP_Text_1"] = {varName = "_chargeTip1"},
        ["_KW_TIP_Text_2"] = {varName = "_chargeTip2"},
        ["_KW_TIP_Text_3"] = {varName = "_chargeTip3"},
        ["_KW_TIP_Text_4"] = {varName = "_chargeTip4"},
        ["_KW_TIP_Text_6"] = {varName = "_chargeTip6"},
        ["_KW_TIP_Text_7"] = {varName = "_chargeTip7"},
        ["_yuanText"] = {varName = "_yuanText"},
        ["_KW_TIP_ORIGINAL"] = {varName = "_tipOriginal"}
    }
end

function QuickRechareView:getProxyEvents()
    return {}
end

function QuickRechareView:ctor(param)
    param = param or {}
    QuickRechareView.super.ctor(self, param)
    self._sureFunc = param.sureFunc
    self._showFunc = param.showFunc
    self:initData(param)
end

function QuickRechareView:initData(param)
    self._diamondProducts = nil
    self._targetDiamond = param.targetDiamond
    self._targetValue = param.targetValue or 1
    self._name = param.name .. "*" .. self._targetValue
    self._buyProduct = param.buyGood
    self._product = param.product
    self._needCost = param.needCost
    self._targetPropId = param.targetPropId
    self:updateLayerUI()
end

-- 初始化界面UI
function QuickRechareView:updateLayerUI()
    local subStr = (tonumber(self._buyProduct.value) + XH.playerData:getDiamnd() - self._targetDiamond) .. "钻石"
    self._curDiamondNum:setText(XH.playerData:getDiamnd())
    self._diamondNum:setText(self._buyProduct.value)
    self._yuanText:setText(tonumber(self._buyProduct.price))
    self._propText:setText(self._name)
    if tonumber(self._buyProduct.value) > self._targetDiamond then
        self._tips:setText(subStr)
        self._tips:setVisible(true)
        self._leftTipText:setVisible(true)
        self._chargeTip6:setVisible(true)
    end
    self:dolayout()

    if self._showFunc then
        self._showFunc(self._buyProduct)
    end
end

function QuickRechareView:dolayout()
    -- local KW_HORIZONTAL_DIS = 5
    -- local size1 = self._propName:getContentSize()
    -- local pos1 = self._chargeTip1:getContentSize().width + self._chargeTip1:getPositionX() + size1.width + KW_HORIZONTAL_DIS
    -- self._curDiamondNum:setPositionX(pos1)
    -- local pos2 = self._curDiamondNum:getPositionX() + self._curDiamondNum:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._chargeTip7:setPositionX(pos2)
    -- local pos3 = self._chargeTip7:getPositionX() + self._chargeTip7:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._yuanText:setPositionX(pos3)
    -- local pos9 = self._yuanText:getPositionX() + self._yuanText:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._chargeTip2:setPositionX(pos9)
    -- local pos10 = self._chargeTip2:getPositionX() + self._chargeTip2:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._diamondNum:setPositionX(pos10)
    -- local pos5 = self._chargeTip4:getPositionX() + self._chargeTip4:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._propText:setPositionX(pos5)
    -- local pos7 = self._leftTipText:getPositionX() + self._leftTipText:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._tips:setPositionX(pos7)
    -- local pos8 = self._tips:getPositionX() + self._tips:getContentSize().width + KW_HORIZONTAL_DIS
    -- self._chargeTip6:setPositionX(pos8)
    self._diamondNum:setVisible(true)
    self._propText:setVisible(true)
    self._curDiamondNum:setVisible(true)
    self._yuanText:setVisible(true)

    Utils:doLayoutHoriz({self._chargeTip1, self._curDiamondNum, self._chargeTip7, self._yuanText, self._chargeTip2, self._diamondNum}, 800, 0)
    Utils:doLayoutHoriz({self._chargeTip3, self._chargeTip4, self._propText}, 800, 0)
    Utils:doLayoutHoriz({self._leftTipText, self._tips, self._chargeTip6}, 800, 0)
end

function QuickRechareView:onTouchEventClose(send, eventType)
    self:close()
end

function QuickRechareView:onTouchEventConfirm(send, eventType)
    if self._buyProduct then
        XH.lobby:getModule("Shop"):reqBuyDiamond(self._buyProduct, "deliver_award", nil, nil, false, nil, self._targetPropId)
        if self._sureFunc then
            self._sureFunc(self._buyProduct)
        end
        self:close()
    end
end

return QuickRechareView
