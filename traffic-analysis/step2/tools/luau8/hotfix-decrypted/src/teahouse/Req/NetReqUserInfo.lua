---@class NetReqUserInfo : NetReq
local NetReqUserInfo = class("NetReqUserInfo", TeaHouse.NetReq)

function NetReqUserInfo:start(teaNumber, askID, reqBit, timeoutTime)
    if not NetReqUserInfo.super.start(self, timeoutTime) then
        return
    end

    local reqUserInfo = TeaHouse.TeaHouseProtocol.ReqUserInfo:new()
    reqUserInfo.nAskid = askID or 10
    reqUserInfo.nTeaNumber = teaNumber
    reqUserInfo.nReqBit = reqBit or 0
    self:sendPacket(reqDealPower, TeaHouse.TeaHouseProtocol.RespDealPower, self.onRespDealPower)
end

function NetReqUserInfo:onRespDealPower(msgData)
    self:success()
end

return NetReqUserInfo�