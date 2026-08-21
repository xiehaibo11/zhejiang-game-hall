local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:onMsgTotalResult(msgData)
    self:setBigWinLostData(nil)
    local gameData = CF.game:getModule("GameLayer"):getGameData()

    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.bankerSeat = gameData:getBankerSeat()
    param.hostSeat = CF.roomData:getHostSeat()

    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}

    local gameid = CF.roomData:getGameID()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(player)
            local score = 0
            local playCount = self:getPlayCount(msgData)
            for j = 1, playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score
            local tmpStrType = {}
            local result = self:getResultInfo(msgData, seat)
            for i, v in ipairs(CF.GameDefine.totalResultInfoStr[gameid]) do
                tmpStrType[i] = v .. "x" .. result[i]
            end
            param.scoreDes[seat] = tmpStrType
        end
    end
    param.bigWinnerSeat = self:getBigWinnerSeatByScore(param.totalScore)

    local bShow = self:isShow(msgData)
    CF.roomData:setIsGameOver(bShow)

    if bShow and not CF.roomData:getIsHaveResult() then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif bShow then
        self:setBigWinLostData(param)
    end
end

function BigWinLostModule:getResultInfo(msgData, seat)
    local result = {msgData.nWinByOwn[seat], msgData.nJiePaoNum[seat], msgData.nDiscardNum[seat], msgData.nChengBaoNum[seat], msgData.nLaZiNum[seat]}
    return result
end

function BigWinLostModule:getPlayCount(msgData)
    return msgData.playCount
end

function BigWinLostModule:isShow(msgData)
    return msgData.show
end

return BigWinLostModuleo	