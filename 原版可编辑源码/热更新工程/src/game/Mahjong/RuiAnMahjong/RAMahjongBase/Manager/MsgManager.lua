local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendGPSMsg(data)
    local msgClientForward = CF.GameProtocol.msgClientForward:new()
    msgClientForward.sSeat = CF.roomData:getSelfSeat()
    msgClientForward.sID =  CF.GameProtocol.msgClientForward.CF_ID.GPS_MSG
    msgClientForward.strData = data
    CF.netEngine.sendStreamPacket(msgClientForward)
end

return MsgManager