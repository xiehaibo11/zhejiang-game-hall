local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

--大结束
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
    param.hostSeat = CF.roomData:getHostSeat()
    param.bankerSeat = gameData:getBankerSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
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
            if #msgData.maxJiePaoNum ~= 0 then    --兼容性
                tmpStrType[#tmpStrType + 1] = "最高 " .. msgData.maxScoreOfTotal[seat] .. " 分"
                tmpStrType[#tmpStrType + 1] = "最大 " .. msgData.maxFanNum[seat] .. " 胡"    --龙港特有  
                tmpStrType[#tmpStrType + 1] = "赢分 " .. msgData.maxWinScoreNum[seat] .. " 次"
                tmpStrType[#tmpStrType + 1] = "自摸 " .. msgData.maxWinByOwnNum[seat] .. " 次"
                tmpStrType[#tmpStrType + 1] = "接炮 " .. msgData.maxJiePaoNum[seat] .. " 次"
            else
                tmpStrType[#tmpStrType + 1] = "最大 " .. msgData.maxFanNum[seat] .. " 胡"    --龙港特有
                tmpStrType[#tmpStrType + 1] = "胡 " .. msgData.maxHuCount[seat] .. " 次"
            end

            if msgData.maxFanCount[seat] > 0 then
                tmpStrType[#tmpStrType + 1] = "最大番 " .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][1]] or ""
                for j = 2, msgData.maxFanCount[seat] do
                    if j % 2 == 0 then
                        tmpStrType[#tmpStrType + 1] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or ""
                    else
                        tmpStrType[#tmpStrType] = tmpStrType[#tmpStrType] .. " " .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or ""
                    end
                end
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
end


return BigWinLostModule�