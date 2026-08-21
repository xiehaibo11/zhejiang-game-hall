---@class NetReqTeaHouseCost : NetReq
local NetReqTeaHouseCost = class("NetReqTeaHouseCost", TeaHouse.NetReq)

function NetReqTeaHouseCost:start(nTeaid, nDay, timeoutTime)
    if not NetReqTeaHouseCost.super.start(self, timeoutTime) then
        return
    end

    local reqTeaHouseCost = TeaHouse.ActiveProtocol.ReqTeaHouseCost:new()
    reqTeaHouseCost.nAskid = 0
    reqTeaHouseCost.nAreaid = TeaHouse.BridgeData.getAreaID()
    reqTeaHouseCost.nTeaid = nTeaid
    reqTeaHouseCost.nDay = nDay or 0
    self:sendPacket(reqTeaHouseCost, TeaHouse.ActiveProtocol.RespTeaHouseCost, self.onRespTeaHouseCost)
end

function NetReqTeaHouseCost:onRespTeaHouseCost(msgData)
    self:success(msgData)
end

return NetReqTeaHouseCost�