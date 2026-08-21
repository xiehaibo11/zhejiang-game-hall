---@class NetReqUserActiveNum : NetReq
local NetReqUserActiveNum = class("NetReqUserActiveNum", TeaHouse.NetReq)

--玩家共用
function NetReqUserActiveNum:ctor()
    NetReqUserActiveNum.super.ctor(self)
    self._nAskId = 0
end

function NetReqUserActiveNum:start(timeoutTime,bLastmonth)
    if not NetReqUserActiveNum.super.start(self, timeoutTime) then
        return
    end

    local reqGetActiveValue = TeaHouse.TeaHouseProtocol.ReqGetActiveValue:new()
    self._nAskid = os.time()
    reqGetActiveValue.nAskId = self._nAskId
    reqGetActiveValue.bLastmonth = bLastmonth
    self:sendPacket(reqGetActiveValue, TeaHouse.TeaHouseProtocol.RespGetActiveValue, self.onRespGetActiveValue)
end

function NetReqUserActiveNum:onRespGetActiveValue(msgData)
    if msgData.nAskId ~= self._nAskId then
        return
    end
    if msgData.nFlag == TeaHouse.TeaHouseProtocol.RespGetActiveValue.FLAG.SUCCESS then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end


return NetReqUserActiveNum