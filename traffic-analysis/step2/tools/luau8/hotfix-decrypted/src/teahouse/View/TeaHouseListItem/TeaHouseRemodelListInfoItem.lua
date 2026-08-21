---@class TeaHouseRemodelListInfoItem : View

local TeaHouseRemodelListInfoBase = import(".TeaHouseListInfoItem")
local TeaHouseRemodelListInfoItem = class("TeaHouseRemodelListInfoItem", TeaHouseRemodelListInfoBase)

local KW_MAX_NUM_COUNT = 6
local KW_MAX_NAME_WIDTH = 310
local KW_MAX_NAME_FONT_SIZE = 36
local KW_MIN_NAME_FONT_SIZE = 26

TeaHouseRemodelListInfoItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseListItem/TeaHouseListInfoItem.csb",
    binding = {
        --扩展的内容
        ["_KW_TEAHOUSE_LEVEL"] = {tag = "_KW_TEAHOUSE_LEVEL", name = "_momentsLevel", class = "img"},
        ["_KW_IMG_LEVEL_BG"] = {tag = "KW_IMG_LEVEL_BG", name = "_momentsLevelBack", class = "img"}
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseRemodelListInfoItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_NUM_", startNum = 1, endNum = KW_MAX_NUM_COUNT, preName = "_textNum", class = "text"
})

TeaHouse.SysTool.mergeCsbBinding(REMODEL_RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_NUM_", startNum = 1, endNum = KW_MAX_NUM_COUNT, preName = "_textNum", class = "text"
})

local MOMENTS_LEVEL_ICON = {
    [1] = "item_icon_level_1.png",
    [2] = "item_icon_level_2.png",
    [3] = "item_icon_level_3.png",
}

local MOMENTS_LEVEL_BG = {
    [1] = "item_bg_level_1.png",
    [2] = "item_bg_level_2.png",
    [3] = "item_bg_level_3.png",
}

function TeaHouseRemodelListInfoItem:ctor(info)
    TeaHouseRemodelListInfoItem.super.ctor(self,info)
    if self._textName then
        if info.szData and #info.szData > 0 then
            self._textName:setString(string.format("%s的比赛场(%s)", TeaHouse.StringTool.getTrimName(info.acOwnerNick), info.szData))
        else
            self._textName:setString(string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(info.acOwnerNick)))
        end
        TeaHouse.UITool.adaptTextToWidth(self._textName, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
    end
    if info.acExtraData and TeaHouse.BridgeData:isRemodelArea() then
        local acExtraData = json.decode(info.acExtraData)
        if next(acExtraData) then
            self._teaHouseLevel = acExtraData.level
            self._momentsLevel:loadTexture(MOMENTS_LEVEL_ICON[acExtraData.level], ccui.TextureResType.plistType)
            self._momentsLevel:setVisible(true)
            self._momentsLevelBack:loadTexture(MOMENTS_LEVEL_BG[acExtraData.level], ccui.TextureResType.plistType)
        end
    end
end


function TeaHouseRemodelListInfoItem:updateInfo()
    TeaHouseRemodelListInfoItem.super.updateInfo(self)
    if self._textName then
        local teaHouseName = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(self._info.acOwnerNick))
        if self._info.szData and #self._info.szData > 0 then
            if #self._info.szData <= 4 and tonumber(self._info.szData) ~= nil then
                teaHouseName = teaHouseName .. string.format("(%s)", self._info.szData)
            end
        end
        self._textName:setString(teaHouseName)
        TeaHouse.UITool.adaptTextToWidth(self._textName, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
    end
end

function TeaHouseRemodelListInfoItem:onShareClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local title = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(self._info.acOwnerNick, 12))
    if self._info.szData and #self._info.szData > 0 then
        if #self._info.szData <= 4 and tonumber(self._info.szData) ~= nil then
            title = title .. string.format("(%s)", self._info.szData)
        end
    end
    TeaHouse.BridgeData.getShareModule():setShareScene("比赛场", "大厅加入比赛场")
    TeaHouse.SysTool.shareTeaHouse(self._info.nPasswd, title)
end

function TeaHouseRemodelListInfoItem:onSettingClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:onReqComplain()
    TeaHouse.manager.teahouseData:setAppID(self._info.nTeaHouseAppid)
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if SetupConfig.IsOpenNewTeahouseSetupView then
        TeaHouse.manager.viewManager:openView("TeaHouseSetupViewNew", 0, {
            nTeaNumber = self._info.nTeaNumber,
            szData = self._info.szData,
            isOwner = (self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()),
            momentLevel = self._teaHouseLevel ,
            useBuyedProp = self._info.bUseBuyedProp,
        })
    else
        TeaHouse.manager.viewManager:openView("TeaHouseSetupView", 0, {
            nTeaNumber = self._info.nTeaNumber,
            szData = self._info.szData,
            isOwner = (self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()),
            momentLevel = self._teaHouseLevel
        })
    end
end

function TeaHouseRemodelListInfoItem:onJoinClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:onReqComplain()
    TeaHouse.manager.teahouseData:setAppID(self._info.nTeaHouseAppid)
    local isOwner = self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()
    TeaHouse.manager.teahouseGeneral:joinTeaHouse(isOwner and self._info.nTeaNumber or 0, self._info.nPasswd,nil,self._teaHouseLevel)
end

function TeaHouseRemodelListInfoItem:getTeaHouseLevel()
    return self._teaHouseLevel
end

function TeaHouseRemodelListInfoItem:onReqComplain()
    XH.lobby:getModule('Legitimacy'):reqIsUserHideGame(self._info.nTeaOwnerNumid, self._info.nTeaNumber)
end

return TeaHouseRemodelListInfoItem