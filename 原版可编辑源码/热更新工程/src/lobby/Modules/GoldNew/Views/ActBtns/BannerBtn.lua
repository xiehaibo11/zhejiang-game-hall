local BtnBase = import("..BtnBase")
local BannerBtn = class("BannerBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function BannerBtn:ctor(id, areaId, cfg)
    BtnBase.ctor(self, id, areaId, cfg)
    self._size = cc.size(370, 160) -- 尺寸固定
    self:setContentSize(self._size)
    self:initUI()
end

function BannerBtn:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_UPDATE_BANNER", callBack = "onUpdateUI"},
    }
end

function BannerBtn:getSortValue()
    return -99999
end

function BannerBtn:checkShow(isFromGroup)
    self:setVisible(#self._showUrls > 0) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function BannerBtn:getValidPics()
    local urls = clone(self._data.urls)
    local modules = self._data.module or {}
    for i = #modules, 1, -1 do
        if modules[i] and LocalConfig.MP[modules[i]] then
            local m = XH.Bridge:getModule(LocalConfig.MP[modules[i]])
            if m.isValid and not m:isValid() then
                table.remove(urls, i)
            end
        end
    end
    return urls
end

function BannerBtn:onUpdateUI()
    self:initUI()
    self:checkShow()
end

function BannerBtn:initUI()
    local urls = self:getValidPics()
    self._showUrls = urls
    self._layers = {}
    for i = 1, #urls do
        local layer = ccui.Layout:create()
        layer:setCascadeOpacityEnabled(true)
        layer:setContentSize(self._size)
        layer = XH.UIRemoteImage.create(layer)
        layer:setUrl(urls[i])
        self:addChild(layer, 10 - i)
        self._layers[i] = layer
        self._layers[i]:setVisible(i == 1)

        XH.UIButton.create(layer, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onClick(i)
        end)
    end
    -- 创建一个 DrawNode 对象
    local drawNode = cc.DrawNode:create()
    self:addChild(drawNode, 100000)
    self._drawNode = drawNode
    self._showIdx = 0
    self:updateCircle()
    self:autoRund()
end

function BannerBtn:autoRund()
    if #self._layers <= 1 then
        return
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(5), cc.CallFunc:create(function()
        self:showNext()
    end)))
end

function BannerBtn:showNext()
    local curIdx = self._showIdx
    local curLayer = self._layers[curIdx + 1]
    local newIdx = (self._showIdx + 1) % #self._layers
    local nextLayer = self._layers[newIdx + 1]
    nextLayer:setPositionX(self._size.width)
    -- nextLayer:setVisible(true)
    for i = 1, #self._layers do
        self._layers[i]:setLocalZOrder(10)
    end
    curLayer:setLocalZOrder(20)
    nextLayer:setLocalZOrder(100)
    curLayer:runAction(cc.Sequence:create(cc.MoveBy:create(0.5, cc.p(-self._size.width, 0)), cc.Hide:create(), cc.CallFunc:create(function()
        self._showIdx = (self._showIdx + 1) % #self._layers
        self:autoRund()
        self:updateCircle()
    end)))
    nextLayer:runAction(cc.Sequence:create(cc.Show:create(), cc.MoveBy:create(0.5, cc.p(-self._size.width, 0)), cc.CallFunc:create(function()
        -- self:autoRund()
    end)))
end

function BannerBtn:updateCircle()
    self._drawNode:clear()
    if #self._layers <= 1 then
        return
    end
    local radius = 6
    local gap = 6
    local startX = (self:getContentSize().width - #self._layers * 2 * radius - (#self._layers - 1) * gap) / 2 + radius
    for i = 1, #self._layers do
        local color = self._showIdx + 1 == i and cc.c4f(1.0, 1.0, 1.0, 1.0) or cc.c4f(0.7, 0.7, 0.7, 0.7)
        self._drawNode:drawSolidCircle(cc.p((2 * radius + gap) * (i - 1) + startX, 22), radius, 0, 32, 1, 1, color)
    end
end

function BannerBtn:onClick(idx)
    local clickParam = self._data.clickParam or {}
    if not clickParam[idx] then
        return
    end
    print("click" .. idx, clickParam[idx])
    -- XH.Bridge:getModule("GoldNew"):simulateBtnClick(self._data.actIds[idx])
    self:throwClickData()
    if clickParam[idx].view then
        XH.Bridge.viewManager:openView(clickParam[idx].view, nil, clickParam[idx].openParam) -- 打开指定视图
    elseif clickParam[idx].script then
        local luaString = "return {" .. clickParam[idx].script .. "}"
        local func = loadstring(luaString)
        func() -- 执行指定脚本
    end
end

function BannerBtn:posIncrement()
    return cc.p(30, -30)
end

function BannerBtn:addTestNode()
    self:setAnchorPoint(1, 1)
    local layer = cc.LayerColor:create(cc.c4b(155, 0, 0, 255), 200, 100)
    self:addChild(layer)

    local txt = cc.Label:createWithSystemFont("test", "Arial", 30)
    local size = self:getContentSize()
    -- txt:setAnchorPoint(0.5, 0.5)
    txt:setPosition(self:getContentSize().width / 2, self:getContentSize().height / 2)
    txt:setString("" .. self._id)
    self:addChild(txt)
end
return BannerBtn
