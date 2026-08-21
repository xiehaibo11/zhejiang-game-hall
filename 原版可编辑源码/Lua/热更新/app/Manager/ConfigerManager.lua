--------------------------------------------
-- Copyright © 2018 luaide-lite
-- File: ConfigerManager.lua
-- Author: luaide-lite
-- Date: 2019-08-02 07:33:07
-- Desc: 配置表管理
--------------------------------------------

local ConfigerManager = class("ConfigerManager")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

function ConfigerManager:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()

    self:initDatas()
end

function ConfigerManager:initDatas()
    self._globalCfg = require("lobby.Config.Parse.GlobalConfiger").new()
    self._lobbyIconList = {}
end

function ConfigerManager:getIsIosTishen()
    if device.platform == "android" then
        return false
    end
    return self._globalCfg:getIsIosTiShen()
end

function ConfigerManager:getShopAppId()
    return self._globalCfg:getShopAppId()
end

function ConfigerManager:getShopPackageAppId()
    return self._globalCfg:getShopPackageAppId()
end

function ConfigerManager:getIsWXBanUrl()
    return self._globalCfg:getIsWXBanUrl()
end

function ConfigerManager:getIsOnlyWXShare()
    return self._globalCfg:getIsOnlyWXShare()
end

function ConfigerManager:getIsKongZhi()
    return self._globalCfg:getIsKongZhi()
end

function ConfigerManager:getIsBanQuan()
    return self._globalCfg:getIsBanQuan()
end

function ConfigerManager:getOnlyConfigByID(iconID, menuBarID)
    local allConfig = self:getLobbyMenuBarConfig()
    for _,v in pairs(allConfig) do
        if v.IconID == iconID and v.MenuBarID == menuBarID then
            return v
        end
    end
    return nil
end

function ConfigerManager:getLobbyMenuConfigByIconID(iconID)
    local allConfig = self:getLobbyMenuBarConfig()
    local iconConfig = {}
    for _,v in pairs(allConfig) do
        if v.IconID == iconID then
            table.insert(iconConfig, v)
        end
    end
    return iconConfig
end

function ConfigerManager:updateLobbyMenuBarConfig()
    if XH.isEmbeddedApp() then
        return
    end
    local jsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.NICHE, "LobbyIconListConfig")
    if not jsonData or not jsonData.LobbyIconList then
        return
    end
    self._lobbyIconList[XH.areaData:getAreaID()] = jsonData.LobbyIconList
end

function ConfigerManager:getLobbyMenuBarConfig(menubarID)
    if not self._lobbyIconList[XH.areaData:getAreaID()] then
        local fileName = "configure/Common/LobbyIconListConfig.json"
        -- local fileName = "configure/" .. XH.areaData:getLobbyID() .. "/LobbyIconListConfig.json"
        -- if XH.isEmbeddedApp() then
        --     fileName = "configure/0/LobbyIconListConfig.json"
        -- end
        local jsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.NICHE, "LobbyIconListConfig")
        if not jsonData or not jsonData.LobbyIconList then
            jsonData = self:loadJsonConfig(fileName)
        end
        -- local jsonData = self:loadJsonConfig(fileName)
        if not jsonData or not jsonData.LobbyIconList then
            return
        end
        self._lobbyIconList[XH.areaData:getAreaID()] = jsonData.LobbyIconList
    end
    if not menubarID then
        return self._lobbyIconList[XH.areaData:getAreaID()]
    end
    local iconListConf = {}
    for _, v in pairs(self._lobbyIconList[XH.areaData:getAreaID()]) do
        if v.MenuBarID == menubarID then
            table.insert(iconListConf, v)
        end
    end
    return iconListConf
end

function ConfigerManager:loadJsonConfig(filePath)
    if not cc.FileUtils:getInstance():isFileExist(filePath) then
        return
    end
    local jsonData = {}
    local jsonStr = cc.FileUtils:getInstance():getStringFromFile(filePath)
	if jsonStr ~= nil and jsonStr ~= "" then	
        local ok, msg = pcall(function()
            jsonData = cjson.decode(jsonStr)
        end)
        if not ok then
            print("ConfigerManager:loadJsonConfig cjson decode error: " .. msg)
            return
        end
	end
    return jsonData
end

function ConfigerManager:getIsJgSdk()
    return self._globalCfg:getIsJgSdk()
end

function ConfigerManager:getIsNewRealName()
    return self._globalCfg:getIsNewRealName()
end

return ConfigerManager