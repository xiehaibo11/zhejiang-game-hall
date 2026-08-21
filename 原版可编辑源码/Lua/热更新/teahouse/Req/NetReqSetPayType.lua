----------------------------------------
--@class NetReqSetPayType : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqSetPayType = class("NetReqSetPayType", TeaHouse.NetReq)

function NetReqSetPayType:ctor()
    NetReqSetPayType.super.ctor(self)
end

function NetReqSetPayType:start(teaNumber, anPaySet, timeoutTime, payType, payModeType, bCurrencyFirst, bLastCost)
    if not NetReqSetPayType.super.start(self, timeoutTime) then
        return
    end

    self._nAskid = os.time()

    local tReq = TeaHouse.TeaHouseProtocol.ReqSetPayType:new()
    tReq.nAskid = self._nAskid
    tReq.nTeaid = teaNumber
    tReq.nPayType = payType
    tReq.nSize = #anPaySet
    tReq.anPaySet = anPaySet
    if payModeType then
        tReq.nPayModeType = payModeType
    end
    tReq.bCurrencyFirst = bCurrencyFirst
    tReq.bLastCost = bLastCost
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespSetPayType, self.onRespSetPayType)
end

function NetReqSetPayType:onRespSetPayType(msgData)
    if self._nAskid == msgData.nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.SUCCESS then
            self:success(msgData)
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.NO_TEAHOUSE then
            self:setMessage("NO_TEAHOUSE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.NO_NORIGHT then
            self:setMessage("NO_NORIGHT")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.HAVE_UNDEALCOST then
            self:setMessage("TEAHOUSE_PAYTYPE_SETFAIL")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.PAYTYPE_ERROR then
            self:setMessage("PAYTYPE_ERROR")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.PARAM_ERROR then
            self:setMessage("PARAM_ERROR")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPayType.FLAG.EXIST_TABLE then
            self:setMessage("EXIST_TABLE")
        end
        self:fail(msgData)
    end
end

return NetReqSetPayType