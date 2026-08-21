local MsgManager = CF.gameClass("MsgManager", "game.GameBase.Manager.MsgManager")

function MsgManager:ctor(appId)
    MsgManager.super.ctor(self, appId)
end

-- 主动请求解散
function MsgManager:sendRequestDismiss()
    local itype = 0 --发起解散
    self:sendGPDismiss(itype)
end

-- 被动响应解散
function MsgManager:sendRespondDismiss(agree)
    local itype = agree and 1 or 2 --同意或拒绝
    self:sendGPDismiss(itype)
end

-- 托管
function MsgManager:sendTrust(state)
    if state == nil then 
        return
    end
    local msgTrust = CF.GameProtocol.msgTrust:new()
    msgTrust.nSeat = self._selfSeat
    msgTrust.bState = state
    self:sendStreamPacket(msgTrust)
end

-- 做牌
function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgDoCard = CF.GameProtocol.msgDoCard:new()
    msgDoCard.sSeat = self._selfSeat
    msgDoCard.ucCount = #gameCardGroup
    for i = 1,msgDoCard.ucCount do
        msgDoCard.ucCards[i] = gameCardGroup[i]
    end

    self:sendStreamPacket(msgDoCard)
end

--抢地主
function MsgManager:sendRobLandlord(score)
    if score == nil then 
        return
    end
    local msgRobLandlord = CF.GameProtocol.msgRobLandlord:new()
    msgRobLandlord.nSeat = self._selfSeat
    msgRobLandlord.nRobRate = score
    self:sendStreamPacket(msgRobLandlord)
end

--明牌
function MsgManager:sendShowHandCardPower(isShow)
    if isShow == nil then 
        return
    end
    local msgSetShowHandCardPower = CF.GameProtocol.msgSetShowHandCardPower:new()
    msgSetShowHandCardPower.nSeat = self._selfSeat
    msgSetShowHandCardPower.bSetShowHandCardPower = isShow
    
    self:sendStreamPacket(msgSetShowHandCardPower)
end

--加倍
function MsgManager:sendSetDouble(isDouble)
    if isDouble == nil then 
        return
    end
    local msgSetDouble = CF.GameProtocol.msgSetDouble:new()
    msgSetDouble.bSetDouble = isDouble
    
    self:sendStreamPacket(msgSetDouble)
end

-- 不要
function MsgManager:sendPass()
    local msgPlayCard = CF.GameProtocol.msgPlayCard:new()
    msgPlayCard.nSeat = self._selfSeat
    msgPlayCard.nPlayCardCnt = 0
    self:sendStreamPacket(msgPlayCard)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

-- 出牌
function MsgManager:sendOutCard(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgPlayCard = CF.GameProtocol.msgPlayCard:new()
    msgPlayCard.nSeat = self._selfSeat
    msgPlayCard.nPlayCardCnt = #gameCardGroup
    msgPlayCard.nPlayCardType = 0

    for i = 1,msgPlayCard.nPlayCardCnt do
        msgPlayCard.nPlayCard[i] = gameCardGroup[i]
    end

    self:sendStreamPacket(msgPlayCard)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

--瑞安，温茶，丽水，定时器道具
function MsgManager:sendUseMarker(endTime, flag)
    local msgUseMarker = CF.GameProtocol.msgUseMarker:new()
    msgUseMarker.seat = self._selfSeat
    msgUseMarker.markerState = flag or 0
    msgUseMarker.endTime = endTime
    self:sendStreamPacket(msgUseMarker)
end

function MsgManager:sendUseMarkerEx(endTime, flag)
    self:sendUseMarker(endTime, flag)
end

return MsgManager�