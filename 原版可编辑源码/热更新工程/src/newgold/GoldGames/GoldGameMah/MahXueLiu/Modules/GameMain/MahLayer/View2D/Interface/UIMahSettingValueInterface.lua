local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")
local UIMahSettingValueInterface = {}

function UIMahSettingValueInterface.extend(object, config)
    function object:_initConfig(conf)
        if conf then
            self._config = clone(conf)
        else
            self._config = {}
        end
    end
    
    function object:_compareConfig(conf)
        local changedConfig
        local watchValueKeys = UIMahConfig.MahSettingKey
        if self._getWatchValueKeys then
            watchValueKeys = self._getWatchValueKeys() or {}
        end
        for _, v in pairs(watchValueKeys) do
            if conf[v] ~= nil and conf[v] ~= self:_getConfigValueByKey(v) then
                changedConfig = changedConfig or {}
                changedConfig[v] = conf[v]
                self._config[v] = conf[v]
            end
        end
        return changedConfig
    end
    
    function object:_getConfigValueByKey(key)
        if self._config[key] == nil then
            return UIMahConfig.MahSettingDefault[key]
        end
        return self._config[key]
    end

    function object:_getMahPropConfigValueByKey(key)
        if self._config[key] == nil then
            return ""
        end
        return self._config[key]
    end

    function object:setConfig(conf)
        --检测新配置是否与当前配置存在不同
        local changedConfig = self:_compareConfig(conf)
        if self._onSetConfig then
            self:_onSetConfig(changedConfig)
        end
    end

    object:_initConfig(config)
end

return UIMahSettingValueInterface