local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.WenZhou.WenZhouMahjongBase.Manager.MsgManager")

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

return MsgManager