local GameScene = CF.gameClass("GameScene", "game.BaseCardGame.GameScene")

function GameScene:ctor()
    GameScene.super.ctor(self)
end

function GameScene:getViewsConfig()
    local viewsConfig = GameScene.super.getViewsConfig(self)
    viewsConfig.WinLostView = {path = "Modules.WinLost.View", zOrder = 48}
    viewsConfig.GameLayer = {path = "Modules.GameLayer.View", zOrder = 15}
    viewsConfig.MarkerView = {path = "Modules.Marker.View", zOrder = 45}
    return viewsConfig
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("WinLostView")
    self:addView("GameLayer")
    if not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer() then
        self:addView("MarkerView")
    end
end 
return GameScene