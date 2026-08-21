---@class TeaHouseScorePicker : View
local TeaHouseScorePicker = class("TeaHouseScorePicker", TeaHouse.View)

TeaHouseScorePicker.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseScorePicker.csb",
    binding = {
        ["_KW_BTN_SCOREPICKER_CLOSE"] = {
            tag = "_KW_BTN_EDITCARD_CLOSE",
            name = "_btnClose",
            class = "btn",
            events = "onCloseClicked"
        },
        ["_KW_BTN_SCOREPICKER_OK"] = {
            tag = "_KW_BTN_SCOREPICKER_OK",
            name = "_btnOk",
            class = "btn",
            events = "onOkClicked"
        },
        ["_KW_PANEL_SCOREPICKER_MIN"] = { tag = "_KW_PANEL_SCOREPICKER_MIN", name = "_panelMin", class = "panel" },
        ["_KW_PANEL_SCOREPICKER_MAX"] = { tag = "_KW_PANEL_SCOREPICKER_MAX", name = "_panelMax", class = "panel" },
        ["_KW_PANEL_SCOREPICKER_ITEM"] = { tag = "_KW_PANEL_SCOREPICKER_ITEM", name = "_panelItem", class = "panel" },
    }
}

function TeaHouseScorePicker:ctor(info)
    TeaHouseScorePicker.super.ctor(self)
    self._info = info
    self:initUI()
end

function TeaHouseScorePicker:initUI()
    local words = {}
    for i = 0, 100 do
        table.insert(words, i)
    end
    self:getPickerScrollView(self._panelMin, words, self._panelItem)
    table.insert(words, "不限")
    self:getPickerScrollView(self._panelMax, words, self._panelItem)

    local minScore, maxScore = TeaHouse.manager.teahouseAgentBill:getScoreFilter()
    self._panelMin:setValue(minScore)
    self._panelMax:setValue(maxScore)
end

--初始化滑动容器控件
function TeaHouseScorePicker:getPickerScrollView(viewPanel, listData, nodeItem)
    if not listData or #listData == 0 then
        return
    end

    if viewPanel then
        viewPanel:removeAllChildren()
        viewPanel:setSwallowTouches(false)
        local viewPanelInfo = {}
        viewPanelInfo.childNode = nodeItem
        viewPanelInfo.childText = "KW_TXT_SCOREPICKER_ITEM"
        viewPanelInfo.center = 160
        viewPanelInfo.opacityOffset = 60
        TeaHouse.PickerScrollView.create(viewPanel, viewPanelInfo)
        viewPanel:init(listData)
        viewPanel:setValue(tostring(listData[1]))
    end
    return viewPanel
end

function TeaHouseScorePicker:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseScorePicker:onOkClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local minScore = self._panelMin:getValue()
    local maxScore = self._panelMax:getValue()

    if tonumber(maxScore) ~= nil and tonumber(maxScore) < tonumber(minScore) then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "冠军分数范围选择有误")
        return
    end
    TeaHouse.manager.teahouseAgentBill:setScoreFilter(minScore, maxScore)
    self:close()
end

return TeaHouseScorePicker
