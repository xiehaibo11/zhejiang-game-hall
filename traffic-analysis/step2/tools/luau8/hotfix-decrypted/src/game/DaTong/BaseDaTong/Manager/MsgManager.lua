local MsgManager    = CF.gameClass("MsgManager", "game.GameBase.Manager.MsgManager")

function MsgManager:sendOutCards(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgOutCards = CF.GameProtocol.msgOutCards:new()
    msgOutCards.sSeat = self._selfSeat
    msgOutCards.ucCount = #gameCardGroup.Cards
    --为了兼容老包，排序方式改变（老包按从大到小排序）
    for i = 1,msgOutCards.ucCount do
        msgOutCards.ucCards[i] = gameCardGroup.Cards[msgOutCards.ucCount - i + 1]
    end
    msgOutCards.sCardType = gameCardGroup.tType
    self:sendStreamPacket(msgOutCards)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendNotOutCards()
    local msgOutCards = CF.GameProtocol.msgOutCards:new()
    msgOutCards.sSeat = self._selfSeat
    msgOutCards.ucCount = 0
    msgOutCards.ucCards = {}
    msgOutCards.sCardType = 0
    self:sendStreamPacket(msgOutCards)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendWaitOpenCard()
    local msgWaitOpenCard = CF.GameProtocol.msgWaitOpenCard:new()
    msgWaitOpenCard.sSeat = self._selfSeat
    msgWaitOpenCard.bSuccess = true
    self:sendStreamPacket(msgWaitOpenCard)
end

function MsgManager:sendWaitTakeCard()
    local msgWaitTakeCard = CF.GameProtocol.msgWaitTakeCard:new()
    msgWaitTakeCard.sSeat = self._selfSeat
    msgWaitTakeCard.bSuccess = true
    self:sendStreamPacket(msgWaitTakeCard)
end

function MsgManager:sendWaitSwapSeat()
    local msgWaitSwapSeat = CF.GameProtocol.msgWaitSwapSeat:new()
    msgWaitSwapSeat.sSeat = self._selfSeat
    msgWaitSwapSeat.bSuccess = true
    self:sendStreamPacket(msgWaitSwapSeat)
end

function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgSpecfCard = CF.GameProtocol.msgWaitSelecrCard:new()
    msgSpecfCard.ucCardCount = #gameCardGroup
    for i = 1,msgSpecfCard.ucCardCount do
        msgSpecfCard.ucCard[i] = gameCardGroup[i]
    end
    self:sendStreamPacket(msgSpecfCard)
end

function MsgManager:sendRequestSwapSeat(dstSeat)
    local msgRequestSwapSeat = CF.GameProtocol.msgRequestSwapSeat:new()
    msgRequestSwapSeat.srcSeat = self._selfSeat
    msgRequestSwapSeat.destSeat = dstSeat

    self:sendStreamPacket(msgRequestSwapSeat)
end

function MsgManager:sendRespondSwapSeat(agree)
    local msgRespondSwapSeat = CF.GameProtocol.msgRespondSwapSeat:new()
    msgRespondSwapSeat.seat = self._selfSeat
    msgRespondSwapSeat.agree = agree

    self:sendStreamPacket(msgRespondSwapSeat)
end

--向GP发起续桌
function MsgManager:sendGPReqContinueGame(tableID)
    local reqContinueTable = CF.GameMProtocol.ReqContinueTable:new()
    reqContinueTable.nTableId = tableID
    reqContinueTable.nAskId = socket.gettime()
    CF.netEngine.sendGameProtocol(reqContinueTable)
end

--向GP发送同意或拒绝续桌
function MsgManager:sendGPRespContinue(tableID, isAgree)
    local reqDealContinueRequest = CF.GameMProtocol.ReqDealContinueRequest:new()
    reqDealContinueRequest.nTableId = tableID
    reqDealContinueRequest.nDealRet = isAgree and reqDealContinueRequest.DEALRET.AGREE or reqDealContinueRequest.DEALRET.REFUSE
    CF.netEngine.sendGameProtocol(reqDealContinueRequest)
end

function MsgManager:sendSurrenderRequestMsg()
    local msgRequestSurrender = CF.GameProtocol.msgRequestSurrender:new()
    msgRequestSurrender.sReqSeat = self._selfSeat
    self:sendStreamPacket(msgRequestSurrender)
end

function MsgManager:sendResPonseSurrenderMsg(sFlag)
    if sFlag ~= 1 and sFlag ~= 2 then
        return
    end
    local msgRespondSurrender = CF.GameProtocol.msgRespondSurrender:new()
    msgRespondSurrender.sResSeat = self._selfSeat
    msgRespondSurrender.sFlag = sFlag
    self:sendStreamPacket(msgRespondSurrender)
end

function MsgManager:sendReqShuffle()
    local msgReqShuffle = CF.GameProtocol.msgReqShuffle:new()
    msgReqShuffle.sSeat = self._selfSeat
    self:sendStreamPacket(msgReqShuffle)
end

function MsgManager:sendEndWaitShowBombAni()
    local msgWaitShowBombAni = CF.GameProtocol.msgWaitShowBombAni:new()
    msgWaitShowBombAni.sSeat = self._selfSeat
    msgWaitShowBombAni.bIsSuccess = true
    self:sendStreamPacket(msgWaitShowBombAni)
end

function MsgManager:sendEndWaitShowBomb(sSeat)
    local msgWaitShowBomb = CF.GameProtocol.msgWaitShowBomb:new()
    msgWaitShowBomb.sSeat = sSeat
    msgWaitShowBomb.bIsSuccess = true
    self:sendStreamPacket(msgWaitShowBomb)
end

function MsgManager:sendRequestDismiss()
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = self._selfSeat
    msgRequestDismiss.nRemainingTime = 120
    self:sendStreamPacket(msgRequestDismiss)
end

return MsgManager"