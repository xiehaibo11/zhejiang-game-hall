local ViewBase = class("ViewBase", function()
    return ccui.Layout:create()
end)
XH.EventReceive.extend(ViewBase)
XH.ScheduleInterface.extend(ViewBase)

function ViewBase:ctor()
    self:_initScheduleIDs()
    self:onInitCSB()
    self:onBindUI()

    if not self:getInitProxyEventsState() then
        self:initProxyEvents()
    end
    self:initLifeCycleHandler() -- 在initProxyEvents之后注册生命周期事件，用以覆盖EventProxy中注册的生命周期事件
    self.openTime = os.time()
end

function ViewBase:initLifeCycleHandler()
    -- 此方法可能会被EventProxy中的逻辑覆盖
    self:registerScriptHandler(function(state)
        if self:getInitProxyEventsState() and self:getInitProxyEventsState() == state then
            self:initProxyEvents()
            self:initLifeCycleHandler() -- 在initProxyEvents之后注册生命周期事件，用以覆盖EventProxy中注册的生命周期事件
        end
        if state == "enter" then
            self:onEnter()
        elseif state == "exit" then
            self:onExit()
        elseif state == "enterTransitionFinish" then
            self:onEnterTransitionFinish()
        elseif state == "exitTransitionStart" then
            self:onExitTransitionStart()
        elseif state == "cleanup" then
            self:onCleanup()
        end
    end)
end

function ViewBase:getInitProxyEventsState()
    return nil
end

function ViewBase:initBackGround()
    self:setBackGroundColorType(ccui.LayoutBackGroundColorType.solid)
    self:setBackGroundColor(cc.c3b(0,0,0))
    self:setBackGroundColorOpacity(0.4 * 255)

    self:setTouchEnabled(true)
    self:setSwallowTouches(true)
    self:addTouchEventListener(handler(self, self.onTouchBackGroundEvent))
end

function ViewBase:onTouchBackGroundEvent(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._backGroundTouchCallBack then
        self._backGroundTouchCallBack()
    end
end

function ViewBase:setBackGroundTouchCallBack(callBack)
    if type(callBack) ~= "function" then
        return
    end
   self._backGroundTouchCallBack = callBack
end

function ViewBase:setBackGroundTouchEnabled(bEnable)
    self:setTouchEnabled(bEnable)
end

function ViewBase:initCSB(csbPath)
    if self._csbRoot then
        self._csbRoot:removeSelf()
    end
    local isFullScreen, size = self:isFullScreen()
    if isFullScreen then
        self._csbRoot = cc.CSLoader:createNodeWithVisibleSize(csbPath)
        self:setContentSize(self._csbRoot:getContentSize())
    else
        self._csbRoot = cc.CSLoader:createNode(csbPath)
        if size then
            self:setContentSize(size)
        else
            self:setContentSize(self._csbRoot:getContentSize())
        end
    end
    self._csbRoot:setAnchorPoint(0, 0)
    self:addChild(self._csbRoot)
end

function ViewBase:getCSBPath()
    
end

function ViewBase:onInitCSB()
    local csbPath = self:getCSBPath()
    if type(csbPath) ~= "string" then
        return
    end
    self:initCSB(csbPath)
end

function ViewBase:getBindingInfo()
    
end

function ViewBase:getBindingRegex()
    
end

function ViewBase:onBindUI()
    local bindingInfo = self:getBindingInfo()
    if self:checkGetInfoIdentify(bindingInfo) then
        XH.BindUITool.bindTo(self, self._csbRoot, bindingInfo, self:getBindingRegex())
    end
end

function ViewBase:scheduleUpdate(callback, interval)
    return self:schedule(callback, interval)
end

function ViewBase:isFullScreen()
    return true
end

function ViewBase:onEnter()
end

function ViewBase:onExit()
    
end

function ViewBase:onEnterTransitionFinish()
end

function ViewBase:onExitTransitionStart()
end

function ViewBase:onCleanup()
    self:removeAllCallback()
end

-- 检验获取到的table返回值合法性
function ViewBase:checkGetInfoIdentify(getTableInfo)
    if getTableInfo == nil or type(getTableInfo) ~= "table" then
        return false
    end
    return true
end

function ViewBase:removeAllCallback()
    self:onClearProxyEvents()
    self:_onRemoveAllScheduleIDs()
end

function ViewBase:close()
    local tempCallBack = self.afterCloseCallBack
    self:removeAllCallback()
    if self.closeSelf then
        self:closeSelf()
    else
        self:onBeforeClose()
        self:removeSelf()
    end
    if tempCallBack then
        tempCallBack(self)
    end
end

function ViewBase:onBeforeClose()
    
end

return ViewBase