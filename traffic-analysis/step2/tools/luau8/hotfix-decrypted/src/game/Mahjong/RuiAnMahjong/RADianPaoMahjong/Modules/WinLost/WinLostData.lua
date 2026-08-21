local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._gangInfos = {}
    self._myFanNames = {}
    self._surplusMahs = {}
end

function WinLostData:setSurplusMahs(data)
    self._surplusMahs = data
end

function WinLostData:getSurplusMahs()
    return self._surplusMahs
end

function WinLostData:onMsgGangNames(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    for seat = 0, CF.roomData:getChairs() - 1 do
        local gangNames = ""
        for j = 0 , 2 do
            local nGangNum = msgData.nKongCount[seat][j]
            if nGangNum > 0  then
                gangNames = gangNames .. nGangNum .. WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j] .. " "
            end
        end
        self._gangInfos[seat] = gangNames
    end
end

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " "
    end
    for seat = 0, CF.roomData:getChairs() - 1 do
        if seat == msgData.nSeat then
            self._myFanNames[seat] = fanNames
        end
    end
    for seat = 0, CF.roomData:getChairs() - 1 do
        local myFanNames = self._myFanNames[seat]
        if myFanNames == nil then
            myFanNames = ""
        end
        local showName = myFanNames
        if self._gangInfos[seat] then
            showName = myFanNames .. self._gangInfos[seat]
        end
        self._fanNames[seat] = showName
    end
end

return WinLostData�