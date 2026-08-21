---@class NetReqPauseTeaHouse : NetReq
local NetReqPauseTeaHouse = class("NetReqPauseTeaHouse", TeaHouse.NetReq)

function NetReqPauseTeaHouse:ctor()
    NetReqPauseTeaHouse.super.ctor(self)

    self._nAskid = 0
end

function NetReqPauseTeaHouse:start(teaNumber, timeoutTime)
    if not NetReqPauseTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqPauseTeaHouse = TeaHouse.TeaHouseProtocol.ReqPauseTeaHouse:new()
    self._nAskid = os.time()
    reqPauseTeaHouse.nAskid = self._nAskid
    reqPauseTeaHouse.nTeaid = teaNumber
    self:sendPacket(reqPauseTeaHouse, TeaHouse.TeaHouseProtocol.RespPauseTeaHouse, self.onRespPauseTeaHouse)
end

function NetReqPauseTeaHouse:onRespPauseTeaHouse(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.bFlag then
            self:success(msgData)
        else
            self:setMessage("SUSPEND_TEAHOUSE_FAIL")
            self:fail()
        end
    end
end

return NetReqPauseTeaHouse