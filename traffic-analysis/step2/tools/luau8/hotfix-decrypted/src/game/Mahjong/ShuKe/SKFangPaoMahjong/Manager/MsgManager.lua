local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = CF.roomData:getSelfSeat()
    msgRequestDismiss.time = 0
    msgRequestDismiss.respondDismiss = {0, 0, 0, 0}
    self:sendStreamPacket(msgRequestDismiss)
end

--响应续桌
function MsgManager:sendRespContinue(bContinue)
    local msgRespContinue = CF.GameProtocol.msgRespContinue:new()
    msgRespContinue.bContinue = bContinue
    msgRespContinue.nSeat = CF.roomData:getSelfSeat()
    self:sendStreamPacket(msgRespContinue)
end

function MsgManager:sendTingInfo(data)
    local msgTingInfo = CF.GameProtocol.msgNowTingInfo:new()
    msgTingInfo.seat = CF.roomData:getSelfSeat()
    msgTingInfo.sTingSize = #data
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

return MsgManager�