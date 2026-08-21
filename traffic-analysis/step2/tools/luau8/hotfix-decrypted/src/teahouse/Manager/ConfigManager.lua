---@class ConfigManager 配置管理
local ConfigManager = class("ConfigManager")

---@param path string 模块路径
function ConfigManager:ctor(path)
    ---模块路径
    self._path = path
end

---加载配置
---@param configName string
---@return Req
function ConfigManager:loadConfig(configName)
    local ok, config = xpcall(function()
        return require(self._path .. configName)
    end, __G__TRACKBACK__)
    if not ok then
        return nil
    end

    return config
end

function ConfigManager:unloadConfig(configName)
    -- package.loaded[self._path .. configName] = nil
end

function ConfigManager:onLoad(lobbyID)
    self.SetupConfig = self:loadSetupConfig(lobbyID)

    local PowerConfig = self:loadConfig("PowerConfig")
    ---@type PowerConfig
    self.powerConfig = PowerConfig.new(self:loadConfig("TeaHousePower.PowerConfig_" .. lobbyID))

    local SwitchConfig = self:loadConfig("SwitchConfig")
    self.SwitchConfig = SwitchConfig.SwitchConfigByLobbyID[tostring(lobbyID)]
    self.SwitchConfig.AllManagePower = 0
    self.SwitchConfig.AllManagePower = TeaHouse.StringTool.bitOr(self.SwitchConfig.AllManagePower, self.SwitchConfig.MemberMangeAddPower)
    self.SwitchConfig.AllManagePower = TeaHouse.StringTool.bitOr(self.SwitchConfig.AllManagePower, self.SwitchConfig.GameManageAddPower)
    self.SwitchConfig.AllManagePower = TeaHouse.StringTool.bitOr(self.SwitchConfig.AllManagePower, self.SwitchConfig.FeeMangeAddPower)
    self.SwitchConfig.AllManagePower = TeaHouse.StringTool.bitOr(self.SwitchConfig.AllManagePower, self.SwitchConfig.BillManageAddPower)
    self.SwitchConfig.AllManagePower = TeaHouse.StringTool.bitOr(self.SwitchConfig.AllManagePower, self.SwitchConfig.CheckRankAddPower)
    self.SwitchConfig.AllManagePower = TeaHouse.StringTool.bitOr(self.SwitchConfig.AllManagePower, self.SwitchConfig.InventoryMangeAddPower)

    local RemodelConfig = self:loadConfig("RemodelConfig")
    self.remodelConfig = RemodelConfig.new(self:loadConfig("TeaHouseRemodel.RemodelAreaConfig_" .. lobbyID))
end

function ConfigManager:onUnload(lobbyID)
    self:unloadConfig("SetupConfig")
    self.SetupConfig = nil

    self:unloadConfig("PowerConfig")
    self:unloadConfig("TeaHousePower.PowerConfig_" .. lobbyID)
    self.powerConfig = nil

    self:unloadConfig("SwitchConfig")
    self.SwitchConfig = nil

    self:unloadConfig("RemodelConfig")
    self:unloadConfig("TeaHouseRemodel.RemodelAreaConfig_" .. lobbyID)
    self.RemodelConfig = nil
end

function ConfigManager:loadSetupConfig(lobbyID)
    local SetupConfigAll = self:loadConfig("SetupConfig")
    local SetupConfig = SetupConfigAll.TeaHouseSetupByLobbyID[tostring(lobbyID)]
    for k, v in pairs(SetupConfig) do
        if v == "OpenNo" or v == "LockNo" then
            SetupConfig[k] = false
        elseif v == "OpenYes" or v == "OpenYes" then
            SetupConfig[k] = true
        end
    end
    return SetupConfig
end

return ConfigManager�