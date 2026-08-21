
local ViewBase = class("ViewBase", cc.Node)

function ViewBase:ctor(app, name)
    self:enableNodeEvents()
    self.app_ = app
    self.name_ = name

    -- check CSB resource file
    local res = rawget(self.class, "RESOURCE_FILENAME")
    if res then
        self:createResoueceNode(res)
    end

    local resEx = rawget(self.class, "RESOURCE_FILENAMEAH")
    if resEx then
        res = resEx
        self:createPDKResoueceNode(res)
    end

    local binding = rawget(self.class, "RESOURCE_BINDING")
    if res and binding then
        self:createResoueceBinding(binding)
    end

    if self.onCreate then self:onCreate() end
end

function ViewBase:findChildWithName( node ,name )
    -- body
    if not node then
        return nil;
    end

    local child = node:getChildByName(name);
    if child then
        return child ;
    end

    local childs = node:getChildren();

    for i,v in ipairs(childs) do
        local c = v;
        if c then
            local f = self:findChildWithName(c,name);
            if f then 
                return f;
            end
        end
    end 

    return nil;
end

function ViewBase:getApp()
    return self.app_
end

function ViewBase:getViewName()
    return self.name_
end

function ViewBase:setCurrentMainWanFa( wanfa )
    -- body
    self.wanfa = wanfa
end

function ViewBase:getCurrentMainWanFa()
    -- body
    return self.wanfa;
end

function ViewBase:getResourceNode()
    return self.resourceNode_
end

function ViewBase:createResoueceNode(resourceFilename)
    resourceFilename = "Match/" .. resourceFilename
    if self.resourceNode_ then
        self.resourceNode_:removeSelf()
        self.resourceNode_ = nil
    end
    self.resourceNode_ = cc.CSLoader:createNode(resourceFilename)
    assert(self.resourceNode_, string.format("ViewBase:createResoueceNode() - load resouce node from file \"%s\" failed", resourceFilename))
    
    self:AdapterViewNode(self.resourceNode_);
end

function ViewBase:createPDKResoueceNode(resourceFilename)
    resourceFilename = "MatchAH/" .. resourceFilename
    if self.resourceNode_ then
        self.resourceNode_:removeSelf()
        self.resourceNode_ = nil
    end
    self.resourceNode_ = cc.CSLoader:createNode(resourceFilename)
    assert(self.resourceNode_, string.format("ViewBase:createResoueceNode() - load resouce node from file \"%s\" failed", resourceFilename))
    
    self:AdapterViewNode(self.resourceNode_);
end

function ViewBase:AdapterViewNode(viewRootNode)
    local frameSize, framePos = nil
    
    local function makeDefault()
        frameSize = cc.Director:getInstance():getVisibleSize();
        framePos = cc.p(0, 0)
    end
    
    local touchLayer = nil
    local clipNode = nil
    
    -- 新的固定宽高模式
    if self.adaptMode == 1 then
        local designRatio = CC_DESIGN_RESOLUTION.width / CC_DESIGN_RESOLUTION.height
        local deviceRatio = display.width / display.height
        
        -- 屏幕宽高比达到需要适配的比例
        if deviceRatio - designRatio > 0.15 then
            local widthRatio = display.width / CC_DESIGN_RESOLUTION.width
            local heightRatio = display.height / CC_DESIGN_RESOLUTION.height
            if widthRatio > heightRatio then
                local frameWidth = heightRatio * CC_DESIGN_RESOLUTION.width
                frameSize = cc.size(frameWidth, display.height)
                local posXMargin = (display.width - frameWidth) * 0.5
                framePos = cc.p(posXMargin, 0)
                
                touchLayer = cc.LayerColor:create(cc.c4b(0, 0, 0, 105), display.width, display.height)
                touchLayer:setTouchEnabled(true)
                touchLayer:setSwallowsTouches(true)
                touchLayer:registerScriptTouchHandler(function(ref, eventType)
                    return true
                end)
                
                clipNode = ccui.Layout:create()
                clipNode:setContentSize(frameSize)
                clipNode:setClippingEnabled(true)
                
            else
                makeDefault()
            end
        else
            makeDefault()
        end
    else
        makeDefault()
    end
    
    viewRootNode:setContentSize(frameSize)
    
    if not tolua.isnull(touchLayer) then
        touchLayer:addTo(self)
    end
    
    ccui.Helper:doLayout(viewRootNode); 
    
    if tolua.isnull(clipNode) then
        viewRootNode:setPosition(framePos)
        self:addChild(viewRootNode)
    
    -- 需要加一层裁剪，防止显示异常, 某些内容滚动显示在阴影部分
    else
        clipNode:addChild(viewRootNode)
        clipNode:setPosition(framePos)
        self:addChild(clipNode)
    end
end

--[[
    @desc 根据path获取对应节点
    path:string ui节点树中的全路径
]]
function ViewBase:getChildByPath(path)
    local nodeNames = string.split(path,'/')
    assert(#nodeNames > 1, "getChildByPath - path at least need / like a/b")
    local p = self.resourceNode_

    local errorInfo = ""
    for _,v in pairs(nodeNames) do
        p = p:getChildByName(v)
        errorInfo = errorInfo..v.."/"
        if not p then
            p = nil
            errorInfo = string.format('error: node %s not exist ',string.sub(errorInfo,1,-2))
            assert(p,errorInfo)
            break
        end
    end
    return p
end

function ViewBase:createResoueceBinding(binding)
    assert(self.resourceNode_, "ViewBase:createResoueceBinding() - not load resource node")
    for nodeName, nodeBinding in pairs(binding) do
        local node = nil
        if string.find(nodeName,'/') then
            node = self:getChildByPath(nodeName)
        else
            node = self.resourceNode_:getChildByName(nodeName)
        end
        if nodeBinding.varname then
            self[nodeBinding.varname] = node
        end
        if nodeBinding.anim and tolua.type(node) == "ccui.Button" then
            node:setPressedActionEnabled(true)
        end
        for _, event in ipairs(nodeBinding.events or {}) do
            if event.event == "touch" then
                node:onTouch(handler(self, self[event.method]))
            elseif event.event == "click" then
                local method = event.method
                node:onTouch(function(event)
                    if event.name == "ended" then
                        self[method](self,event.target)
                    end
                end)
            end
        end
    end
end

function ViewBase:switchWithScene(newSceneName, transition, time, more)
    local scene = display.newScene(newSceneName)
    
    display.runScene(scene, transition, time, more)
end

function ViewBase:showWithScene(transition, time, more)
    self:setVisible(true)
    local scene = display.newScene(self.name_)
    scene:addChild(self)
    display.runScene(scene, transition, time, more)
    return self
end

function ViewBase:createBaseMap()    
    self.layerBase = ccui.ImageView:create("noplist/mask.png", ccui.TextureResType.localType):anchor(0,0)
    :setScale9Enabled(true)
    :setContentSize(display.width, display.height)
    :addTo(self, -1)
end

--显示吞噬遮罩
function ViewBase:showMask()
    self:createBaseMap()
    g_gameGlobal:SwallowTouches(self)
end


function ViewBase:closeView()
    self:removeSelf()
end

function ViewBase:openWithScaleAnimation()
    -- self.resourceNode_:setContentSize(display.size)
    -- self.resourceNode_:setPosition(display.center)
    -- self.resourceNode_:setScale(0.1)
    -- self.resourceNode_:setAnchorPoint(cc.p(0.5, 0.5))
    -- self.resourceNode_:setName(self.__cname)
    -- transition.scaleTo(self.resourceNode_, {scale = 1, time = 0.25, easing = "ELASTICOUT"})
end
function ViewBase:closeWithScaleAnimation(event)
    if event == nil or event.name == "ended" then
        self:removeSelf()
    --     transition.scaleTo(self.resourceNode_, {scale = 0, time = 0.25, easing = "BACKIN", 
    --         onComplete = handler(self, self.closeView)})
    end
end

function ViewBase:openWithScaleAnimationNoEase()
    -- self.resourceNode_:setContentSize(display.size)
    -- self.resourceNode_:setPosition(display.center)
    -- self.resourceNode_:setScale(0.1)
    -- self.resourceNode_:setAnchorPoint(cc.p(0.5, 0.5))
    -- self.resourceNode_:setName(self.__cname)
    -- transition.scaleTo(self.resourceNode_, {scale = 1, time = 0.3})
end
function ViewBase:closeWithScaleAnimationNoEase(event)
    if type(event) == "number" then
        if event == 2 then
            self:removeSelf()
        end
    elseif type(event) == "table" then
        if event.name == "ended" then
            self:removeSelf()
        end
    elseif type(event) == "userdata" then
        self:removeSelf()
    end
    -- if event == nil or event.name == "ended" then
    --     transition.scaleTo(self.resourceNode_, {scale = 0, time = 0.3, 
    --         onComplete = handler(self, self.closeView)})
    -- end
end
function ViewBase:openWithMoveAnimation()
    -- self.resourceNode_:setContentSize(display.size)
    -- self.resourceNode_:setPosition(display.cx, 0)
    -- self.resourceNode_:setAnchorPoint(cc.p(0.5, 1))
    -- self.resourceNode_:setName(self.__cname)
    -- transition.moveTo(self.resourceNode_, {y=display.top, time = 0.5, easing = "BACKOUT"})
end
function ViewBase:closeWithMoveAnimation(event)
    if event == nil or event.name == "ended" then

        self:closeView()
        
        -- transition.moveTo(self.resourceNode_, {y = 0, time = 0.4, 
        --     onComplete = handler(self, self.closeView)})
    end
end

function ViewBase:onPlayTouchedSFX(  )
    -- body
    NG.soundManager:playMatchEffect("sound/audio_button_click.mp3");    
end

function ViewBase:onExitLayer(  )
    -- body
    --print_log("ViewBase:onExitLayer");
    self:releaseRes();
    self:removeFromParent();
end

function ViewBase:releaseRes(  )
    -- body
    --print_log("ViewBase releaseRes");
    if self.resourceNode_ then 
        self.resourceNode_:removeFromParent(); 
        self.resourceNode_ = nil;
    end
end

return ViewBase
