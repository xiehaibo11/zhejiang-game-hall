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
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score
            local tmpStrType = {}
            local result = {msgData.nWinByOwn[seat], msgData.nJiePaoNum[seat], msgData.nDiscardNum[seat], msgData.nChengBaoNum[seat], msgData.nTaoHuaNum[seat], msgData.nYaPoNum[seat]}
            for i, v in ipairs(CF.GameDefine.totalResultInfoStr[gameid]) do
                tmpStrType[i] = v .. "x" .. result[i]
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

return BigWinLostModule