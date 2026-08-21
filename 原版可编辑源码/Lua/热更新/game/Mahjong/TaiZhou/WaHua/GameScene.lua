local GameScene = CF.gameClass("GameScene", "game.Mahjong.BasicMahjong.GameScene")

function GameScene:initUI()
    GameScene.super.initUI(self)
    self:removeView("RoomInfoView")
end

return GameScene