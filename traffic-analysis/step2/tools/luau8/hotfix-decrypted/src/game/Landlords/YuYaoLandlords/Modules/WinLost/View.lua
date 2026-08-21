local GameWinLostLayer    = CF.gameClass("GameWinLostLayer", "game.Landlords.BaseLandlords.Modules.WinLost.View")

function GameWinLostLayer:initWinLostData()
    local msgData = self._gameData:getWinLostData()
    if not msgData then
        return
    end

    local iScores = msgData.iScore or {}

    --最后一局
    if CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount() then
        self:setContinueBtnState(false)
    else 
        self:setContinueBtnState(true)
    end

    self._sEndType = self:calEndType(iScores)

   for i = 1 , CF.roomData:getMaxPlayer() do 
        local localseat = CF.roomData:seatToLocal(i - 1)
        self:setPlayerScore(localseat, iScores[i-1])
    end
end

function GameWinLostLayer:calEndType(iScores)
    local selfSeat = CF.roomData:getSelfSeat()
    local ENT_TYPE = {WIN = 2, LOSE = 3}
    local isSelfWon = (iScores[selfSeat] or 0) >= 0
    if isSelfWon then
        return ENT_TYPE.WIN
    else
        return ENT_TYPE.LOSE
    end
end

return GameWinLostLayer