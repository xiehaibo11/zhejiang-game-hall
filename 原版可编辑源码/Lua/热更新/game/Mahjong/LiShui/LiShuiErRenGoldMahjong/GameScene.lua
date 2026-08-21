local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.BasicMahjong.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["MahInfoTaskLayer"] = {path = "Modules.GameLayer.MahInfoTaskLayer", zOrder = 30}
    viewsConf["DoubleHuLayer"] = {path = "Modules.GameLayer.DoubleHuLayer", zOrder = 30}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("MahInfoTaskLayer")
    self:addView("DoubleHuLayer")
end

return GameScene