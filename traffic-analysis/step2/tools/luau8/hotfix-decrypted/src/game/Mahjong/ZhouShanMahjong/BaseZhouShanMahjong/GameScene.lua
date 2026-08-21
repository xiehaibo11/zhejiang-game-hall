local GameScene = CF.gameClass("MahjongGameScene", "game.Mahjong.BasicMahjong.GameScene")

--function GameScene:getViewsConfig()
--    local viewsConfigList = GameScene.super.getViewsConfig(self)
--    viewsConfigList["TableInfoLayer"] = { path = "Modules.GameLayer.TableInfoLayer", zOrder = 21 }
--    viewsConfigList["AnimationLayer"] = { path = "Modules.GameLayer.AnimationLayer", zOrder = 22 }
--    return viewsConfigList
--end

--function GameScene:initUIEx()
--    self:addView("AnimationLayer")
--    self:addView("TableInfoLayer")
--end

--function GameScene:initUI()
--    GameScene.super.initUI(self)
--    self:initUIEx()
--end

return GameScene�