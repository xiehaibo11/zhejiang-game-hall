local BtnBase = import("..BtnBase")
local MonthlyCardBtn = class("MonthlyCardBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function MonthlyCardBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("MonthlyCardBtn.csb")
end

function MonthlyCardBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function MonthlyCardBtn:ctor(id, areaId, cfg)
    MonthlyCardBtn.super.ctor(self, id, areaId, cfg)
end

function MonthlyCardBtn:getCfgSize()
    return cc.size(160, 160)
end

function MonthlyCardBtn:getProxyEvents()
    local e = MonthlyCardBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("MonthlyCard"), eventKeyName = "EVENT_FLUSH_MONTHLY_CARD", callBack = "onUpdateRedPoint"})
    return e
end

function MonthlyCardBtn:onUpdateRedPoint()
    local isValid = XH.lobby:getModule("MonthlyCard"):isValid()
    local isHaveAward = XH.lobby:getModule("MonthlyCard"):isHaveAward()
    self._imgRed:setVisible(isValid and isHaveAward)
end

function MonthlyCardBtn:onEventUpdateIconState()
    self:checkShow()
end

function MonthlyCardBtn:checkShow(isFromGroup)
    local isVisible = self:isVisible()
    local isValid = XH.lobby:getModule("MonthlyCard"):isValid()
    self:setVisible(isValid)
    if not isVisible and isValid then
        local area = self:getThrowDataArea()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zzg2025101101, {page = area, page_item_id = "财神月卡"})
    end
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
    self:onUpdateRedPoint()
end

function MonthlyCardBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgRed"] = {varName = "_imgRed"},
        ["_aniNode"] = {varName = "_aniNode"}
    }
end

function MonthlyCardBtn:initIcon(name)
    MonthlyCardBtn.super.initIcon(self, name)
end

function MonthlyCardBtn:onClick()
    self:throwClickData()
    local area = ""
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        area = "金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        area = "选场大厅"
    end
    XH.lobby:getModule("MonthlyCard"):openMonthlyCardView(nil, {area = area})
    local area = self:getThrowDataArea()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zzg2025101102, {page = area, page_item_id = "财神月卡"})
end

function MonthlyCardBtn:getThrowDataArea()
    local area = ""
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        area = "金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        area = "选场大厅"
    end
    return area
end

return MonthlyCardBtn
