local TrustModule = CF.gameClass("TrustModule", CF.ModuleBase)

TrustModule.EVENT_HIDE_TRUST = "EVENT_HIDE_TRUST"
TrustModule.EVENT_UPDATE_TRUST_DATA = "UPDATE_TRUST_DATA"

function TrustModule:ctor()
    TrustModule.super.ctor(self)
    self._trustSeat = {}
end

function TrustModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgTrust),msgClass = CF.GameProtocol.msgTrust},
        {callback = handler(self,self.onMsgGameEnd),msgClass = CF.GameProtocol.msgGameEnd},
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgEndGame}, -- 麻将的
    }
end

--##托管
function TrustModule:onMsgTrust(msgData)
    local seat = msgData.sTrustSeat ~= nil and msgData.sTrustSeat or msgData.nSeat
    local isTrust = msgData.bTrust ~= nil and msgData.bTrust or (msgData.nFlag ~= nil and msgData.nFlag == 1 or (msgData.bState ~= nil and msgData.bState or false))
    self._trustSeat[seat] = isTrust
    self:dispatchEvent( { name = self.EVENT_UPDATE_TRUST_DATA, msg = msgData })
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    local bSelf,bTrust = self:checkShowTrust(msgData)
    if not bSelf then
        return
    end
    if bTrust then
        self:showTrustView()
    else
        self:hideTrustView()
    end
end

function TrustModule:getTrustState(seat)
    return self._trustSeat[seat] or false
end

function TrustModule:checkShowTrust(msgData)
    return msgData.sTrustSeat == CF.roomData:getSelfSeat(), msgData.bTrust
end

function TrustModule:showTrustView()
    local runningScene = display.getRunningScene()
    if runningScene:getChildByName("TrustView") then
        return
    end
    CF.gameRequire("Modules.Trust.View").new():showSelf()
end

function TrustModule:onMsgGameEnd(msgData)
    for k,v in pairs(self._trustSeat) do
        self._trustSeat[k] = false
    end
    self:hideTrustView()
    self:dispatchEvent( { name = self.EVENT_UPDATE_TRUST_DATA, msg = msgData })
end

function TrustModule:hideTrustView()
    self:dispatchEvent( { name = self.EVENT_HIDE_TRUST })
end

function TrustModule:doSendTrust(bTrust)
    CF.msgManager:sendTrust(bTrust)
end

function TrustModule:onGameStart()
    self:hideTrustView()
end

return TrustModule