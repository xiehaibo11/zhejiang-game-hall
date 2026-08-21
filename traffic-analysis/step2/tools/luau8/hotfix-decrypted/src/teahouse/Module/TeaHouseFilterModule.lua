---@class TeaHouseFilterModule : Module
local TeaHouseFilterModule = class("TeaHouseFilterModule", TeaHouse.Module)

TeaHouseFilterModule.EVENT_FILTER_LIST_CHANGED = "EVENT_FILTER_LIST_CHANGED"

function TeaHouseFilterModule:onCreate()
    TeaHouseFilterModule.super.onCreate(self)

    self._filterNumID = nil
    self._filterTeaNumber = nil
    self._filterList = {}
end

function TeaHouseFilterModule:onDestroy()
    TeaHouseFilterModule.super.onDestroy(self)
end

function TeaHouseFilterModule:getFilterList()
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.PlayFilter == 1 then
        local teahouseData = TeaHouse.manager.teahouseData
        local teaNumber = teahouseData:getTeaNumber()
        local isNeedLoad = false
        if self._filterNumID == nil or self._filterTeaNumber == nil then
            isNeedLoad = true
        end
        if not isNeedLoad then
            if self._filterNumID ~= TeaHouse.BridgeData.getNumberID() or self._filterTeaNumber ~= teahouseData:getTeaNumber() then
                isNeedLoad = true
            end
        end
        if isNeedLoad then
            self._filterNumID = TeaHouse.BridgeData.getNumberID()
            self._filterTeaNumber = teahouseData:getTeaNumber()
            self._filterList = TeaHouse.StorageTool.loadTeaHouseFilter(self._filterNumID, self._filterTeaNumber)
        end
    end
    return self._filterList
end

function TeaHouseFilterModule:saveFilterList(filterList)
    self._filterList = filterList
    local teahouseData = TeaHouse.manager.teahouseData
    TeaHouse.StorageTool.saveTeaHouseFilter(TeaHouse.BridgeData.getNumberID(), teahouseData:getTeaNumber(), filterList)
    self:dispatchEvent({ name = self.EVENT_FILTER_LIST_CHANGED })
end

function TeaHouseFilterModule:isInFilter(gameID)
    for _, filter in ipairs(self._filterList) do
        if filter == tostring(gameID) then
            return true
        end
    end
    return false
end

return TeaHouseFilterModule