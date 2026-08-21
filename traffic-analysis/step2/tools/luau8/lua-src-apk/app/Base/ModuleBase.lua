local ModuleBase = class("ModuleBase")
XH.EventReceive.extend(ModuleBase)
XH.ScheduleInterface.extend(ModuleBase)

function ModuleBase:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    self:_initScheduleIDs()
    self:initProxyEvents()
    self._reqInfos = {}
end

function ModuleBase:onDestroy()
    self:_onRemoveAllScheduleIDs()
    self:onClearProxyEvents()
    if self._reqInfos then
        for key, reqInfo in pairs(self._reqInfos) do
            reqInfo.req:stop()
            self._reqInfos[key] = nil
        end
    end
end

function ModuleBase:getReqConfig()
    return {}
end

function ModuleBase:startReq(reqName, ...)
    local reqConfig = self:getReqConfig()
    assert(reqConfig and reqConfig[reqName] and reqConfig[reqName].reqPath, "ModuleBase:startReq is nil")

    local reqInfo = {}
    reqInfo.id = #self._reqInfos + 1

    local reqObj = require(reqConfig[reqName].reqPath).new()
    if reqConfig[reqName].callBack then
        reqObj:addReqCallBack(
            self,
            function(...)
                reqConfig[reqName].callBack(...)
                self._reqInfos[reqInfo.id] = nil
            end
        )
    end

    reqInfo.name = reqName
    reqInfo.callBack = reqConfig[reqName].callBack
    reqInfo.req = reqObj
    self._reqInfos[reqInfo.id] = reqInfo

    reqObj:start(...)
end

function ModuleBase:stopCellByName(name)
    for _, reqInfo in pairs(self._reqInfos) do
        if reqInfo.name == name then
            reqInfo.req:stop()
            self._reqInfos[reqInfo.id] = nil
        end
    end
end

return ModuleBase
�