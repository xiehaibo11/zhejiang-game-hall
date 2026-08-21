local BtnBase = import("..BtnBase")
local LuckyTaskBtn = class("LuckyTaskBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")


function LuckyTaskBtn:ctor(id, areaId, cfg)
    LuckyTaskBtn.super.ctor(self, id, areaId, cfg)

    -- self:initSpine({
    --     path = "animation/Lobby/Base/zzb_dt_xyrw_rk/",
    --     tex = "zzb_dt_xyrw_rk.json",
    --     ske = "zzb_dt_xyrw_rk.atlas",
    --     armatureName = "animation",
    --     scale = (LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT == self._areaId or LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT == self._areaId) and 0.86 or 1
    -- })
end
function LuckyTaskBtn:getCfgSize()
    return cc.size(160, 160)
end

function LuckyTaskBtn:getProxyEvents()
    local e = LuckyTaskBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyTaskPage", callBack = "onUpdateStatus"})
    return e
end

function LuckyTaskBtn:onUpdateStatus()
    self:checkShow()
end

function LuckyTaskBtn:checkShow(isFromGroup)
    self:setVisible(XH.Bridge:getModule("LuckyTask"):isHaveTask()) -- 设置按钮可见性
    if XH.isEmbeddedApp() then
        self:setVisible(false)
    end
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function LuckyTaskBtn:onClick()
    self:throwClickData()
    XH.Bridge.viewManager:openView("LuckyTaskView")
end

return LuckyTaskBtn
