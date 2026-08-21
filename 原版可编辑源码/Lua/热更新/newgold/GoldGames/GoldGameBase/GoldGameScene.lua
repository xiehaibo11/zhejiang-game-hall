local GoldGameScene = NG.GAME.gameClass("GoldGameScene", NG.SceneBase)

function GoldGameScene:ctor(isRelink)
    GoldGameScene.super.ctor(self)
    self._isRelink = isRelink
    self._layerList = {}
    self:initUI()
end

function GoldGameScene:getLayersConfig()
    return {
        BasicSysInfoLayer = {path = "Modules.Basic.BasicSysInfoLayer", zOrder = 2},
        BasicBtnsLayer = {path = "Modules.Basic.BasicBtnsLayer", zOrder = 20},
    }
end

function GoldGameScene:initUI()
    self:addLayer("TableInfoView")
    self:addLayer("BasicSysInfoLayer")
    self:addLayer("BasicBtnsLayer")
end

function GoldGameScene:removeAllViewsAllCallback()
    for _, view in pairs(self._layerList) do
        -- 添加保护，防止发生一些异常时无法正常退出游戏场景
        if view and not tolua.isnull(view) and view.removeAllCallback then
            view:removeAllCallback()
        end
    end
end

function GoldGameScene:addLayer(layerName, zOrder, ...)
    if self._layerList[layerName] then
        return
    end
    local layersConf = self:getLayersConfig()
    local layerConf = layersConf[layerName]
    if not layerConf then
        return
    end
    local view = NG.GAME.gameRequire(layerConf.path).new(...)
    zOrder = zOrder or layerConf.zOrder
    self:addChild(view, zOrder)
    self._layerList[layerName] = view
end

function GoldGameScene:removeLayer(layerName)
    if not self._layerList[layerName] then
        return
    end
    self._layerList[layerName]:close()
    self._layerList[layerName] = nil
end

function GoldGameScene:removeAllLayers()
    for _, view in pairs(self._layerList) do
        view:close()
    end
    self._layerList = {}
end

function GoldGameScene:onEnter()
    GoldGameScene.super.onEnter(self)
    cc.Director:getInstance():setAnimationInterval(1 / 45)
end

function GoldGameScene:onExit()
    GoldGameScene.super.onExit(self)
    cc.Director:getInstance():setAnimationInterval(1 / 30)
    display.removeUnusedSpriteFrames()
end

function GoldGameScene:onCleanup()
    self:removeAllLayers()
    GoldGameScene.super.onCleanup(self)
end

function GoldGameScene:onEnterTransitionFinish()
    GoldGameScene.super.onEnterTransitionFinish(self)
end

return GoldGameScene