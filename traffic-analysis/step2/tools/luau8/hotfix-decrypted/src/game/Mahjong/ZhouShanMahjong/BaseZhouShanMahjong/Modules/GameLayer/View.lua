local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")

function GameView:initUI()
    GameView.super.initUI(self)
	self:initTableInfoUI()
end
function GameView:removeTableInfoUI()
    if self._tableInfoLayer then
        self._tableInfoLayer:close()
        self._tableInfoLayer = nil
    end
end

function GameView:initTableInfoUI()
	if not CF.roomData:isGoldRoom() then
		self:removeTableInfoUI()
        self._tableInfoLayer = CF.gameRequire("Modules.GameLayer.TableInfoLayer").new()
        self:addChild(self._tableInfoLayer,2)
	end
end

return GameViewk