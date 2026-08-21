---@class Module : EventProtocol
local Module = class("Module")

function Module:onCreate()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()

    self._proxyList = {}
end

---创建监听代理
---@return EventProxy
function Module:createListener(eventDispatcher)
    local proxy = cc.EventProxy.new(eventDispatcher)
    table.insert(self._proxyList, proxy)
    return proxy
end

function Module:onDestroy()
    for _, proxy in ipairs(self._proxyList) do
        proxy:removeAllEventListeners()
    end
    self:removeAllEventListeners()
end

return Moduleb