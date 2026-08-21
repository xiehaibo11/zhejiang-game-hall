local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.BigWinLost.Module")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

--大结束
function BigWinLostModule:onMsgTotalResultEx(msgData)
    self:setBigWinLostData(nil)

    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = CF.roomData:getPlayCount()
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.bankerSeat = gameData:getBankerSeat()
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    local maxScore = 0

    if CF.roomData:getPlayCount() == 0 then
        return
    end
    local seat = -1
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local tmpPlayer = CF.roomData:getPlayerDataBySeatId(i)
        if tmpPlayer then
            seat = seat + 1
            param.players[seat] = clone(tmpPlayer)
            local score = 0
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[i][j]
            end
            param.totalScore[seat] = score
            maxScore = score > maxScore and score or maxScore
            local tmpStrType = {"胡牌次数 " .. msgData.maxHuCount[i], "最大番数 " .. msgData.maxFanNum[i]}
            if msgData.maxFanCount[seat] > 0 then
                tmpStrType[#tmpStrType + 1] = "".. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[i][1]] or ""
                for j = 2, msgData.maxFanCount[i] do
                    if j % 2 == 0 then
                        tmpStrType[#tmpStrType + 1] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[i][j]] or ""
                    else
                        tmpStrType[#tmpStrType] = tmpStrType[#tmpStrType] .. " " .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[i][j]] or ""
                    end
                end
            end
            param.scoreDes[seat] = tmpStrType
        end
    end
    param.over = msgData.show
    CF.roomData:setIsGameOver(msgData.show)

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}
    if msgData.show and not CF.roomData:getIsHaveResult() then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif msgData.show then
        self:setBigWinLostData(param)
    end
end

return BigWinLostModule