local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:getResultInfo(msgData, seat)
    local result = {msgData.nWinByOwn[seat], msgData.nDiscardNum[seat], msgData.nJiePaoNum[seat]}
    return result
end

return BigWinLostModuleO