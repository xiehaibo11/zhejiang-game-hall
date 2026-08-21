local SetModule = CF.gameClass("SetModule", "game.GameBase.Modules.Setting.Module")

function SetModule:reqDismiss()
    CF.game:getModule("Continue"):sendRespContinue(false)
    CF.game:getModule("Dismiss"):sendDismissCountdown()
    CF.game:getModule("Dismiss"):sendRespondDismiss(true)
end

return SetModule
