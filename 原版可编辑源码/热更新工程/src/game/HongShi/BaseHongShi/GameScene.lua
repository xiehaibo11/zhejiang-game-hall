local GameScene = CF.gameClass("HongShiGameScene", "game.GameBase.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["GameLayer"] = {path = "Modules.GameLayer.View", zOrder = 15}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("GameLayer")
end

return GameScene