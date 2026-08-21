local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:onMsgTotalResult(msgData)
    if not msgData.show then
        return
    end

    self:setBigWinLostData(nil)

    local param = {}
    param.type = 0
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = { }
    param.totalScore = { }
    param.scoreDes = { }
    param.scores = { }
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(CF.roomData:getPlayerDataBySeatId(seat))
            local score = 0
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score
            param.scores[seat] = msgData.boxRoomTotalWinLost[seat]
        end
    end
    CF.roomData:setIsGameOver(msgData.show)
	if msgData.show and param.playCount <  param.maxCount then
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
        self:setBigWinLostData(nil)
	elseif msgData.show then
        self:setBigWinLostData(param)
	end
end

return BigWinLostModule