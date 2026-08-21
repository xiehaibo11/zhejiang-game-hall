local ____exports = {}
local logger
local ____Config = require("app.Third.ThinkData.Config")
local Config = ____Config.Config
local _ = {}
local slice = function(array, start, stop)
    local result = {}
    local len = #array

    if not start then
        start = 1
    elseif start < 0 then
        start = len + start + 1
    end

    if not stop then
        stop = len
    elseif stop < 0 then
        stop = len + stop + 1
    end

    for i = start, stop do
        table.insert(result, array[i])
    end

    return result
end
local nativeHasOwnProperty = function(obj, key)
    return obj[key] ~= nil
end
local nativeForEach = function(array, callback)
    for i = 1, #array do
        callback(array[i], i, array)
    end
end
local nativeIsArray = function(obj)
    return type(obj) == "table" and obj[1] ~= nil
end
local breaker = {}
local utmTypes = {
    "utm_source",
    "utm_medium",
    "utm_campaign",
    "utm_content",
    "utm_term"
}
_.each = function(self, obj, iterator, context)
    if obj == nil then
        return false
    end
    if type(obj) == "table" then
        for key, value in pairs(obj) do
            if iterator(context, value, key, obj) == breaker then
                return false
            end
        end
    else
        return false
    end
end
_.__TS__Class = function(self)
    local c = { prototype = {} }
    c.prototype.__index = c.prototype
    c.prototype.constructor = c
    return c
end
_.__TS__New = function(target, ...)
    local instance = setmetatable({}, target.prototype)
    instance:____constructor(...)
    return instance
end
_.extend = function(obj, ...)
    local sources = { ... }
    for i = 1, #sources do
        local source = sources[i]
        for prop, value in pairs(source) do
            if value ~= nil then
                obj[prop] = value
            end
        end
    end
    return obj
end
_.extend2Layers = function(obj, ...)
    local sources = { ... }
    for i = 1, #sources do
        local source = sources[i]
        for prop, value in pairs(source) do
            if value ~= nil then
                if type(value) == "table" and type(obj[prop]) == "table" then
                    _.extend2Layers(obj[prop], value)
                else
                    obj[prop] = value
                end
            end
        end
    end
    return obj
end
_.isArray = nativeIsArray or (function(self, obj)
    return type(obj) == "table" and #obj > 0
end)
_.isFunction = function(self, f)
    do
        local function ____catch(x)
            return true, false
        end
        local ____try, ____hasReturned, ____returnValue = pcall(function()
            return true, type(f) == "function"
        end)
        if not ____try then
            ____hasReturned, ____returnValue = ____catch(____hasReturned)
        end
        if ____hasReturned then
            return ____returnValue
        end
    end
end
_.isPromise = function(self, obj)
    return false
end
_.isObject = function(self, obj)
    return type(obj) == "table"
end
_.isEmptyObject = function(self, obj)
    if _:isObject(obj) then
        for key in pairs(obj) do
            if nativeHasOwnProperty(obj, key) then
                return false
            end
        end
        return true
    end
    return false
end
_.isUndefined = function(self, obj)
    return obj == nil
end
_.isString = function(self, obj)
    return type(obj) == "string"
end
_.isDate = function(self, obj)
    if obj ~= nil then
        return true -- todo，不为nil默认为true
    end
    return false
end
_.isBoolean = function(self, obj)
    return type(obj) == "boolean"
end
_.isNumber = function(self, obj)
    return type(obj) == "number"
end
_.UUID = function(self)
    local visitTime = os.time()
    local random = tostring(math.random()):gsub("%.", ""):sub(2, 11)
    local uuid = random .. "-" .. visitTime
    return uuid
end
_.UUIDv4 = function(self)
    local template = "xxxxxxxx-xxxx-4xxx-yxxx-"
    local uuid = template:gsub("[xy]", function(c)
        local r = math.random(16) - 1
        local v
        if c == 'x' then
            v = r
        else
            if bit ~= nil then
                v = bit.bor(bit.band(r, 3), 8)
            else
                v = r
            end
        end
        return string.format("%x", v)
    end)
    uuid = uuid .. os.time() .. math.random(11, 99)
    return uuid
end
_.setMpPlatform = function(self, mpPlatform)
    _.mpPlatform = mpPlatform
end
_.getMpPlatform = function(self)
    return _.mpPlatform
end
_.createExtraHeaders = function(self)
    return {
        ["TA-Integration-Type"] = Config.LIB_NAME,
        ["TA-Integration-Version"] = Config.LIB_VERSION,
        ["TA-Integration-Count"] = "1",
        ["TA-Integration-Extra"] = _:getMpPlatform()
    }
end
_.checkAppId = function(self, appId)
    appId = string.gsub(appId, "%s*", "")
    return appId
end
_.checkUrl = function(self, url)
    url = string.gsub(url, "%s*", "")
    -- url = _:url("basic", url)  -- 这边做了一堆校验，不好翻译，直接跳过了
    return url
end
_.createString = function(self, length)
    local expect = length
    local str = ""
    while #str < expect do
        str = str .. string.sub(tostring(math.random()), 3)
    end
    str = string.sub(str, 1, length)
    return str
end
_.createAesKey = function(self)
    return _:createString(16)
end
_.indexOf = function(self, arr, target)
    local indexof = arr.indexOf
    if indexof then
        return indexof:call(arr, target)
    else
        do
            local i = 1
            while i <= #arr do
                if target == arr[i] then
                    return i
                end
                i = i + 1
            end
        end
        return -1
    end
end
_.checkCalibration = function(self, properties, time, enableCalibrationTime)
    return properties
end
local ____temp_19
if type(logger) == "table" then
    ____temp_19 = logger
else
    ____temp_19 = {}
end
logger = ____temp_19
logger.info = function(self, info)
    -- print("TDSDK info:" .. info)
end
logger.warn = function(self, info)
    -- print("TDSDK warn:" .. info)
end
____exports._ = _
____exports.logger = logger
____exports.slice = slice
return ____exportsL