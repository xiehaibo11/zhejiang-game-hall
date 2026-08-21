local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

WinLostData.HU_TYPE = 
{
    [0] = "软牌",
    [1] = "硬牌",
    [2] = "双翻",
    [3] = "四翻",
}

WinLostData.FAN_TYPE = 
{
    [19]="财神会", 
    [23]="碰碰胡",
    [33]="单吊",
    [39]="杠上开花",
    [41]="天胡",
    [48]="无财神",
    [90]="抢杠胡",
    [116]="自摸",
    [1001]="地胡",
    [1002]="三财神平胡",
    [1003]="平胡",
    [1004]="财神归位",
    [1005]="三财神",
    [1006]="硬八对",
    [1007]="软八对",
    [1008]="三财神财神归位",
    [1009]="碰碰胡",
    [1010]="中发白",
    [1011]="二财神财神归位",
    [1012]="清一色",
    [1013]="混一色",    
    [1014]="半清",
    [1015]="清一色",
    [1016]="天胡",
    [1017]="财神牛",
 }

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._kungInfo = {}         -- 杠信息
    self._followMahInfo = {}    -- 跟风信息
end

function WinLostData:onMsgFanCnt(msgData)
    self:setIsShowFan(false)
    self._fans[msgData.nSeat] = msgData.Fans
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local wFanId = WinLostData.FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. wFanId .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:onMsgResult(msgData)
    WinLostData.super.onMsgResult(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local tmpMaiDi = {}
    local tmpDingDi = {}
    for i = 0, #msgData.nMaiDi do
        tmpMaiDi[i + 1] = msgData.nMaiDi[i]
    end
    for i = 0, #msgData.nDingDi do
        tmpDingDi[i + 1] = msgData.nDingDi[i]
    end
    local baseScore = msgData.nBase
    local maiDingDiStr = ""
    table.sort(tmpMaiDi)
    table.sort(tmpDingDi)
    if tmpMaiDi[#tmpMaiDi] > 0 and tmpDingDi[#tmpDingDi] <=0 then
        maiDingDiStr = "(买底)"
        baseScore = baseScore + tmpMaiDi[#tmpMaiDi]
    elseif tmpMaiDi[#tmpMaiDi] > 0 and tmpDingDi[#tmpDingDi] > 0 then
        maiDingDiStr = "(买底且顶底)"
        baseScore = baseScore + tmpMaiDi[#tmpMaiDi] +tmpDingDi[#tmpDingDi]
    elseif tmpMaiDi[#tmpMaiDi] <= 0 and tmpDingDi[#tmpDingDi] > 0 then
        maiDingDiStr = "(顶底)"
        baseScore = baseScore  + tmpDingDi[#tmpDingDi]
    end
    local baseScoreStr = baseScore ~= 1 and string.format("底注%d分",baseScore) or ""
    local liangzhuangBei = CF.roomData:getChairs() == 4 and 2 or 1

    for seat = 0, CF.roomData:getChairs() - 1 do
        local strStatistics = ""
        if msgData.haveMDD then
            if msgData.bankerSeat == seat then
               if msgData.nMaiDi[seat] == 1 then
                    strStatistics = strStatistics .. "买底"
               end
            end
            if msgData.nDingDi[seat] == 1 then
                strStatistics = strStatistics .. "顶底"
            end
        end
        local isHuSeat = false
        local huSeat = gameData:getHuSeat()
        for j = 1 , #huSeat do
            if huSeat[j] == seat then
                isHuSeat = true
            end
        end
        if isHuSeat == true then
            local tmpFanName = self._fanNames[seat]
            if tmpFanName and tmpFanName ~= "" then
                tmpFanName = "(" .. tmpFanName .. ")"
            end
            local laoZhuangNum = gameData:getLaoZhuangNum()
            local strHuType = WinLostData.HU_TYPE[msgData.nHuType]
            local fanInfo = string.format("胡%s%sx%d倍 %d连庄x%d倍",strHuType,tmpFanName,msgData.nMult,laoZhuangNum,liangzhuangBei*laoZhuangNum)
            strStatistics = baseScoreStr .. maiDingDiStr ..fanInfo
        end
        self._fanNames[seat] = strStatistics
    end

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setKungInfoData(seat,data)
    self._kungInfo[seat] = data
end

function WinLostData:getKungInfoData(seat)
    return self._kungInfo[seat] or ""
end

function WinLostData:setFollowMahData(seat,data)
    self._followMahInfo[seat] = data
end

function WinLostData:getFollowMahData(seat)
    return self._followMahInfo[seat] or ""
end

function WinLostData:setWinLost(seat, score)
    self._nWinLost[seat] = score
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostDataQ