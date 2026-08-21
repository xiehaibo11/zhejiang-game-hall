local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if j == 1 then
            fanNames = fanNames .. fanName
        else
            fanNames = fanNames .. "," .. fanName
        end
    end
    if  #tmpFan > 0 then
        fanNames = "("..fanNames..")"
    end
    self._fanNames[msgData.nSeat] = fanNames
    self:setIsShowFan(false)
end

function WinLostData:onMsgTaiName(msgData)
    local tmpFan = msgData.fanName
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    for seat = 0, CF.roomData:getChairs() - 1 do
        if not self._fanNames[seat] then
            local fanNames = ""
            for j = 1, #tmpFan[seat] do
                local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[seat][j]] or ""
                if j == 1 then
                    fanNames = fanNames .. fanName
                else
                    fanNames = fanNames .. "," .. fanName
                end
            end
            if  #tmpFan[seat] > 0 then
                fanNames = "("..fanNames..")"
            end
            self._fanNames[seat] = fanNames
        end
    end
end

function WinLostData:onMsgResult(msgData)
	WinLostData.super.onMsgResult(self, msgData)

	self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
	for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        if msgData.nCountHu and msgData.nCountHu[seat] then
            fanNames = fanNames .. msgData.nCountHu[seat].."胡"
        end
        if msgData.nCountTai and msgData.nCountTai[seat] and self._fanNames and self._fanNames[seat] then
            fanNames = fanNames .. "," .. msgData.nCountTai[seat].."台"..self._fanNames[seat]
        end
        if msgData.nToTalCountHu and msgData.nToTalCountHu[seat] then
            fanNames = fanNames .. ",总胡:"..msgData.nToTalCountHu[seat]
        end
        self._fanNames[seat] = fanNames
        self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
    end
end

return WinLostData�	