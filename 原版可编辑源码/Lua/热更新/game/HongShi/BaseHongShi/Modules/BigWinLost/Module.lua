
local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.GameBase.Modules.BigWinLost.Module")

BigWinLostModule.EVENT_GAME_TOTAL_RESULT = "EVENT_GAME_TOTAL_RESULT"

function BigWinLostModule:ctor()
    BigWinLostModule.super.ctor(self)
    self:initDatas()
end

function BigWinLostModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalWinLost},
    }
end

function BigWinLostModule:initDatas()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end 

function BigWinLostModule:onMsgTotalResult(msgData)
    if CF.roomData:isPlayBack() then
        return
    end
    if not self._totalWinLost then
        self._totalWinLost = {}
    end
    local serverSeat = msgData.nSeat
    self._totalWinLost[serverSeat] = msgData
    if serverSeat ~= 3 then
        return
    end
    self._gameData:setGameEndState(true)
    local msg = {}
    msg.show = true
    msg.roomid = CF.roomData:getRoomID()
    msg.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    msg.playCount = CF.roomData:getPlayCount()
    msg.maxCount = CF.roomData:getMaxPlayCount()
    msg.hostSeat = CF.roomData:getHostSeat()
    msg.players = {}
    msg.totalScore = {}
    msg.sWinCount = {}
    msg.playerMaxScore = {}
    local maxTotalScore = 0
    local maxTotalScoreSeat = 0
    local isOnlyMaxTotalScore = false
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        msg.players[i] = clone(CF.roomData:getPlayerDataBySeatId(i))
        msg.sWinCount[i] = self._totalWinLost[i].nWinCnt
        msg.playerMaxScore[i] = self._totalWinLost[i].nMaxScore
        msg.totalScore[i] = self._totalWinLost[i].nTotalWinLost
        if maxTotalScore < msg.totalScore[i] then
            maxTotalScore = msg.totalScore[i]
            maxTotalScoreSeat = i
            isOnlyMaxTotalScore = true
        elseif maxTotalScore == msg.totalScore[i] then
            isOnlyMaxTotalScore = false
        end
    end
    if not isOnlyMaxTotalScore then
        maxTotalScoreSeat = CF.roomData:getMaxPlayer()
    end
    msg.maxTotalScoreSeat = maxTotalScoreSeat
    msg.boxRoomTotalWinLost = msgData.boxRoomTotalWinLost

    CF.roomData:setCanContinueBool(false)
    
    self:dispatchEvent({name = self.EVENT_GAME_TOTAL_RESULT, msg = msg})
end

return BigWinLostModule