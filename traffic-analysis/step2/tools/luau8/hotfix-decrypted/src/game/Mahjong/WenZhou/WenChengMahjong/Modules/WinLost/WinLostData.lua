local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")


function WinLostData:onMsgFanCnt(msgData)
    WinLostData.super.onMsgFanCnt(self, msgData)
    self:setIsShowFan(false)
end

function WinLostData:onMsgTaiName(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

    local tmpFan = msgData.fanName
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local fanNames = ""
        for j = 0, #tmpFan[seat] -1 do
            if tmpFan[seat][j] ~= 0 then
                if j == 0 then
                    fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[seat][j]] .. msgData.everyFanCount[seat][j] .. "台"
                else
                    fanNames = fanNames ..",".. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[seat][j]] .. msgData.everyFanCount[seat][j].."台"                    
                end
            end
        end              
        if #tmpFan[seat] > 0 and msgData.fanCount[seat] > 0 then
            fanNames = "("..fanNames..")"
        end
        fanNames = msgData.fanCount[seat].."台"..fanNames
        self._fanNames[seat] = fanNames
    end
end

function WinLostData:onMsgResult(msgData)
    self._nWinLost = msgData.nWinLost
    self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

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
end

return WinLostData'