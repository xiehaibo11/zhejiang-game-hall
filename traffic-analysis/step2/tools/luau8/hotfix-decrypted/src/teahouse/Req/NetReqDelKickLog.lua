
----------------------------------------
--@class NetReqDelKickLog : NetReq
--@author zhanghaichuan01
--@desc 删除退出记录
--@date 2023-6-19
----------------------------------------
local NetReqDelKickLog = class("NetReqDelKickLog", TeaHouse.NetReq)

function NetReqDelKickLog:ctor()
    NetReqDelKickLog.super.ctor(self)
    self._infoList = {}
end

function NetReqDelKickLog:start(nPlayerAreaId, nPlayerNumId, nOperAreaId, nOperNumId, nTeaId, nTime, timeout)
    if not NetReqDelKickLog.super.start(self,timeout) then
        return
    end
    local tReq = TeaHouse.TeaHouseProtocol.ReqDelKickLog:new()
    self._nAskId = os.time()
    tReq.nAskId = self._nAskId
    tReq.nPlayerAreaId = nPlayerAreaId
    tReq.nPlayerNumId = nPlayerNumId
    tReq.nOperAreaId = nOperAreaId
    tReq.nOperNumId = nOperNumId
    tReq.nTeaId = nTeaId
    tReq.nTime = nTime

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespDelKickLog, self.onRespDelKickLog)
end

function NetReqDelKickLog:onRespDelKickLog(msgData)
    if self._nAskId ~= msgData.nAskId then
        return
    end
    if msgData then
        self:success(msgData)
    else
        self:fail()
    end
end

return NetReqDelKickLog�