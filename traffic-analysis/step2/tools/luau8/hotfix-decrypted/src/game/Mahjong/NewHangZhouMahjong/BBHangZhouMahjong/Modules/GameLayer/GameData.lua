local GameData = CF.gameClass("GameData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._nTablet = 0
    self._nBaseScore = 1
    self._fortyTablets = false
    self._tAllPlayerScore = {}
end


-- 获取是多少片
function GameData:setTablets(nTablet)
    self._nTablet = nTablet or 0
end

-- 获取是多少片
function GameData:getTablets()
    return self._nTablet
end

-- 底分
function GameData:getBaseScoreEx()
    return self._nBaseScore
end

-- 底分
function GameData:setBaseScoreEx(nBaseScore)
    self._nBaseScore = nBaseScore or 1
end

-- 40片玩法
function GameData:getFortyTablets()
    return self._fortyTablets
end

-- 40片玩法
function GameData:setFortyTablets(bFortyTablets)
    self._fortyTablets = bFortyTablets or false
end

-- 所有玩家分数
function GameData:getAllPlayerScore()
    return self._tAllPlayerScore
end

-- 所有玩家分数
function GameData:setAllPlayerScore(_tAllPlayerScore)
    self._tAllPlayerScore = _tAllPlayerScore or {}
end

return GameData�