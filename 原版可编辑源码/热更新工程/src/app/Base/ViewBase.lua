local ViewBase = class("ViewBase", function()
    return ccui.Layout:create()
end)
local ViewAniConfig = import(".ViewAniConfig")

XH.EventReceive.extend(ViewBase)
XH.ScheduleInterface.extend(ViewBase)

function ViewBase:ctor()
    self:_initScheduleIDs()
    self:onInitCSB()
    self:onBindUI()
    self:startEnterAni()

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

function ViewBase:startEnterAni()
    if self:getAniConfig() == nil then
        return
    end
    -- 如果有需要变更的话这里加type判断
    self:playPopAni()
end

function ViewBase:playPopAni()
    local aniConfig = self:getAniConfig()
    if aniConfig == nil then
        return
    end
    local showAniConfig = ViewAniConfig.AniConfig[aniConfig.aniType]
    if showAniConfig == nil then
        return
    end
    for i = 1, #showAniConfig do
        if showAniConfig[i].popJson then
            local popNode = aniConfig.popNode
            popNode:tryAddLuaComponent(
                cc.ext.CompSpineAction,
                {jsonFilePath = showAniConfig[i].popJson, animationName = showAniConfig[i].animationName, boneName = showAniConfig[i].boneName, slotName = showAniConfig[i].slotName}
            )
        elseif showAniConfig[i].path then
            local rootNode = aniConfig.rootNode
            if rootNode then
                local bgSize = rootNode:getContentSize()
                local pos = {
                    [ViewAniConfig.Pos.BOTTOM] = cc.p(bgSize.width / 2, bgSize.height / 2),
                    [ViewAniConfig.Pos.LEFTTOP] = cc.p(0, bgSize.height),
                    [ViewAniConfig.Pos.RIGHTTOP] = cc.p(bgSize.width, 0),
                    [ViewAniConfig.Pos.LEFTDOWN] = cc.p(0, bgSize.height),
                    [ViewAniConfig.Pos.RIGHTDOWN] = cc.p(bgSize.width, 0)
                }

                local tcbkNode = cc.Node:create()
                rootNode:addChild(tcbkNode)
                tcbkNode:setPosition(pos[showAniConfig[i].pos])
                XH.SpineManager:playAni(tcbkNode, showAniConfig[i].path, showAniConfig[i].aniName, showAniConfig[i].aniMation, showAniConfig[i].loop)
            end
        elseif showAniConfig[i].btnJson then
            local btnList = aniConfig.btnList
            if btnList ~= nil and type(btnList) == "table" then
                for j = 1, #btnList do
                    -- btnList[j]:setScale(0)
                    -- XH.SysTool.performDelayOnce(function()
                    --     if self and not tolua.isnull(self) then
                    --         cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(18/30, 1)), cc.FadeIn:create(18/30))
                    --         -- btnList[j]:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = showAniConfig[i].btnJson, animationName = showAniConfig[i].animationName, boneName = showAniConfig[i].boneName, slotName = showAniConfig[i].slotName })
                    --     end
                    -- end, (8 + (j - 1) * 6) / 30)
                    local delay = (12 + (j - 1) * 6) / 30
                    local time = 18 / 30
                    btnList[j]:setScale(0)
                    btnList[j]:setOpacity(255)
                    btnList[j]:runAction(cc.Sequence:create(cc.DelayTime:create(delay), cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(time or 0.2, 1)), cc.FadeIn:create(time or 0.2))))
                end
            end
        end
    end
end

-- 动画类型，根节点，弹窗节点，按钮节点（依次弹出）
function ViewBase:getAniConfig()
    return nil
end

return ViewBase
