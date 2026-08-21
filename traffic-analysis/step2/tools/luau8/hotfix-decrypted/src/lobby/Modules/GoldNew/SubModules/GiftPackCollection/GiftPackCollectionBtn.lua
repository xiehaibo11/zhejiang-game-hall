local BtnBase = import("...Views.BtnBase")
local GiftPackCollectionBtn = class("GiftPackCollectionBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local RedPointManager = import("...Manager.RedPointManager")

function GiftPackCollectionBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("GiftPackColletion/GPCBtn.csb")
end

function GiftPackCollectionBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function GiftPackCollectionBtn:ctor(id, areaId, cfg)
    self._module = XH.Bridge:getModule(LocalConfig.MP.GPC)
    GiftPackCollectionBtn.super.ctor(self, id, areaId, cfg)
    RedPointManager:registerNode("act/giftPackage")
    RedPointManager:addListener("act/giftPackage", function(state)
        if tolua.isnull(self) then
            return
        end
        XH.UITool.setVisible(self, "_imgRedPoint", state)
    end)
end

function GiftPackCollectionBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}, ["_ani"] = {varName = "_ani"}}
end

function GiftPackCollectionBtn:getProxyEvents()
    return GiftPackCollectionBtn.super.getProxyEvents(self)
end

function GiftPackCollectionBtn:checkShow(isFromGroup)
    local bShow = self._module:isValid()
    self:setVisible(bShow) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function GiftPackCollectionBtn:onClick()
    self:throwClickData()
    XH.Bridge:getModule("GoldNew"):openFullView("GoldHallGPCView")
end

return GiftPackCollectionBtn
=