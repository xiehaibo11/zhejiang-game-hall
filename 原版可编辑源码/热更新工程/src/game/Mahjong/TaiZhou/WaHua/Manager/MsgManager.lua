local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendAction(comb, actionID, powerID)
    local msgAction = CF.GameProtocol.msgAction:new()
    msgAction.nSeat = self._selfSeat
    local combs = {}
    combs["nFlag"] = comb.flag
    combs["nFromSeat"] = comb.from
    combs["nCount"] = #comb.mahs
    combs["nMahs"] = comb.mahs
    combs["nInCount"] = #comb.ins
    combs["nInMahs"] = comb.ins

    msgAction.tComb = combs
    msgAction.nPowerID = powerID
    msgAction.nActionID = actionID
    self:sendStreamPacket(msgAction)
end

function MsgManager:sendTaoHua(bTaoHua)
    local msgTaoHua = CF.GameProtocol.msgTaoHua:new()
    msgTaoHua.sSeat = CF.roomData:getSelfSeat()
    msgTaoHua.bTaoHua = bTaoHua
    self:sendStreamPacket(msgTaoHua)
end

function MsgManager:sendForwardOperatePass(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = CF.roomData:getSelfSeat()
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.OperatePass
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = CF.roomData:getSelfSeat()
    msgRequestDismiss.time = 60
    self:sendStreamPacket(msgRequestDismiss)
end

return MsgManager