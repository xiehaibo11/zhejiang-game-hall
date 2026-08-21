---@class NetReqReUseTeaHouse : NetReq
local NetReqReUseTeaHouse = class("NetReqReUseTeaHouse", TeaHouse.NetReq)

function NetReqReUseTeaHouse:ctor()
    NetReqReUseTeaHouse.super.ctor(self)

    self._nAskid = 0
end

function NetReqReUseTeaHouse:start(nTeaid, timeoutTime)
    if not NetReqReUseTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqReUseTeaHouse = TeaHouse.TeaHouseProtocol.ReqReUseTeaHouse:new()
    self._nAskid = os.time()
    reqReUseTeaHouse.nAskid = self._nAskid
    reqReUseTeaHouse.nTeaid = nTeaid
    self:sendPacket(reqReUseTeaHouse, TeaHouse.TeaHouseProtocol.RespReUseTeaHouse, self.onRespReUseTeaHouse)
end

function NetReqReUseTeaHouse:onRespReUseTeaHouse(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.bFlag then
            self:success(msgData)
        else
            self:setMessage("REOPEN_TEAHOUSE_FAIL")
            self:fail()
        end
    end
end

return NetReqReUseTeaHouse