local SetModule = CF.gameClass("SetModule", "game.GameBase.Modules.Setting.Module")

SetModule.DISMISS_TYPE = {
    HOST_AGREE = 0,--房主解散
    MORE_PLAYER_AGREE = 1,--多数人同意
    --倒计时解散客户端部分需要各区自行接入
    COUNT_DOWN_1  = 2,--多数人同意且有倒计时
    COUNT_DOWN_2  = 3,--全部人同意且有倒计时
    COUNT_DOWN_3 = 4 --多数人同意或拒绝且有倒计时
}

function SetModule:reqDismiss()
    local dismissType = CF.roomData:getDismissType()
    if dismissType == SetModule.DISMISS_TYPE.COUNT_DOWN_1 or dismissType == SetModule.DISMISS_TYPE.COUNT_DOWN_2 or dismissType == SetModule.DISMISS_TYPE.COUNT_DOWN_3 then
        CF.msgManager:sendDismissCountdown()
    else
        CF.msgManager:sendRequestDismiss()
    end
    CF.msgManager:sendRespondDismiss(true)
end

return SetModule
k