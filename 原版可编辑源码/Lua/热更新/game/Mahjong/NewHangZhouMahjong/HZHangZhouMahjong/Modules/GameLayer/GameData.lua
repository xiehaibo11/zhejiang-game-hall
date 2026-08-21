local GameData = CF.gameClass("GameData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._nBaseScore = 1
    self._fortyTablets = false
    self._tAllPlayerScore = {}
    self._tuoDiScore = 0
    self._tAheadData = {}
    self._tSeattLocal = {}
    self._tLocaltSeat = {}
    self._nTablet = 0
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

-- 提前开局数据
function GameData:setAheadData(tAheadData)
    self._tAheadData = tAheadData or {}
end

-- 提前开局数据
function GameData:getAheadData()
    return self._tAheadData
end

-- 当前提前开局状态
function GameData:setAheadState(sFlag)
    if not self._tAheadData then
        return
    end
    self._tAheadData.sCurrentFlag = sFlag
end

-- 当前提前开局状态
function GameData:getAheadState()
    if not self._tAheadData then
        return
    end
    return self._tAheadData.sCurrentFlag
end

-- 获取提前开局椅子数
function GameData:getAheadChairs()
    if not self._tAheadData or self._tAheadData.sCurrentNum == 1 then
        return CF.roomData:getChairs()
    end
    return self._tAheadData.sCurrentNum
end

-- 提前开局位置切换
function GameData:setLocalToSeat(tLocaltSeat)
    self._tLocaltSeat = clone(tLocaltSeat or  {})
end

function GameData:getLocalToSeat()
    return self._tLocaltSeat or {}
end

-- 提前开局位置切换
function GameData:setSeatToLocal(tSeattLocal)
    self._tSeattLocal = clone(tSeattLocal) or {}
end

function GameData:getSeatToLocal()
    return self._tSeattLocal or {}
end

-- 提前开始以后处理
function GameData:onAheadStartEnd()
    local aheadChairs = self:getAheadChairs()
    local localseats = {[2] = {2, 4}, [3] = {2, 3, 1}}
    local selfseat = CF.roomData:getSelfSeat()
    local seattlocal = {}
    local localtseat = {}
    local allSeat = {}
    local oldLocalSeat = {}
    local players = CF.roomData:getPlayerDatas()
    for _, player in pairs(players) do
        local seat = player:getSeat()
        table.insert(allSeat, seat)
    end
    table.sort(allSeat)
    local sindex = 1
    local lindex = 1
    for i = 1, #allSeat do
        if allSeat[i] == selfseat then
            sindex = i
            break
        end
    end
    -- 保存转换位置
    while lindex <= #localseats[aheadChairs] do
        seattlocal[allSeat[sindex]] = localseats[aheadChairs][lindex]
        localtseat[localseats[aheadChairs][lindex]] = allSeat[sindex]
        sindex = sindex >= #allSeat and 1 or sindex + 1
        lindex = lindex + 1
    end

    for i = 1, #allSeat do
        if allSeat[i] ~= selfseat then
            local tOld = {}
            tOld.oldlocal = CF.roomData:seatToLocal(allSeat[i])
            tOld.oldseat = allSeat[i]
            table.insert(oldLocalSeat, tOld)
        end
    end
    
    self:setLocalToSeat(localtseat)
    self:setSeatToLocal(seattlocal)
    CF.roomData.seatToLocal = function (selfEx,seat)
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if not gameData:getAheadState() then
            return CF.roomData.super.seatToLocal(selfEx, seat)
        end
        local tSeattLocal = gameData:getSeatToLocal()
        if tSeattLocal and next(tSeattLocal) and tSeattLocal[seat]  then
            return tSeattLocal[seat]
        end
        return -1
    end

    CF.roomData.localToSeat = function (selfEx,localSeat)
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if not gameData:getAheadState() then
            return CF.roomData.super.localToSeat(selfEx, localSeat)
        end
        local tLocaltSeat = gameData:getLocalToSeat()
        if tLocaltSeat and next(tLocaltSeat) and tLocaltSeat[localSeat]  then
            return tLocaltSeat[localSeat]
        end
        return -1
    end

    CF.roomData.getChairs = function (selfEx)
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if not gameData:getAheadState() then
            return CF.roomData.super.getChairs(selfEx)
        end
        return gameData._tAheadData.sCurrentNum
    end
    for i = 1, #oldLocalSeat do
        CF.roomData:dispatchEvent( { name = "EVENT_PLAYERLIST_CHANGED" , msg = {seatId = oldLocalSeat[i].oldseat, oldLocal = oldLocalSeat[i].oldlocal}})
    end
end

return GameData