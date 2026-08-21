local GoldStoreView = class("GoldStoreView", NG.ViewBase)
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldStoreView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/Store/GoldStoreLayer.csb"
end

function GoldStoreView:getBindingInfo()
    return {
        -- 
        ["_KW_CLOSE"] = {varName = "_KW_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_GOLD_SR"] = {varName = "_KW_GOLD_SR"},
        ["_KW_DIAMOND_SR"] = {varName = "_KW_DIAMOND_SR"},
        ["_KW_CUSVERSICE"] = {varName = "_KW_CUSVERSICE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickKefu"},
        ["_KW_BTN_DIAMOND"] = {varName = "_KW_BTN_DIAMOND", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickDiamond"},
        ["_KW_BTN_GOLD"] = {varName = "_KW_BTN_GOLD", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickGold"},
        ["_KW_STORE_TIP"] = {varName = "_KW_STORE_TIP", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickStoreTips"},
        ["_KW_CHOSE_DIAMOND"] = {varName = "_KW_CHOSE_DIAMOND"},
        ["_KW_CHOSE_GOLD"] = {varName = "_KW_CHOSE_GOLD"},
        ["_KW_DIAMOND_ANI"] = {varName = "_KW_DIAMOND_ANI"},
        ["_KW_GOLD_ANI"] = {varName = "_KW_GOLD_ANI"},
        ["_KW_SCROLLVIEW"] = {varName = "_KW_SCROLLVIEW"},
        ["_PANEL_ITEM"] = {varName = "_PANEL_ITEM"},
        ["_PANEL_LEFT"] = {varName = "_PANEL_LEFT"}
    }
end

function GoldStoreView:getProxyEvents()
    return {
        --
        {module = NG.goldLobby:getModule("GoldStore"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onFlushShopProps"},
        {module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_FLUSH_NOTIFY_PROPS", callBack = "updateProps"}
    }
end

function GoldStoreView:ctor(param)
    GoldStoreView.super.ctor(self, param)
    self._defaultChose = GoldStoreDefine.TYPE.DIAMOND
    if param ~= nil and param.productType ~= nil then
        self._defaultChose = param.productType
    end
    self:initUI()
    self:updateProps()
    self:flushClickState()
    NG.UITool.adaptForLiuHai({self._PANEL_LEFT})
end

function GoldStoreView:updateProps()
    self._KW_GOLD_SR:setString(NG.StringTool.getScoreStr(GoldPlayerData.JoyBean))
    self._KW_DIAMOND_SR:setString(NG.StringTool.getScoreStr(GoldPlayerData.Diamond))
end

-- 获取到商品信息
function GoldStoreView:onFlushShopProps(event)
    if event.data == nil or event.data.tag == nil or event.data.tag ~= self._defaultChose then
        return
    end
    self:flushClickState(nil, true)
end

-- 加载图片
function GoldStoreView:loadTexureByType(node, idx, url)
    local name = "img_common_gold_store_item"
    if self._defaultChose == GoldStoreDefine.TYPE.DIAMOND then
        idx = math.min(idx, 4)
        name = "goldnew_diamond_"
        node:getChildByName("_KW_ICON_DIAMOND"):loadTexture(name .. idx .. ".png", ccui.TextureResType.plistType)
    elseif self._defaultChose == GoldStoreDefine.TYPE.GOLD then
        idx = math.min(idx, 6)
        name = "goldnew_gold_"
        node:getChildByName("_KW_ICON_DIAMOND"):loadTexture(name .. idx .. ".png", ccui.TextureResType.plistType)
    end
    -- else
    --     node:getChildByName("_KW_ICON"):removeAllChildren()
    --     local size = node:getChildByName("_KW_ICON"):getContentSize()
    --     local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(node:getChildByName("_KW_ICON"))
    --     headImage:setUrl(url or "")
    -- end
    node:getChildByName("_KW_ICON_DIAMOND"):setVisible(self._defaultChose == GoldStoreDefine.TYPE.DIAMOND or self._defaultChose == GoldStoreDefine.TYPE.GOLD)
end

-- 更新商品信息
function GoldStoreView:updateProductInfo()
    self._KW_SCROLLVIEW:removeAllChildren()
    local props = NG.goldLobby:getModule("GoldStore"):getPropsThisAreaID(self._defaultChose)
    local cnt = #props
    if cnt == 0 then
        return
    end
    local lineY = math.floor(cnt / 4)
    if math.floor(cnt / 4) ~= (cnt / 4) then
        lineY = lineY + 1
    end
    if lineY == 1 then
        lineY = 2
    end
    self._KW_SCROLLVIEW:setInnerContainerSize(cc.size(self._KW_SCROLLVIEW:getContentSize().width, self._PANEL_ITEM:getContentSize().height * lineY))
    for i, v in pairs(props) do
        local temp = self._PANEL_ITEM:clone()
        local size = temp:getContentSize()
        self:loadTexureByType(temp, i, props[i].image)
        temp:getChildByName("_KW_NAME"):setString(v.name) -- 名字
        local goldItem = temp:getChildByName("_KW_PAY_GOLD")
        local diamondItem = temp:getChildByName("_KW_PAY_DIAMOND")
        goldItem:setVisible(self._defaultChose == GoldStoreDefine.TYPE.GOLD)
        diamondItem:setVisible(self._defaultChose == GoldStoreDefine.TYPE.DIAMOND)
        goldItem:addTouchEventListener(handler(self, self.onTouchEventShopItem))
        diamondItem:addTouchEventListener(handler(self, self.onTouchEventShopItem))
        local price = v.price
        if self._defaultChose == GoldStoreDefine.TYPE.DIAMOND then
            price = tonumber(v.price) .. "元"
        end
        diamondItem:getChildByName("_KW_DIAMOND_CNT"):setString(price)
        goldItem:getChildByName("_KW_GOLD_CNT"):setString(price)
        temp:setVisible(true)
        temp:setName(i)
        local lineX = (i - 1) % 4
        local posY = math.floor((i - 1) / 4)
        temp:setPosition(size.width * (lineX + 0.5), size.height * (lineY - 0.5 - posY))
        self._KW_SCROLLVIEW:addChild(temp)
    end
end

function GoldStoreView:onClickStoreTips()
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.HTTP_ID_CHONG_ZHI)
    else
        cc.Application:getInstance():openURL(UrlConf.HTTP_ID_CHONG_ZHI_IOS)
    end
end

function GoldStoreView:onTouchEventShopItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1.0)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    NG.goldLobby:getModule("GoldStore"):reqBuyItem(self._defaultChose, tonumber(send:getParent():getName()))
end

function GoldStoreView:initUI()
    self:setAniScale(self._KW_DIAMOND_ANI)
    self:setAniScale(self._KW_GOLD_ANI)
end

function GoldStoreView:setAniScale(node)
    local params = {path = "cocosStudio/GoldNew/Lobby/Json/sc_xuanzhong/", tex = "Sc_xhuanzhong.json", ske = "Sc_xhuanzhong.atlas", armatureName = "animation"}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        node:addChild(spineNode)
        spineNode:setScale(2.5)
        spineNode:setPosition(node:getContentSize().width / 2, node:getContentSize().height / 2)
    end
end

function GoldStoreView:flushClickState(idx, isReq)
    if idx ~= nil then
        self._defaultChose = idx
    end
    self._KW_CHOSE_DIAMOND:setVisible(self._defaultChose == GoldStoreDefine.TYPE.DIAMOND)
    self._KW_DIAMOND_ANI:setVisible(self._defaultChose == GoldStoreDefine.TYPE.DIAMOND)
    self._KW_CHOSE_GOLD:setVisible(self._defaultChose == GoldStoreDefine.TYPE.GOLD)
    self._KW_GOLD_ANI:setVisible(self._defaultChose == GoldStoreDefine.TYPE.GOLD)
    local props = NG.goldLobby:getModule("GoldStore"):getPropsThisAreaID(self._defaultChose)
    if #props == 0 and not isReq then
        NG.goldLobby:getModule("GoldStore"):reqProductList(self._defaultChose)
        return
    end
    self:updateProductInfo()
end

function GoldStoreView:onClickDiamond()
    self:flushClickState(GoldStoreDefine.TYPE.DIAMOND)
end

function GoldStoreView:onClickGold()
    self:flushClickState(GoldStoreDefine.TYPE.GOLD)
end

function GoldStoreView:onClickKefu()

end

function GoldStoreView:onClickClose()
    self:close()
end

return GoldStoreView

