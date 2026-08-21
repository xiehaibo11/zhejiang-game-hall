local TeaHouseTableCreateItem = import(".TeaHouseTableCreateItem")
---@class TeaHouseTableCreatePlayModeItem : View
local TeaHouseTableCreatePlayModeItem = class("TeaHouseTableCreatePlayModeItem", TeaHouseTableCreateItem)

function TeaHouseTableCreatePlayModeItem:ctor()
    TeaHouseTableCreatePlayModeItem.super.ctor(self)
end

function TeaHouseTableCreatePlayModeItem:setCreateState(isAllow)
    self._textCreateForbid:setString("创建固定玩法")
    self._btnCreate:setEnabled(true)
    self._imgCreateAllow:setVisible(true)
    self._imgCreateForbid:setVisible(false)
    self._textCreateAllow:setVisible(false)
    self._textCreateForbid:setVisible(true)
end

function TeaHouseTableCreatePlayModeItem:onCreateClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if TeaHouse.manager.teahouseGeneral:checkIsInGame() then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if teahouseData:needShowCreateTable() and SetupConfig.IsOpenPlayMode then
        if #TeaHouse.manager.teahouseSetup:getPlayModeList() >= SetupConfig.PlayModeMaxCount then
            local teahouseData = TeaHouse.manager.teahouseData
            local SetupConfig = TeaHouse.manager.configManager.SetupConfig
            if SetupConfig.IsOpenNewTeahouseSetupView then
                TeaHouse.manager.viewManager:openView("TeaHouseSetupViewNew", 0, {
                    nTeaNumber = teahouseData:getTeaNumber(),
                    szData = teahouseData:getTeaHouseNameExt(),
                    isOwner = teahouseData:isOwner(),
                    momentLevel = teahouseData:getTeaHouseLevel(),
                    selectTag = 2,
                    useBuyedProp = teahouseData:getUseBuyedProp(),
                } )
            else
                TeaHouse.manager.viewManager:openView("TeaHouseSetupView", 0, {
                    nTeaNumber = teahouseData:getTeaNumber(),
                    szData = teahouseData:getTeaHouseNameExt(),
                    isOwner = teahouseData:isOwner(),
                    momentLevel = teahouseData:getTeaHouseLevel(),
                    selectTag = 2
                } )
            end
        else
            TeaHouse.manager.teahouseSetup:addPlayMode("TeaHouseTableCreatePlayModeItem")
        end
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_84)
    end
end

return TeaHouseTableCreatePlayModeItem?
