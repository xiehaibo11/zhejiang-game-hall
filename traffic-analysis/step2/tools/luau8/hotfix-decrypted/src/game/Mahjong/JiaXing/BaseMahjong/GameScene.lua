local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.BasicMahjong.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["TableInfoUI"] = {path = "Modules.GameLayer.TableInfoUI", zOrder = 25}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("TableInfoUI")
end

return GameScene�