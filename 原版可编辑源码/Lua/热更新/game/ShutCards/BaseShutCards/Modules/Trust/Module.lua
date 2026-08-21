local TrustModule = CF.gameClass("TrustModule", "game.GameBase.Modules.Trust.Module")

function TrustModule:ctor()
    TrustModule.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

--##托管
function TrustModule:onMsgTrust(msgData)
    TrustModule.super.onMsgTrust(self, msgData)
    local bSelf, bTrust = self:checkShowTrust(msgData)
    if bSelf then
        self._gameData:setTrust(bTrust)
    end
end

return TrustModule