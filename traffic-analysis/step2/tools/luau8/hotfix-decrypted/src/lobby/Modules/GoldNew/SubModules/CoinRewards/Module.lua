local CoinRewardsModule = class("CoinRewardsModule", XH.ModuleBase)
local RemoteConfig = import("...Configs.RemoteConfig")
local LocalConfig = import("...Configs.LocalConfig")
local functions = import(".Config")

CoinRewardsModule.EVENT_UPDATE_RED_POINT = "EVENT_UPDATE_RED_POINT"
CoinRewardsModule.EVENT_UPDATE_LEFT_TAB = "EVENT_UPDATE_LEFT_TAB"

function CoinRewardsModule:ctor()
    CoinRewardsModule.super.ctor(self)
    self:checkRedPoint()
end

function CoinRewardsModule:checkRedPoint()
    self._showRedPoint = {}
    local config = self:getConfig()
    for i = 1, #config do
        self._showRedPoint[i] = {}
        for _, v in pairs(config[i].content) do
            self._showRedPoint[i][v.key] = false
            if v and v.key then
                if functions[v.key] and functions[v.key].checkRed then
                    local showRed = functions[v.key].checkRed()
                    self._showRedPoint[i][v.key] = showRed
                end
            end
        end
    end
    self:dispatchEvent({name = self.EVENT_UPDATE_RED_POINT})
end

function CoinRewardsModule:getProxyEvents()
    return {
        {module = XH.lobby:getModule("DailyLuckyDraw"), eventKeyName = "EVENT_PLAYER_INFO", callBack = "checkRedPoint"},
        {module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP), eventKeyName = "EVENT_ACT_INFO", callBack = "checkRedPoint"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyPageStatus", callBack = "checkRedPoint"},
        {module = XH.lobby:getModule("Share"), eventKeyName = "EVENT_LOBBY_SHARE_DATA", callBack = "checkRedPoint"},
        {module = XH.lobby:getModule("ToponAct"), eventKeyName = "EVENT_UPDATE_RED_POINR", callBack = "checkRedPoint"},
        {module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end

function CoinRewardsModule:getConfig()
    local config = clone(RemoteConfig:getConfigByName("coinRewards") or {})
    for i = 1, #config do
        for j = #config[i].content, 1, -1 do
            local v = config[i].content[j]
            if v and v.key and functions[v.key] then
                if functions[v.key].isValid and not functions[v.key].isValid() then
                    table.remove(config[i].content, j)
                end
            else
                table.remove(config[i].content, j)
            end
        end
    end
    return config, functions
end

-- 界面里面的左侧页签的红点
function CoinRewardsModule:getShowRedPointByTitle(index)
    local showRed = false
    for k, v in pairs(self._showRedPoint[index]) do
        if v then
            showRed = true
            break
        end
    end
    return showRed
end

-- 整个活动模块的红点
function CoinRewardsModule:getShowRedPoint()
    local showRed = false
    for index = 1, #self._showRedPoint do
        for k, v in pairs(self._showRedPoint[index]) do
            if v then
                showRed = true
                break
            end
        end
        if showRed == true then
            break
        end
    end
    return showRed
end

function CoinRewardsModule:isValid()
    return true
end

function CoinRewardsModule:onGetConfiguration(event)
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
    local key = event.data.key
    if key and key == ConfigurationDefine.Config.GOLD then
        self:checkRedPoint()
        self:dispatchEvent({name = self.EVENT_UPDATE_LEFT_TAB})
    end
end

return CoinRewardsModule
>