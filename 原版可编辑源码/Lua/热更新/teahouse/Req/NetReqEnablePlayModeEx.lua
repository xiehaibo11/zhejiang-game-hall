
----------------------------------------
--@class NetReqEnablePlayModeEx : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqEnablePlayModeEx = class("NetReqEnablePlayModeEx", TeaHouse.NetReq)

function NetReqEnablePlayModeEx:ctor()
    NetReqEnablePlayModeEx.super.ctor(self)
end

function NetReqEnablePlayModeEx:start(teaNumber, modeID, enable, timeout)
    if not NetReqEnablePlayModeEx.super.start(self,timeout) then
        return
    end

    self._teaNumber = teaNumber
    self._modeID = modeID
    self._nAskid = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqEnablePlayModeEx:new()
    tReq.nTeaId = teaNumber
    tReq.nModeId = modeID
    tReq.nAskId = self._nAskid
    tReq.bEnable = enable

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespEnablePlayModeEx, self.onRespEnablePlayModeEx)
end

function NetReqEnablePlayModeEx:onRespEnablePlayModeEx(msgData)
    if self._nAskid == msgData.nAskId then
        if msgData.nTeaId == self._teaNumber then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespEnablePlayModeEx.RETVAL.OK then
                self:success(msgData)
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespEnablePlayModeEx.RETVAL.CONFLICT then
                self:setMessage("OPTION_HASCONFILCT_CANNOTENABLE")
                self:fail()
            else
                self:setMessage("ENABLE_FIXEDMODE_FALL")
                self:fail()
            end
        else
            self:setMessage("ENABLE_FIXEDMODEFALL_SERVERERROR")
            self:fail()
        end
    end
end

return NetReqEnablePlayModeEx