----------------------------------------
--@class NetReqOthersHideTHInfo : NetReq
--@author hejiafeng
--@date 2019-09-25
----------------------------------------
local NetReqOthersHideTHInfo = class("NetReqOthersHideTHInfo", TeaHouse.NetReq)

function NetReqOthersHideTHInfo:ctor()
    NetReqOthersHideTHInfo.super.ctor(self)
end

function NetReqOthersHideTHInfo:start(teaNumber, timeout)
    if not NetReqOthersHideTHInfo.super.start(self, timeout) then
        return
    end

    self._teaNumber = teaNumber
    self._nAskid = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqOthersHideTHInfo:new()
    tReq.nTeaid = teaNumber
    tReq.nAskid = self._nAskid

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespOthersHideTHInfo, self.onRespOthersHideTHInfo)
end

function NetReqOthersHideTHInfo:onRespOthersHideTHInfo(msgData)
    if self._nAskid == msgData.nAskid then
        self:success(msgData)
    end
end

return NetReqOthersHideTHInfo