local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.BasicMahjong.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["TableInfoLayer"] = {path = "Modules.GameLayer.TableInfoLayer", zOrder = 20}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("TableInfoLayer")
end

return GameScene