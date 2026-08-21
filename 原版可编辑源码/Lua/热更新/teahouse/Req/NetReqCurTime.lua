local NetReqCurTime = class("NetReqCurTime", TeaHouse.NetReq)

--领队/用户，玩家共用
function NetReqCurTime:ctor()
    NetReqCurTime.super.ctor(self)
    self._curTime = 0
end

function NetReqCurTime:start(timeoutTime)
    if not NetReqCurTime.super.start(self, timeoutTime) then
        return
    end

    local tReq = TeaHouse.ActiveProtocol.ReqCurTime:new()
    tReq.nAskid = 0
    self:sendPacket(tReq, TeaHouse.ActiveProtocol.RespCurTime, self.onRespCurTime)
end

function NetReqCurTime:onRespCurTime(msgData)
    self._curTime = msgData.nTime
    self:success()
end

return NetReqCurTime