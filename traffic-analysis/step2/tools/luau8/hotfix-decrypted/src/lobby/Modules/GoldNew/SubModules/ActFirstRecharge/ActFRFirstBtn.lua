local BtnBase = import("...Views.BtnBase")
local ActFRFirstBtn = class("ActFRFirstBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local RedPointManager = import("...Manager.RedPointManager")

function ActFRFirstBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/FirstRechargeFirstBtn.csb")
end

function ActFRFirstBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function ActFRFirstBtn:ctor(id, areaId, cfg)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActFR)
    ActFRFirstBtn.super.ctor(self, id, areaId, cfg)
    RedPointManager:registerNode("act/giftPackage/firstRecharge")
    RedPointManager:addListener("act/giftPackage/firstRecharge", function(state)
        if tolua.isnull(self) then
            return
        end
        XH.UITool.setVisible(self, "_imgRedPoint", state)
    end)

    -- self:initSpine({
    --     path = "animation/Lobby/Base/zzb_dt_xyrw_rk/",
    --     tex = "zzb_dt_xyrw_rk.json",
    --     ske = "zzb_dt_xyrw_rk.atlas",
    --     armatureName = "animation",
    --     scale = (LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT == self._areaId or LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT == self._areaId) and 0.86 or 1
    -- })
end

function ActFRFirstBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}, ["_ani"] = {varName = "_ani"}}
end

function ActFRFirstBtn:getProxyEvents()
    local e = ActFRFirstBtn.super.getProxyEvents(self)
    table.insert(e, {module = self._module, eventKeyName = "EVENT_ACT_INFO", callBack = "onActInfo"})
    return e
end

function ActFRFirstBtn:onActInfo(event)
    self:checkShow()
end

function ActFRFirstBtn:checkShow(isFromGroup)
    local bShow = self._module:isValid()
    if bShow and (not self:isVisible() or not self._isFirstReported) then
        XH.Bridge:throwData("jblb2024052901", {page_label = "首充礼包", page = "新金币场大厅"})
        self._isFirstReported = true
    end
    self:setVisible(bShow) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function ActFRFirstBtn:onClick()
    self:throwClickData()
    XH.Bridge:throwData("jblb2024052902", {page_label = "首充礼包", page = "新金币场大厅"})
    XH.Bridge.viewManager:openView("GoldHallFRFirstView", nil, "入口icon")
end

return ActFRFirstBtn
�	