local VipEmojiPropChargeView = class("VipEmojiPropChargeView", XH.ViewBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')
local ShopConfig = require("lobby.Modules.Shop.Config")

function VipEmojiPropChargeView:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipEmojiPropChargeLayer.csb"
end

function VipEmojiPropChargeView:getBindingInfo()
    return {
        ["_KW_BTN_RECHARGE_PROP"] = { varName = "_btnRechargeProp", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRechargeProp" },
        ["_KW_BTN_RECHARGE_VIP"] = { varName = "_btnRechargeVIP", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRechargeVIP" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TEXT_PAY_INFO"] = { varName = "_textInfo"},
        
    }
end

function VipEmojiPropChargeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onEventProductList" },
    }
end

function VipEmojiPropChargeView:ctor(param)
    param = param or { }
    VipEmojiPropChargeView.super.ctor(self, param)
    self._consumerPropType = param.propType
    self._consumerPropCount = param.propCount
    self._butProductIndex = 0
    self._buyProduct = nil 
    local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(self._consumerPropType)
    if not XH.lobby:getModule("Shop"):getShopItemsWithId(subId) then
        XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.DIAMOND)
    else
        self:onEventProductList()
    end

    
end

--根据用户身上的携带选择最合适的档位
function VipEmojiPropChargeView:getBestPriceByUserProp(propType)
    local userPropCount = XH.playerData:getDiamnd()
    -- if propType == ShopConfig.SpecialTag.CARD then --房卡的未实现
    --     userPropCount = XH.playerData:getRoomCard()
    -- end 
    local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(propType)
    local propItems = XH.lobby:getModule("Shop"):getShopItemsWithId(subId)
    for i, v in ipairs(propItems) do
        if tonumber(v.value) + userPropCount >= self._consumerPropCount then
            return i,v
        end
    end
    return nil,nil
end

function VipEmojiPropChargeView:onEventProductList(data)
    self._butProductIndex,self._buyProduct = self:getBestPriceByUserProp(self._consumerPropType)
    local textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#CD8551'>支付" .. 
                        "<font color='#17A199'>" .. self._buyProduct.price .."元</font>" .. 
                        "获得" .. 
                        "<font color='#17A199'>" .. self._buyProduct.name .. "</font>" .. 
                    "</font>"
    local richText = ccui.RichText:createWithXML(textStr, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setContentSize(self._textInfo:getContentSize())
    richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
    richText:setPosition(cc.p(self._textInfo:getContentSize().width / 2, self._textInfo:getContentSize().height / 2))
    self._textInfo:addChild(richText)
end

function VipEmojiPropChargeView:onTouchEventClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function VipEmojiPropChargeView:onTouchEventRechargeVIP(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024032813, {item_id = CF.roomData:getGameID()})
    XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxVipConfig.MENU_DEFINE.BUY_VIP})
    self:close()
end

function VipEmojiPropChargeView:onTouchEventRechargeProp(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._buyProduct then
        XH.lobby:getModule("Shop"):reqBuyDiamond(self._buyProduct)
        self:close()
    end
end

return VipEmojiPropChargeView=