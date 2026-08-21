local BtnBase = import("..BtnBase")
local BattlePassDarkShuangKouBtn = class("BattlePassDarkShuangKouBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function BattlePassDarkShuangKouBtn:getCSBPath()
    return "hall/CSB/NewGoldHall/BattlePassDarkShuangKouBtn.csb"
end

function BattlePassDarkShuangKouBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function BattlePassDarkShuangKouBtn:ctor(id, areaId, cfg)
    BattlePassDarkShuangKouBtn.super.ctor(self, id, areaId, cfg)
    XH.SpineManager:playAni(self._aniNode, "animation/Common/", "zzb_ty_xingguang", "animation", true)
end

-- 获取代理事件列表
function BattlePassDarkShuangKouBtn:getProxyEvents()
    local e = BattlePassDarkShuangKouBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("BattlePass.DarkShuangKou"), eventKeyName = "EVENT_BATTLEPASS_DARKSHUANGKOU_RED_POINT", callBack = "onUpdateRedPoint"})
    table.insert(e, {module = XH.Bridge:getModule("BattlePass.DarkShuangKou"), eventKeyName = "EVENT_BATTLEPASS_DARKSHUANGKOU_SHOW", callBack = "checkShow"})
    return e
end

function BattlePassDarkShuangKouBtn:onCleanup()
    BattlePassDarkShuangKouBtn.super.onCleanup(self)
end

function BattlePassDarkShuangKouBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgRed"] = {varName = "_imgRed"},
        ["_aniNode"] = {varName = "_aniNode"}
    }
end

function BattlePassDarkShuangKouBtn:checkShow(isFromGroup)
    local isOpen = XH.Bridge:getModule("BattlePass.DarkShuangKou"):checkActivityOpen()
    self:setVisible(isOpen)
    self:onUpdateRedPoint()
    if isOpen then
        XH.Bridge:throwData("zjq25042710")
    end
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function BattlePassDarkShuangKouBtn:onClick()
    local isOpen = XH.Bridge:getModule("BattlePass.DarkShuangKou"):checkActivityOpen()
    if not isOpen then
        XH.Bridge:getModule("BattlePass.DarkShuangKou"):checkActivityIconOpen()
        XH.TipTool.showToast("活动已结束")
        return
    end
    XH.Bridge.viewManager:openView("BattlePassDarkShuangKouView", nil, self._areaId)
    XH.Bridge:throwData("zjq25042711")
end

function BattlePassDarkShuangKouBtn:onUpdateRedPoint()
    self._imgRed:setVisible(XH.Bridge:getModule("BattlePass.DarkShuangKou"):checkHaveRedPoint())
end

return BattlePassDarkShuangKouBtn
