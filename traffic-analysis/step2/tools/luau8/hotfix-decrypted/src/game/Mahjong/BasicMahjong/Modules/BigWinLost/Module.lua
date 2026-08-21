
local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.GameBase.Modules.BigWinLost.Module")

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
    self._bigWinLostData = nil
end

function BigWinLostModule:getBigWinLostData()
    return self._bigWinLostData
end

function BigWinLostModule:setBigWinLostData(data)
    self._bigWinLostData = data
end

function BigWinLostModule:onMsgTotalResult(msgData)
    self:setBigWinLostData(nil)

    local param = self:analyTotalResultMsg(msgData)
    
    CF.roomData:setIsGameOver(msgData.show)
    
	if msgData.show and not CF.roomData:getIsHaveResult() then
        local showViewFunc = function ()
            self:setBigWinLostData(nil)
            CF.roomData:setCanContinueBool(false)
            CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
        end
        local tempDelayTime = self:getShowViewDelayTime()
        if tempDelayTime <= 0 then
            showViewFunc()
        else
            self:performWithDelay(
                function ()
                    showViewFunc()
                end, tempDelayTime)
        end
	elseif msgData.show then
        self:setBigWinLostData(param)
	end
end

function BigWinLostModule:getShowViewDelayTime()
    return 0
end

function BigWinLostModule:analyTotalResultMsg(msgData)
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
    local maxScore = 0
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
            
            param.scoreDes[seat] = self:getPlayerScoreDes(seat, msgData)
        end
    end

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}

    return param
end

function BigWinLostModule:getPlayerScoreDes(seat, msgData)
    local tmpStrType = {}
    self:checkAddMaxHuCount(tmpStrType, msgData.maxHuCount[seat])
    self:checkAddMaxFanCount(tmpStrType, msgData.maxFanNum[seat])

    if msgData.maxFanCount[seat] > 0 then
        local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
        tmpStrType[#tmpStrType + 1] = "最大番 " .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][1]] or ""
        for j = 2, msgData.maxFanCount[seat] do
            if j % 2 == 0 then
                tmpStrType[#tmpStrType + 1] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or ""
            else
                tmpStrType[#tmpStrType] = tmpStrType[#tmpStrType] .. " " .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or ""
            end
        end
    end 
    return tmpStrType
end

function BigWinLostModule:checkAddMaxHuCount(desTable, huCount)
    if not desTable then
        return
    end
    desTable[#desTable + 1] = "胡 " .. huCount .. " 次"
end

function BigWinLostModule:checkAddMaxFanCount(desTable, fanCount)
    if not desTable then
        return
    end
    desTable[#desTable + 1] = "最大 " .. fanCount .. " 番"
end

function BigWinLostModule:getBigWinnerSeatList(totalScore, maxScore)
    local bigWinners = {}
    if maxScore <= 0 then
        return
    end
    for seat, tempScore in pairs(totalScore) do
        if tempScore == maxScore then
            table.insert(bigWinners, seat)
        end
    end
    return bigWinners
end

function BigWinLostModule:getBigWinnerSeatByScore(totalScores)
    totalScores = totalScores or {}
    local maxScore = 0
    for _,v in pairs(totalScores) do
        if v > maxScore then
            maxScore = v
        end
    end
    for k,v in pairs(totalScores) do
        local isBigWinner = maxScore > 0 and (maxScore == v)
        if isBigWinner then
            return k
        end
    end
end

return BigWinLostModule�