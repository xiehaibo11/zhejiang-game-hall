---@type PowerConfig
local PowerConfig = class("PowerConfig")

function PowerConfig:ctor(config)
    self._config = {}
    if config == nil then
        return
    end
    for k, v in pairs(config.TeaHousePowerByPowerLevel) do
        local key = config.Enum.PowerLevel[k]
        if key ~= nil then
            self._config[key] = v
        end
    end
    self._powerValue = config.Enum.PowerValue
end

function PowerConfig:checkPower(powerLevel, powerName, powerValue)
    if self._powerValue == nil then
        return false
    end
    local config = self._config[powerLevel]
    if config == nil then
        return false
    end
    local power = config[powerName]
    if power == nil then
        return false
    end
    return self._powerValue[power] <= powerValue
end

return PowerConfig