local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.BigWinLost.Module")

--大结束
function BigWinLostModule:onMsgTotalResultEx(msgData)
    self:setBigWinLostData(nil)

    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
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
            
            local tmpStrType = {"胡牌次数 " .. msgData.maxHuCount[seat],
                                "爆头次数 " .. msgData.maxBaoTouTimes[seat],
                                "飘财次数 " .. msgData.maxPiaoCaiTimes[seat],
                                "财神次数 " .. msgData.maxTakeJokerTimes[seat]}
            param.scoreDes[seat] = tmpStrType
        end
    end
    
    param.bigWinnerSeat = self:getBigWinnerSeatByScore(param.totalScore)
    param.over = msgData.over
    CF.roomData:setCanContinueBool(false)
    
    CF.roomData:setIsGameOver(msgData.show)
    if msgData.show and param.playCount <  param.maxCount and not msgData.over then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif msgData.show then
        self:setBigWinLostData(param)
    end
end

return BigWinLostModule