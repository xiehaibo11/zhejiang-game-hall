local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Manager.MsgManager")

function MsgManager:sendAheadStartSelected(flag)
    local msgAheadStartSelected = CF.GameProtocol.msgAheadStartSelected:new()
    msgAheadStartSelected.selectedFlag = flag
    self:sendStreamPacket(msgAheadStartSelected) 
end


return MsgManagerx