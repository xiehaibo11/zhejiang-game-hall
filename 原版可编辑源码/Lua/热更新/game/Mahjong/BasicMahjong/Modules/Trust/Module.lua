local TrustModule = CF.gameClass("TrustModule", "game.GameBase.Modules.Trust.Module")

function TrustModule:checkShowTrust(msgData)
    local seat = msgData.nSeat
    local flag = msgData.nFlag
    return seat == CF.roomData:getSelfSeat(), flag == CF.GameDefine.TUOGUAN.START
end

return TrustModule