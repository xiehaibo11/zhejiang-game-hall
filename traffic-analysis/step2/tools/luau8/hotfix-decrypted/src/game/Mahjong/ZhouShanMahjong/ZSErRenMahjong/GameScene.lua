local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["ActionBtnWindow"] = {path = "Modules.GameLayer.ActionBtnWindow", zOrder = 25}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("ActionBtnWindow")
end

return GameScene�