local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    CF.game:getModule("WinLost"):getWinLostData():setFengDingFlag(msgData.bFengDing)
    WinLostModule.super.onMsgResult(self, msgData)
end

return WinLostModule
