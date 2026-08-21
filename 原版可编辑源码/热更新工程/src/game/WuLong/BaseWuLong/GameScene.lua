local GameScene = CF.gameClass("GameScene", "game.BaseCardGame.GameScene")

function GameScene:ctor()
    GameScene.super.ctor(self)
end

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["GameLayer"] = {path = "Modules.GameLayer.View", zOrder = 15}
    viewsConf["MarkerView"] = {path = "Modules.Marker.View", zOrder = 45}
    viewsConf["CommonAniView"] = {path = "Modules.GameLayer.CommonAniView", zOrder = 61}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("GameLayer")
    self:addView("CommonAniView")
    if not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer() then
        self:addView("MarkerView")
    end
end

return GameScene