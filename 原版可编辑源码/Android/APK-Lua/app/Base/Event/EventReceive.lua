local EventReceive =  class("EventReceive")

function EventReceive.extend(object)
    -- 增加仅针对类监听
    function object:getProxyEvents()
    end

    -- 初始化仅针对类监听事件
    function object:initProxyEvents()
        self:onClearProxyEvents()
        local typeEvents = self:getProxyEvents()
        if not self:checkGetInfoIdentify(typeEvents) then
            return
        end
        for _, value in pairs(typeEvents) do
            if value.module and value.callBack and self[value.callBack] then
                local moduleProxy = self:getModuleProxy(value.module)
                if value.eventKeyName and value.module[value.eventKeyName] then
                    moduleProxy:addEventListener(value.module[value.eventKeyName], handler(self, self[value.callBack]))
                elseif value.eventName then
                    moduleProxy:addEventListener(value.eventName, handler(self, self[value.callBack]))
                end
            end
        end
    end

    function object:getModuleProxy(module)
        local moduleKey = tostring(module)
        self._moduleProxys = self._moduleProxys or {}
        if self._moduleProxys[moduleKey] == nil then
            self._moduleProxys[moduleKey] = cc.EventProxy.new(module)
        end
        return self._moduleProxys[moduleKey]
    end

    -- 清理类监听事件
    function object:onClearProxyEvents()
        if not self._moduleProxys then
            return
        end
        for _, moduleProxy in pairs(self._moduleProxys) do
            moduleProxy:removeAllEventListeners()
        end
        self._moduleProxys = {}
    end

    -- 检验获取到的table返回值合法性
    function object:checkGetInfoIdentify(getTableInfo)
        if getTableInfo == nil or type(getTableInfo) ~= "table" then
            return false
        end
        return true
    end
end

return EventReceive