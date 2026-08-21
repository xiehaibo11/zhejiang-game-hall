local SetModule = CF.gameClass("SetModule", "game.GameBase.Modules.Setting.Module")

function SetModule:reqDismiss()
    CF.msgManager:sendRequestDismiss()
end

return SetModule
