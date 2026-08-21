local GameData = CF.gameClass("GameData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._nBaseScore = 1
    self._fortyTablets = false
    self._tAllPlayerScore = {}
    self._tuoDiScore = 0
end

-- 底分
function GameData:getBaseScoreEx()
    return self._nBaseScore
end

-- 底分
function GameData:setBaseScoreEx(nBaseScore)
    self._nBaseScore = nBaseScore or 1
end

-- 托底分数
function GameData:setTuoDiScore(nScore)
    self._tuoDiScore = nScore or 0
end

-- 托底分数
function GameData:getTuoDiScore()
    return self._tuoDiScore
end

-- 拖底玩法
function GameData:getFortyTablets()
    return self._fortyTablets
end

-- 拖底玩法
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

-- 玩家分数
function GameData:setPlayerScore(nPlayerScore, nSeatid)
    self._tAllPlayerScore[nSeatid] = nPlayerScore
end

-- 玩家分数
function GameData:getPlayerScore(nSeatid)
    return self._tAllPlayerScore[nSeatid] or 0
end

return GameDatax