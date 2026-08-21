local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._raTaiNames = {}
end

function WinLostData:onMsgFanName(msgResult)
    for seat = 0, CF.roomData:getChairs() - 1 do
        if not self._raTaiNames[seat] then
            self._raTaiNames[seat] = 0
        end
        if msgResult.nIsSupportDapao then
            local fanNames =
                msgResult.nCountTai[seat].."台"..self._raTaiNames[seat]..","..msgResult.nCountHu[seat].."胡,"
                .."牌型分:"..msgResult.nToTalCountHu[seat].."分,"
                ..msgResult.nCountSeatPao[seat].."炮,"..msgResult.nRealPaoScore[seat].."炮分"
            self._fanNames[seat] = fanNames
        else
            local fanNames =
            msgResult.nCountTai[seat].."台"..self._raTaiNames[seat]..","..msgResult.nCountHu[seat].."胡"..",分:"..msgResult.nToTalCountHu[seat]
            self._fanNames[seat] = fanNames
        end
    end
end

function WinLostData:onMsgTaiName(msgData)
    local tmpFan = msgData.fanName
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        for j = 1, #tmpFan[seat] do
            if tmpFan[seat][j] ~= 0 then
                local fanName = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[seat][j]] or ""
                if j == 1 then
                    fanNames = fanNames .. fanName
                else
                    fanNames = fanNames .. "," .. fanName
                end
            end
        end
        if  #tmpFan[seat] > 0 then
            fanNames = "("..fanNames..")"
        end
        self._raTaiNames[seat] = fanNames
    end
end

return WinLostData