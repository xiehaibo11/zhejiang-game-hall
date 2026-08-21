local MsgManager = CF.gameClass("MsgManager", "game.GameBase.Manager.MsgManager")

function MsgManager:ctor(appId)
    MsgManager.super.ctor(self, appId)
end

-- 服务触发自动过
function MsgManager:sendNotOutCards()
    -- local msgOutCard = CF.GameProtocol.msgOutCard:new()
    -- msgOutCard.sSeat = self._selfSeat
    -- msgOutCard.ucCardCount = 0
    -- self:sendStreamPacket(msgOutCard)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendPlayerChaoDi()
    -- local msgPlayerChaoDi = CF.GameProtocol.msgPlayerChaoDi:new()
    -- msgPlayerChaoDi.sSeat = self._selfSeat
    -- msgPlayerChaoDi.bCanChaodi = true

    -- self:sendStreamPacket(msgPlayerChaoDi)
end

function MsgManager:sendOutCards(gameCardGroup)
    if gameCardGroup == nil then
        return
    end
    local msgOutCard = CF.GameProtocol.msgOutCard:new()
    msgOutCard.sSeat = self._selfSeat
    msgOutCard.ucCount = #gameCardGroup.Cards
    for i = 1, msgOutCard.ucCount do
        msgOutCard.ucCards[i] = gameCardGroup.Cards[i]
    end
    msgOutCard.sCardType = 0

    self:sendStreamPacket(msgOutCard)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
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

function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then
        return
    end
    local msgSpecfCard = CF.GameProtocol.msgSpecfCard:new()
    msgSpecfCard.sSeat = self._selfSeat
    msgSpecfCard.ucCount = #gameCardGroup
    for i = 1, msgSpecfCard.ucCount do
        msgSpecfCard.ucCards[i] = gameCardGroup[i]
    end
    self:sendStreamPacket(msgSpecfCard)
end

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
