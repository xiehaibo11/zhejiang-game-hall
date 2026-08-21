local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.BasicMahjong.GameScene")

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["SpecialAniLayer"] = {path = "Modules.GameLayer.SpecialAniLayer", zOrder = 25}
    viewsConf["FollowMahUI"] = {path = "Modules.GameLayer.FollowMahUI", zOrder = 26}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:addView("SpecialAniLayer")
    self:addView("FollowMahUI")
end

return GameScene