local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Manager.MsgManager")

--发送聊天消息
function MsgManager:sendQiaoPiHua(data, index)
    local msgQiaoPiHua = CF.GameProtocol.msgQiaoPiHua:new()
    msgQiaoPiHua.sSeat = CF.roomData:getSelfSeat()
    msgQiaoPiHua.ucQiaoPiHua = index
    self:sendStreamPacket(msgQiaoPiHua)
end

function MsgManager:sendTingInfo(data)
    local msgTingInfo = CF.GameProtocol.msgNowTingInfo:new()
    msgTingInfo.seat = CF.roomData:getSelfSeat()
    msgTingInfo.sTingSize = #data
    msgTingInfo.sTingMahCount = {}
    msgTingInfo.nTingMah = {}
    if #data == 0 then
        msgTingInfo.bUniversalHu = false
        msgTingInfo.nTingMah = {0}
        msgTingInfo.sTingMahCount = {0}
    else
        for i = 1, #data do
            msgTingInfo.nTingMah[#msgTingInfo.nTingMah + 1] = data[i].huMahID
            msgTingInfo.bUniversalHu = false
            if data[i].huMahID == 255 then
                msgTingInfo.bUniversalHu = true
            end
            msgTingInfo.sTingMahCount[#msgTingInfo.sTingMahCount + 1] = 0
        end
    end
    self:sendStreamPacket(msgTingInfo)
end

return MsgManager�