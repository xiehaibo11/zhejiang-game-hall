local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

function DismissModule:isDealMsgRequestDismiss()
    return false
end

function DismissModule:isDealMsgDismissCountDown()
    return true
end

return DismissModule
