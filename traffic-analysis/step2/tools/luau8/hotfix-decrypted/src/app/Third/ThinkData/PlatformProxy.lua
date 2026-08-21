local ____exports = {}
local ____GeneralParam = require("app.Third.ThinkData.GeneralParam")
local ____utils = require("app.Third.ThinkData.Utils")
local _ = ____utils._
local logger = ____utils.logger
____exports.default = _.__TS__Class()
local PlatformProxy = ____exports.default
PlatformProxy.name = "PlatformProxy"
function PlatformProxy.prototype.____constructor(self)
    self.config = { persistenceName = "thinkingdata", persistenceNameOld = "thinkingdata_mg" }
end
function PlatformProxy.createInstance(self)
    return self:_createInstance()
end
function PlatformProxy._createInstance(self)
    return _.__TS__New(____exports.default)
end
function PlatformProxy.prototype.getConfig(self)
    return self.config
end
function PlatformProxy.prototype.getStorage(self, name, async, callback)
    local data = cc.UserDefault:getInstance():getStringForKey(name, "")
    if data == "" then
        return {}
    end
    return json.decode(data)
end
function PlatformProxy.prototype.setStorage(self, name, value)
    return cc.UserDefault:getInstance():setStringForKey(name, value)
end
function PlatformProxy.prototype.removeStorage(self, name)
    cc.UserDefault:getInstance():setStringForKey(name, "")
end
function PlatformProxy.prototype._getPlatform(self)
    return ""
end
function PlatformProxy.prototype.getSystemInfo(self, options)
    local res = {
        mp_platform = ____GeneralParam.getPlatform(),
        system = ____GeneralParam.getOs()
    }
    options:success(res)
    options:complete()
end
function PlatformProxy.prototype.getNetworkType(self, options)
    local res = {
        networkType = ____GeneralParam.getNetWork()
    }
    options:success(res)
    options:complete()
end
function PlatformProxy.prototype.onNetworkStatusChange(self, callback)
    --
end
function PlatformProxy.prototype.request(self, options)
    -- 热更新 reload 可能清空 GeneralParam 字段（package.loaded 摘除后 ____GeneralParam 指向空表），
    -- 此时 getRequest 为 nil，直接调用会拖垮整个 Lua 状态。判空降级，静默跳过本次上报。
    if ____GeneralParam.getRequest == nil then
        if options ~= nil and _:isFunction(options.fail) then
            options.fail({ errMsg = "GeneralParam.getRequest is nil" })
        end
        return nil
    end
    return ____GeneralParam.getRequest(options)
end
function PlatformProxy.prototype.setGlobal(self, instance, name)
    -- 不需要自动上报，不设置
    -- if self._config.mp then
    --     logger:warn("ThinkingAnalytics: we do not set global name for TA instance when you do not enable auto track.")
    -- else
    --     GameGlobal[name] = instance
    -- end
end
function PlatformProxy.prototype.getAppOptions(self, callback)
    return {}
end
function PlatformProxy.prototype.showToast(self, msg)
    print("TDSDK showToast:" .. msg)
end
return ____exports�