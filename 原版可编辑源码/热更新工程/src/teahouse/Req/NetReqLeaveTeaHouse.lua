---@class NetReqLeaveTeaHouse : NetReq
local NetReqLeaveTeaHouse = class("NetReqLeaveTeaHouse", TeaHouse.NetReq)

function NetReqLeaveTeaHouse:start(teaNumber, timeoutTime)
    if not NetReqLeaveTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqLeaveTeaHouse = TeaHouse.TeaHouseProtocol.ReqLeaveTeaHouse:new()
    reqLeaveTeaHouse.askid = 0
    reqLeaveTeaHouse.teaNumber = teaNumber
    self:sendPacket(reqLeaveTeaHouse, TeaHouse.TeaHouseProtocol.RespLeaveTeaHouse, self.onRespLeaveTeaHouse)
end

function NetReqLeaveTeaHouse:onRespLeaveTeaHouse(msgData)
    self:success()
end

return NetReqLeaveTeaHouse