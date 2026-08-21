
local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:ctor()
    BigWinLostModule.super.ctor(self)
    self._tTotalWinLost = {}
end

function BigWinLostModule:getSubXYDealList()
    local subXYDealList = BigWinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgNewTotalWinLost}
    return subXYDealList
end

function BigWinLostModule:clearTotalWinLost()
    self._tTotalWinLost = {}
end

function BigWinLostModule:onMsgTotalResult(msgData)
    self:analySinglePlayerData(msgData)
    for i = 0, CF.roomData:getChairs()-1 do
        if not self._tTotalWinLost[i] then
            return
        end
    end
    msgData.show = true
    BigWinLostModule.super.onMsgTotalResult(self, msgData)
end

function BigWinLostModule:analySinglePlayerData(msgData)
    local nSeat = msgData.nSeat
    local totalWinLost = {}
    totalWinLost.nSeat = msgData.nSeat
    totalWinLost.huCnt = msgData.huCnt
    totalWinLost.nCount = msgData.nCount
    totalWinLost.Fans = msgData.Fans
    totalWinLost.nTotalWinLost = msgData.nTotalWinLost
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    if msgData.huCnt == 0 then
        totalWinLost.maxFanNum = 0
    else
        if CF.roomData:getTaiTouHuQuanShu() == 0 then
            local fanNums = 0
            for i=1, #totalWinLost.Fans do
                WinLostFanConfig.KW_WINLOST_FAN_NUMS[totalWinLost.Fans[i].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[totalWinLost.Fans[i].nFanID] or 0
                fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[totalWinLost.Fans[i].nFanID] * totalWinLost.Fans[i].nCount)
            end
            totalWinLost.maxFanNum = math.pow(2, fanNums)
        else
            local taiNums = 0
            local fanNums = 0
            for i=1, #totalWinLost.Fans do
                -- 计算台数
                WinLostFanConfig.TAIPOINT[totalWinLost.Fans[i].nFanID] = WinLostFanConfig.TAIPOINT[totalWinLost.Fans[i].nFanID] or 0
                taiNums = taiNums + (WinLostFanConfig.TAIPOINT[totalWinLost.Fans[i].nFanID] * totalWinLost.Fans[i].nCount)
                -- 计算番数
                WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[totalWinLost.Fans[i].nFanID] = WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[totalWinLost.Fans[i].nFanID] or 0
                fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[totalWinLost.Fans[i].nFanID] * totalWinLost.Fans[i].nCount)
            end
            totalWinLost.maxFanNum = taiNums * math.pow(2, fanNums)
        end
    end    
    self._tTotalWinLost[nSeat] = totalWinLost
end

function BigWinLostModule:analyTotalResultMsg(msgData)
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = CF.roomData:getPlayCount()
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    local maxScore = 0
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local tmpTotalWinLost = self._tTotalWinLost[seat]
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(player)
            param.totalScore[seat] = tmpTotalWinLost.nTotalWinLost
            maxScore = tmpTotalWinLost.nTotalWinLost > maxScore and tmpTotalWinLost.nTotalWinLost or maxScore
            
            local tmpStrType = {}
            if CF.roomData:getWuJiangYZM() == 1 then
                table.insert(tmpStrType, "胡牌次数 " .. tmpTotalWinLost.huCnt)
                local maxHuFanWuJiang = gameData:getMaxHuFanWuJiang(seat)
                if maxHuFanWuJiang and maxHuFanWuJiang >= 0 then
                    table.insert(tmpStrType, "最大倍数 " .. math.pow(2, maxHuFanWuJiang))
                else
                    table.insert(tmpStrType, "最大倍数 0")
                end
            else
                table.insert(tmpStrType, "胡牌次数 " .. tmpTotalWinLost.huCnt)
                table.insert(tmpStrType, "最大倍数 " .. tmpTotalWinLost.maxFanNum)
            end
            param.scoreDes[seat] = tmpStrType
        end
    end

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}

    return param
end

function BigWinLostModule:getShowViewDelayTime()
    return 3
end

return BigWinLostModule