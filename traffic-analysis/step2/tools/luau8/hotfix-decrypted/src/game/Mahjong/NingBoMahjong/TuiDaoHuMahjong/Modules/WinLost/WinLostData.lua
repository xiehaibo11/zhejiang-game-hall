local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:ctor()
    WinLostData.super.ctor(self)
    self._birdMahs = {}
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

    -- dump(msgData)
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do

        local tFanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        local tFanCount = tmpFan[j].nCount
        local tFanStr = tFanName .. ":" .. tFanCount
        if j ~= 1 and (tmpFan[j].nFanID == 3706 or tmpFan[j].nFanID == 3707) then
            tFanStr = "    " .. tFanStr
        end
        fanNames = fanNames .. tFanStr
    end
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent({ name = self.EVENT_RESULT_EXINFO_CHANGED })
end

-- 服务的位置
function WinLostData:setCatchBirdMahs(seat, mahs)
    self._birdMahs = self._birdMahs or {}
    self._birdMahs[seat] = mahs
end

function WinLostData:getCatchBirdMahs(seat)
    return self._birdMahs[seat]
end

return WinLostData�