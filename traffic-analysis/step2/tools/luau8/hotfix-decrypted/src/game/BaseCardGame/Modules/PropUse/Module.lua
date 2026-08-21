local PropUseModule = CF.gameClass("PropUseModule", "game.GameBase.Modules.PropUse.Module")

function PropUseModule:onUsePropFail(usePropMsg)
    PropUseModule.super.onUsePropFail(self, usePropMsg)
    if self._reqParam and string.find(self._reqParam, "throwprop=1") then
        return
    end
    CF.msgManager:sendGameStart()
    if CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() then
        self._isNeedDelayCmd = false
        self:shuffleFinished()
    end
end

return PropUseModule