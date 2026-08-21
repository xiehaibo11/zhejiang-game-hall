local Configuration = class("Configuration", XH.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

Configuration.EVENT_REQ_CONFIGURATION_SUCCESS = "EVENT_REQ_CONFIGURATION_SUCCESS"

function Configuration:ctor()
    Configuration.super.ctor(self)
    self._faildata = {}
    self._faillint = 3 -- 失败次数
    self._failmax = 30 -- 最大请求次数
    self._cacheData = {}
    self._cacheEnv = nil
end

function Configuration:getReqConfig()
    return {
        --
        ReqConfigDataMd5 = {reqPath = "lobby.Req.Configuration.CellConfigDataMd5", callBack = self.onCellConfigDataMd5},
        ReqConfigDataFile = {reqPath = "lobby.Req.Configuration.CellConfigDataFile", callBack = self.onCellConfigDataFile}
    }
end

function Configuration:getConfigJsonData(key, file)
    key = self:getConfigKeyReplaceName(key)
    local fullkey = key .. "-" .. file .. "-" .. self:getEnv()
    if not self._cacheData[fullkey] then
        self._cacheData[fullkey] = self:_getConfigJsonData(key, file)
    end
    return self._cacheData[fullkey]
end

function Configuration:_getConfigJsonData(key, file)
    local fullKey = key .. "-" .. file
    -- 读本地
    local configData = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, {}, {key = self:getLocalDataStr(key)})
    if configData and #configData > 0 then
        return self:parseConfigData(configData, fullKey)
    end
    return nil
end

function Configuration:saveConfigJsonData(key, file, data)
    key = self:getConfigKeyReplaceName(key)
    local fullkey = key .. "-" .. file .. "-" .. self:getEnv()
    self._cacheData[fullkey] = data
    -- 本地存的是数组 [{config_data, data_id, config_id}, ...]
    local dataId = key .. "-" .. file
    local configData = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, {}, {key = self:getLocalDataStr(key)})
    if type(configData) ~= "table" then
        configData = {}
    end
    local found = false
    for i = 1, #configData do
        if configData[i].data_id == dataId then
            configData[i].config_data = cjson.encode(data)
            found = true
            break
        end
    end
    if not found then
        configData[#configData + 1] = { config_data = cjson.encode(data), data_id = dataId, config_id = 0 }
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, configData, {key = self:getLocalDataStr(key)})
end

function Configuration:parseConfigData(cacheData, fullKey)
    for i = 1, #cacheData do
        if cacheData[i].data_id == fullKey and cacheData[i].config_data then
            local jsonData = {}
            local ok, _ = pcall(function()
                jsonData = cjson.decode(cacheData[i].config_data)
            end)
            if not ok then
                jsonData = json.decode(cacheData[i].config_data)
            end
            return jsonData
        end
    end
end

-- 二次加工请求参数
function Configuration:getConfigKeyReplaceName(key)
    key = string.format(key, XH.areaData:getLobbyID())
    return key
end

-- 获取环境配置
function Configuration:getEnv()
    if device.platform == "windows" then
        local DEBUG = require("app.Config.GlobalConfig").IsDebug
        return DEBUG and ConfigurationDefine.ENV.TEST or ConfigurationDefine.ENV.PROD
    end
    if not self._cacheEnv then
        self._cacheEnv = cc.UserDefault:getInstance():getStringForKey("____ConfigCenterSwitch____", ConfigurationDefine.ENV.PROD)
    end
    return self._cacheEnv
end

-- 失败的情况(如果失败，如果本地有数据用本地，否则继续重新请求)
function Configuration:dealFailed(key)
    if self._faildata[key] == nil then
        self._faildata[key] = 0
    end
    self._faildata[key] = self._faildata[key] + 1
    -- 使用本地缓存数据
    local resKey = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_KEY, {}, {key = self:getLocalKeyStr(key)})
    if self._faildata[key] == self._faillint and #resKey > 0 then
        self:getConfigDataSuccess(key)
        return
    end
    -- 失败过多，不再请求
    if self._faildata[key] >= self._failmax then
        self._faildata[key] = 0
        return
    end
    self:reqConfigDataMd5(key)
end

function Configuration:reqConfigDataMd5(key)
    self:startReq("ReqConfigDataMd5", self:getConfigKeyReplaceName(key), self:getEnv(), 10)
end

function Configuration:onCellConfigDataMd5(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        -- 取本地数据塞到内存中
        local configData = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_KEY, {}, {key = self:getLocalKeyStr(data.localdata)})
        local isFit = true -- 是否完全匹配
        local config_ids = ''
        local preDelConfigIDs = {}
        -- 不需要下载更新md5
        if data.data ~= nil and #data.data > 0 and #configData > 0 then
            for i = 1, #data.data do
                for j = 1, #configData do
                    if data.data[i].md5_val == configData[j].md5_val and data.data[i].config_id == configData[j].config_id then
                        break
                    end
                    if j == #configData then
                        isFit = false
                        config_ids = config_ids .. data.data[i].config_id .. ','
                    end
                end
            end
            for i = 1, #configData do
                for j = 1, #data.data do
                    if configData[i].config_id == data.data[j].config_id then
                        break
                    end
                    if j == #data.data then
                        preDelConfigIDs[#preDelConfigIDs + 1] = configData[i].config_id
                    end
                end
            end
        end
        if #configData == 0 then
            isFit = false
            for i = 1, #data.data do
                config_ids = config_ids .. data.data[i].config_id .. ','
            end
        end
        if #preDelConfigIDs > 0 then
            self:delConfigData(data.localdata, preDelConfigIDs)
        end
        -- md5与本地完全一致
        if isFit then
            self:getConfigDataSuccess(data.localdata)
        else
            self:reqConfigDataFile(config_ids, data.localdata, data.data)
        end
    elseif data then
        self:dealFailed(data)
    end
end

function Configuration:getLocalKeyStr(key)
    return self:getEnv() .. XH.areaData:getLobbyID() .. ConfigurationDefine.Key .. key
end

function Configuration:getLocalDataStr(key)
    return self:getEnv() .. XH.areaData:getLobbyID() .. ConfigurationDefine.Data .. key
end

function Configuration:delConfigData(key, configIDs)
    if #configIDs == 0 then
        return
    end

    local configLocal = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_KEY, {}, {key = self:getLocalKeyStr(key)})
    local configData = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, {}, {key = self:getLocalDataStr(key)})
    local newConfigKey = {}
    local newConfigData = {}
    for i = 1, #configLocal do
        if not self:arrayContains(configIDs, configLocal[i].config_id) then
            newConfigKey[#newConfigKey + 1] = configLocal[i]
        end
    end
    for i = 1, #configData do
        if not self:arrayContains(configIDs, configData[i].config_id) then
            newConfigData[#newConfigData + 1] = configData[i]
        end
    end

    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_KEY, newConfigKey, {key = self:getLocalKeyStr(key)})
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, newConfigData, {key = self:getLocalDataStr(key)})
end

function Configuration:arrayContains(array, value)
    for i = 1, #array do
        if array[i] == value then
            return true
        end
    end
    return false
end

function Configuration:reqConfigDataFile(configIds, localdata, localmd5)
    self:startReq("ReqConfigDataFile", configIds, self:getEnv(), localdata, localmd5, 10)
end

function Configuration:onCellConfigDataFile(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local configData = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, {}, {key = self:getLocalDataStr(data.localdata)})
        local saveData = configData
        -- 替换机制，否则push
        if #configData > 0 then
            for i = 1, #data.data do
                for j = 1, #configData do
                    if configData[j].config_id == data.data[i].config_id then
                        saveData[j] = data.data[i]
                        break
                    end
                    if j == #configData then
                        saveData[#saveData + 1] = data.data[i]
                    end
                end
            end
        else
            saveData = data.data
        end
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_KEY, data.localmd5, {key = self:getLocalKeyStr(data.localdata)})
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CONFIGURATION_DATA, saveData, {key = self:getLocalDataStr(data.localdata)})
        self:getConfigDataSuccess(data.localdata)
    else
        if data then
            self:dealFailed(data.localdata)
        end
    end
end

-- 发送用户事件
function Configuration:getConfigDataSuccess(key)
    self._faildata[key] = 0
    self:clearCacheData()
    self:dispatchEvent({name = self.EVENT_REQ_CONFIGURATION_SUCCESS, data = {key = key}})
end

-- 获取allconfig 对应配置
function Configuration:getAllConfigData(key)
    local allCfg = self:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig") or {}
    return allCfg[key]
end

function Configuration:getLobbyConfig(key)
    local allCfg = self:getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby") or {}
    return allCfg[key]
end

function Configuration:clearCacheData()
    self._cacheData = {}
    if XH and XH.replaceHlyasUrl then
        XH.replaceHlyasUrl = nil
    end
end

return Configuration
h(