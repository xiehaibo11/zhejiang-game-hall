local GameData = CF.gameClass("GameData", "game.Mahjong.JiaXing.BaseMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)

    self._tmpChowLmtMahs = { }
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._tmpChowLmtMahs = { }
    self._realChowLmtMah = 0
end

function GameData:setTmpChowLmtMahs(mahs)
    if not mahs then
        return
    end
    self._tmpChowLmtMahs = mahs or {}
end

function GameData:getTmpChowLmtMahs()
    return self._tmpChowLmtMahs or {}
end

function GameData:setRealChowLmtMah(mah)
    if not mah then
        return
    end
    self._realChowLmtMah = mah
end

function GameData:getRealChowLmtMah()
    return self._realChowLmtMah or 0
end

return GameData