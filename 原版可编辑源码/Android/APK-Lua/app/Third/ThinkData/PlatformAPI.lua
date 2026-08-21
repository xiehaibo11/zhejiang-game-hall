local ____utils = require("app.Third.ThinkData.Utils")
local _ = ____utils._
local ____exports = {}
local ____R_PLATFORM_PROXY = require("app.Third.ThinkData.PlatformProxy")
local PlatformProxy = ____R_PLATFORM_PROXY.default
____exports.default = _.__TS__Class()
local PlatformAPI = ____exports.default
PlatformAPI.name = "PlatformAPI"
function PlatformAPI.prototype.____constructor(self)
end
function PlatformAPI._getCurrentPlatform(self)
    local ____self_currentPlatform_1 = self.currentPlatform
    if not ____self_currentPlatform_1 then
        local ____temp_0 = PlatformProxy:createInstance()
        self.currentPlatform = ____temp_0
        ____self_currentPlatform_1 = ____temp_0
    end
    return ____self_currentPlatform_1
end
function PlatformAPI.getConfig(self)
    return self:_getCurrentPlatform():getConfig()
end
function PlatformAPI.getStorage(self, name, async, callback)
    return self:_getCurrentPlatform():getStorage(name, async, callback)
end
function PlatformAPI.setStorage(self, name, value)
    return self:_getCurrentPlatform():setStorage(name, value)
end
function PlatformAPI.removeStorage(self, name)
    return self:_getCurrentPlatform():removeStorage(name)
end
function PlatformAPI.getSystemInfo(self, options)
    return self:_getCurrentPlatform():getSystemInfo(options)
end
function PlatformAPI.getNetworkType(self, options)
    return self:_getCurrentPlatform():getNetworkType(options)
end
function PlatformAPI.onNetworkStatusChange(self, callback)
    self:_getCurrentPlatform():onNetworkStatusChange(callback)
end
function PlatformAPI.request(self, options)
    return self:_getCurrentPlatform():request(options)
end
function PlatformAPI.initAutoTrackInstance(self, instance, config)
    return nil --self:_getCurrentPlatform():initAutoTrackInstance(instance, config)
end
function PlatformAPI.setGlobal(self, instance, name)
    if instance and name then
        self:_getCurrentPlatform():setGlobal(instance, name)
    end
end
function PlatformAPI.getAppOptions(self, callback)
    return self:_getCurrentPlatform():getAppOptions(callback)
end
function PlatformAPI.showDebugToast(self, msg)
    self:_getCurrentPlatform():showToast(msg)
end
return ____exports