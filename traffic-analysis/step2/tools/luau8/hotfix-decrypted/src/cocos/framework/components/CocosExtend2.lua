local Node = cc.Node

local function cloneSprite(original)
    -- 创建新精灵（核心：复制纹理数据）
    local newSprite = cc.Sprite:createWithSpriteFrame(original:getSpriteFrame())

    -- 复制基础属性
    newSprite:setAnchorPoint(original:getAnchorPoint())
    newSprite:setRotation(original:getRotation())
    newSprite:setScaleX(original:getScaleX())
    newSprite:setScaleY(original:getScaleY())
    newSprite:setPosition(original:getPosition())
    newSprite:setSkewX(original:getSkewX())
    newSprite:setSkewY(original:getSkewY())
    newSprite:setOpacity(original:getOpacity())

    -- 复制混合模式
    local blendFunc = original:getBlendFunc()
    newSprite:setBlendFunc(blendFunc.src, blendFunc.dst)

    -- 复制锚点
    newSprite:setVisible(original:isVisible())

    return newSprite
end

function Node:deepCloneNode()
    local newNode = self:clone()

    -- 递归克隆子节点
    local children = self:getChildren()
    for i, child in ipairs(children) do
        if string.find(child:getDescription(), "Node") then
        elseif string.find(child:getDescription(), "Sprite") then
            local clonedChild = cloneSprite(child)
            newNode:addChild(clonedChild)
        else
            local clonedChild = child:deepCloneNode() -- 递归调用
            newNode:addChild(clonedChild)
        end
    end
    return newNode
end

function Node:delayRemoveFromParent()
    local scheduleID
    scheduleID =
        cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
            if self and not tolua.isnull(self) then
                self:removeFromParent()
            end
        end,
        0,
        false
    )
    return scheduleID
end

function Node:getLuaComponent(componentName)
    if type(componentName) == "table" and componentName.__cname then
        componentName = componentName.__cname
    end
    return self._comps_ and self._comps_[componentName]
end

function Node:tryAddLuaComponent(component, params)
    local comp = self:getLuaComponent(component.__cname)
    return comp or self:addLuaComponent(component, params)
end

function Node:addLuaComponent(component, params)
    local obj = component.new(params)
    self._comps_ = self._comps_ or {}
    if self._comps_[obj:getName()] then
        self:removeLuaComponent(obj:getName())
    end

    obj:declareProperties()
    self._comps_[obj:getName()] = obj
    obj:setDelegate(self)

    local dependTypeList = obj:dependType()
    if dependTypeList then
        assert(table.indexof(dependTypeList, self[".classname"]), "component depend type error.")
    end

    obj:init(params)
    self:registerScriptHandler(
        function(event) -- 排除ScrollView tableView
            if event == "enter" then
                for _, v in pairs(self._comps_) do
                    v:onEnter()
                end
            elseif event == "exit" then
                for _, v in pairs(self._comps_) do
                    v:onExit()
                end
            elseif event == "enterTransitionFinish" then
                for _, v in pairs(self._comps_) do
                    v:onEnterTransitionFinish()
                end
            elseif event == "exitTransitionStart" then
                for _, v in pairs(self._comps_) do
                    v:onExitTransitionStart()
                end
            elseif event == "cleanup" then
                for _, v in pairs(self._comps_) do
                    v:onCleanup()
                end
            end
        end
    )
    return obj
end

function Node:removeLuaComponent(componentName)
    if type(componentName) == "table" and componentName.__cname then
        componentName = componentName.__cname
    end
    self._comps_ = self._comps_ or {}
    local obj = self._comps_[componentName]
    if obj then
        obj:onDestory()
        self._comps_[componentName] = nil
    end
end

function Node:removeLuaAllComponents()
    self._comps_ = nil
end

function Node:getAllLuaComponentNames()
    if self._comps_ then
        local result = "components:"
        for _, v in pairs(self._comps_) do
            result = string.format("%s,%s", result, v:getName())
        end
        return result
    else
        return "no component on this node."
    end
end

function Node:isNull()
    return not self or tolua.isnull(self)
end
�