----------------------------------------
--@class NetReqSetTeaCustomInfo : NetReq
--@author qiuzhong
--@date 2020-10-10
----------------------------------------
local NetReqSetTeaCustomInfo = class("NetReqSetTeaCustomInfo", TeaHouse.NetReq)

function NetReqSetTeaCustomInfo:ctor()
    NetReqSetTeaCustomInfo.super.ctor(self)
end

function NetReqSetTeaCustomInfo:start(nTeaid,config,acinfo,timeoutTime)
    if not NetReqSetTeaCustomInfo.super.start(self, timeoutTime) then
        return
    end

    self._nTeaId = nTeaid
    self._nAskId = os.time() + nTeaid

    local tReq = TeaHouse.TeaHouseProtocol.ReqSetTeaCustomInfo:new()
    tReq.nTeaId = nTeaid
    tReq.nAskId = self._nAskId
    tReq.nConfig = config or 0  -- 设置比赛场开启的功能，按bit位开启，见Define.h中客户端设置比赛场功能
    tReq.acInfo = acinfo or ""  -- lua格式
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespSetTeaCustomInfo, self.onRespSetTeaCustomInfo)
end

function NetReqSetTeaCustomInfo:onRespSetTeaCustomInfo(msgData)
    if self._nAskId == msgData.nAskId then
        if msgData.nTeaId == self._nTeaId then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetTeaCustomInfo.RETVAL.OK then
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

return NetReqSetTeaCustomInfo