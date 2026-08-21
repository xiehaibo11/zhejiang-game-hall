--- 请神即将到期续费提醒：气泡 + 文案 + 购买按钮（挂在本机头像附近）
local Define = require("lobby.Modules.QingShen.Define")
local Compat = require("lobby.Modules.PropPush.Compat")

local PLIST = "Common/CSB/GameBase/PropPush/Image/PropPush.plist"
local FONT_PATH = "Common/Font/fangzhengcuyuan.TTF"

local RenewRemindNode = class("RenewRemindNode", function()
    return cc.Node:create()
end)

local function _loadPlist()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(PLIST)
end

function RenewRemindNode:ctor(opts)
    opts = opts or {}
    self._onBuy = opts.onBuy
    self._onDismiss = opts.onDismiss
    self._onShow = opts.onShow
    self._touchTarget = nil
    -- _loadPlist()
    self:_buildUI()
    if opts.attachNode and not tolua.isnull(opts.attachNode) then
        self:attachTo(opts.attachNode, opts.layout)
    end
    if opts.text then
        self:setTipText(opts.text)
    end
    if opts.priceInfo then
        self:updatePrice(opts.priceInfo)
    end
    self:setScale(1.333)
end

function RenewRemindNode:_buildUI()
    self:setName(Define.RENEW_REMIND_NODE_NAME)

    local panelW, panelH = 440, 100
    local panel = ccui.Layout:create()
    panel:setContentSize(cc.size(panelW, panelH))
    panel:setAnchorPoint(cc.p(0, 0.5))
    panel:setTouchEnabled(true)
    panel:setSwallowTouches(true)
    panel:addTouchEventListener(function(sender, eventType)
        if eventType == ccui.TouchEventType.ended then
            if self._onDismiss then
                self._onDismiss()
            end
        end
    end)
    self:addChild(panel)
    self._panel = panel

    local bg = ccui.ImageView:create("Common/CSB/GameBase/PropPush/Image/Img_qp.png", ccui.TextureResType.localType)
    bg:setScale9Enabled(true)
    -- bg:setCapInsets(cc.rect(37, 13, 41, 14))
    bg:setContentSize(cc.size(420, 103))
    bg:setAnchorPoint(cc.p(0, 0.5))
    bg:setPosition(-5, panelH * 0.5 + 4)
    bg:setTouchEnabled(true)
    bg:setSwallowTouches(true)
    bg:addTouchEventListener(function(sender, eventType)
        if eventType == ccui.TouchEventType.ended then
            if self._onDismiss then
                self._onDismiss()
            end
        end
    end)
    panel:addChild(bg, 0)
    self._bg = bg

    local tip = ccui.Text:create("", FONT_PATH, 24)
    tip:setTextColor(cc.c3b(122, 68, 11))
    tip:setAnchorPoint(cc.p(0, 0.5))
    tip:setPosition(32, panelH * 0.5)
    panel:addChild(tip, 2)
    self._tipText = tip

    local btnW, btnH = 142, 53
    local btn = ccui.Button:create(
        "Common/CSB/GameBase/PropPush/Image/Btn_qs.png",
        "Common/CSB/GameBase/PropPush/Image/Btn_qs.png",
        "Common/CSB/GameBase/PropPush/Image/Btn_qs.png",
        ccui.TextureResType.localType
    )
    -- btn:setScale9Enabled(true)
    -- btn:setCapInsets(cc.rect(80, 20, 80, 20))
    -- btn:setContentSize(cc.size(btnW, btnH))
    btn:setAnchorPoint(cc.p(1, 0.5))
    btn:setPosition(panelW - 100, panelH * 0.5-2)
    btn:setSwallowTouches(true)
    btn:addTouchEventListener(function(sender, eventType)
        if eventType == ccui.TouchEventType.ended then
            if self._onBuy then
                self._onBuy()
            end
        end
    end)
    panel:addChild(btn, 3)
    self._buyBtn = btn
    self._touchTarget = btn

    local icon = ccui.ImageView:create("Common/CSB/GameBase/PropPush/Image/PropPush_zuanshi.png", ccui.TextureResType.plistType)
    icon:setAnchorPoint(cc.p(0, 0.5))
    icon:setPosition(10, btnH * 0.5 + 4)
    icon:setScale(0.8)
    btn:addChild(icon)
    self._costIcon = icon

    local buyText = ccui.Text:create("请神", FONT_PATH, 24)
    buyText:setTextColor(cc.c3b(124, 23, 19))
    buyText:setAnchorPoint(cc.p(0, 0.5))
    buyText:setPosition(36, btnH * 0.5 + 4)
    btn:addChild(buyText)
    self._buyText = buyText
end

function RenewRemindNode:_setBuyLabel(pricePart)
    if not self._buyText or tolua.isnull(self._buyText) then
        return
    end
    self._buyText:setString(tostring(pricePart or "") .. "请神")
end

function RenewRemindNode:setTipText(text)
    if self._tipText and not tolua.isnull(self._tipText) then
        self._tipText:setString(tostring(text or ""))
    end
end

--- @param priceInfo table { price, costPropId, isFree, propCount }
function RenewRemindNode:updatePrice(priceInfo)
    if not priceInfo or tolua.isnull(self) then
        return
    end
    local btnH = self._buyBtn and self._buyBtn:getContentSize().height or 40
    local midY = btnH * 0.5 + 1
    if priceInfo.isFree then
        if self._costIcon then self._costIcon:setVisible(false) end
        if self._buyText then
            self._buyText:setVisible(true)
            -- self._buyText:setAnchorPoint(cc.p(0, 0.5))
            -- self._buyText:setPosition(12, midY)
            self:_setBuyLabel("免费")
        end
        return
    end
    local costPropId = tonumber(priceInfo.costPropId)
    local price = tonumber(priceInfo.price) or 0
    local propCount = tonumber(priceInfo.propCount) or 0
    if propCount > 0 and costPropId == tonumber(priceInfo.propId) then
        local iconPath = "Common/CSB/GameBase/PropPush/Image/PropPush_zuanshi.png"
        if Compat.isRoomCardPropId(costPropId) then
            iconPath = "Common/CSB/GameBase/PropPush/Image/PropPush_fangka.png"
        end
        if self._costIcon then
            self._costIcon:setVisible(false)
        end
        if self._buyText then
            self._buyText:setVisible(true)
            -- self._buyText:setAnchorPoint(cc.p(0, 0.5))
            -- self._buyText:setPosition(30, midY)
            -- self:_setBuyLabel("x1")
            self._buyText:setString("请神x"..propCount)
        end
    else
        local iconPath = "Common/CSB/GameBase/PropPush/Image/PropPush_zuanshi.png"
        if Compat.isRoomCardPropId(costPropId) then
            iconPath = "Common/CSB/GameBase/PropPush/Image/PropPush_fangka.png"
        end
        if self._costIcon then
            self._costIcon:setVisible(true)
            self._costIcon:loadTexture(iconPath, ccui.TextureResType.plistType)
            self._costIcon:setScale(0.55)
        end
        if self._buyText then
            self._buyText:setVisible(true)
            -- self._buyText:setAnchorPoint(cc.p(0, 0.5))
            -- self._buyText:setPosition(30, midY)
            self:_setBuyLabel(tostring(price))
        end
    end
end

--- @param attachNode cc.Node 头像 face 节点（仅用于换算场景坐标，不作为父节点挂载）
--- @param layout table|nil { x, y, anchorX, anchorY, bRight }
function RenewRemindNode:_getPopupZOrder()
    if XH and XH.ZORDER and XH.ZORDER.WINDOW then
        return XH.ZORDER.WINDOW - 1
    end
    return 998
end

function RenewRemindNode:attachTo(attachNode, layout)
    if not attachNode or tolua.isnull(attachNode) then
        return false
    end
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then
        return false
    end
    layout = layout or {}
    local anchorX = layout.anchorX
    local anchorY = layout.anchorY
    if anchorX == nil or anchorY == nil then
        local size = attachNode:getContentSize()
        if layout.bRight then
            anchorX, anchorY = 1, 0.85
            layout.x = layout.x or 70
            layout.y = layout.y or size.height * 0.85
        else
            anchorX, anchorY = 0, 0.85
            layout.x = layout.x or 70
            layout.y = layout.y or size.height * 0.5
        end
    end
    self:setAnchorPoint(cc.p(anchorX, anchorY))
    local localPos = cc.p(layout.x or 0, layout.y or 0)
    local worldPos = attachNode:convertToWorldSpace(localPos)
    local scenePos = scene:convertToNodeSpace(worldPos)
    self:setPosition(scenePos)
    self._attachNode = attachNode
    self._attachLayout = layout
    scene:addChild(self, self:_getPopupZOrder())
    if self._onShow then
        self._onShow()
    end
    return true
end

function RenewRemindNode:detach()
    if self and not tolua.isnull(self) then
        self:removeFromParent()
    end
end

return RenewRemindNode
�   