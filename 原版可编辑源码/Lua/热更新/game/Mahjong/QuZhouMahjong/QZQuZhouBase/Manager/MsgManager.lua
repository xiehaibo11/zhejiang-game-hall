local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendQiaoPiHua(data, index)
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgClientForwardEx.sSeat = self._selfSeat
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgClientForwardEx.strData = index
    self:sendStreamPacket(msgClientForwardEx)
end

function MsgManager:sendGameStart()
    MsgManager.super.sendGameStart(self)
    local roomid = CF.roomData:getRoomID()
    if roomid then
        local nRoomID = tonumber(roomid)
        if nRoomID then
            self:sendRoomNumber(nRoomID)
        end
    end
end

return MsgManager