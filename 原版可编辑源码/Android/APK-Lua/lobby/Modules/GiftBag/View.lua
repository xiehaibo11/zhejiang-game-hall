local GiftBagView = class("GiftBagView", XH.ViewBase)

function GiftBagView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BreakGiftbag/BreakGiftbagLayer.csb"
end

function GiftBagView:getBindingInfo()
    return {
        ["_KW_INFO_DISCOUNT_TEXT"] = {varName="_disText"},
        ["_KW_INFO_VALUE_TEXT"] = {varName="_valueText"},
        ["_KW_IMAGE_AWARD"] = {varName="_imgAward"},
        ["_KW_TEXT_SURPLUS_TIME"] = {varName="_textSurplusTime"},
        ["_KW_BTN_BUY"] = {varName="_btnBuy",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventBuy"},
        ["_KW_INFO_TEXT_1"] = {varName="_nameText"},
        ["_KW_INFO_TEXT_2"] = {varName="_numText"},
        ["_KW_INFO_AWARD_TEXT_1"] = {varName="_diaText"},
        ["_KW_INFO_AWARD_TEXT_2"] = {varName="_vText"},
        ["_KW_BTN_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"}
    }
end

function GiftBagView:getProxyEvents()
    return {
        { module = XH.taskManager,eventKeyName = "BREAK_GIFT_BAG", callBack = "flushGiftUI"},
        { module = XH.taskManager,eventKeyName = "BREAK_GIFT_BAG_SHOW_TIME", callBack = "onEventCanBuyGift"},
        { module = XH.lobby:getModule("GiftBag"), eventKeyName = "EVENT_SHOW_BREAK_GIFT", callBack = "onEventShowGift"},
        { module = XH.sdkManager,eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBreakGiftCharge"},
    }
end

function GiftBagView:ctor(param)
    param = param or {}
	GiftBagView.super.ctor(self, param)

    self:initData()
end

function GiftBagView:initData()
    self._data = {}

    --请求礼包相关信息
    XH.taskManager:reqBreakGiftBag()
    local ShopConfig = require("lobby.Modules.Shop.Config")
    local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
    if not XH.lobby:getModule("Shop"):getShopItemsWithId(subId) then
        -- XH.lobby:getModule("Shop"):reqShopProductByConfig(subId)
        XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.DIAMOND)
    end
end

-----------------------------------ui-----------------------------

function GiftBagView:flushGiftUI(event)
    if event == nil or event.msg == nil or event.msg == "" then return end
    local data = json.decode(event.msg)
    if data == nil or next(data) == nil then return end
    self._disText:setText(data.gift_text_1)
    self._valueText:setText(data.gift_text_2)
    self._nameText:setText(data.gift_name)
    self._numText:setText(data.gift_text)
    self._diaText:setText(data.gift_con)
    self._vText:setText(data.gift_con_1)
    self:runCountDownTime(data.gift_time_2)
    local downloadImage = require("app.Req.DownloadImage")
    local reqDownloadImage = downloadImage:new()
    reqDownloadImage:addReqCallBack(self, function (node, cell, ctype)
        if ctype == XH.Req.TYPE.SUCCESS then
            self._imgAward:loadTexture(cell._localUrl, ccui.TextureResType.localType)
            self._imgAward:setVisible(true)
        end
    end)
    reqDownloadImage:setUrl(data.image, false)
    self._data = data
end

function GiftBagView:onEventCanBuyGift(event)
    if event.msg == "" then 
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, "数据请求出错!")
        return 
    end
    local data = json.decode(event.msg)
    if data == nil or next(data) == nil then 
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, "数据请求出错!")
        return 
    end
    if data.isShowBtn == false then 
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, XH.ConstString.getStr("GIFT_BAG_LAYER_PASS"))
        return
    end
    local ShopConfig = require("lobby.Modules.Shop.Config")
    local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
    local allproDouct = XH.lobby:getModule("Shop"):getShopItemsWithId(subId) or {}
    local productInfo = {}
    for _,v in pairs(allproDouct) do
        if v.productId == self._data.productid then
            productInfo = v
        end
    end
    if productInfo and next(productInfo) then
        --给task做区分的
        local giftType = 1
        XH.lobby:getModule("Shop"):reqBuyDiamond(productInfo, "deliver_award", giftType, nil, nil, nil, -1)
    else
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		}, XH.ConstString.getStr("GIFT_BAG_LAYER_CANNOTFIND"))
    end
end

function GiftBagView:runCountDownTime(time)
    if self._textSurplusTime == nil then
        return
    end
    time = tonumber(time) or 0
    self._textSurplusTime:stopAllActions()
    local cb = cc.CallFunc:create(function()
        time = time - 1
        if time >= 0 then
            local h = math.floor(time / 3600)
            local s = math.floor((time - h*3600)/60)
            local m = time - (h*3600 + s*60)
            local strTime = string.format("%02d:%02d:%02d", h, s, m) .. "后结束"
            self._textSurplusTime:setString(strTime)
        else
            self._textSurplusTime:stopAllActions()
        end
    end)
    self._textSurplusTime:runAction(cc.RepeatForever:create(cc.Sequence:create(cb,cc.DelayTime:create(1))))
end

-----------------------------------touchEvent-----------------------------

function GiftBagView:onTouchEventClose(send, eventType)
    self:close()
    if XH.gameManager then
        XH.gameManager:leaveGame()
    end
end

function GiftBagView:onTouchEventBuy(send, eventType)
    --看玩家是否符合购买资格
    XH.taskManager:reqBreakGiftBagTime()
end

function GiftBagView:onEventShowGift(event)
    if event.msg ~= "" then
        local data = json.decode(event.msg)
        if data and next(data) then
            if data.isShowTip then
                XH.viewManager:openView("GoldRewardView", nil, data.awardData)
            end

            if data.backmsg ~= "" then
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,
                }, data.backmsg)
            end
        end
    end

    self:close()
    XH.taskManager:reqPlayerDropData()
    XH.taskManager:reqBreakGiftBagTime()
end

function GiftBagView:respBreakGiftCharge(event)
    XH.TipTool:hideLoading()
end

return GiftBagView