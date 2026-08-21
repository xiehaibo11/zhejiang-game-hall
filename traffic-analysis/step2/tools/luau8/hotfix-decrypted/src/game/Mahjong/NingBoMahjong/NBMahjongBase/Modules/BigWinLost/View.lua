local BigWinLostView = CF.gameClass("BigWinLostView", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

function BigWinLostView:isNeedCloseAfterClickContinue()
    if CF.teaHouseManager:isInTeaHouse() then
        return false
    end
    return true
end

return BigWinLostView"