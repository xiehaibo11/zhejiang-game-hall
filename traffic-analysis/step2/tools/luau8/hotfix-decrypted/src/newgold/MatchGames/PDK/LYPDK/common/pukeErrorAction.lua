local pukeErrorAction = class("pukeErrorAction",function() return display.newNode() end)

local function getPath(name)

    return "game/lyPuKe/cardsUIs/"..name..".png"
end

local function newSprite(name)
    return display.newSprite("#"..name)
end

function pukeErrorAction:ctor(baseNode)
    self:setContentSize(display.size)
    self:setPosition(display.center)
    self:setAnchorPoint(0.5,0.5)
    baseNode:addChild(self)
    
    self.errorOutNode = nil 
    self.playOutAction = false

    self.serverErrorOutNode = nil 

    self.mustOutFirstCardNode = nil

    self:initNode()
end

function pukeErrorAction:initNode()
    -- 创建显示出牌错误根节点
    self.errorOutNode = display.newNode():move(display.cx,110):addTo(self)
    -- 创建阴影背景
    local shadow = newSprite(getPath("mask")):setOpacity(150):setScaleX(270):setScaleY(20):addTo(self.errorOutNode)
    -- 创建错误提示文字并添加到阴影上面
    newSprite(getPath("tip")):addTo(self.errorOutNode)
    self.errorOutNode:setCascadeOpacityEnabled(true)
    self.errorOutNode:setOpacity(0)

     -- 创建显示出牌错误根节点
     self.serverErrorOutNode = display.newNode():move(display.cx,110):addTo(self)
     -- 创建阴影背景
     local shadow2 = newSprite(getPath("mask")):setOpacity(150):setScaleX(270):setScaleY(20):addTo(self.serverErrorOutNode)
     -- 创建错误提示文字并添加到阴影上面
     newSprite(getPath("tip2")):addTo(self.serverErrorOutNode)
     self.serverErrorOutNode:setCascadeOpacityEnabled(true)
     self.serverErrorOutNode:setOpacity(0)

    -- 创建显示必出黑桃三节点
    self.mustOutFirstCardNode = display.newNode():move(display.cx,110):addTo(self)
    -- 创建阴影背景
    local shadow2 = newSprite(getPath("mask")):setOpacity(150):setScaleX(270):setScaleY(20):addTo(self.mustOutFirstCardNode)
    -- 创建错误提示文字并添加到阴影上面
    newSprite(getPath("tip3")):addTo(self.mustOutFirstCardNode)
    self.mustOutFirstCardNode:setCascadeOpacityEnabled(true)
    self.mustOutFirstCardNode:setOpacity(0)


    -- 创建显示必出黑桃三节点
    self.labelErrorOutNode = display.newNode():move(display.cx,110):addTo(self)
    -- 创建阴影背景
    local shadow2 = newSprite(getPath("mask")):setOpacity(150):setScaleX(270):setScaleY(20):addTo(self.labelErrorOutNode)

    local textLabel = ccui.Text:create(str, "fonts/huakangyuanti.ttf", 32)
    textLabel:addTo(self.labelErrorOutNode):setPosition(self.labelErrorOutNode:getContentSize().width/2, self.labelErrorOutNode:getContentSize().height/2)
    self.labelErrorOutNode.label = textLabel

    self.labelErrorOutNode:setCascadeOpacityEnabled(true)
    self.labelErrorOutNode:setOpacity(0)



end

-- 显示出牌不符合规则时的文字提示
function pukeErrorAction:showOutErrorAction1(str)

    if self.playOutAction == true then return end

    self.playOutAction = true
    -- 播放动画
    self.labelErrorOutNode:setOpacity(255)
    local action = cc.FadeOut:create(2)

    local label = self.labelErrorOutNode.label
    if label and not tolua.isnull(label) then 
        label:setText(str)
    end

    self.labelErrorOutNode:runAction(cc.Sequence:create(action,cc.CallFunc:create(function()
        self.playOutAction = false 
    end)))
end




-- 显示出牌不符合规则时的动画效果
function pukeErrorAction:showOutErrorAction()

    if self.playOutAction == true then return end

    self.playOutAction = true
    -- 播放动画
    self.errorOutNode:setOpacity(255)
    local action = cc.FadeOut:create(2)

    self.errorOutNode:runAction(cc.Sequence:create(action,cc.CallFunc:create(function()
        self.playOutAction = false 
    end)))
end

-- 服务器反馈回来的不合法
function pukeErrorAction:showServerOutErrorAction()
   
    if self.playOutAction == true then return end
    self.playOutAction = true
    -- 播放动画
    local wanfa2 = g_gameGlobal:getWanfa2()
    local playWay = g_gameGlobal:getCurrentWanFa()
    --产品需求，统一两副的要不起按钮
    local errNode = g_gameGlobal:isLiangfu(playWay , wanfa2) and self.errorOutNode or self.serverErrorOutNode
    errNode:setOpacity(255)
    local action = cc.FadeOut:create(2)
    errNode:runAction(cc.Sequence:create(action,cc.CallFunc:create(function()
        self.playOutAction = false 
    end)))
end

function pukeErrorAction:showMustOutFirstCardAction()
   
    if self.playOutAction == true then return end

    self.playOutAction = true
    -- 播放动画
    self.mustOutFirstCardNode:setOpacity(255)
    local action = cc.FadeOut:create(2)

    self.mustOutFirstCardNode:runAction(cc.Sequence:create(action,cc.CallFunc:create(function()
        self.playOutAction = false 
    end)))
end


function pukeErrorAction:hideErrorAction()

    self.errorOutNode:stopAllActions()
    -- body
end


return pukeErrorAction�