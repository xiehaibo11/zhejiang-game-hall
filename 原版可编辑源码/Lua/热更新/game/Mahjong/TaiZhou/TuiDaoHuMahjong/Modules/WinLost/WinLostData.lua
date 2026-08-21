local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgTaiName(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        local nHuType = msgData.nHuType
        local nDianMo = msgData.nDianMo[seat]
        local nKongScore = msgData.nKongScore[seat]
        if nHuType == 1 then
            if nDianMo > 0 then
                fanNames = fanNames .. "自摸+" .. nDianMo .. "\t"
            elseif nDianMo < 0 then
                fanNames = fanNames .. "被自摸" .. nDianMo .. "\t"
            end
        elseif nHuType == 2 or nHuType == 3 then
            if nDianMo > 0 then
                fanNames = fanNames .. "接炮+" .. nDianMo .. "\t"
            elseif nDianMo < 0 then
                fanNames = fanNames .. "放炮" .. nDianMo .. "\t"
            end
        end
        if nKongScore > 0 then
            fanNames = fanNames .. "杠分+" .. nKongScore .. "\t"
        elseif nKongScore < 0 then
            fanNames = fanNames .. "杠分" .. nKongScore .. "\t"
        end
        self._fanNames[seat] = fanNames
    end
end

return WinLostData