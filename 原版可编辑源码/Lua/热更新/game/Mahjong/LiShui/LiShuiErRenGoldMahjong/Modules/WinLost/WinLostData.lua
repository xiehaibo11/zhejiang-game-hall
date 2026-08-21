local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgResult(msgData)
end

function WinLostData:onMsgFanCnt(msgData)
end

function WinLostData:onMsgEndInfo(msgData)
    for seat, score in pairs(msgData.winLostScore) do
        self._nWinLost[seat - 1] = score
    end
    msgData.nWinLost = self._nWinLost
    for seat, fan in pairs(msgData.fanIDs) do
        self._fans[seat - 1] = fan
    end
    for seat, fans in pairs(msgData.fanNum) do
        local sum = 0
        for _,num in pairs(fans) do
            sum = sum + num
        end
        self._fanNums[seat - 1] = tostring(sum)
    end
end

return WinLostData