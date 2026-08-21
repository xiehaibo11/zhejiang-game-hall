local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendGameQuickStart(state)
    local msgReqAdvanceStart = CF.GameProtocol.msgReqAdvanceStart:new()
    msgReqAdvanceStart.nSeat = CF.roomData:getSelfSeat()
    msgReqAdvanceStart.nTime = 0
    self:sendStreamPacket(msgReqAdvanceStart)
end

function MsgManager:sendReqAdPlayerAgree(bAgree)
    local msgReqAdPlayerAgreeData = CF.GameProtocol.msgReqAdPlayerAgree:new()
    msgReqAdPlayerAgreeData.nSeat = CF.roomData.getSelfSeat()
    msgReqAdPlayerAgreeData.bAgree = bAgree
    self:sendStreamPacket(msgReqAdPlayerAgreeData)
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

function MsgManager:sendReqEarlyStart()
    local msgReqAdvanceStart = CF.GameProtocol.msgReqAdvanceStart:new()
    msgReqAdvanceStart.nSeat = CF.roomData:getSelfSeat()
    msgReqAdvanceStart.nTime = 0
    self:sendStreamPacket(msgReqAdvanceStart)
end

function MsgManager:sendReqAdPlayerAgree(bAgree)
    local msgReqAdPlayerAgreeData = CF.GameProtocol.msgReqAdPlayerAgree:new()
    msgReqAdPlayerAgreeData.nSeat = CF.roomData:getSelfSeat()
    msgReqAdPlayerAgreeData.bAgree = bAgree
    self:sendStreamPacket(msgReqAdPlayerAgreeData)
end

return MsgManager