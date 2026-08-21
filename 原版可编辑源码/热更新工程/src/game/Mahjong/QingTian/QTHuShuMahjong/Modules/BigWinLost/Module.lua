local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:onMsgTotalResult(msgData)
    if not msgData.show then
        return
    end
	BigWinLostModule.super.onMsgTotalResult(self, msgData)
end

function BigWinLostModule:checkAddMaxFanCount(desTable, fanCount)
end

return BigWinLostModule