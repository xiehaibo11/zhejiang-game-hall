local GameLayer = CF.gameClass("GameLayer", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.View")

function GameLayer:onGameStart(event)
    GameLayer.super.onGameStart(self, event)
    self._sortCardBtn:setVisible(false)
end

return GameLayer
�