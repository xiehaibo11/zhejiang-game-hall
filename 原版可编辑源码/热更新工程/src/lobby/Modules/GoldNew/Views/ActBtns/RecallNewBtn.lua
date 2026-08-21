local BtnBase = import("..BtnBase")
local RecallNewBtn = class("RecallNewBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function RecallNewBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("RecallNewBtn.csb")
end

function RecallNewBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function RecallNewBtn:ctor(id, areaId, cfg)
    RecallNewBtn.super.ctor(self, id, areaId, cfg)

    XH.SpineManager:playAni(self._aniNode, "animation/Lobby/Base/zzb_hghd_rk/", "zzb_hghl_icon", "animation2", true)
end

function RecallNewBtn:getCfgSize()
    return cc.size(160, 160)
end

function RecallNewBtn:getProxyEvents()
    local e = RecallNewBtn.super.getProxyEvents(self)
    table.insert(e, { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventUpdateIconState" })
    return e
end

function RecallNewBtn:onEventUpdateIconState()
    self:checkShow()
end

function RecallNewBtn:checkShow(isFromGroup)
    local isVisible = self:isVisible()
    self:setVisible(XH.Bridge:getModule("RecallNew"):isInAct()) -- 设置按钮可见性
    if XH.Bridge:getModule("RecallNew"):isInAct() and not isVisible then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080601, { page = "金币大厅" })
    end
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
    self._imgRed:setVisible(XH.lobby:getModule("RecallNew"):isShowRedPointList())
end

function RecallNewBtn:getBindingInfo()
    return {
        ["_panel"] = { varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick" },
        ["_imgRed"] = { varName = "_imgRed" },
        ["_aniNode"] = { varName = "_aniNode" },
    }
end

function RecallNewBtn:initIcon(name)
    RecallNewBtn.super.initIcon(self, name)
end

function RecallNewBtn:onClick()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080602, { page = "金币大厅" })
    self:throwClickData()
    XH.viewManager:openView("RecallNewView", nil, nil, "金币大厅")
end

return RecallNewBtn