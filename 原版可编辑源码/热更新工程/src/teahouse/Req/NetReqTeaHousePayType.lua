----------------------------------------
--@class NetReqTeaHousePayType : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqTeaHousePayType = class("NetReqTeaHousePayType", TeaHouse.NetReq)


function NetReqTeaHousePayType:ctor()
    NetReqTeaHousePayType.super.ctor(self)
end

function NetReqTeaHousePayType:start(teaNumber, timeoutTime)
    if not NetReqTeaHousePayType.super.start(self, timeoutTime) then
        return
    end

    self._nAskid = os.time()

    local tReq = TeaHouse.TeaHouseProtocol.ReqPayType:new()
    tReq.nAskid = self._nAskid
    tReq.nTeaid = teaNumber
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespPayType, self.onRespPayType)
end

function NetReqTeaHousePayType:onRespPayType(msgData)
    if msgData.nAskid == self._nAskid then
        self:success(msgData)
    end
end

return NetReqTeaHousePayType