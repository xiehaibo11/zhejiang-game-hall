local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._laoZhuangNum = 0
    self._mddData = {}
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._laoZhuangNum = 0
end

function GameData:setLaoZhuangNum(num)
    self._laoZhuangNum = num
end

function GameData:getLaoZhuangNum()
    return self._laoZhuangNum
end

function GameData:getHuSeat()
    return self._huSeats or {}
end

function GameData:setMddData(seat,flag)
    self._mddData[seat] = flag
end

function GameData:getMddData(seat)
    return self._mddData[seat]
end

return GameData