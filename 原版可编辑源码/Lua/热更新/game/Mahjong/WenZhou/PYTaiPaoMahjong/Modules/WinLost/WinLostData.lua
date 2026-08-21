local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")


function WinLostData:onMsgFanCnt(msgData)
    WinLostData.super.onMsgFanCnt(self, msgData)
    self:setIsShowFan(false)
end

function WinLostData:onMsgTaiName(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

    local tmpFan = msgData.fanName
    local everyFanCount = msgData.everyFanCount
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        for j = 0, #tmpFan[seat] do
            if not tmpFan[seat][j] or tmpFan[seat][j] == 0 then
                break
            end
            local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[seat][j]] or ""
            local fanCount = " " .. everyFanCount[seat][j] .. "台"
            if j == 0 then
                fanNames = fanNames .. fanName .. fanCount
            else
                fanNames = fanNames .. "," .. fanName .. fanCount
            end
        end
        if  #tmpFan[seat] > 0 then
            fanNames = "("..fanNames..")"
        end
        fanNames = msgData.fanCount[seat] .. "台" .. fanNames
        self._fanNames[seat] = fanNames
    end
end

function WinLostData:onMsgResult(msgData)
    self._nWinLost = msgData.nWinLost
    self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData