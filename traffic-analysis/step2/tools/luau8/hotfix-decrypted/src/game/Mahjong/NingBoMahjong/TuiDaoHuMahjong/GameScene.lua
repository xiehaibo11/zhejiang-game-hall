local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.NingBoMahjong.NBMahjongBase.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["SpecialAniLayer"] = {path = "Modules.GameLayer.SpecialAniLayer", zOrder = 30}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("SpecialAniLayer")
end

return GameScene�