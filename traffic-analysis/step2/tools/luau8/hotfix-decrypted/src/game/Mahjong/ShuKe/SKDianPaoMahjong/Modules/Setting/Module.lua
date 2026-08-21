local SetModule = CF.gameClass("SetModule", "game.Mahjong.BasicMahjong.Modules.Setting.Module")

function SetModule:reqDismiss()   
    CF.msgManager:sendDismissCountdown()
    CF.game:getModule("Dismiss"):sendRespondDismiss(true)
end

return SetModule