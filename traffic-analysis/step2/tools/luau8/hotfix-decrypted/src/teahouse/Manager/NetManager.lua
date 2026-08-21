---@class NetManager 网络管理
local NetManager = class("NetManager")

function NetManager:ctor(srsGroupID)
    self.srsGroupID = srsGroupID
    self._listenerItems = {}

    ---@type EventProxy
    self._netPorxy = cc.EventProxy.new(TeaHouse.netEngine)
end

function NetManager:reset(srsGroupID)
    self.srsGroupID = srsGroupID
    self._listenerItems = {}
    self._netPorxy:removeAllEventListeners()
end

function NetManager:sendProtocol(protocol, appID, processID, srsGroupID)
    processID = processID or protocol.processid
    if processID == TeaHouse.TeaHouseProtocol.processid then
        appID = appID or TeaHouse.manager.teahouseData:getAppID()
    end
    appID = appID or 0
    srsGroupID = srsGroupID or self.srsGroupID
    TeaHouse.netEngine:sendProtocol(protocol, processID, appID, srsGroupID)
end

function NetManager:addProtocolCallback(object, callBackFunc, processID, srsGroupID)
    srsGroupID = srsGroupID or self.srsGroupID
    TeaHouse.netEngine:addProtocolScriptFuncByObj(object, callBackFunc, processID, srsGroupID)
end

function NetManager:removeProtocolCallback(object, callBackFunc, srsGroupID)
    srsGroupID = srsGroupID or self.srsGroupID
    TeaHouse.netEngine:removeProtocolScriptFuncByObj(object, callBackFunc, srsGroupID)
end

function NetManager:addEventListener(RespProtocol, object, callBackFunc)
    if not RespProtocol.processid then
        return
    end
    if not object or not callBackFunc then
        return
    end
    self:removeEventListener(object, callBackFunc)
    local eventKey = RespProtocol.event_key
    if eventKey == nil then
        eventKey = RespProtocol.processid .. "_" .. RespProtocol.XY_ID
    end
    local _, handle = self._netPorxy:addEventListener(eventKey,
    function(event)
        local msg = event.msg
        if msg.msgid ~= RespProtocol.XY_ID or msg.processid ~= RespProtocol.processid then
            return
        end
        local msgData = RespProtocol:new()
        msgData:bistream(msg.buff, msg.len)
        callBackFunc(object, msgData)
    end)
    self._listenerItems[#self._listenerItems + 1] = { handle = handle, object = object, callBackFunc = callBackFunc }
end

function NetManager:removeEventListener(object, callBackFunc)
    for i = #self._listenerItems, 1, -1 do
        local listenerItem = self._listenerItems[i]
        if listenerItem.object == object then
            if callBackFunc == nil then
                self._netPorxy:removeEventListener(listenerItem.handle)
                table.remove(self._listenerItems, i)
            elseif listenerItem.callBackFunc == callBackFunc then
                self._netPorxy:removeEventListener(listenerItem.handle)
                table.remove(self._listenerItems, i)
                return
            end
        end
    end
end

return NetManagerA