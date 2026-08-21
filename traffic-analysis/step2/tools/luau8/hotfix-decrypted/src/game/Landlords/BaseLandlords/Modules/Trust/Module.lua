local TrustModule = CF.gameClass("TrustModule", "game.GameBase.Modules.Trust.Module")

function TrustModule:checkShowTrust(msgData)
    return msgData.nSeat == CF.roomData:getSelfSeat(), msgData.bState
end

return TrustModule�