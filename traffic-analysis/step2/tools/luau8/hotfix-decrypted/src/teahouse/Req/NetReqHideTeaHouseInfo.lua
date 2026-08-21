----------------------------------------
--@class NetReqHideTeaHouseInfo : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqHideTeaHouseInfo = class("NetReqHideTeaHouseInfo", TeaHouse.NetReq)

function NetReqHideTeaHouseInfo:ctor()
    NetReqHideTeaHouseInfo.super.ctor(self)
    self._nAskid = -1
end

function NetReqHideTeaHouseInfo:start(nTeaid, timeoutTime)
    if not NetReqHideTeaHouseInfo.super.start(self, timeoutTime) then
        return
    end

    self._nAskid = os.time()

    local tReq = TeaHouse.TeaHouseProtocol.ReqOtherHideTHInfo:new()
    tReq.nAskid = self._nAskid
    tReq.nTeaid = nTeaid

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespOtherHideTHInfo, self.onRespOtherHideTHInfo)
end

function NetReqHideTeaHouseInfo:onRespOtherHideTHInfo(msgData)
    if msgData.nAskid == self._nAskid then
        self:success(msgData.bHide)
    else
        self:setMessage("askid 不一致")
        self:fail(msgData)
    end
end

return NetReqHideTeaHouseInfo)