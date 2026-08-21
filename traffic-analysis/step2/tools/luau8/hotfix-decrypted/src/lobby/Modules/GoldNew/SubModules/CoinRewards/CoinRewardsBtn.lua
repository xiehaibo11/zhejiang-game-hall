local BtnBase = import("...Views.BtnBase")
local CoinRewardsBtn = class("CoinRewardsBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function CoinRewardsBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("CoinRewards/CoinRewardsBtn.csb")
end

function CoinRewardsBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function CoinRewardsBtn:ctor(id, areaId, cfg)
    CoinRewardsBtn.super.ctor(self, id, areaId, cfg)
end

function CoinRewardsBtn:getBindingInfo()
    return {
        ["_imgRedPoint"] = {varName = "_imgRedPoint"},
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}
    }
end

function CoinRewardsBtn:getProxyEvents()
    local x = CoinRewardsBtn.super.getProxyEvents(self)
    x[#x + 1] = {module = XH.Bridge:getModule(LocalConfig.MP.CoinRewards), eventKeyName = "EVENT_UPDATE_RED_POINT", callBack = "updateRedPoint"}
    return x
end

function CoinRewardsBtn:checkShow(isFromGroup)
    local bShow = true
    self:setVisible(bShow)
    XH.Bridge:getModule(LocalConfig.MP.CoinRewards):checkRedPoint()
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function CoinRewardsBtn:updateRedPoint()
    local showRed = XH.Bridge:getModule(LocalConfig.MP.CoinRewards):getShowRedPoint()
    self._imgRedPoint:setVisible(showRed)
end

function CoinRewardsBtn:onClick()
    self:throwClickData()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060403, {page = "金币大厅"})
    XH.viewManager:openView("CoinRewardsView", nil, {page = "金币大厅"})
end

return CoinRewardsBtn
t