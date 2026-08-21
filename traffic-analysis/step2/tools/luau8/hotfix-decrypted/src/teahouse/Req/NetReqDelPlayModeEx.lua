----------------------------------------
--@class NetReqDelPlayModeEx : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqDelPlayModeEx = class("NetReqDelPlayModeEx", TeaHouse.NetReq)

function NetReqDelPlayModeEx:ctor()
    NetReqDelPlayModeEx.super.ctor(self)
end

function NetReqDelPlayModeEx:start(teaNumber, modeID, timeout)
    if not NetReqDelPlayModeEx.super.start(self, timeout) then
        return
    end

    self._teaNumber = teaNumber
    self._modeID = modeID
    self._nAskid = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqDelPlayModeEx:new()
    tReq.nTeaId = teaNumber
    tReq.nModeId = modeID
    tReq.nAskId = self._nAskid

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespDelPlayModeEx, self.onRespDelPlayModeEx)
end

function NetReqDelPlayModeEx:onRespDelPlayModeEx(msgData)
    if self._nAskid == msgData.nAskId then
        if msgData.nTeaId == self._teaNumber then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespDelPlayModeEx.RETVAL.OK then
                self:success(msgData)
            else
                self:setMessage("FIXEDMODE_DELETE_ERRORTORETRY")
                self:fail()
            end
        else
            self:setMessage("FIXEDMODE_DELETEERROR_SERVERERROR")
            self:fail()
        end
    end
end

return NetReqDelPlayModeEx�