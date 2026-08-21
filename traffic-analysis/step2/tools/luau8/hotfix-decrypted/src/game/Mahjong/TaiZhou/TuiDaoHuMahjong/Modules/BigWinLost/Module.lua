local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:getResultInfo(msgData, seat)
    local result = {msgData.maxResultSelf[seat], msgData.mMaxJiePao[seat], msgData.mMaxDianPao[seat], msgData.mMaxMKongNum[seat], msgData.mMaxAKongNum[seat]}
    return result
end

return BigWinLostModule�