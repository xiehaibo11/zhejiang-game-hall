----------------------------------------
--@class NetReqEnablePlayMode : NetReq
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local NetReqEnablePlayMode = class("NetReqEnablePlayMode", TeaHouse.NetReq)

--玩家用
function NetReqEnablePlayMode:ctor()
    NetReqEnablePlayMode.super.ctor(self)
end

function NetReqEnablePlayMode:start(teaNumber, modeID, enable, timeout)
    if not NetReqEnablePlayMode.super.start(self, timeout) then
        return
    end

    self._teaNumber = teaNumber
    self._modeID = modeID
    self._nAskid = os.time() + teaNumber

    local tReq = TeaHouse.TeaHouseProtocol.ReqEnablePlayMode:new()
    tReq.nTeaid = teaNumber
    tReq.nModeId = modeID
    tReq.nAskid = self._nAskid
    tReq.nEnable = enable and 1 or 0

    self:sendPacket(tReq, TeaHouse.TeaHouseProtocol.RespEnablePlayMode, self.onRespEnablePlayMode)
end

function NetReqEnablePlayMode:onRespEnablePlayMode(msgData)
    if self._nAskid == msgData.nAskid then
        if msgData.nTeaid == self._teaNumber then
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespEnablePlayMode.RETVAL.OK then
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

return NetReqEnablePlayMode�