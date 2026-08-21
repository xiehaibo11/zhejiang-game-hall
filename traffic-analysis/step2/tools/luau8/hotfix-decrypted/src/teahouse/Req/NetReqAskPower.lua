---@class NetReqAskPower : NetReq
local NetReqAskPower = class("NetReqAskPower", TeaHouse.NetReq)

function NetReqAskPower:start(msg, timeoutTime, teaID, appID)
    if not NetReqAskPower.super.start(self, timeoutTime) then
        return
    end

    local reqAskPower = TeaHouse.TeaHouseProtocol.ReqAskPower:new()
    reqAskPower.askid = 0
    if msg and #msg > 0 then
        reqAskPower.data = msg
    else
        reqAskPower.data = "我想加入比赛场，请同意一下！"
    end
    if teaID then
        reqAskPower.teaID = teaID
        self._reqReaID = teaID
    end
    self:sendPacket(reqAskPower, TeaHouse.TeaHouseProtocol.RespAskPower, self.onRespAskPower, appID)
end

function NetReqAskPower:onRespAskPower(msgData)
    if msgData and msgData.right == TeaHouse.TeaHouseProtocol.RespAskPower.FLAG.ST_SHIELD then
        self:fail(msgData)
    else
        msgData._reqReaID = self._reqReaID
        self:success(msgData)
    end
end

return NetReqAskPower�