
local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:ctor()
    BigWinLostModule.super.ctor(self)
    self:initDatas()
end

function BigWinLostModule:getSubXYDealList()
    local subXYDealList = BigWinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResult}
    
    return subXYDealList
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

    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.hostSeat = CF.roomData:getHostSeat()
    --param.bankerSeat = self._gameInfoData._bankerSeatId

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
            
            local tmpStrType = {}
            tmpStrType[#tmpStrType + 1] = "自摸次数 " .. msgData.ziMoCnt[seat]
            tmpStrType[#tmpStrType + 1] = "接炮次数 " .. msgData.jiePaoCnt[seat]
            tmpStrType[#tmpStrType + 1] = "点炮次数 " .. msgData.dianPaoCnt[seat]
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

return BigWinLostModule