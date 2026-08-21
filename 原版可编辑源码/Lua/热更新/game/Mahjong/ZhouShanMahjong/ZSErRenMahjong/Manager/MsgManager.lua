local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendAction(comb, actionID)
    MsgManager.super.sendAction(self, comb, actionID)
    CF.game:getModule("GameLayer"):getGameData():setTingGangMahs({})
end

function MsgManager:sendTing()
    self:sendTingWait()
    CF.game:getModule("GameLayer"):dispatchShowTing(true)
end

-- 听牌
function MsgManager:sendTingWait()
    local msgTWait = CF.GameProtocol.msgTWait:new()
    msgTWait.nSeat = self._selfSeat
    self:sendStreamPacket(msgTWait)
end

-- 取消听牌
function MsgManager:sendTingWaitCancel()
    local msg = CF.GameProtocol.msgTWaitCancel:new()
    msg.nSeat = self._selfSeat
    self:sendStreamPacket(msg)
    CF.game:getModule("GameLayer"):getGameData():setTingState(self._selfSeat, "null")
end

return MsgManager