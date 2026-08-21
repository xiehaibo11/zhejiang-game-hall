---@class NetReqPlayerOwnerCard : NetReq
local NetReqPlayerOwnerCard = class("NetReqPlayerOwnerCard", TeaHouse.NetReq)

function NetReqPlayerOwnerCard:ctor()
    NetReqPlayerOwnerCard.super.ctor(self)

    self._nAskid = 0
end

function NetReqPlayerOwnerCard:start(teaNumber, propID, timeoutTime)
    if not NetReqPlayerOwnerCard.super.start(self, timeoutTime) then
        return
    end

    local reqPlayerOwnerCard = TeaHouse.TeaHouseProtocol.ReqPlayerOwnerCard:new()
    self._nAskid = os.time()
    reqPlayerOwnerCard.nAskId = self._nAskid
    reqPlayerOwnerCard.nTeaId = teaNumber or 0
    reqPlayerOwnerCard.nPropId = propID or 0
    self:sendPacket(reqPlayerOwnerCard, TeaHouse.TeaHouseProtocol.RespPlayerOwnerCard, self.onRespPlayerOwnerCard)
end

function NetReqPlayerOwnerCard:onRespPlayerOwnerCard(msgData)
    if msgData.nAskId == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespPlayerOwnerCard.RETVAL.OK then
            self:success(msgData)
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespPlayerOwnerCard.RETVAL.NO_RIGHT then
            self:fail(msgData)
        end
    end
end

return NetReqPlayerOwnerCard