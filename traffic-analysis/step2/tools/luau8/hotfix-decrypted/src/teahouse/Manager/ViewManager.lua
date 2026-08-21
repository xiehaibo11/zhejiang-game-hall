---@class ViewManager 视图管理
local ViewManager = class("ViewManager")

---@param path string 模块路径
function ViewManager:ctor(path)
    ---模块路径
    self._path = path

    ---视图表
    self._views = {}
end

function ViewManager:reset()
    self._views = {}
end

---更新节点
function ViewManager:updateRootNode()
    local rootNode = TeaHouse.getRootNode()
    if rootNode == nil then
        return
    end
    local scene = cc.Director:getInstance():getRunningScene()
    if scene == rootNode:getParent() then
        return
    end

    rootNode:removeSelf()
    scene:addChild(rootNode, 9999)
end

---创建视图
---@param viewName string 视图名
---@return View
function ViewManager:createView(viewName, ...)
    local ok, View = xpcall(function()
        return require(self._path .. viewName)
    end, __G__TRACKBACK__)
    if not ok then
        return nil
    end

    return View.new(...)
end

function ViewManager:getViewConfig(viewName)
    local ViewsConfig = require("teahouse.Config.ViewsConfig")
    return ViewsConfig[viewName]
end

---打开视图
---@param viewName string 视图名
---@param zOrder number
---@return View
function ViewManager:openView(viewName, zOrder, ...)
    local rootNode = TeaHouse.getRootNode()
    if rootNode == nil then
        return nil
    end

    ---@type View
    local view = self:createView(viewName, ...)
    view:setName(viewName)
    local viewConfig = self:getViewConfig(viewName)
    if viewConfig then
        local viewZOrder = zOrder or viewConfig.ZOrder
        local sceneTag = TeaHouse.getTopSceneTag()
        local scene = TeaHouse.getSceneByTag(sceneTag)
        if not scene then
            rootNode:addChild(view, zOrder or 0)
        else
            scene:addChild(view, zOrder or 0)
        end
    else
        rootNode:addChild(view, zOrder or 0)
    end
    
    self._views[viewName] = view
    return view
end

---关闭视图
---@param viewName string 视图名
function ViewManager:closeView(viewName)
    local rootNode = TeaHouse.getRootNode()
    if rootNode == nil then
        return false
    end
    local view = rootNode:getChildByName(viewName)
    if view == nil then
        self:_checkView(viewName)
        return false
    end

    view:removeSelf()
    self._views[viewName] = nil
    return true
end

---显示视图
---@param viewName string 视图名
function ViewManager:showView(viewName)
    local rootNode = TeaHouse.getRootNode()
    if rootNode == nil then
        return false
    end
    local view = rootNode:getChildByName(viewName)
    if view == nil then
        self:_checkView(viewName)
        return false
    end

    view:setVisible(true)
    return true
end

---隐藏视图
---@param viewName string 视图名
function ViewManager:hideView(viewName)
    local rootNode = TeaHouse.getRootNode()
    if rootNode == nil then
        return false
    end
    local view = rootNode:getChildByName(viewName)
    if view == nil then
        self:_checkView(viewName)
        return false
    end

    view:setVisible(false)
    return true
end

---关闭所有视图除了排除项
---@param excludes table 排除项
function ViewManager:closeAllViewsInExclude(excludes)
    for viewName, _ in pairs(self._views) do
        local isExclude = false
        for _, exclude in ipairs(excludes) do
            if viewName == exclude then
                isExclude = true
                break
            end
        end
        if not isExclude then
            self:closeView(viewName)
        end
    end
end

---获取视图
---@param viewName string 视图名
---@return View
function ViewManager:getView(viewName)
    local rootNode = TeaHouse.getRootNode()
    if rootNode == nil then
        return nil
    end
    local view = rootNode:getChildByName(viewName)
    if view == nil then
        self:_checkView(viewName)
        return nil
    end
    return view
end

---检查视图
---@param viewName string 视图名
function ViewManager:_checkView(viewName)
    if self._views[viewName] == nil then
        return
    end
    print("[ViewManager Error] " .. viewName .. " check error!")
    self._views[viewName] = nil
end

return ViewManager