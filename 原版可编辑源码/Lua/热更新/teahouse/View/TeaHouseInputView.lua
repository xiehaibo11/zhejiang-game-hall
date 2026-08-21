---@class TeaHouseInputView : View
local TeaHouseInputView = class("TeaHouseInputView", TeaHouse.View)

local KW_MIN_NUM = 0
local KW_MAX_NUM = 9

TeaHouseInputView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInputView.csb",
    binding = {
        ["_KW_PANEL_MASK"] = { tag = "_KW_PANEL_MASK", name = "_panelMask", class = "panel", events = "onMaskClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_DELETE"] = { tag = "_KW_BTN_DELETE", name = "_btnDelete", class = "btn", events = "onDeleteClicked" },
        ["_KW_BTN_RESET"] = { tag = "_KW_BTN_RESET", name = "_btnReset", class = "btn", events = "onResetClicked" },

        ["_KW_IMG_AREA"] = { tag = "_KW_IMG_AREA", name = "_areaImage", class = "Image" },
        ["_KW_TEXT_AREA"] = { tag = "_KW_TEXT_AREA", name = "_areaText", class = "text" },
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseInputView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_NUM_", startNum = KW_MIN_NUM, endNum = KW_MAX_NUM, preName = "_btnNum", class = "btn"
})

function TeaHouseInputView:ctor()
    TeaHouseInputView.super.ctor(self)
    self:initUI()
end

function TeaHouseInputView:initUI()
    if XH.ChannelTool.judgeIsChannel() then
        if self._areaImage and self._areaText then
            self._areaText:setString("")
            self._areaImage:setVisible(false)
        end
    else
        if self._areaImage and self._areaText then
            local areaString = XH.areaData:getAreaName()
            self._areaText:setString(areaString)
            self._areaImage:setVisible(true)
        end
    end

    for i = KW_MIN_NUM, KW_MAX_NUM do
        local btnNum = self["_btnNum" .. i]
        if btnNum then
            btnNum:addTouchEventListener(function(send, eventType)
                self:onNumClicked(send, eventType, i)
            end)
        end
    end
end

function TeaHouseInputView:onMaskClicked(send, eventType)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseInputView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseInputView:onDeleteClicked(send, eventType)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self.onDeleteInput then
        self:onDeleteInput()
    end
end

function TeaHouseInputView:onResetClicked(send, eventType)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self.onResetInput then
        self:onResetInput()
    end
end

function TeaHouseInputView:onNumClicked(send, eventType, num)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self.onNumInput then
        self:onNumInput(num)
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_4)
    end

end

return TeaHouseInputView