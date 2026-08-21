----------------------------------------
--@class NetReqGetAutoTransferCard : NetReq
--@author hejiafeng
--@date 2019-09-25
----------------------------------------
local NetReqGetAutoTransferCard = class("NetReqGetAutoTransferCard", TeaHouse.NetReq)

function NetReqGetAutoTransferCard:ctor()
    NetReqGetAutoTransferCard.super.ctor(self)
end

function NetReqGetAutoTransferCard:start(teaNumber, timeout)
    if not NetReqGetAutoTransferCard.super.start(self, timeout) then
        return
    end

    self._teaNumber = teaNumber
    self._nAskId = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqGetAutoTransferCard:new()
    tReq.nTeaId = teaNumber
    tReq.nAskId = self._nAskId

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespGetAutoTransferCard, self.onRespGetAutoTransferCard)
end

function NetReqGetAutoTransferCard:onRespGetAutoTransferCard(msgData)
    if self._nAskId == msgData.nAskId then
        if msgData.nTeaId == self._teaNumber then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetAutoTransferCard.RETVAL.OK then
                self:success(msgData)
            else
                self:fail()
            end
        else
            self:fail()
        end
    end
end

return NetReqGetAutoTransferCard"