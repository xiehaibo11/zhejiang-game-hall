local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgResultExtInfo(msgData)
    self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
    self._nWinLost = msgData.nWinLost
    self._isTuiGang = msgData.bIsTuiGang
    self._fanNums = msgData.nFanScore
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    if self._sEndType == CF.GameDefine.HU_TYPE.ET_NONE or self._sEndType == CF.GameDefine.HU_TYPE.ET_DRAWN then
        for seat = 0, CF.roomData:getChairs() - 1 do
            local fanNames = ""
            if msgData.bIsTuiGang[seat] == true then
                self:setLostEndType(seat, CF.GameDefine.LOST_END_TYPE.REBACKKUNG)
            end
            for j = 0, 2 do                 --最多3个杠
                local kungNum = msgData.nKongType[seat][j]
                if kungNum > 0 then
                    fanNames = fanNames .. " " .. kungNum .. WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j]
                end
            end
            self._fanNames[seat] = fanNames
        end
    else
        for seat = 0, CF.roomData:getChairs()  - 1 do
            local fanNames = ""
            local tmpFan = msgData.nFanID[seat]
            for j = 1, #tmpFan do
                WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j]] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j]] or ""
                fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j]] .. " "
            end
            for j = 0, 2 do                 --最多3个杠
                local kungNum = msgData.nKongType[seat][j]
                if kungNum > 0 then
                    fanNames = fanNames .. " " .. kungNum .. WinLostFanConfig.KW_WINLOST_KUNG_TYPE[j]
                end
            end
            self._fanNames[seat] = fanNames
        end
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData