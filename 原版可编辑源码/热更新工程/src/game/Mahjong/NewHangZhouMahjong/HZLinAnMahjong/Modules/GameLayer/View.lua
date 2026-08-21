local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")

function GameView:initUI()
	GameView.super.initUI(self)
	self:initSpecialView()
end

function GameView:removeSpecialView()
    if self._specialView then
        self._specialView:close()
        self._specialView = nil
    end
end

function GameView:initSpecialView()
    self:removeSpecialView()
    self._specialView = CF.gameRequire("Modules.GameLayer.SpecialAniLayer").new()
    self:addChild(self._specialView, 2)
end

return GameView