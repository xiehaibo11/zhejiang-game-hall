local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")

function GameView:initUI()
	GameView.super.initUI(self)
	self:initTabelInfoView()
end

function GameView:removeTabelInfoView()
    if self._TableInfoView then
        self._TableInfoView:close()
        self._TableInfoView = nil
    end
end

function GameView:initTabelInfoView()
    self:removeTabelInfoView()
    self._TableInfoView = CF.gameRequire("Modules.GameLayer.TableInfoLayer").new()
    self:addChild(self._TableInfoView, 2)
end

return GameView