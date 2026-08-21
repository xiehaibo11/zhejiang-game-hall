local NetReqGetBanInfo = class("NetReqGetBanInfo", TeaHouse.NetReq)

function NetReqGetBanInfo:ctor()
    NetReqGetBanInfo.super.ctor(self)
    self._nAskid = 0
end

function NetReqGetBanInfo:start(timeoutTime)
    if not NetReqGetBanInfo.super.start(self, timeoutTime) then
        return
    end
    local respGetBanInfo = TeaHouse.BoxDataProtocol.ReqGetBanInfo:new()
    respGetBanInfo.nAskId = self._askID
    self:sendPacket(respGetBanInfo, TeaHouse.BoxDataProtocol.RespGetBanInfo, self.onRespGetBanInfo)
end

function NetReqGetBanInfo:onRespGetBanInfo(msgData)
    if msgData.nAskId == self._askID then
        self:success(msgData)
    else
        self:fail()
    end
end

return NetReqGetBanInfo