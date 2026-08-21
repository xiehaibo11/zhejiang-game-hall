local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.WenZhou.WenZhouMahjongBase.Manager.MsgManager")

function MsgManager:sendMDdi(nType, bSure)
    local msgMDdi = CF.GameProtocol.msgMDdi:new()
    msgMDdi.nType = nType
    msgMDdi.sSeat = CF.roomData:getSelfSeat()
    if bSure == true then
        msgMDdi.nRet = 1
    else
        msgMDdi.nRet = 0
    end
    self:sendStreamPacket(msgMDdi)
end

-- 发送加倍
function MsgManager:sendAddBei()
    local msgAddBei = CF.GameProtocol.msgAddBei:new()
    msgAddBei.nSeat = CF.roomData:getSelfSeat()
    self:sendStreamPacket(msgAddBei)
end

--响应续桌
function MsgManager:sendRespContinue(bContinue)
    local msgRespContinue = CF.GameProtocol.msgRespContinue:new()
    msgRespContinue.bContinue = bContinue
    msgRespContinue.nSeat = CF.roomData:getSelfSeat()
    self:sendStreamPacket(msgRespContinue)
end

--发送聊天消息
function MsgManager:sendQiaoPiHua(index)
    local msgQiaoPiHua = CF.GameProtocol.msgQiaoPiHua:new()
    msgQiaoPiHua.sSeat = CF.roomData:getSelfSeat()
    msgQiaoPiHua.ucQiaoPiHua = index
    self:sendStreamPacket(msgQiaoPiHua)
end

--发送聊天消息
function MsgManager:sendQiaoPiHuaEx(data)
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgClientForwardEx.sSeat = CF.roomData:getSelfSeat()
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgClientForwardEx.strData = data
    self:sendStreamPacket(msgClientForwardEx)
end

return MsgManager