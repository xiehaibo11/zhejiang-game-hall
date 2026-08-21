local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)
    self._mingMah = { }
    self._isPlayMingPaiAni = { }
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._isPlayMingPaiAni = { }
    for i = 1, CF.roomData:getMaxPlayer() do
        self._isPlayMingPaiAni[i] = 0
    end
end

function GameData:clearMahData(seat)
    GameData.super.clearMahData(self, seat)
    self._mingMah = { }
end

function GameData:getMingMah()
    return self._mingMah[1]
end

function GameData:setMingMah(data)
    data = data or CF.GameDefine.MAH_VALUE.BACK
    self._mingMah[#self._mingMah + 1] = data
end

return GameData