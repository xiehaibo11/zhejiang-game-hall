--------------------------------------------
-- Copyright © 2018 luaide-lite
-- File: ConfigerManager.lua
-- Author: luaide-lite
-- Date: 2019-08-02 07:33:07
-- Desc: 配置表管理
--------------------------------------------

local ConfigerManager = class("ConfigerManager")

function ConfigerManager:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()

    self:initDatas()
end

function ConfigerManager:initDatas()
    self._globalCfg = require("lobby.Config.Parse.GlobalConfiger").new()
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

function ConfigerManager:getLobbyMenuBarConfig(menubarID)
    local fileName = "configure/" .. XH.areaData:getLobbyID() .. "/LobbyIconListConfig.json"
    local jsonData = self:loadJsonConfig(fileName)
    if not jsonData or not jsonData.LobbyIconList then
        return
    end
    if not menubarID then
        return jsonData.LobbyIconList
    end
    local iconListConf = {}
    for _, v in pairs(jsonData.LobbyIconList) do
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