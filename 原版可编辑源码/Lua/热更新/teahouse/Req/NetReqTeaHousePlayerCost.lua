---@class NetReqTeaHousePlayerCost : NetReq
local NetReqTeaHousePlayerCost = class("NetReqTeaHousePlayerCost", TeaHouse.NetReq)

function NetReqTeaHousePlayerCost:ctor()
    NetReqTeaHousePlayerCost.super.ctor(self)

    self._teaNumber = nil
    self._numID = nil
end

function NetReqTeaHousePlayerCost:start(teaNumber, numID, timeoutTime)
    if not NetReqTeaHousePlayerCost.super.start(self, timeoutTime) then
        return
    end

    local reqTeaHousePlayerCost = TeaHouse.ActiveProtocol.ReqTeaHousePlayerCost:new()
    reqTeaHousePlayerCost.nAskid = 0
    reqTeaHousePlayerCost.nAreaid = TeaHouse.BridgeData.getAreaID()
    reqTeaHousePlayerCost.nTeaid = teaNumber
    reqTeaHousePlayerCost.nNumid = numID
    self._teaNumber = teaNumber
    self._numID = numID
    self:sendPacket(reqTeaHousePlayerCost, TeaHouse.ActiveProtocol.RespTeaHousePlayerCost, self.onRespTeaHousePlayerCost)
end

function NetReqTeaHousePlayerCost:onRespTeaHousePlayerCost(msgData)
    if self._teaNumber == msgData.nTeaid and self._numID == msgData.nNumid then
        self:success(msgData)
    end
end

return NetReqTeaHousePlayerCost