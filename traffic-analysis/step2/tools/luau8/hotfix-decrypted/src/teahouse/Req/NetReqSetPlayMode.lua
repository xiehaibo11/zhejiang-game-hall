----------------------------------------
--@class NetReqSetPlayMode : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqSetPlayMode = class("NetReqSetPlayMode", TeaHouse.NetReq)

function NetReqSetPlayMode:ctor()
    NetReqSetPlayMode.super.ctor(self)
end

function NetReqSetPlayMode:start(nTeaid, mode, timeoutTime)
    if not NetReqSetPlayMode.super.start(self, timeoutTime) then
        return
    end

    self._nTeaid = nTeaid
    self._nAskid = os.time() + nTeaid

    local tReq = TeaHouse.TeaHouseProtocol.ReqSetPlayMode:new()
    tReq.nTeaid = nTeaid
    tReq.nAskid = self._nAskid
    tReq.stMode = mode
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespSetPlayMode, self.onRespSetPlayMode)
end

function NetReqSetPlayMode:onRespSetPlayMode(msgData)
    if self._nAskid == msgData.nAskid then
        if msgData.nTeaid == self._nTeaid then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayMode.RETVAL.OK then
                self:success(msgData)
            else
                self:setMessage("SET_ERROR_TORETRY")
                self:fail()
            end
        else
            self:setMessage("SERVER_RETURNERROR_TEAHOUSENUM")
            self:fail()
        end
    end
end

return NetReqSetPlayMode9