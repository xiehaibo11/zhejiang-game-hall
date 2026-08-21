local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.GameBase.Modules.BigWinLost.Module")

BigWinLostModule.EVENT_GAME_TOTAL_RESULT = "EVENT_GAME_TOTAL_RESULT"

function BigWinLostModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResult},
    }
end

function BigWinLostModule:onMsgTotalResult(msgData)
    if CF.roomData:isPlayBack() or CF.roomData:isGoldRoom() then
        return
    end
    local msg = {}
    msg.roomid = CF.roomData:getRoomID()
    msg.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    msg.playCount = CF.roomData:getPlayCount()
    msg.maxCount = CF.roomData:getMaxPlayCount()
    msg.hostSeat = CF.roomData:getHostSeat()
    msg.players = {}
    msg.nPlayerCount = msgData.nPlayerCount
    msg.sPlayCount = msgData.sPlayCount
    msg.sWinCount = msgData.sWinCount
    msg.sBoomCount = msgData.sBoomCount
    msg.iTotalScore = msgData.iTotalScore
    msg.nSpringCount = msgData.nSpringCount
    msg.totalScore = {}

    local maxTotalScore = 0
    local playerCount = msgData.nPlayerCount
    for i = 0, playerCount - 1 do
        msg.players[i] = clone(CF.roomData:getPlayerDataBySeatId(i))
        local totalScore = msgData.iTotalScore[i+1]
        if maxTotalScore < totalScore then
            maxTotalScore = totalScore
        end
        msg.totalScore[i] = totalScore
    end
    --斗地主用bigWinnerSeatList来返回数据，解决冠军显示图标异常
    msg.bigWinnerSeatList = self:getBigWinnerSeatList(msgData.iTotalScore, maxTotalScore) or {}
    CF.roomData:setCanContinueBool(false)
    self:dispatchEvent({name = self.EVENT_GAME_TOTAL_RESULT, msg = msg})
    CF.game:getModule("Trust"):hideTrustView()
    if CF.roomData:getIsSeer() then
        CF.roomData:dispatchEvent({name = CF.roomData.EVENT_SEER_SHOW_DISMISS})
    end
end

function BigWinLostModule:getBigWinnerSeatList(totalScore, maxScore)
    local bigWinners = {}
    if maxScore <= 0 then
        return
    end
    for seat, tempScore in pairs(totalScore) do
        if tempScore == maxScore then
            table.insert(bigWinners, seat - 1)
        end
    end
    return bigWinners
end

return BigWinLostModule