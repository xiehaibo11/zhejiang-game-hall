local ____exports = {}
local ____utils = require("app.Third.ThinkData.Utils")
local _ = ____utils._
local logger = ____utils.logger
---
-- @const
local KEY_NAME_MATCH_REGEX = "^[a-zA-Z][a-zA-Z0-9_]*$"
____exports.PropertyChecker = _.__TS__Class()
local PropertyChecker = ____exports.PropertyChecker
PropertyChecker.name = "PropertyChecker"
function PropertyChecker.prototype.____constructor(self)
end
function PropertyChecker.stripProperties(self, prop)
    if not _:isObject(prop) then
        return prop
    end
    _:each(
    prop,
    function(self, v, k)
        if not (_:isString(v) or _:isNumber(v) or _:isDate(v) or _:isBoolean(v) or _:isArray(v) or _:isObject(v)) then
            logger:warn("Your data -", k, v, "- format does not meet requirements and may not be stored correctly. Attribute values only support String, Number, Date, Boolean, Array, Object")
        end
    end
    )
    return prop
end
function PropertyChecker._checkPropertiesKey(self, obj)
    local flag = true
    _:each(
    obj,
    function(____, content, key)
        if not string.match(key, KEY_NAME_MATCH_REGEX) or #key > 50 then
            logger:warn("Invalid KEY: " .. tostring(key))
            flag = false
        end
    end
    )
    return flag
end
function PropertyChecker.event(self, s)
    if not _:isString(s) or not string.match(s, KEY_NAME_MATCH_REGEX) or #s > 50 then
        logger:warn("Check the parameter format. The eventName must start with an English letter and contain no more than 50 characters including letters, digits, and underscores: " .. tostring(s))
        return false
    else
        return true
    end
end
function PropertyChecker.propertyName(self, s)
    if not _:isString(s) or not string.match(s, KEY_NAME_MATCH_REGEX) or #s > 50 then
        logger:warn("Check the parameter format. PropertyName must start with a letter and contain letters, digits, and underscores (_). The value is a string of no more than 50 characters: " .. tostring(s))
        return false
    else
        return true
    end
end
function PropertyChecker.properties(self, p)
    self:stripProperties(p)
    if p then
        if _:isObject(p) then
            if self:_checkPropertiesKey(p) then
                return true
            else
                logger:warn("Check the parameter format. The properties key must start with a letter, contain digits, letters, and underscores (_), and contain a maximum of 50 characters")
                return false
            end
        else
            logger:warn("properties can be none, but it must be an object")
            return false
        end
    else
        return true
    end
end
function PropertyChecker.propertiesMust(self, p)
    self:stripProperties(p)
    if p == nil or not _:isObject(p) or _:isEmptyObject(p) then
        logger:warn("properties must be an object with a value")
        return false
    else
        if self:_checkPropertiesKey(p) then
            return true
        else
            logger:warn("Check the parameter format. The properties key must start with a letter, contain digits, letters, and underscores (_), and contain a maximum of 50 characters")
            return false
        end
    end
end
function PropertyChecker.userId(self, id)
    if _:isString(id) then
        return true
    else
        logger:warn("The user ID must be a string of less than 64 characters and cannot be null")
        return false
    end
end
function PropertyChecker.userAddProperties(self, p)
    if not self:propertiesMust(p) then
        return false
    end
    for i in pairs(p) do
        if not _:isNumber(p[i]) then
            logger:warn("The attributes of userAdd need to be Number")
            return false
        end
    end
    return true
end
function PropertyChecker.userAppendProperties(self, p)
    if not self:propertiesMust(p) then
        return false
    end
    for i in pairs(p) do
        if not _:isArray(p[i]) then
            logger:warn("The attribute of userAppend must be Array")
            return false
        end
    end
    return true
end
return ____exports