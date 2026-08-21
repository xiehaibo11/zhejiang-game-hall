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
    [1]="大四喜",
    [19]="财神会", 
    [23]="碰碰胡",
    [31]="混一色",
    [32]="清一色",
    [33]="单吊",
    [39]="杠上开花",
    [41]="天胡",
    [48]="无财神",
    [90]="抢杠胡",
    [116]="自摸",
    [1001]="地胡",
    [1002]="全球神",
    [1003]="三财神平胡",
    [1004]="平胡",
    [1005]="财神归位",
    [1006]="三财神",
    [1007]="硬八对",
    [1008]="软八对",
    [1009]="三财神归位",
    [1010]="财神牛",
    [1011]="小四喜",
    [1012]="二财神归位",
    [1013]="财神马",
    [1014]="三财一刻",
    [1015]="清一色推倒",
    [1016]="清一色",
    [1017]="混一色",
 }

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._jokerMoney = {}       -- 财神分
    self._kungInfo = {}         -- 杠信息
    self._followMahInfo = {}    -- 跟风信息
end

function WinLostData:onMsgFanCnt(msgData)

    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local wFanName = WinLostData.FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. wFanName .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:onMsgResult(msgData)
    WinLostData.super.onMsgResult(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    for seat = 0, CF.roomData:getChairs()  - 1 do
        local strTempFanName
        local strFormat
        if msgData.haveMDD == true then
            if msgData.bankerSeat == seat then
                strFormat="牢庄:%d  底数:%d  买底:%d  "
                strTempFanName = string.format(strFormat,gameData:getLaoZhuangNum(),msgData.nBase,msgData.nMaiDi[seat])
            else 
                strFormat="顶底:%d  "
                strTempFanName = string.format(strFormat,msgData.nDingDi[seat])
            end
        else
            if msgData.bankerSeat == seat then
                strFormat="牢庄:%d  底数:%d  "
                strTempFanName = string.format(strFormat,gameData:getLaoZhuangNum(),msgData.nBase)
            else 
                strFormat = ""
                strTempFanName = strFormat
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
            strFormat = "%s:"
            strTempFanName = strTempFanName .. string.format(strFormat, WinLostData.HU_TYPE[msgData.nHuType])
            strTempFanName = strTempFanName .. self:getFanNameBySeat(seat)
        end
        self._fanNames[seat] = strTempFanName
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setJokerMoneyData(seat,data)
    self._jokerMoney[seat] = data
end

function WinLostData:getJokerMoneyData(seat)
    return self._jokerMoney[seat] or ""
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

return WinLostData