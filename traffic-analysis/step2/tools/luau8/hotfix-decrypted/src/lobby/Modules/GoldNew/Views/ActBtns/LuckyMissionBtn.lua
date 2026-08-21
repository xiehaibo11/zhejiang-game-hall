local BtnBase = import("..BtnBase")
local LuckyMissionBtn = class("LuckyMissionBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function LuckyMissionBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("LuckyMissionBtn.csb")
end

function LuckyMissionBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function LuckyMissionBtn:ctor(id, areaId, cfg)
    LuckyMissionBtn.super.ctor(self, id, areaId, cfg)

    XH.SpineManager:playAni(self._aniNode, "animation/Lobby/Base/zzb_flrw_rk/", "zzb_flrw_rk", XH.lobby:getModule("LuckyMission"):isShowRedPointList() and "animation3" or "animation4", true)
end

function LuckyMissionBtn:getCfgSize()
    return cc.size(160, 160)
end

function LuckyMissionBtn:getProxyEvents()
    local e = LuckyMissionBtn.super.getProxyEvents(self)
    table.insert(e, { module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventUpdateIconState" })
    return e
end

function LuckyMissionBtn:onEventUpdateIconState()
    self:checkShow()
end

function LuckyMissionBtn:checkShow(isFromGroup)
    local isVisible = self:isVisible()
    if XH.Bridge:getModule("LuckyMission"):isInAct() and not isVisible then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092201, { page = "金币大厅" })
    end
    self:setVisible(XH.Bridge:getModule("LuckyMission"):isInAct()) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
    self._imgRed:setVisible(XH.lobby:getModule("LuckyMission"):isShowRedPointList())
    if self._aniNode:getChildrenCount() > 0 then
        self._aniNode:getChildren()[1]:setAnimation(0, XH.lobby:getModule("LuckyMission"):isShowRedPointList() and "animation3" or "animation4", true)
    end
end

function LuckyMissionBtn:getBindingInfo()
    return {
        ["_panel"] = { varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick" },
        ["_imgRed"] = { varName = "_imgRed" },
        ["_aniNode"] = { varName = "_aniNode" },
    }
end

function LuckyMissionBtn:initIcon(name)
    LuckyMissionBtn.super.initIcon(self, name)
end

function LuckyMissionBtn:onClick()
    self:throwClickData()
    XH.viewManager:openView("LuckyMissionView", nil, nil, "金币大厅获取金币")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092202, { page = "金币大厅获取金币" })
end

return LuckyMissionBtn�	