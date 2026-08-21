local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.WinLostData")

local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._gameMaiZiInfo = {}
    self._barScoreNames = {}
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        local fanNum = (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        if j == 1 then
            fanNames = fanNames .. fanName..fanNum.."番"
        else
            fanNames = fanNames .. ", " .. fanName..fanNum.."番"
        end
    end
    if  #tmpFan > 0 then
        fanNames = "("..fanNames..")"
    end
    self._fanNames[msgData.nSeat] = fanNames
end

function WinLostData:setGameMaiZiInfo(msgData)
    self._gameMaiZiInfo = msgData
end

function WinLostData:getGameMaiZiInfo(seat)
    if self._gameMaiZiInfo and  self._gameMaiZiInfo[seat + 1] ~= nil then
        return "买子:".. self._gameMaiZiInfo[seat + 1]
    end
    return  ""
end

function WinLostData:onMsgEndType(msgData)
    if msgData.sEndType == 7 then -- 爆头
        msgData.sEndType = CF.GameDefine.END_TYPE.ET_SELF
    end
    WinLostData.super.onMsgEndType(self, msgData)
end

return WinLostData