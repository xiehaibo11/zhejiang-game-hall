local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:onMsgResult(msgData)
    WinLostModule.super.onMsgResult(self, msgData)

    CF.game:getModule("GameLayer"):updateStateFlag()
    CF.game:getModule("GameLayer"):updateSpecialBtnState()
end


return WinLostModule]