local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.GameBase.Modules.BigWinLost.Module")

BigWinLostModule.EVENT_GAME_TOTAL_RESULT = "EVENT_GAME_TOTAL_RESULT"

function BigWinLostModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResultDT},
    }
end

function BigWinLostModule:onMsgTotalResult(msgData)
    local msg = {}
    msg.roomid = CF.roomData:getRoomID()
    msg.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    msg.playCount = CF.roomData:getPlayCount()
    msg.maxCount = CF.roomData:getMaxPlayCount()
    msg.hostSeat = CF.roomData:getHostSeat()
    msg.players = {}
    msg.totalScore = {}
    msg.everyScore = {}
    msg.show = msgData.bShow

    local maxTotalScore = 0
    local maxTotalScoreSeat = 0
    local isOnlyMaxTotalScore = false
    local playerCount = CF.roomData:getMaxPlayer()

    for i = 0, playerCount - 1 do
        msg.players[i] = clone(CF.roomData:getPlayerDataBySeatId(i))
        local totalScore = msgData.sTotalScore[i]

        if maxTotalScore < totalScore then
            maxTotalScore = totalScore
            maxTotalScoreSeat = i
            isOnlyMaxTotalScore = true
        elseif maxTotalScore == totalScore then
            isOnlyMaxTotalScore = false
        end
        msg.totalScore[i] = totalScore
        msg.everyScore[i] = msgData.sEveryScore[i]
    end
    if not isOnlyMaxTotalScore then
        maxTotalScoreSeat = CF.roomData:getMaxPlayer()
    end
    msg.maxTotalScoreSeat = maxTotalScoreSeat
    msg.boxRoomTotalWinLost = msgData.bShow

    CF.roomData:setCanContinueBool(false)
    self:dispatchEvent({name = self.EVENT_GAME_TOTAL_RESULT, msg = msg})
    CF.game:getModule("Trust"):hideTrustView()
end

--forTest
function BigWinLostModule:testWinlost()
    local data = {
        sPlayCount = 5,
        bShow = true,
        sTotalScore = {[0]=100,[1]=102,[2]=103,[3]=104,[4]=105,[5]=106},
        sEveryScore = {
            [0]={1,2,3,4,5,6},
            [1]={21,22,23,24,25,26},
            [2]={31,32,33,34,35,36},
            [3]={41,42,43,44,45,46},
            [4]={51,52,53,54,55,56},
            [5]={61,62,63,64,65,66},
        }, -- 二维
    }
    self:onMsgTotalResult(data)
end

return BigWinLostModule