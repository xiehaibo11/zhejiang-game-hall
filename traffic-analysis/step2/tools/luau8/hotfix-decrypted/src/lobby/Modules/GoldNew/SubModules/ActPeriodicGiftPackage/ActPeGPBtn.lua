local BtnBase = import("...Views.BtnBase")
local PeGPBtn = class("PeGPBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local RedPointManager = import("...Manager.RedPointManager")

function PeGPBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/PeGPBtn.csb")
end

function PeGPBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function PeGPBtn:ctor(id, areaId, cfg)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP)
    PeGPBtn.super.ctor(self, id, areaId, cfg)
    -- RedPointManager:registerNode("act/giftPackage/actPeGP")
    -- RedPointManager:addListener("act/giftPackage/actPeGP", function(state)
    --     if tolua.isnull(self) then
    --         return
    --     end
    --     XH.UITool.setVisible(self, "_imgRedPoint", state)
    -- end)
end

function PeGPBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}, ["_ani"] = {varName = "_ani"}}
end

function PeGPBtn:getProxyEvents()
    local e = PeGPBtn.super.getProxyEvents(self)
    table.insert(e, {module = self._module, eventKeyName = "EVENT_ACT_INFO", callBack = "onActInfo"})
    return e
end

function PeGPBtn:onActInfo(event)
    self:checkShow()
end

function PeGPBtn:checkShow(isFromGroup)
    if self._isLimitShow then
        self:setVisible(false)
        return
    end
    local bShow = self._module:isValid()
    if bShow and (not self:isVisible() or not self._isFirstReported) then
        XH.Bridge:throwData("jblb2024052901", {page_label = "限时周期礼包", page = "新金币场大厅"})
        self._isFirstReported = true
    end
    self:setVisible(bShow) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function PeGPBtn:onClick()
    self:throwClickData()
    XH.Bridge:throwData("jblb2024052902", {page_label = "限时周期礼包", page = "新金币场大厅"})
    XH.Bridge.viewManager:openView("GoldHallPeGPView", nil, "入口icon")
end

return PeGPBtn
 