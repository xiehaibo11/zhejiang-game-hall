---@class NetReqTeaHouseRight : NetReq
local NetReqTeaHouseRight = class("NetReqTeaHouseRight", TeaHouse.NetReq)

function NetReqTeaHouseRight:ctor()
    NetReqTeaHouseRight.super.ctor(self)

    self._nAskid = 0
end

function NetReqTeaHouseRight:start(areaID, numID, timeoutTime)
    if not NetReqTeaHouseRight.super.start(self, timeoutTime) then
        return
    end

    local reqTeaHouseRight = TeaHouse.TeaHouseProtocol.ReqTeaHouseRight:new()
    self._nAskid = os.time()
    reqTeaHouseRight.nAskid = self._nAskid
    reqTeaHouseRight.nAreaid = areaID
    reqTeaHouseRight.nNumid = numID
    self:sendPacket(reqTeaHouseRight, TeaHouse.TeaHouseProtocol.RespTeaHouseRight, self.onRespTeaHouseRight)
end

function NetReqTeaHouseRight:onRespTeaHouseRight(msgData)
    if msgData.nAskid == self._nAskid then
        self:success(msgData)
    end
end

return NetReqTeaHouseRight�