local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._dynamicChairs = 0 --提前开局动态座位数
end

function GameData:setDynamicChairs(chairs)
    self._dynamicChairs = chairs
end

function GameData:getDynamicChairs()
    return self._dynamicChairs
end

return GameData