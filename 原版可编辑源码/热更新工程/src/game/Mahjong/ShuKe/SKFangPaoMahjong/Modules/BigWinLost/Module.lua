local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.BigWinLost.Module")

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

            local tmpStrType = {
            "自摸次数 x" .. msgData.ziMoCount[seat], 
            "接炮次数 x" .. msgData.jiePaoCount[seat], 
            "点炮次数 x" .. msgData.disCardCount[seat],
            "暗杠次数 x" .. msgData.cKong[seat],
            "直杠次数 x" .. msgData.mKong[seat],
            "补杠次数 x" .. msgData.tKong[seat],
            }

            param.scoreDes[seat] = tmpStrType
        end
    end

    param.bigWinnerSeat = self:calcBigWinnerSeat(param.totalScore)
    CF.roomData:setIsGameOver(msgData.show)
    if msgData.show and not CF.roomData:getIsHaveResult() then
        CF.SysTool.performWithDelayGlobal(function()
            CF.roomData:setCanContinueBool(false)
            CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
            self:setBigWinLostData(nil)
        end, 1)
    elseif msgData.show then
        self:setBigWinLostData(param)
    end
end

return BigWinLostModule