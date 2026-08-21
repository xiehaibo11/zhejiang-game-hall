local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Manager.MsgManager")

function MsgManager:sendQiaoPiHua(data, index)
    local msgQiaoPiHua = CF.GameProtocol.msgQiaoPiHua:new()
    msgQiaoPiHua.sSeat = CF.roomData:getSelfSeat()
    msgQiaoPiHua.ucQiaoPiHua = index
    self:sendStreamPacket(msgQiaoPiHua)
end

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

return MsgManageru