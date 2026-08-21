---@class TeaHouseFilterView : View
local TeaHouseFilterView = class("TeaHouseFilterView", TeaHouse.View)

local KW_ITEM_OFFSET_X = 280
local KW_ITEM_OFFSET_Y = 130
local KW_TEXT_GAME_NAME = "KW_TEXT_GAME_NAME"
local KW_IMG_SELECT_TAG = "KW_IMG_SELECT_TAG"
local KW_MAX_NAME_WIDTH = 240
local KW_MAX_NAME_FONT_SIZE = 46
local KW_MIN_NAME_FONT_SIZE = 36

TeaHouseFilterView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseFilterView.csb",
    binding = {
        ["_KW_IMG_BG"] = { tag = "_KW_IMG_BG", name = "_imgBg", class = "img" },
        ["_KW_PANEL_MASK"] = { tag = "_KW_PANEL_MASK", name = "_panelMask", class = "panel", events = "onMaskClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_OK"] = { tag = "_KW_BTN_OK", name = "_btnOK", class = "btn", events = "onOKClicked" },
        ["_KW_BTN_CLEAN"] = { tag = "_KW_BTN_CLEAN", name = "_btnClean", class = "btn", events = "onCleanClicked" },
        ["_KW_NODE_LIST_OFFSET"] = { tag = "_KW_NODE_LIST_OFFSET", name = "_nodeListOffset", class = "node" },
        ["_KW_BTN_DEFAULT_ITEM"] = { tag = "_KW_BTN_DEFAULT_ITEM", name = "_btnDefaultItem", class = "btn" },
        ["_KW_SV_LIST_INFO"] = { tag = "_KW_SV_LIST_INFO", name = "_svListInfo", class = "scrollview" },
        ["_KW_TEXT_TIP_1"] = { tag = "_KW_TEXT_TIP_1", name = "_textTip1", class = "text" },
        ["_KW_TEXT_TIP_2"] = { tag = "_KW_TEXT_TIP_2", name = "_textTip2", class = "text" },
        ["_KW_TEXT_TIP_3"] = { tag = "_KW_TEXT_TIP_3", name = "_textTip3", class = "text" },
    }
}

function TeaHouseFilterView:ctor(itemInfos)
    TeaHouseFilterView.super.ctor(self)

    self._itemInfos = itemInfos

    self._itemOriginPos = nil
    self._itemOffsetPos = nil

    self:initUI()

    self:adaptUI()
end

function TeaHouseFilterView:initUI()
    if self._nodeListOffset then
        self._itemOriginPos = cc.p(self._nodeListOffset:getPosition())
    else
        self._itemOriginPos = cc.p(0, 0)
    end
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, self._itemOriginPos.y)

    self:initItemList()
end

function TeaHouseFilterView:adaptUI()
    if not TeaHouse.UITool.isLiuHaiScreen() then
        return
    end
    if not self._imgBg then
        return
    end
    local notchWidth = TeaHouse.UITool.getNotchWidth()
    self._imgBg:setPositionX(self._imgBg:getPositionX() - notchWidth)
end

function TeaHouseFilterView:initItemList()
    if not self._svListInfo or not self._btnDefaultItem then
        return
    end

    local filterList = TeaHouse.manager.teaHouseFilter:getFilterList()
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        local item = self._btnDefaultItem:clone()
        item:setVisible(true)
        item:setPosition(self._itemOffsetPos)
        local textGameName = ccui.Helper:seekWidgetByName(item, KW_TEXT_GAME_NAME)
        if textGameName then
            textGameName:setString(itemInfo.gameName)
            textGameName:setFontSize(KW_MAX_NAME_FONT_SIZE)
            TeaHouse.UITool.adaptTextToWidth(textGameName, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
        end
        local imgSelectTag = ccui.Helper:seekWidgetByName(item, KW_IMG_SELECT_TAG)
        if imgSelectTag then
            itemInfo.isFilter = false
            imgSelectTag:setVisible(true)
            for _, filter in ipairs(filterList) do
                if filter == tostring(itemInfo.gameID) then
                    itemInfo.isFilter = true
                    imgSelectTag:setVisible(false)
                    break
                end
            end
        end
        item:addTouchEventListener(function(send, eventType)
            self:onListItemClicked(send, eventType, i, imgSelectTag)
        end)

        self._svListInfo:addChild(item)
        if i % 2 == 0 then
            self._itemOffsetPos.x = self._itemOriginPos.x
            self._itemOffsetPos.y = self._itemOffsetPos.y - KW_ITEM_OFFSET_Y
        else
            self._itemOffsetPos.x = self._itemOffsetPos.x + KW_ITEM_OFFSET_X
        end
    end
    if self._textTip2 then
        self._textTip2:setString(tostring(#self._itemInfos))
    end
    if self._textTip1 then
        ccui.Helper:doLayout(self._textTip1)
    end
end

function TeaHouseFilterView:onMaskClicked(send, eventType)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseFilterView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseFilterView:onOKClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local filterList = {}
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        if itemInfo.isFilter then
            filterList[#filterList + 1] = tostring(itemInfo.gameID)
        end
    end
    TeaHouse.manager.teaHouseFilter:saveFilterList(filterList)
    self:close()
end

function TeaHouseFilterView:onCleanClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teaHouseFilter:saveFilterList({})
    self:close()
end

function TeaHouseFilterView:onListItemClicked(send, eventType, index, imgSelectTag)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if imgSelectTag then
        imgSelectTag:setVisible(not self:changeFilter(index))
    end
end

function TeaHouseFilterView:isFilter(index)
    local itemInfo = self._itemInfos[index]
    if itemInfo == nil then
        return false
    end
    return itemInfo.isFilter
end

function TeaHouseFilterView:changeFilter(index)
    local itemInfo = self._itemInfos[index]
    if itemInfo == nil then
        return
    end
    itemInfo.isFilter = not self:isFilter(index)
    return itemInfo.isFilter
end

return TeaHouseFilterViewH