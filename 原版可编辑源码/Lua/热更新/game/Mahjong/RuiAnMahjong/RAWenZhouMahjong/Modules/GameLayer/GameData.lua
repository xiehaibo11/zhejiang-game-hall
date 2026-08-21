local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._mddData = {}
    self._doubleData = {}
end

function GameData:setMddData(seat,flag)
    self._mddData[seat] = flag
end

function GameData:getMddData(seat)
    return self._mddData[seat]
end


function GameData:setDoubleData(seat,flag)
    self._doubleData[seat] = flag
end

function GameData:getDoubleData(seat)
    return self._doubleData[seat]
end

return GameData