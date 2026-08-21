----------------------------------------
--@class NetReqGetTeaCustomInfo : NetReq
--@author qiuzhong
--@date 2019-10-10
----------------------------------------
local NetReqGetTeaCustomInfo = class("NetReqGetTeaCustomInfo", TeaHouse.NetReq)

function NetReqGetTeaCustomInfo:ctor()
    NetReqGetTeaCustomInfo.super.ctor(self)
end

function NetReqGetTeaCustomInfo:start(nTeaId, mode, timeoutTime)
    if not NetReqGetTeaCustomInfo.super.start(self, timeoutTime) then
        return
    end

    self._nTeaId = nTeaId
    self._nAskId = os.time() + nTeaId

    local tReq = TeaHouse.TeaHouseProtocol.ReqGetTeaCustomInfo:new()
    tReq.nTeaId = nTeaId
    tReq.nAskId = self._nAskId
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespGetTeaCustomInfo, self.onRespGetTeaCustomInfo)
end

function NetReqGetTeaCustomInfo:onRespGetTeaCustomInfo(msgData)
    if self._nAskId == msgData.nAskId then
        if msgData.nTeaId == self._nTeaId then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespGetTeaCustomInfo.RETVAL.OK then
                self:success(msgData)
            else
                self:setMessage("GET_ERROR_TORETRY")
                self:fail()
            end
        else
            self:setMessage("SERVER_RETURNERROR_TEAHOUSENUM")
            self:fail()
        end
    end
end

return NetReqGetTeaCustomInfof