local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)
    --权值数据保存
    self._powerDataList = {}
    --  做生意状态
    self._zuoShengYiState = 0
    self._tipCanChow = true
    self._tipChow = 0
    self._tipPung = 0
    self._tipMKong = 0
    --刚出牌玩家的座位号
    self._justPlaySeat = 0
end

function GameData:setMahPower(power)
    self._powerDataList = power
end

function GameData:getMahPower()
    return self._powerDataList
end

function GameData:setJustPlaySeat(seat)
    self._justPlaySeat = seat
end

function GameData:getJustPlaySeat()
    return self._justPlaySeat
end

function GameData:setZuoShengYiState(sState)
    self._zuoShengYiState = sState
end

function GameData:getZuoShengYiState()
    return self._zuoShengYiState
end

function GameData:setChengBaoTipCanChow(bcan)
    self._tipCanChow = bcan
end

function GameData:setChengBaoTipChow(sTipChows)
    self._tipChow = sTipChows
end

function GameData:setChengBaoTipPung(TipPung)
    self._tipPung = TipPung
end

function GameData:setChengBaoTipMKong(sTipMKong)
    self._tipMKong = sTipMKong
end

function GameData:getChengBaoTipCanChow()
    return self._tipCanChow
end

function GameData:getChengBaoTipChow()
    return self._tipChow
end

function GameData:getChengBaoTipPung()
    return self._tipPung
end

function GameData:getChengBaoTipMKong()
    return self._tipMKong
end

return GameData0