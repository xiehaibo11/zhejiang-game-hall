---@class TeaHouseManager 比赛场管理
local TeaHouseManager = class("TeaHouseManager")

function TeaHouseManager:ctor()
    self._isInit = false
end

function TeaHouseManager:initDatas()
    self.teahouseData = require("teahouse.Data.TeaHouseData").new()
    self.teahouseData:setAppID(TeaHouse.BridgeData.getAreaTeaHouseAppID())
end

function TeaHouseManager:initSDKs()
    self.teahouseSDK = TeaHouse.BridgeSDK.new()
end

function TeaHouseManager:initEvent()
    self.teahouseEvent = TeaHouse.BridgeEvent.new()
end

function TeaHouseManager:initManagers()
    ---模块管理
    if self.moduleManager == nil then
        local ModuleManager = require("teahouse.Manager.ModuleManager")
        self.moduleManager = ModuleManager.new("teahouse.Module.")
    else
        self.moduleManager:reset()
    end

    ---视图管理
    if self.viewManager == nil then
        local ViewManager = require("teahouse.Manager.ViewManager")
        self.viewManager = ViewManager.new("teahouse.View.")
    else
        self.viewManager:reset()
    end

    ---请求管理
    if self.reqManager == nil then
        local ReqManager = require("teahouse.Manager.ReqManager")
        self.reqManager = ReqManager.new("teahouse.Req.")
    else
        self.reqManager:reset()
    end

    ---网络管理
    if self.netManager == nil then
        local NetManager = require("teahouse.Manager.NetManager")
        self.netManager = NetManager.new(TeaHouse.BridgeData.getSRSGroupID())
    else
        self.netManager:reset(TeaHouse.BridgeData.getSRSGroupID())
    end

    ---配置管理
    if self.configManager == nil then
        local ConfigManager = require("teahouse.Manager.ConfigManager")
        self.configManager = ConfigManager.new("teahouse.Config.")
    end
    if self.configManager ~= nil then
        self.configManager:onLoad(TeaHouse.BridgeData.getLobbyID())
    end
end

function TeaHouseManager:initModules()
    self:destroyModuels()

    ---@type TeaHouseListModule
    self.teahouseList = self.moduleManager:createModule("TeaHouseListModule")

    ---@type TeaHouseGeneralModule
    self.teahouseGeneral = self.moduleManager:createModule("TeaHouseGeneralModule")

    ---@type TeaHouseMainModule
    self.teahouseMain = self.moduleManager:createModule("TeaHouseMainModule")

    ---@type TeaHouseSetupModule
    self.teahouseSetup = self.moduleManager:createModule("TeaHouseSetupModule")

    ---@type TeaHouseMemberModule
    self.teahouseMember = self.moduleManager:createModule("TeaHouseMemberModule")

    ---@type TeaHouseRankModule
    self.teahouseRank = self.moduleManager:createModule("TeaHouseRankModule")

    ---@type TeaHouseAgentBillModule
    self.teahouseAgentBill = self.moduleManager:createModule("TeaHouseAgentBillModule")

    ---@type TeaHousePlayerBillModule
    self.playerBill = self.moduleManager:createModule("TeaHousePlayerBillModule")

    ---@type TeaHouseFilterModule
    self.teaHouseFilter = self.moduleManager:createModule("TeaHouseFilterModule")

    ---@type TeaHouseOnlineModule
    self.teaHouseOnline = self.moduleManager:createModule("TeaHouseOnlineModule")

    ---@type TeaHouseCreateModule
    self.teaHouseCreate = self.moduleManager:createModule("TeaHouseCreateModule")

    ---@type TeaHouseRemodelCtreateModule
    self.teaHouseRemodeCreate = self.moduleManager:createModule("TeaHouseRemodelCtreateModule")

    ---@type TeaHouseRemodelCtreateModule
    self.teaHouseGuide = self.moduleManager:createModule("TeaHouseGuideModule")

    ---@type TeaHouseTableModule
    self.teaHouseTable = self.moduleManager:createModule("TeaHouseTableModule")

    ---@type TeaHouseVisualCardTransferModule
    self.teaHouseVisualCardTransferModule = self.moduleManager:createModule("TeaHouseVisualCardTransferModule")
end

function TeaHouseManager:destroyModuels()
    if self.teahouseList ~= nil then
        self.moduleManager:destroyModule("TeaHouseListModule")
        self.teahouseList = nil
    end

    if self.teahouseGeneral ~= nil then
        self.moduleManager:destroyModule("TeaHouseGeneralModule")
        self.teahouseGeneral = nil
    end

    if self.teahouseMain ~= nil then
        self.moduleManager:destroyModule("TeaHouseMainModule")
        self.teahouseMain = nil
    end

    if self.teahouseSetup ~= nil then
        self.moduleManager:destroyModule("TeaHouseSetupModule")
        self.teahouseSetup = nil
    end

    if self.teahouseMember ~= nil then
        self.moduleManager:destroyModule("TeaHouseMemberModule")
        self.teahouseMember = nil
    end

    if self.teahouseRank ~= nil then
        self.moduleManager:destroyModule("TeaHouseRankModule")
        self.teahouseRank = nil
    end

    if self.teahouseAgentBill ~= nil then
        self.moduleManager:destroyModule("TeaHouseAgentBillModule")
        self.teahouseAgentBill = nil
    end

    if self.playerBill ~= nil then
        self.moduleManager:destroyModule("TeaHousePlayerBillModule")
        self.playerBill = nil
    end

    if self.teaHouseFilter ~= nil then
        self.moduleManager:destroyModule("TeaHouseFilterModule")
        self.teaHouseFilter = nil
    end

    if self.teaHouseOnline ~= nil then
        self.moduleManager:destroyModule("TeaHouseOnlineModule")
        self.teaHouseOnline = nil
    end

    if self.teaHouseCreate ~= nil then
        self.moduleManager:destroyModule("TeaHouseCreateModule")
        self.teaHouseCreate = nil
    end

    if self.teaHouseRemodeCreate ~= nil then
        self.moduleManager:destroyModule("TeaHouseRemodelCtreateModule")
        self.teaHouseRemodeCreate = nil
    end

    if self.teaHouseGuide ~= nil then
        self.moduleManager:destroyModule("TeaHouseGuideModule")
        self.teaHouseGuide = nil
    end

    if self.teaHouseTable ~= nil then
        self.moduleManager:destroyModule("TeaHouseTableModule")
        self.teaHouseTable = nil
    end
    
    if self.teaHouseVisualCardTransferModule ~= nil then
        self.moduleManager:destroyModule("TeaHouseVisualCardTransferModule")
        self.teaHouseVisualCardTransferModule = nil
    end
end

function TeaHouseManager:init()
    if self.teahouseData ~= nil and self.teahouseData:isInTeahouse() then
        return
    end
    if self._isInit then
        return
    end
    self._isInit = true

    ---初始化数据
    self:initDatas()
    ---初始化SDK
    self:initSDKs()
    ---初始化Event
    self:initEvent()
    ---初始化管理
    self:initManagers()
    ---初始化模块
    self:initModules()
end

function TeaHouseManager:destroy()
    if self.teahouseData ~= nil and self.teahouseData:isInTeahouse() then
        return
    end

    ---销毁模块
    self:destroyModuels()

    ---销毁模块管理
    if self.moduleManager ~= nil then
        self.moduleManager:reset()
        self.moduleManager = nil
    end

    ---销毁视图管理
    if self.viewManager ~= nil then
        self.viewManager:reset()
        self.viewManager = nil
    end

    ---销毁请求管理
    if self.reqManager ~= nil then
        self.reqManager:reset()
        self.reqManager = nil
    end

    ---销毁网络管理
    if self.netManager ~= nil then
        self.netManager:reset()
        self.netManager = nil
    end

    ---销毁配置管理
    if self.configManager ~= nil then
        self.configManager:onUnload(TeaHouse.BridgeData.getLobbyID())
        self.configManager = nil
    end

    ---销毁SDK
    if self.teahouseSDK ~= nil then
        self.teahouseSDK:destroy()
        self.teahouseSDK = nil
    end

    ---销毁Event
    if self.teahouseEvent ~= nil then
        self.teahouseEvent:destroy()
        self.teahouseEvent = nil
    end

    ---销毁数据
    self.teahouseData = nil

    self._isInit = false
end

return TeaHouseManager   a  