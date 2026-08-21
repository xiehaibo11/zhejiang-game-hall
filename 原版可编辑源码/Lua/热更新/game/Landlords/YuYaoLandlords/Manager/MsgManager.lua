local MsgManager     = CF.gameClass("MsgManager", "game.Landlords.BaseLandlords.Manager.MsgManager")
local CardType       = CF.gameRequire("Define.CardType")

-- 主动请求解散
function MsgManager:sendSoRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismissEx:new()
    msgRequestDismiss.seat = self._selfSeat
    self:sendStreamPacket(msgRequestDismiss)
end

-- 被动响应解散
function MsgManager:sendRespondDismiss(agree)
    local msgRespondDismiss = CF.GameProtocol.msgRespondDismissEx:new()
    msgRespondDismiss.seat = self._selfSeat
    msgRespondDismiss.agree = agree
    self:sendStreamPacket(msgRespondDismiss)
end

function MsgManager:sendDismissCountdown()
    local msgDismissCountdown = CF.GameProtocol.msgDismissCountdown:new()
    msgDismissCountdown.sSeat = self._selfSeat
    msgDismissCountdown.nTime = 0
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        msgDismissCountdown.iAgrees[i] = 0
    end
    self:sendStreamPacket(msgDismissCountdown)
end

-- 托管
function MsgManager:sendTrust(state)
    if state == nil then 
        return
    end
    local msgTrust = CF.GameProtocol.msgTrust:new()
    msgTrust.sTrustSeat = self._selfSeat
    msgTrust.bTrust = state
    self:sendStreamPacket(msgTrust)
end

-- 做牌
function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgDoCard = CF.GameProtocol.msgSpecfCard:new()
    msgDoCard.sSeat = self._selfSeat
    msgDoCard.ucCount = #gameCardGroup
    for i = 1,msgDoCard.ucCount do
        msgDoCard.ucCards[i] = gameCardGroup[i]
    end

    self:sendStreamPacket(msgDoCard)
end

--抢地主
function MsgManager:sendRobLandlord(power)
    if power == nil then 
        return
    end

    local msgRobLandlord = CF.GameProtocol.msgRespSpecialPower:new()
    msgRobLandlord.sSeat = self._selfSeat
    msgRobLandlord.power = power
    self:sendStreamPacket(msgRobLandlord)
end


-- 不要
function MsgManager:sendPass()
    local msgPlayCard = CF.GameProtocol.msgOutCard:new()
    msgPlayCard.nSeat = self._selfSeat
    msgPlayCard.nPlayCardCnt = 0
    self:sendStreamPacket(msgPlayCard)
end

-- 出牌
function MsgManager:sendOutCard(gameCardGroup,cardsType)
    if gameCardGroup == nil then 
        return
    end
    local msgPlayCard = CF.GameProtocol.msgOutCard:new()
    msgPlayCard.nSeat = self._selfSeat
    msgPlayCard.nPlayCardCnt = #gameCardGroup
    for key, value in pairs(CardType.MappingTable) do
        if value == cardsType.cardTypeID then
            msgPlayCard.nPlayCardType = key
            break
        end
    end
    msgPlayCard.sEndPower = cardsType.cardPower
    if gameCardGroup[1] == 53 and #gameCardGroup == 1 then
        msgPlayCard.sEndPower = 17
    end

    for i = 1,msgPlayCard.nPlayCardCnt do
        msgPlayCard.nPlayCard[i] = gameCardGroup[i]
    end

    self:sendStreamPacket(msgPlayCard)
end

return MsgManager