local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:onMsgTotalResult(msgData)
    if not msgData.show then
        return
    end

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

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(player)
            local score = 0
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score
            local tmpStrType = {}
            if #msgData.maxNewResult ~= 0 then
                tmpStrType[#tmpStrType + 1] = "最高 " .. msgData.maxNewResult[seat][0] .. " 分"
                tmpStrType[#tmpStrType + 1] = "财神 " .. msgData.maxNewResult[seat][1] .. " 张"
                tmpStrType[#tmpStrType + 1] = "双翻 " .. msgData.maxNewResult[seat][2] .. " 次"
                tmpStrType[#tmpStrType + 1] = "自摸 " .. msgData.maxNewResult[seat][3] .. " 次"
                tmpStrType[#tmpStrType + 1] = "接炮 " .. msgData.maxNewResult[seat][4] .. " 次"
            else
                tmpStrType[#tmpStrType + 1] = "胡 " .. msgData.maxHuCount[seat] .. " 次"
                tmpStrType[#tmpStrType + 1] = "最大 " .. msgData.maxFanNum[seat] .. " 番"
            end
            param.scoreDes[seat] = tmpStrType
        end
    end
    param.bigWinnerSeat = self:getBigWinnerSeatByScore(param.totalScore)
    CF.roomData:setIsGameOver(msgData.show)
    if msgData.show and not CF.roomData:getIsHaveResult() then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif msgData.show then
        self:setBigWinLostData(param)
    end

    CF.game:getModule("GameLayer"):clearAllTableInfo()
end


return BigWinLostModule
