local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:analySinglePlayerData(msgData)
    local nSeat = msgData.nSeat
    local totalWinLost = {}
    totalWinLost.nSeat = msgData.nSeat
    totalWinLost.huCnt = msgData.huCnt
    totalWinLost.nCount = msgData.nCount
    totalWinLost.Fans = msgData.Fans
    totalWinLost.nTotalWinLost = msgData.nTotalWinLost
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    if msgData.huCnt == 0 then
        totalWinLost.maxFanNum = 0
    else
        local fanNums = 0
        for i = 1, #totalWinLost.Fans do
            local fanID = totalWinLost.Fans[i].nFanID
            local fanNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[fanID] or 0
            fanNums = fanNums + (fanNum * totalWinLost.Fans[i].nCount)
        end
        totalWinLost.maxFanNum = fanNums
    end    
    self._tTotalWinLost[nSeat] = totalWinLost
end

function BigWinLostModule:analyTotalResultMsg(msgData)
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = CF.roomData:getPlayCount()
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    local maxScore = 0
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local tmpTotalWinLost = self._tTotalWinLost[seat]
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(player)
            param.totalScore[seat] = tmpTotalWinLost.nTotalWinLost
            maxScore = tmpTotalWinLost.nTotalWinLost > maxScore and tmpTotalWinLost.nTotalWinLost or maxScore
            
            local tmpStrType = {}
            tmpStrType[#tmpStrType + 1] = "胡 " .. tmpTotalWinLost.huCnt .. " 次"
            tmpStrType[#tmpStrType + 1] = "最大 " ..  tmpTotalWinLost.maxFanNum .. " 分"
            param.scoreDes[seat] = tmpStrType
        end
    end

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}

    return param
end

function BigWinLostModule:getShowViewDelayTime()
    local delayTime = 2
    if CF.roomData:getPlayCount() == CF.roomData:getMaxPlayCount() then
        delayTime = 3
    end
    return delayTime
end

return BigWinLostModule