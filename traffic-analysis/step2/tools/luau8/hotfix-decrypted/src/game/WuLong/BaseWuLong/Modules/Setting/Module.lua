local SetModule = CF.gameClass("SetModule", "game.GameBase.Modules.Setting.Module")

function SetModule:reqDismiss()
    CF.msgManager:sendRespContinue(false)
    CF.msgManager:sendDismissCountdown()
    self:sendRespondDismiss(true)
end

function SetModule:sendRespondDismiss(agree)
    local dismissType = CF.roomData:getDismissType()
    if dismissType == CF.GameDefine.DISMISS_TYPE.SO then
        CF.msgManager:sendRespondDismiss(agree)
    else
        local itype = agree and 1 or 2
        CF.msgManager:sendGPDismiss(itype)
    end
end

return SetModuleD