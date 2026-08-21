
local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.GameBase.Modules.BigWinLost.Module")

BigWinLostModule.EVENT_GAME_TOTAL_RESULT = "EVENT_GAME_TOTAL_RESULT"

function BigWinLostModule:ctor()
    BigWinLostModule.super.ctor(self)
    self:initDatas()
end

function BigWinLostModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResult},
    }
end

function BigWinLostModule:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end 

function BigWinLostModule:onMsgTotalResult(msgData)
    if CF.roomData:isPlayBack() then
        return
    end
    self._gameData:setGameEndState(true)
    local msg = {}
    msg.show = msgData.show
    msg.roomid = CF.roomData:getRoomID()
    msg.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    msg.playCount = CF.roomData:getPlayCount()
    msg.maxCount = CF.roomData:getMaxPlayCount()
    msg.hostSeat = CF.roomData:getHostSeat()
    msg.players = {}
    msg.maxXian = {}
    msg.sWinCount = {}
    msg.sBoomCount = {}
    msg.iMaxPickupScore = {}
    msg.iMaxLineCount = {}
    msg.totalScore = {}
    local maxTotalScore = 0
    local maxTotalScoreSeat = 0
    local isOnlyMaxTotalScore = false
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        msg.players[i] = clone(CF.roomData:getPlayerDataBySeatId(i))
        msg.sWinCount[i] = msgData.sWinCount[i]
        msg.sBoomCount[i] = msgData.sBoomCount[i]
        msg.iMaxLineCount[i] = msgData.iMaxLineCount[i]
        msg.iMaxPickupScore[i] = msgData.iMaxPickupScore[i]
        local totalScore = 0
        for j = 1, msgData.sPlayCount do
            totalScore = totalScore + msgData.m_iBoxRoomTotalWinLost[i][j]
        end
        if maxTotalScore < totalScore then
            maxTotalScore = totalScore
            maxTotalScoreSeat = i
            isOnlyMaxTotalScore = true
        elseif maxTotalScore == totalScore then
            isOnlyMaxTotalScore = false
        end
        msg.totalScore[i] = totalScore
    end
    if not isOnlyMaxTotalScore then
        maxTotalScoreSeat = CF.roomData:getMaxPlayer()
    end
    msg.maxTotalScoreSeat = maxTotalScoreSeat
    msg.m_iBoxRoomTotalWinLost = msgData.m_iBoxRoomTotalWinLost

    self:dispatchEvent({name = self.EVENT_GAME_TOTAL_RESULT, msg = msg})
end

return BigWinLostModule}	