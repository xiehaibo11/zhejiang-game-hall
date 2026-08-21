local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgResultExtInfo(msgData)
    self._score = msgData.score

    for i = 0, 3 do
        if self._fanNames[i] then
            self._fanNames[i] = self._fanNames[i] .. msgData.desc[i]
        else
            self._fanNames[i] = msgData.desc[i]
        end
    end
    
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:onMsgFanCnt(msgData)
	local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
	self._fans[msgData.nSeat] = msgData.Fans
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local gameId = CF.roomData:getGameID()
        if gameId == 40192 or gameId == 40188 then 
            WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 1 
        else
            WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        end

        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " "
    end

    self._fanNums[msgData.nSeat] = msgData.fanValue ~= -1 and msgData.fanValue or 0
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData,