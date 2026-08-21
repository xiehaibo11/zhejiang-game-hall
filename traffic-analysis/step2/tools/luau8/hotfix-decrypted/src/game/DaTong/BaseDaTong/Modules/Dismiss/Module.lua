local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

function DismissModule:onMsgDismissFlag(msgData)
	DismissModule.super.onMsgDismissFlag(self, msgData)
    if CF.game and CF.roomData and CF.roomData:isStartGame() then
        CF.game:getModule("WinLost"):showBigWinlost()
    end
end

return DismissModulee