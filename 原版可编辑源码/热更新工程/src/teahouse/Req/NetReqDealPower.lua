---@class NetReqDealPower : NetReq
local NetReqDealPower = class("NetReqDealPower", TeaHouse.NetReq)

function NetReqDealPower:ctor()
    NetReqDealPower.super.ctor(self)

    self._askPower = {}
end

function NetReqDealPower:start(maxCount, teaNumber, timeoutTime)
    if not NetReqDealPower.super.start(self, timeoutTime) then
        return
    end

    local reqDealPower = TeaHouse.TeaHouseProtocol.ReqDealPower:new()
    reqDealPower.askid = 0
    reqDealPower.teaNumber = teaNumber
    self:sendPacket(reqDealPower, TeaHouse.TeaHouseProtocol.RespDealPower, self.onRespDealPower)
end

function NetReqDealPower:onRespDealPower(msgData)
    for i = 1, msgData.size do
        self._askPower[#self._askPower + 1] = {
            data = msgData.data[i],
            numid = msgData.numid[i],
            areaid = msgData.areaid[i],
        }
    end
    self:success(self._askPower)
end

return NetReqDealPower