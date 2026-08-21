local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.WinLostData")

local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

WinLostData.EVENT_UPDATE_BAR_SCORE = "EVENT_UPDATE_BAR_SCORE"

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._barScoreNames = {}
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if j == 1 then
            fanNames = fanNames .. fanName
        else
            fanNames = fanNames .. ", " .. fanName
        end
    end
    if  #tmpFan > 0 then
        fanNames = "("..fanNames..")"
    end
    self._fanNames[msgData.nSeat] = fanNames
end

return WinLostData�