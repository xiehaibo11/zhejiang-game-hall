local ViewManager = class("ViewManager")
local ViewManagerConfig = require("app.Manager.ViewManagerConfig")

ViewManager.EVENT_OPEN_VIEW = "EVENT_OPEN_VIEW"
ViewManager.EVENT_CLOSE_VIEW = "EVENT_CLOSE_VIEW"

function ViewManager:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    self._viewDataList = {}
    self._cacheViews = {}
    self._viewsConfig = {}
end

function ViewManager:getInstance()
    if not ViewManager._instance then
        ViewManager._instance = ViewManager.new()
    end
    return ViewManager._instance
end

function ViewManager:dispatchOpenEvent(viewName, zOrder, ...)
    self:dispatchEvent({name = ViewManager.EVENT_OPEN_VIEW, zOrder = zOrder, viewName = viewName}, ...)
end

function ViewManager:dispatchCloseEvent(viewName, ...)
    self:dispatchEvent({name = ViewManager.EVENT_CLOSE_VIEW, viewName = viewName}, ...)
end

function ViewManager:addViewConfig(viewName, config)
    self._viewsConfig[viewName] = config
end

--- 创建视图
function ViewManager:createView(viewName, viewPath, ...)
    local ok, View = xpcall( function()
        return require(viewPath)
    end , __G__TRACKBACK__)
    if not ok then
        return nil
    end

    local newView = View.new(...)
    newView:setName(viewName)
    return newView
end

function ViewManager:getViewConfig(viewName)
    if self._viewsConfig[viewName] then
        return self._viewsConfig[viewName]
    end
    local ViewsConfig = require("app.Config.ViewsConfig")
    return ViewsConfig[viewName]
end

function ViewManager:isFullScreenView(viewName)
    if not viewName then
        return false
    end
    local viewConfig = XH.viewManager:getViewConfig(viewName)
    if viewConfig.IsFullScreen then
        return true
    end
    return false
end

function ViewManager:isForbidShow(viewName)
    for k, v in pairs(ViewManagerConfig.MultViews) do
        local ViewsConfig = require("app.Config.ViewsConfig")
        if ViewsConfig[k] == nil then
            return false
        end
        local sceneTag = ViewsConfig[k].BindScene or XH.SceneManager:getInstance():getTopSceneTag()
        local view = self:getView(sceneTag, k)
        if view and view.isForbidOtherView and view:isForbidOtherView() then
            for i = 1, #v do
                if v[i] == viewName then
                    return true
                end
            end
        end
    end
    return false
end

--- 打开视图
function ViewManager:openView(viewName, zOrder, ...)
    if self:isForbidShow(viewName) then
        print("viewmanager isForbidShow")
        return
    end
    if XH.isEmbeddedApp() then
        local param = XH.PluginModule.getStartParams()
        if viewName == "XiaGuangView" then
            XH.TipTool.showToast("暂不支持，敬请期待~")
            return
        elseif viewName == "SxvipView" then
            XH.TipTool.showToast("请前往外部查看牌局统计~")
            return
        elseif viewName == "SxvipDailyGiftView" then
            XH.TipTool.showToast("请前往外部领取每日礼包~")
            return
        elseif viewName == "ShopView" then
            viewName = "GoldHallShopView"
        elseif param.nSupportVip == 0 and (viewName == "SxvipPrivilegeView" or viewName == "SxvipShopView") then
            XH.TipTool.showToast("请前往外部大厅购买或查看相关VIP特权~")
            return
        end
    end
    local viewConfig = self:getViewConfig(viewName)
    if not viewConfig or not viewConfig.Path then
        return
    end
    XH.bugly.buglyLog("viewsOpen", viewName)
    local viewZOrder = zOrder or viewConfig.ZOrder
    local sceneTag = viewConfig.BindScene or XH.SceneManager:getInstance():getTopSceneTag()
    return self:_openView(
        sceneTag,
        viewName,
        viewConfig.Path,
        viewZOrder,
        ...)
end

function ViewManager:_openView(sceneTag, viewName, viewPath, zOrder, ...)
    -- 不允许打开相同界面
    local view = self:getView(sceneTag, viewName)
    if view then
        return view
    end

    local scene = XH.SceneManager:getInstance():getSceneByTag(sceneTag)
    if not scene then
        return
    end

    self:dispatchOpenEvent(viewName, zOrder)

    view = self:createView(viewName, viewPath, ...)
    self:bindViewCloseFunc(sceneTag, view)
    scene:addChild(view, zOrder or 0)
    if view.onOpen then
        view:onOpen()
    end
    self._viewDataList[sceneTag] = self._viewDataList[sceneTag] or {}
    self._viewDataList[sceneTag][viewName] = view
    return view
end

function ViewManager:clearSceneViews(sceneTag)
    local views = self._viewDataList[sceneTag] or {}
    for _, view in pairs(views) do
        if view:getParent() then
            view:removeSelf()
        end
    end
    self._viewDataList[sceneTag] = {}
end

function ViewManager:getViewsCount(sceneTag)
    sceneTag = sceneTag or XH.SceneManager:getInstance():getTopSceneTag()
    local views = self._viewDataList[sceneTag] or {}
    return table.nums(views)
end

function ViewManager:bindViewCloseFunc(sceneTag, view)
    if not view then
        return 
    end
    view.closeSelf = function(viewModel)
        self:_closeView(sceneTag, viewModel:getName())
    end
end

--- 关闭视图
function ViewManager:closeView(viewName)
    self:_closeView(XH.SceneManager:getInstance():getTopSceneTag(), viewName)
    self:_checkOpenCacheView()
end

function ViewManager:_closeView(sceneTag, viewName)
    local sceneViews = self._viewDataList[sceneTag] or {}
    local view = sceneViews[viewName]
    if not view then
        return false
    end

    XH.bugly.buglyLog("viewsClose", viewName)
    if view.onBeforeClose then
        view:onBeforeClose()
    end
    view:removeSelf()
    sceneViews[viewName] = nil

    self:dispatchCloseEvent(viewName)
    return true
end

--- 获取视图
function ViewManager:getView(sceneTag, viewName)
    local sceneViews = self._viewDataList[sceneTag] or {}
    local view = sceneViews[viewName]
    if view == nil then
        return nil
    end
    return view
end

function ViewManager:_isOpeningCacheView()
    local topSceneTag = XH.SceneManager:getInstance():getTopSceneTag()
    if not self._viewDataList[topSceneTag] then
        return false
    end
    for _, viewData in pairs(self._cacheViews) do
        if self._viewDataList[topSceneTag][viewData.name] then
            return true
        end
    end
    return false
end

function ViewManager:addCacheView(viewName, zOrder)
    table.insert(self._cacheViews, {
        name = viewName,
        zOrder = zOrder
    })
    self:_checkOpenCacheView()
end

function ViewManager:_checkOpenCacheView()
    if not self:_isOpeningCacheView() then
        self:_openNextCacheView()
    end
end

function ViewManager:_openNextCacheView()
    if #self._cacheViews <= 0 then
        return
    end
    local openViewData = self._cacheViews[1]
    self:openView(openViewData.name, openViewData.zOrder)
    table.remove(self._cacheViews, 1)
end

function ViewManager:isViewExist(viewName)
    if not viewName then
        return false
    end
    local ViewsConfig = require("app.Config.ViewsConfig")
    local sceneTag = ViewsConfig[viewName].BindScene or XH.SceneManager:getInstance():getTopSceneTag()
    if self:getView(sceneTag, viewName) then
        return true
    end
    return false
end

function ViewManager:isViewExistWithoutListOnLobby(viewList)
    local sceneTag = XH.SceneManager:getInstance():getTopSceneTag()
    if sceneTag == XH.SCENE_TAG.LOBBY then
        self._viewDataList[sceneTag] = self._viewDataList[sceneTag] or { }
        for viewName, _ in pairs(self._viewDataList[sceneTag]) do
            if not ((viewList and viewList[viewName]) or viewName == nil or viewName == "") then
                return true
            end
        end
        return false
    end
    return true
end

return ViewManager�