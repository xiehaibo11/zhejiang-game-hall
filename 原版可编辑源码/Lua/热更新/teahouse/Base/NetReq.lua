---@class NetReq : Req
local NetReq = class("NetReq", TeaHouse.Req)

NetReq.SEND_TYPE = {
    NONE = 0,
    PROTOCOL = 1,
    PACKET = 2,
}

function NetReq:ctor()
    NetReq.super.ctor(self)
    
    self._askID = TeaHouse.askIDManager:getAskID()
    self._sendType = NetReq.SEND_TYPE.NONE
    self._isSending = false
    self._srsGroupID = nil
end

function NetReq:sendProtocol(protocol, callBackFunc, appID, processID, srsGroupID)
    if self._isSending then
        return
    end
    self._sendType = NetReq.SEND_TYPE.PROTOCOL
    self._isSending = true

    self._srsGroupID = srsGroupID or TeaHouse.manager.netManager.srsGroupID
    TeaHouse.manager.netManager:addProtocolCallback(self, callBackFunc, processID, self._srsGroupID)
    TeaHouse.manager.netManager:sendProtocol(protocol, appID, processID, srsGroupID)
end

function NetReq:sendPacket(packet, RespProtocol, callBackFunc, appID, srsGroupID)
    if not RespProtocol.processid then
        return
    end
    if self._isSending then
        return
    end
    self._sendType = NetReq.SEND_TYPE.PACKET
    self._isSending = true

    self._srsGroupID = srsGroupID or TeaHouse.manager.netManager.srsGroupID
    TeaHouse.manager.netManager:addEventListener(RespProtocol, self, callBackFunc)
    TeaHouse.manager.netManager:sendProtocol(packet, appID, packet.processid, self._srsGroupID)
end

function NetReq:success(data)
    NetReq.super.success(self, data)

    self:reset()
end

function NetReq:fail(data)
    NetReq.super.fail(self, data)

    self:reset()
end

function NetReq:timeout(data)
    NetReq.super.timeout(self, data)

    self:reset()
end

function NetReq:stop()
    NetReq.super.stop(self)

    self:reset()
end

function NetReq:reset()
    local srsGroupID = self._srsGroupID
    self._srsGroupID = nil
    if not self._isSending or self._sendType == NetReq.SEND_TYPE.NONE then
        return
    end
    if self._sendType == NetReq.SEND_TYPE.PROTOCOL then
        TeaHouse.manager.netManager:removeProtocolCallback(self, nil, srsGroupID)
    else
        TeaHouse.manager.netManager:removeEventListener(self)
    end
    self._sendType = NetReq.SEND_TYPE.NONE
    self._isSending = false
end

return NetReq