local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendGameState(state)
    local msgGameState = CF.GameProtocol.msgGameState:new()
    msgGameState.seat =  CF.roomData:getSelfSeat()
    msgGameState.state = state
    self:sendStreamPacket(msgGameState)
end

return MsgManager