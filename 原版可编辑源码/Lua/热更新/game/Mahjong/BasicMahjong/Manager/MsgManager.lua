local MsgManager = CF.gameClass("MsgManager", "game.GameBase.Manager.MsgManager")

function MsgManager:sendTrust(bTrust)
    local msgTrust = CF.GameProtocol.msgTrust:new()
    msgTrust.nSeat = self._selfSeat
    if bTrust then
        msgTrust.nFlag = CF.GameDefine.TUOGUAN.START
    else
        msgTrust.nFlag = CF.GameDefine.TUOGUAN.END
    end
    self:sendStreamPacket(msgTrust)
end

--牌层协议
function MsgManager:sendPlayMahs(mahID, actionID)
    local msgPlay = CF.GameProtocol.msgPlay:new()
    msgPlay.nSeat = self._selfSeat
    msgPlay.nMah = mahID
    msgPlay.nActionID = actionID
    self:sendStreamPacket(msgPlay)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendReplace(mah)
    local msgReplace = CF.GameProtocol.msgReplace:new()
    msgReplace.nSeat = self._selfSeat
    msgReplace.nMah = mah
    self:sendStreamPacket(msgReplace)
end

function MsgManager:sendAction(comb, actionID)
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
    msgAction.nActionID = actionID
    self:sendStreamPacket(msgAction)
end

function MsgManager:sendHu(actionID)
    local msgHu = CF.GameProtocol.msgHu:new()
    msgHu.nSeat = self._selfSeat
    msgHu.nActionID = actionID
    self:sendStreamPacket(msgHu)
end

function MsgManager:sendTing()

end

function MsgManager:sendCancel(actionID)
    local msgCancel = CF.GameProtocol.msgCancel:new()
    msgCancel.nSeat = self._selfSeat
    msgCancel.nActionID = actionID
    self:sendStreamPacket(msgCancel)
end

function MsgManager:sendEndWait(index)
    local msgEndWait = CF.GameProtocol.msgEndWait:new()

    msgEndWait.nStepID = index
    msgEndWait.nSeat = self._selfSeat
    self:sendStreamPacket(msgEndWait)
end

--发送洗牌协议
function MsgManager:sendPlayerShuffle()
    local msgReqShuffle = CF.GameProtocol.msgReqShuffle:new()
    msgReqShuffle.sSeat = self._selfSeat
    self:sendStreamPacket(msgReqShuffle)
end

function MsgManager:sendForwardOperatePass(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = CF.roomData:getSelfSeat()
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.OPERATE_PASS
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendSpeak(index, bMan)
    local msgSpeak = CF.GameProtocol.msgSpeak:new()
    msgSpeak.speakSeat = self._selfSeat
    msgSpeak.id = index
    msgSpeak.bIsMan = bMan
    self:sendStreamPacket(msgSpeak)
end

function MsgManager:sendAddBei()

end

--做牌相关
function MsgManager:sendSpecfHandMahs(mahs, count, maxHandCount)
    local msgSpecfHand = CF.GameProtocol.msgSpecfHand:new()
    maxHandCount = maxHandCount - 1
    local nCount = (count > maxHandCount and { maxHandCount } or { count })[1]
    msgSpecfHand.nCount = nCount
    msgSpecfHand.nMahs = mahs
    msgSpecfHand.nSeat = self._selfSeat
    self:sendStreamPacket(msgSpecfHand)
end

function MsgManager:sendSpecfWallMahs(mahs)
    local msgSpecfWall = CF.GameProtocol.msgSpecfWall:new()
    msgSpecfWall.nCount = #mahs
    msgSpecfWall.nMahs = mahs
    self:sendStreamPacket(msgSpecfWall)
end

function MsgManager:sendSpecfTakeMah(takeMah)
    local msgSpecfDanFang = CF.GameProtocol.msgSpecfDanFang:new()
    msgSpecfDanFang.nDanFang = takeMah
    msgSpecfDanFang.nSeat = self._selfSeat
    self:sendStreamPacket(msgSpecfDanFang)
end

function MsgManager:sendSpecfReq()
    local msgSpecfReq = CF.GameProtocol.msgSpecfReq:new()
    msgSpecfReq.nSeat = self._selfSeat
    self:sendStreamPacket(msgSpecfReq)
end

function MsgManager:sendSpecfEnd()
    local msgSpecfEnd = CF.GameProtocol.msgSpecfEnd:new()
    msgSpecfEnd.nSeat = self._selfSeat
    self:sendStreamPacket(msgSpecfEnd)
end

function MsgManager:sendGameQuickStart(state)

end

return MsgManager