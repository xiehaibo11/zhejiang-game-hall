local MsgManager = CF.gameClass("MsgManager", "game.DoubleKou.BaseDoubleKou.Manager.MsgManager")

function MsgManager:sendDismissCountdown()
    if CF.roomData:getDismissType() == CF.GameDefine.DISMISS_TYPE.GP then
        local itype = 0
        self:sendGPDismiss(itype)
    else
        if not CF.GameProtocol or not CF.GameProtocol.msgDismissCountdown then
            return
        end
        local msgDismissCountdown = CF.GameProtocol.msgDismissCountdown:new()
        msgDismissCountdown.sSeat = self._selfSeat
        msgDismissCountdown.nTime = 0
        for i = 0, CF.roomData:getMaxPlayer() -1 do
            msgDismissCountdown.iAgrees[i] = 0
        end
        self:sendStreamPacket(msgDismissCountdown)
    end
end

return MsgManager
