local ImageTextTutorialView = class("ImageTextTutorialView", XH.ViewBase)
local Configs = require(XH.goldLobbyRootPath .. ".Modules.ImageTextTutorial.Config")

function ImageTextTutorialView:getCSBPath()
    return "hall/CSB/ImageTextTutorial/View.csb"
end

--- 获得节点的绑定信息
function ImageTextTutorialView:getBindingInfo()
    return {
        ["_KW_PAGE"] = {varName = "_pageView"},
        ["_KW_TXT_BUTTON"] = {varName = "_btnText"},
        ["_KW_VIEW_PANEL"] = {varName = "_viewPanel"},
        ["_KW_BTN_NEXT"] = {varName = "_nextBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnNext"},
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"}
    }
end

function ImageTextTutorialView:ctor(param)
    ImageTextTutorialView.super.ctor(self)
    param = param or {}
    local first = param.first or false
    local gameid = param.gameid or 0
    local config = Configs[gameid]
    assert(config.pageCnt ~= nil, "ImageTextTutorialView:pageCnt is nil")
    self._pageCnt = config.pageCnt
    assert(config.pageSprite ~= nil, "ImageTextTutorialView:pageSprite is nil")
    self._spriteName = config.pageSprite
    assert(config.indicatorSprite ~= nil, "ImageTextTutorialView:indicatorSprite is nil")
    self._indicatorSpriteName = config.indicatorSprite
    local indicatorParams = config.indicatorParams or {}
    self._indicatorParams = {
        normalColor = indicatorParams.normalColor or cc.c3b(0xff, 0xff, 0xff),
        normalAlpha = indicatorParams.normalAlpha or 0x77,
        selectedColor = indicatorParams.selectedColor or cc.c3b(0xff, 0xff, 0xff),
        selectedAlpha = indicatorParams.selectedAlpha or 0xff,
        spacing = indicatorParams.spacing or 40,
        bottomMargin = indicatorParams.bottomMargin or 80,
        scale = indicatorParams.scale or 0.7
    }
    self:initNode()
    if first then
        self._closeBtn:setVisible(false)
        self._closeBtn:runAction(cc.Sequence:create(cc.DelayTime:create(5), cc.Show:create()))
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtw25040301)
end

function ImageTextTutorialView:initNode()
    -- 指示器参数
    local indicatorParams = self._indicatorParams

    local pageView = self._pageView
    pageView:setCustomScrollThreshold(400)
    pageView:setIndicatorEnabled(true)

    local pageViewSize = pageView:getContentSize()

    for i = 1, self._pageCnt do
        local layout = ccui.Layout:create()
        layout:setName("page_layout_" .. i)
        layout:setContentSize(pageViewSize)

        local sprite = cc.Sprite:create()
        local texture = cc.Director:getInstance():getTextureCache():addImage(string.format(self._spriteName, i))
        if texture then
            local spriteFrame = cc.SpriteFrame:createWithTexture(texture, cc.rect(0, 0, texture:getContentSize().width, texture:getContentSize().height))
            sprite:setSpriteFrame(spriteFrame)
        end
        sprite:setName("page_layout_sprite_" .. i)
        sprite:setPosition(layout:getContentSize().width / 2, layout:getContentSize().height / 2)
        layout:addChild(sprite)

        pageView:addPage(layout)
    end

    local indicatorLayer = cc.Node:create() -- 指示器层
    indicatorLayer:setLocalZOrder(99) -- 确保显示在最上层
    indicatorLayer:setPosition(cc.p(pageViewSize.width / 2, indicatorParams.bottomMargin))
    self._viewPanel:addChild(indicatorLayer)

    local updateIndicator = function(idx)
        local child = indicatorLayer:getChildByName("indicator" .. idx + 1)
        if child then
            local playAction = true
            if playAction then
                local moveto = cc.MoveTo:create(0.1, cc.p(child:getPosition()))
                self._selectIndicator:stopAllActions()
                self._selectIndicator:runAction(moveto)
            else
                self._selectIndicator:setPosition(cc.p(child:getPosition()))
            end
        end
    end

    pageView:addEventListener(
        function(sender, eventType)
            if eventType == ccui.PageViewEventType.turning then
                local idx = sender:getCurrentPageIndex()
                updateIndicator(idx)
                self:scrollFunc(idx)
            end
        end
    )

    local setIndicatorParams = function()
        pageView:setIndicatorPositionAsAnchorPoint(cc.p(0.5, 0.02))
        pageView:setIndicatorSpaceBetweenIndexNodes(indicatorParams.spacing)
        pageView:setIndicatorIndexNodesScale(indicatorParams.scale)

        pageView:setIndicatorIndexNodesColor(indicatorParams.normalColor)
        pageView:setIndicatorIndexNodesOpacity(indicatorParams.normalAlpha)

        pageView:setIndicatorSelectedIndexColor(indicatorParams.selectedColor)
        pageView:setIndicatorSelectedIndexOpacity(indicatorParams.selectedAlpha)
    end
    setIndicatorParams()

    pageView:scrollToPage(0)
    self._lastPageIndex = 0
end

function ImageTextTutorialView:scrollFunc(index)
    self._lastPageIndex = index

    local txt = self._btnText
    if index + 1 == self._pageCnt then
        txt:setString("开始游戏")
    else
        txt:setString("下一页")
    end
end

function ImageTextTutorialView:onBtnNext()
    local pagenode = self._pageView
    local index = pagenode:getCurrentPageIndex()
    if index + 1 == self._pageCnt then
        -- XH.lobby:getModule("LuckyTask"):notifyLuckyTaskJoin("AC_JUMPTYPE_GAME", 30579, {joinRoom = true})
        XH.lobby:getModule("GoldQuickEnter"):enterGoldGame(30579)
        self:close()
    else
        pagenode:scrollToPage(index + 1)
        self:scrollFunc(index + 1)
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtw25040302)
end

function ImageTextTutorialView:onBtnClose()
    self:close()
end

return ImageTextTutorialView
K