local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._followMahInfo = {}    -- 跟风信息
end

function WinLostData:setFollowMahData(seat,data)
    self._followMahInfo[seat] = data
end

function WinLostData:getFollowMahData(seat)
    return self._followMahInfo[seat] or ""
end

function WinLostData:setWinFlowerCnt(msgData)
    self._winFlowerCnt = msgData.nFlowerCnt
    self._winFlowerSeat = msgData.nSeat
end

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._fans[msgData.nSeat] = msgData.Fans    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        --tmpFan[j].nCount > 1 则子数=基础分+(次数-1)*5
        fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] + ((tmpFan[j].nCount - 1) * 5))
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    if self._winFlowerSeat and self._winFlowerCnt and self._winFlowerCnt > 0 then
        fanNames = fanNames .. " 花(" .. self._winFlowerCnt .. ")"
        self._fanNames[msgData.nSeat] = fanNames
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData