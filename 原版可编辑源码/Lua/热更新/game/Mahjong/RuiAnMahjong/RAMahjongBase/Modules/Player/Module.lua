local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

function PlayerModule:onMsgClientForward(msgData)
    if msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.GPS_MSG then
        self:onMsgClientForwardGPSMsg(msgData)
    else
        PlayerModule.super.onMsgClientForwardBase(self, msgData)
    end
end

function PlayerModule:onMsgClientForwardGPSMsg(msgData)
    self:onMsgClientForwardAMap(msgData)
end

return PlayerModule