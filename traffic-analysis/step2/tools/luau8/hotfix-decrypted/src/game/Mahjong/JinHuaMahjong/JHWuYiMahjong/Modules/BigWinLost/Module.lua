local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:ctor()
    BigWinLostModule.super.ctor(self)
end

function BigWinLostModule:onMsgTotalResult(msgData)
    self:setBigWinLostData(nil)
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.bankerSeat = CF.game:getModule("GameLayer"):getGameData():getBankerSeat()
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    local maxScore = 0

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
            maxScore = score > maxScore and score or maxScore

            local tmpStrType = {"胡 " .. msgData.maxHuCount[seat] .. " 次"}

            if msgData.maxFanCount[seat] > 0 then
                tmpStrType[#tmpStrType + 1] = "最大子 " .. (WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][1]] or "")
                for j = 2, msgData.maxFanCount[seat] do
                    if j % 2 == 0 then
                        tmpStrType[#tmpStrType + 1] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or ""
                    else
                        tmpStrType[#tmpStrType] = tmpStrType[#tmpStrType] .. " " .. (WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or "")
                    end
                end
            end
            param.scoreDes[seat] = tmpStrType
        end
    end

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}
    CF.roomData:setIsGameOver(msgData.show)

    if msgData.show and not CF.roomData:getIsHaveResult() then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif msgData.show then
        self:setBigWinLostData(param)
    end
end

return BigWinLostModuler
