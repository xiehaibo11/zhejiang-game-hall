local VipView = class("VipView",XH.ViewBase)

function VipView:getCSBPath()
    return "cocosStudio/hall/CSB/window/VipLayer.csb"
end

function VipView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_GO_RECHARGE"] = {varName="_btnGoRecharge",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventGo"},
        ["_KW_IMG_REWARD_RIGHT"] = {varName="_imgRewardRight"},
        ["_KW_IMG_REWARD_LEFT"] = {varName="_imgRewardLeft"},
        ["_KW_BTN_CLOSE_2"] = {varName="_btnClose2",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_GO_TO_CREATE"] = {varName="_btnGoToCreate",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventGo"},
        ["_KW_PANEL_BG"] = {varName="_panelBg",onTouchEnded = "onTouchEventClose"},
        ["_KW_IMAGE_BG_2"] = {varName="_imageBg2"},
        ["_KW_IMAGE_BG_1"] = {varName="_imageBg1"},
    }
end

local ProductIcon = {
       ["vip.16"]   = "vip_1day_img.png",
       ["vip.20"]   = "vip_3days_img.png",
       ["vip.17"]   = "vip_7days_img.png",
       ["vip.18"]   = "vip_30days_img.png",
}

function VipView:ctor(param)
    param = param or {}
    VipView.super.ctor(self,param)
    self:initView()
end

function VipView:initView()
    if XH.playerData:isFreeVip() then
        self._imageBg2:setVisible(true)
        self._imageBg1:setVisible(false)
        return
    end
    self._imageBg1:setVisible(true)
    self._imageBg2:setVisible(false)
--    针对衢州的时效开房道具处理
    if not self._imgRewardRight or not self._imgRewardLeft then
        return
    end
    local TempSenderTbl = {self._imgRewardLeft, self._imgRewardRight}
    local shopList = XH.playerData:getShowShopList()
    local imgIndex = 1
    for i = 1, #shopList do
        if ProductIcon[shopList[i]] and imgIndex <= #TempSenderTbl then
            TempSenderTbl[imgIndex]:loadTexture(ProductIcon[shopList[i]], ccui.TextureResType.plistType)
            imgIndex = imgIndex + 1
        end
        if imgIndex > #TempSenderTbl then
            break
        end
    end
end

function VipView:onTouchEventGo(send, eventType)
    if send:getName() == "_KW_BTN_GO_RECHARGE" then
        --TODO
        --local ShopConfig = require("lobby.Modules.Shop.Config")
        --XH.viewManager:openView("ShopView", nil, {productType = ShopConfig.ProductType.FREEQUAN})
        return
    else
        XH.viewManager:openView("CreateBoxRoomView")
    end
    self:close()
end

function VipView:onTouchEventClose(send, eventType)
    self:close()
end

return VipView