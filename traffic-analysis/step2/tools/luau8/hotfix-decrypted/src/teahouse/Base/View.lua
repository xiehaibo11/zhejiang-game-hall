---@class View : ViewBase
local View = class("View", TeaHouse.ViewBase)

function View:ctor(...)
    View.super.ctor(self, ...)

    self._isAutoClean = true

    self._proxyList = {}

    self._coroutineScheduleID = nil
    self._coroutineList = {}
    self.openTime = os.time()
end

function View:setIsAutoClean(isAutoClean)
    self._isAutoClean = isAutoClean
end

---创建监听代理
---@return EventProxy
function View:createListener(eventDispatcher)
    local proxy = cc.EventProxy.new(eventDispatcher)
    table.insert(self._proxyList, proxy)
    return proxy
end

---开始检测协程
function View:startCheckCoroutine(coroutineHandle, coroutineCallback)
    if coroutineHandle == nil then
        return
    end
    if coroutine.status(coroutineHandle) ~= "dead" then
        coroutine_resume_with_debug(coroutineHandle)
    else
        if coroutineCallback then
            coroutineCallback()
        end
        return
    end
    self._coroutineList[#self._coroutineList + 1] = { handle = coroutineHandle, callback = coroutineCallback }
    self:updateCoroutineScheduleID()
end

function View:stopCheckCoroutine(coroutineHandle)
    if coroutineHandle == nil then
        return
    end

    for k, v in ipairs(self._coroutineList) do
        if v.handle == coroutineHandle then
            table.remove(self._coroutineList, k)
            break
        end
    end
    self:updateCoroutineScheduleID()
end

function View:updateCoroutineScheduleID()
    if #self._coroutineList > 0 then
        if self._coroutineScheduleID == nil then
            self._coroutineScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
                for k, v in ipairs(self._coroutineList) do
                    if coroutine.status(v.handle) ~= "dead" then
                        coroutine_resume_with_debug(v.handle)
                    else
                        if v.callback then
                            v.callback()
                        end
                    end
                end
            end, cc.Director:getInstance():getAnimationInterval(), false)
        end
    else
        if self._coroutineScheduleID ~= nil then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._coroutineScheduleID)
            self._coroutineScheduleID = nil
        end
    end
end

function View:close()
    if TeaHouse.manager.viewManager:closeView(self.__cname) then
        return
    end
    self:removeSelf()
end

function View:onExit()
    if self._isAutoClean then
        self:cleanup()
    end
end

function View:onCleanup()
    if self._isAutoClean then
        self:cleanup()
    end
end

function View:cleanup()
    for _, proxy in ipairs(self._proxyList) do
        proxy:removeAllEventListeners()
    end
    self._proxyList = {}
    if self._coroutineScheduleID ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._coroutineScheduleID)
        self._coroutineScheduleID = nil
    end
end

return View6