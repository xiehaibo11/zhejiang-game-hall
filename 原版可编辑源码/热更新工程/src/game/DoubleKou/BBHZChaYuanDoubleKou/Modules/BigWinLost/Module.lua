local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.DoubleKou.BaseDoubleKou.Modules.BigWinLost.Module")

function BigWinLostModule:onMsgTotalResult(msgData)
    if CF.roomData:isPlayBack() then
        return
    end
    self._gameData:setGameEndState(true)
    local msg = {}
    msg.show = msgData.show
    msg.roomid = CF.roomData:getRoomID()
    msg.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    msg.playCount = CF.roomData:getPlayCount()
    msg.maxCount = CF.roomData:getMaxPlayCount()
    msg.hostSeat = CF.roomData:getHostSeat()
    msg.players = {}
    msg.maxXian = {}
    msg.maxWin = {}
    msg.totalDoubleKou = {}
    msg.totalScore = {}
    local maxTotalScore = 0
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        msg.players[i] = clone(CF.roomData:getPlayerDataBySeatId(i))
        msg.maxXian[i] = msgData.maxXian[i]
        msg.maxWin[i] = msgData.maxWin[i]
        msg.totalDoubleKou[i] = msgData.totalDoubleKou[i]
        local totalScore = 0
        for j = 1, msgData.playCount do
            totalScore = totalScore + msgData.boxRoomTotalWinLost[i][j]
        end
        if maxTotalScore < totalScore then
            maxTotalScore = totalScore
        end
        msg.totalScore[i] = totalScore
    end
    msg.boxRoomTotalWinLost = msgData.boxRoomTotalWinLost
    msg.bigWinnerSeatList = self:getBigWinnerSeatList(msg.totalScore, maxTotalScore) or {}
    CF.roomData:setCanContinueBool(false)

    self:dispatchEvent({name = self.EVENT_GAME_TOTAL_RESULT, msg = msg})
end

function BigWinLostModule:getBigWinnerSeatList(totalScore, maxScore)
    local bigWinners = {}
    if maxScore <= 0 then
        return
    end
    for seat, tempScore in pairs(totalScore) do
        if tempScore == maxScore then
            table.insert(bigWinners, seat)
        end
    end
    return bigWinners
end

return BigWinLostModule