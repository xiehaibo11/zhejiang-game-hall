local GiftPackCollectionView = class("GiftPackCollectionView", XH.Bridge.ViewBase)
local RedPointManager = import("...Manager.RedPointManager")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local ActionUtils = import("...Tool.ActionUtils")
local ShopConfig = import("..Shop.Config")

function GiftPackCollectionView:getCSBPath()
    return XH.Bridge:getCCSResPath("GiftPackColletion/GPCView.csb")
end

function GiftPackCollectionView:getBindingInfo()
    return {
        ["_panelLT"] = {varName = "_panelLT"},
        ["_panelTop"] = {varName = "_panelTop"},
        ["_panelLeft"] = {varName = "_panelLeft"},
        ["_panelRight"] = {varName = "_panelRight"},
        ["_itemLeftTab"] = {varName = "_itemLeftTab"},
        ["_listLeftTab"] = {varName = "_listLeftTab"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_txtDiamondNum"] = {varName = "_txtDiamondNum"},
        ["_txtGoldNum"] = {varName = "_txtGoldNum"},
        ["_btnBag"] = {varName = "_btnBag", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBag"},
        ["_btnCus"] = {varName = "_btnCus", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCus"},
        ["_panelAddDiamond"] = {varName = "_panelAddDiamond", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddDiamond"},
        ["_panelAddGold"] = {varName = "_panelAddGold", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddGold"},
        ["_posRightBody"] = {varName = "_posRightBody"}
    }
end

function GiftPackCollectionView:getProxyEvents()
    return {
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "flushTopInfo"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "flushTopInfo"}
    }
end

function GiftPackCollectionView:ctor(param)
    param = param or {}
    self._module = XH.Bridge:getModule(LocalConfig.MP.GPC)
    self._jumpToView = param.jumpToView
    GiftPackCollectionView.super.ctor(self, param)
    self:adaptForLiuHai()
    self:flushTopInfo()
    self:initLeftTypeList()
    self._listLeftTab:setScrollBarEnabled(false)
    self:setCascadeOpacityEnabled(true)
    self:startHide()
    self:startShow()
end

function GiftPackCollectionView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLeft, self._panelLT})
        end
        local rightWidth = display.width - self._panelLeft:getPositionX() - self._panelLeft:getContentSize().width
        self._panelRight:setContentSize(cc.size(rightWidth, self._panelRight:getContentSize().height))
        self._posRightBody:setPositionX(rightWidth / 2)
    end
end

function GiftPackCollectionView:flushTopInfo()
    self._txtGoldNum:setText(Utils:formatGoldNum2String(XH.playerData:getSR()))
    self._txtDiamondNum:setText(Utils:formatGoldNum2String(XH.playerData:getDiamnd()))
end

local DEFAULT_TAB_TEXT_COLOR = cc.c3b(255, 255, 255)
local SELECTED_TAB_TEXT_COLOR = cc.c3b(0x9d, 0x46, 0)

function GiftPackCollectionView:updateLeftTabStateChanged(seelctBtn, info)
    for _, btn in pairs(self._leftTabBtns) do
        local isSelected = btn == seelctBtn
        btn:setTouchEnabled(not isSelected)
        XH.UITool.setVisible(btn, "_imgSelected", isSelected)
        XH.UITool.setVisible(btn, "_nodeAni", isSelected)
    end
    self._posRightBody:removeAllChildren()
    if info then
        local viewCfg = XH.Bridge.viewManager:getViewConfig(info.viewName)
        if viewCfg and viewCfg.Path then
            local view = require(viewCfg.Path).new("礼包合集", {isInCollection = true, parentSize = self._panelRight:getContentSize()})
            if view then
                if view then
                    view:setCascadeOpacityEnabled(true)
                end
                if view.getInCollectionPos then
                    view:setPosition(view:getInCollectionPos())
                else
                    local anPos = view:getAnchorPoint()
                    local viewSize = view:getContentSize()
                    view:setPosition(viewSize.width * (anPos.x - 0.5), viewSize.height * (anPos.y - 0.5))
                end
                self._posRightBody:addChild(view)
                ActionUtils:runTopFadeIn(view, true, 0, 15 / 30)
            end
        end
    end
end

------------------事件处理------------------------
-- 关闭按钮
function GiftPackCollectionView:onTouchEventClose(send, event)
    self:close()
end

function GiftPackCollectionView:onClickAddDiamond(send, event)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {productType = ShopConfig.SpecialTag.DIAMOND})
    self:close(true)
end

function GiftPackCollectionView:onClickAddGold(send, event)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {productType = ShopConfig.SpecialTag.GOLD})
    self:close(true)
end
function GiftPackCollectionView:onClickCus(send, event)
    XH.Bridge:gotoKefu("GOLDLOBBY_GPC")
end

-- 背包按钮
function GiftPackCollectionView:onClickBag(send, event)
    cc.UserDefault:getInstance():setIntegerForKey("IS_FIRST_CLICK_BAG_BTN", 1)
    XH.Bridge.viewManager:openView("GoldHallBagView", nil)
    self:close(true)
end

function GiftPackCollectionView:close(notSend)
    GiftPackCollectionView.super.close(self)
    if not notSend then
        XH.Bridge:getModule("GoldNew"):closeFullView("GoldHallGPCView", true)
    end
end

function GiftPackCollectionView:getShopModule()
    return XH.Bridge:getModule(LocalConfig.MP.SHOP)
end

function GiftPackCollectionView:initLeftTypeList()
    local leftTabData = self._module:getAllGiftPackInfo()
    local jumoToIndex = 1

    for k, v in ipairs(leftTabData) do
        local btnTab = self._itemLeftTab:clone()
        XH.UITool.setText(btnTab, "_txtTitle", v.name)
        XH.UITool.setVisible(btnTab, "_txtTitle", true)
        XH.UITool.loadTexture(btnTab, "_imgActLogo", v.res, ccui.TextureResType.plistType)
        XH.UIButton.create(btnTab, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:updateLeftTabStateChanged(btnTab, v)
        end)
        self:registerRedPoint(btnTab, v.redPointPath)
        -- Utils:addSpine(nodeAni, "Shop", "zzb_ty_xzl", "animation")
        self._listLeftTab:addChild(btnTab)
        if self._jumpToView and self._jumpToView == v.viewName then
            jumoToIndex = k
        end
    end

    self._leftTabBtns = self._listLeftTab:getChildren()
    self:updateLeftTabStateChanged(self._leftTabBtns[jumoToIndex], leftTabData[jumoToIndex])
end

function GiftPackCollectionView:registerRedPoint(node, path)
    node.redPointPath = path
    RedPointManager:registerNode(path)
    RedPointManager:addListener(path, function(state)
        if tolua.isnull(node) then
            return
        end
        XH.UITool.setVisible(node, "_imgRedPoint", state)
    end, true)
end

function GiftPackCollectionView:onCleanup()
    GiftPackCollectionView.super.onCleanup(self)
end

-----------转场动效-----------
function GiftPackCollectionView:startShow()
    ActionUtils:runTopFadeIn(self._panelTop, true)
    ActionUtils:runTopFadeIn(self, true, 0)
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0, 0.2)
    ActionUtils:runLeftMoveOut(self._panelLeft, true)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0, 0.4)
    ActionUtils:runLeftMoveOut(self._panelLT, true)
end

function GiftPackCollectionView:startHide()
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0)
end
return GiftPackCollectionView
%