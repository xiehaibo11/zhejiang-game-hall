local MonthlyCardShopRecItem = class("MonthlyCardShopRecItem", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")
local ShopConfig = require("lobby.Modules.GoldNew.SubModules.Shop.Config")
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")
local RedPointManager = require("lobby.Modules.GoldNew.Manager.RedPointManager")

function MonthlyCardShopRecItem:ctor(param)
    MonthlyCardShopRecItem.super.ctor(self, param)
    self._info = param
    self:initUI()
    self:updateUI(param)

    self._panel:removeFromParent()
    self:removeAllChildren()
    self:addChild(self._panel)
end

function MonthlyCardShopRecItem:getCSBPath()
    return "cocosStudio/hall/CSB/MonthlyCard/MonthlyCardShopRecItem.csb"
end

function MonthlyCardShopRecItem:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onFirstGetClicked"},
        ["_txtName"] = {varName = "_txtName"},
        ["_panelRandGift"] = {varName = "_panelRandGift", beginIndex = 1, endIndex = 3},
        ["_txtPrice"] = {varName = "_txtPrice"},
        ["_panelGift"] = {varName = "_panelGift"}
    }
end

function MonthlyCardShopRecItem:getProxyEvents()
    return {}
end

function MonthlyCardShopRecItem:isFullScreen()
    return false
end

function MonthlyCardShopRecItem:onEnter()
end

function MonthlyCardShopRecItem:initUI()
    self:setSwallowTouches(false)
    XH.UIButton.create(
        self._panel,
        XH.UIButton.CLICK_STYLE.NOSCALE,
        function()
            self:onTouchClick()
        end
    )
    Utils:addSpine(self._aniBuy, "Shop", "zzb_ty_ansg", "animation")
    Utils:addSpine(XH.UITool.seekNodeByName(self._panel, "_nodeAniBtn"), "Shop", "zzb_ty_ansg", "animation")
end

function MonthlyCardShopRecItem:updateUI(info)
    self._txtName:setString(info.title)
    self:initGift(self._panelGift, info.purchaseRewards[1])
    self:initGift(self["_panelRandGift" .. 1], info.dailyRewards[1])
    self:initGift(self["_panelRandGift" .. 2], info.dailyRewards[2])
    self:initGift(self["_panelRandGift" .. 3], info.dailyRewards[3])

    local price = XH.lobby:getModule("MonthlyCard"):getProductPrice(info.propId)
    self._txtPrice:setString(price .. "元")

    RedPointManager:addListener(
        "shop/rec/rec/monthlycard_" .. info.propId,
        function(state)
            if tolua.isnull(self) then
                return
            end
            XH.UITool.setVisible(self, "_imgRedPoint", state)
        end
    )
end

function MonthlyCardShopRecItem:initGift(item, info)
    if not info then
        item:setVisible(false)
        return
    end
    item:setVisible(true)
    local aniNode = XH.UITool.seekNodeByName(item, "_ani")
    if aniNode and not aniNode._ani then
        aniNode._ani = Utils:addSpine(aniNode, "Common", "zzb_ty_jlsg", "animation")
    end
    local txt = XH.UITool.seekNodeByName(item, "_txt")
    if txt then
        txt:setString("x" .. XH.StringTool.numberToString(info.count))
    end
    local awardPic = XH.UITool.seekNodeByName(item, "_layout")
    if awardPic then
        local headImage = XH.RemoteImage.new()
        headImage:setAnchorPoint(cc.p(0.5, 0.5))
        headImage:setPosition(awardPic:getContentSize().width * 0.5, awardPic:getContentSize().height * 0.5)
        headImage:ignoreContentAdaptWithSize(false)
        headImage:setContentSize(awardPic:getContentSize().width, awardPic:getContentSize().height)
        headImage:setUrl(info.icon or "")
        awardPic:addChild(headImage)
    end
end

function MonthlyCardShopRecItem:getBody()
    return self._panel
end

function MonthlyCardShopRecItem:onTouchClick()
    XH.lobby:getModule("MonthlyCard"):openMonthlyCardView(nil, {area = "商城推荐页", propId = self._info.propId})
end

return MonthlyCardShopRecItem
