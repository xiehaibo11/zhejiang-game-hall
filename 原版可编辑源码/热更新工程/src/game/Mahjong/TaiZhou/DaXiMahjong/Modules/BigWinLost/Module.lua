local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:getPlayCount(msgData)
    return msgData.sPlayCount
end

function BigWinLostModule:getResultInfo(msgData, seat)
    local result = {msgData.nZiMoCnt[seat], msgData.nJiePaoCnt[seat], msgData.nFangChongCnt[seat], msgData.nMKongTime[seat], msgData.nAKongTime[seat]}
    return result
end

function BigWinLostModule:isShow(msgData)
    return msgData.bShow
end

return BigWinLostModule