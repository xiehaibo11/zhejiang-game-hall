local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

--大结束
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
    param.hostSeat = CF.roomData:getHostSeat()
    param.bankerSeat = gameData:getBankerSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(CF.roomData:getPlayerDataBySeatId(seat))
            local score = 0
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score

            local tmpStrType = {}
            tmpStrType[#tmpStrType + 1] = "胡 " .. msgData.maxHuCount[seat] .. " 次"
            tmpStrType[#tmpStrType + 1] = "自摸 " .. msgData.m_iMaxNewResult[seat][0] .. " 次"
            tmpStrType[#tmpStrType + 1] = "接炮 " .. msgData.m_iMaxNewResult[seat][1] .. " 次"
            tmpStrType[#tmpStrType + 1] = "杠 " .. msgData.m_iMaxNewResult[seat][2] .. " 次"
            param.scoreDes[seat] = tmpStrType
        end
    end
    param.bigWinnerSeat = self:getBigWinnerSeatByScore(param.totalScore)
    CF.roomData:setIsGameOver(msgData.show)
    if msgData.show and not CF.roomData:getIsHaveResult() then
        CF.SysTool.performWithDelayGlobal(function()
            CF.game:getModule("GameLayer"):hideZhaMah()
            CF.roomData:setCanContinueBool(false)
            CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
            self:setBigWinLostData(nil)
        end, 1.5)
    elseif msgData.show then
        self:setBigWinLostData(param)
    end
end


return BigWinLostModule