local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._bIsPingHu = {}
    self._bMenFeng = {}
    self._nHuMahPos = -1
    self._bCircleFeng = -1
end

function WinLostData:setCircleFeng(feng)
    self._bCircleFeng = feng
end

function WinLostData:getCircleFeng(seat)
    return self._bCircleFeng
end

function WinLostData:setMenFeng(seat, feng)
    self._bMenFeng[seat] = feng
end

function WinLostData:getMenFeng(seat)
    return self._bMenFeng[seat]
end

function WinLostData:setPingHuFlag(seat, IsPingHu)
    self._bIsPingHu[seat] = IsPingHu
end

function WinLostData:setHuMahPos(nPos)
    --C++中下标从0开始，lua中往后移动一位
    if nPos ~= -1 then
        self._nHuMahPos = nPos + 1
    end
end

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._fans = self._fans or {}
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNames = ""
    local fanNums = 0
    local tmpFan = msgData.Fans
    self:setPingHuFlag(msgData.nSeat, false)

    for j = 1, #tmpFan do
        if j ~= 1 then
            fanNames = fanNames .. ","
        end
        WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        fanNums = fanNums + ( WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount )
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if tmpFan[j].nCount > 1 then
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. "*" .. tmpFan[j].nCount
        else
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID]
        end
        
        if WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] == "平胡" then
            self:setPingHuFlag(msgData.nSeat, true)
        end
    end

    if fanNums < 800 and fanNums > 0 then
        fanNames = fanNums .. "番(" .. fanNames .. ")" 
    end    
    fanNames = fanNames .. ","

    self._fanNames = self._fanNames or {}
    self._fanNames[msgData.nSeat] = fanNames
end

function WinLostData:onMsgHuShuCount(msgData)
    local fanNames = self._fanNames[msgData.nseat] or ""
    if msgData.basehushu ~= 0 then
        fanNames = fanNames .. "基础胡数" .. msgData.basehushu .. ","
    end
    fanNames = fanNames .. "总胡数:" .. (msgData.totalhushu * 10)
    self._fanNames[msgData.nseat] = fanNames
end

return WinLostData