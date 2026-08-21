local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

GameData.EVENT_BASESCORE_CHANGED = "EVENT_BASESCORE_CHANGED"

function GameData:ctor()
    GameData.super.ctor(self)
    self._isPlayCircle = false --打圈数/局数
    self._isShengPaiJieDuan = false  --生牌阶段
    self._maiMaData = {}  --买马数据
    self._nLeftBanker = 0 --剩余庄数
    self._zhuaGangTouData = {} --抓杠头数据
    self._isMaiDi = {} --买底数据
    self._isPlayCaiShen = {}
    self._huSeat = -1
    self._scoreInfo = {}
end

--每小局游戏需要更新的数据
function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._isShengPaiJieDuan = false
    self._maiMaData = {}
    self._zhuaGangTouData = {}
    self._isMaiDi = {}
    self._isPlayCaiShen = {}
    self._huSeat = -1
    self._scoreInfo = {}
end

function GameData:getShengPaiJieDuan()
    return self._isShengPaiJieDuan
end

function GameData:setShengPaiJieDuan(isShengPaiJieDuan)
    self._isShengPaiJieDuan = isShengPaiJieDuan
end

function GameData:getMaiMaData()
    return self._maiMaData
end

function GameData:setMaiMaData(data)
    self._maiMaData = data
end

function GameData:getZhuaGangTouData()
    return self._zhuaGangTouData
end

function GameData:setZhuaGangTouData(data)
    self._zhuaGangTouData = data
end

function GameData:setMaiDiData(seat, isMaiDi)
    self._isMaiDi[seat] = isMaiDi
end

function GameData:getMaiDiData(seat)
    return self._isMaiDi[seat]
end

function GameData:setIsPlayCaiShen(seat, isPlayCaiShen)
    self._isPlayCaiShen[seat] = isPlayCaiShen
end

function GameData:getIsPlayCaiShen(seat)
    return self._isPlayCaiShen[seat]
end

function GameData:setScoreInfoData(huSeat, scoreInfo)
    self._huSeat = huSeat or -1
    self._scoreInfo = scoreInfo or {}
end

function GameData:getScoreInfoData(seat)
    return self._huSeat, self._scoreInfo
end

function GameData:setLeftBanker(nLeftBanker)
    self._nLeftBanker = nLeftBanker
end

function GameData:getLeftBanker()
    return self._nLeftBanker
end

function GameData:setPlayCircle(bPlayCircle)
    self._isPlayCircle = bPlayCircle
end

function GameData:isPlayCircle()
    return self._isPlayCircle
end

return GameData