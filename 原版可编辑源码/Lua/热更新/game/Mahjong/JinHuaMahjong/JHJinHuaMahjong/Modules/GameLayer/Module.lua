local GameModule = CF.gameClass("GameModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
	local xyDealList = GameModule.super.getSubXYDealList(self)
	return xyDealList
end

return GameModule