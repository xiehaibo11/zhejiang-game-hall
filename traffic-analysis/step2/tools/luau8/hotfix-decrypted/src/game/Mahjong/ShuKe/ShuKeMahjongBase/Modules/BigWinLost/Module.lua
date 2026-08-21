local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:calcBigWinnerSeat(totalScore)
    local maxScore = 0
    local isOnlyBigWinner = false
    for _, value in pairs(totalScore) do
        if maxScore < value then
            maxScore = value
            isOnlyBigWinner = true
        elseif maxScore == value then
            isOnlyBigWinner = false
        end
    end
    local bigWinnerSeat = -1
    if not isOnlyBigWinner then
        local roomHostSeat = CF.roomData:getHostSeat()
        local chairs = CF.roomData:getChairs()
        if roomHostSeat and chairs then
            if roomHostSeat > chairs or roomHostSeat < 0 then
                roomHostSeat = chairs
            end
        end
        for i = roomHostSeat, roomHostSeat + chairs - 1 do
            if i > chairs - 1 then
                i = i % chairs
            end
            if totalScore[i] == maxScore then
                bigWinnerSeat = i
                break
            end
        end
    end
    if bigWinnerSeat == -1 then
        bigWinnerSeat = self:getBigWinnerSeatByScore(totalScore)
    end
    return bigWinnerSeat
end

return BigWinLostModule�