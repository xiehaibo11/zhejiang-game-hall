local BtnBase = import("...Views.BtnBase")
local ActFRSecondBtn = class("ActFRSecondBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local RedPointManager = import("...Manager.RedPointManager")

function ActFRSecondBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/FirstRechargeSecondBtn.csb")
end

function ActFRSecondBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function ActFRSecondBtn:ctor(id, areaId, cfg)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActFR)
    ActFRSecondBtn.super.ctor(self, id, areaId, cfg)
end

function ActFRSecondBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}, ["_ani"] = {varName = "_ani"}}
end

function ActFRSecondBtn:getProxyEvents()
    local e = ActFRSecondBtn.super.getProxyEvents(self)
    table.insert(e, {module = self._module, eventKeyName = "EVENT_ACT_INFO", callBack = "onActInfo"})
    return e
end

function ActFRSecondBtn:onActInfo(event)
    self:checkShow()
end

function ActFRSecondBtn:checkShow(isFromGroup)
    local bShow = self._module:isSecondValid()
    if bShow and (not self:isVisible() or not self._isFirstReported) then
        XH.Bridge:throwData("jblb2024052901", {page_label = "首充狂欢礼包", page = "新金币场大厅"})
        self._isFirstReported = true
    end
    self:setVisible(bShow) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function ActFRSecondBtn:onClick()
    self:throwClickData()
    XH.Bridge:throwData("jblb2024052902", {page_label = "首充狂欢礼包", page = "新金币场大厅"})
    XH.Bridge.viewManager:openView("GoldHallFRSecondView", nil, "入口icon")
end

return ActFRSecondBtn
