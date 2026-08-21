local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)

    self._curTaitouhuQuanshu = 0    -- 抬头胡当前圈数

    self._bHuangFan = false         -- 计算时是否显示黄番
    self._huangFanCnt = 0           -- 黄番个数

    -- 承包相关
    self._chenBaoREJECT = false
    self._chenBaoInfo = {}
    self._followSanTan = false      -- 硬自摸三摊选择跟打

    self._curActionState = 0
    self._drawCnt = 0               -- 荒牌数
    self._huType = 0                -- 胡牌类型（见Mah.HuType）
    self._BuyScore = {}
    self._maxHuFanWuJiang = {} --最大倍数 大结束
    self._firstBanker = -1          -- 首庄
end

-- 设置当前圈数
function GameData:setCurQuanShu(numQuanShu)
    self._curTaitouhuQuanshu = numQuanShu
end

function GameData:getCurQuanShu()
    return self._curTaitouhuQuanshu
end

-- 黄番个数
function GameData:setHuangFan(bHuangFan, huangFanCnt)
    self._bHuangFan = bHuangFan
    self._huangFanCnt = huangFanCnt
end

function GameData:getHuangFan()
    return self._bHuangFan,self._huangFanCnt
end

--设置承包跟不跟
function GameData:setChengBaoREJECT(isREJECT)
    self._chenBaoREJECT = isREJECT
end

--获取承包跟不跟
function GameData:getChengBaoREJECT()
    return self._chenBaoREJECT or false
end

function GameData:setChengBaoInfo(data)
    self._chenBaoInfo = data
end

function GameData:getChengBaoInfo()
    return self._chenBaoInfo or {}
end

function GameData:setState(state)
    self._curActionState = state 
end

function GameData:getState(state)
    return self._curActionState 
end

-- 荒牌数
function GameData:setDrawCnt(drawCnt)
    self._drawCnt = drawCnt
end

function GameData:getDrawCnt()
    return self._drawCnt
end

function GameData:setHuActType(huType)
    self._huType = huType
end

function GameData:getHuActType()
    return self._huType
end

function GameData:setBuyScore(buyScore)
    self._BuyScore = buyScore
end

function GameData:setBuyScoreBySeat(seat, buyScore)
    self._BuyScore[seat] = buyScore
end

function GameData:getBuyScore()
    return self._BuyScore
end

function GameData:getBuyScoreBySeat(seat)
    return self._BuyScore[seat] or 0
end

function GameData:setMaxHuFanWuJiang(seat, maxHuFan)
    self._maxHuFanWuJiang[seat] = maxHuFan
end

function GameData:getMaxHuFanWuJiang(seat)
    return self._maxHuFanWuJiang[seat] or 0
end

function GameData:clearMaxHuFanWuJiang()
    self._maxHuFanWuJiang = {}
end

function GameData:setFirstBanker(firstBanker)
    self._firstBanker = firstBanker
end

function GameData:getFirstBanker()
    return self._firstBanker
end

return GameData)