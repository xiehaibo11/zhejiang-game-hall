local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")

function GameView:initUI()
    GameView.super.initUI(self)
    self:initSpecialView()
end

function GameView:removeSpecialView()
    if self._SpeicalView then
        self._SpeicalView:close()
        self._SpeicalView = nil
    end
end

function GameView:initSpecialView()
    self:removeSpecialView()
    self._SpeicalView = CF.gameRequire("Modules.GameLayer.SpecialAniLayer").new()
    self:addChild(self._SpeicalView, 2)
end

return GameView0