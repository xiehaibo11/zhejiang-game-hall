----------------------------------------
--@class NetReqSetPlayModeEx : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqSetPlayModeEx = class("NetReqSetPlayModeEx", TeaHouse.NetReq)

function NetReqSetPlayModeEx:ctor()
    NetReqSetPlayModeEx.super.ctor(self)
end

function NetReqSetPlayModeEx:start(teaNumber, mode, nAutoCreate, nAwarded, timeoutTime)
    if not NetReqSetPlayModeEx.super.start(self, timeoutTime) then
        return
    end

    self._teaNumber = teaNumber
    self._nAskId = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqSetPlayModeEx:new()
    tReq.nTeaId = teaNumber
    tReq.nAskId = self._nAskId
    tReq.stMode = mode
    tReq.aPlayModeType = nAutoCreate or 0
    tReq.aAwarded = nAwarded or 0
    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespSetPlayModeEx, self.onRespSetPlayModeEx)
end

function NetReqSetPlayModeEx:onRespSetPlayModeEx(msgData)
    if self._nAskId == msgData.nAskId then
        if msgData.nTeaId == self._teaNumber then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayModeEx.RETVAL.OK then
                self:success(msgData)
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayModeEx.RETVAL.CONFLICT then
                self:setMessage("OPTION_HASCONFILCT_CANNOTCHANGE")
                self:fail()
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespSetPlayModeEx.RETVAL.MODE_MAX then  
                self:setMessage("SET_FIXEDMODE_LIMIT")
                self:fail()
            else
                self:setMessage("SET_FIXEDMODE_FAIL")
                self:fail()
            end
        else
            self:setMessage("SET_FIXEDMODEFAIL_SERVERERROR")
            self:fail()
        end
    end
end

return NetReqSetPlayModeExR