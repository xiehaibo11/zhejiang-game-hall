local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")

function GameView:initUI()
	GameView.super.initUI(self)

	self:initFollowMahAni()
	self:initTableInfoUI()
end

function GameView:removeFollowMahAni()
    if self._followMahAniLayer then
        self._followMahAniLayer:close()
        self._followMahAniLayer = nil
    end
end

function GameView:initFollowMahAni()
    self:removeFollowMahAni()
    self._followMahAniLayer = CF.gameRequire("Modules.GameLayer.FollowMahUI").new()
    self:addChild(self._followMahAniLayer)
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

return GameView