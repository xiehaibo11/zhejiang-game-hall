local BtnBase = import("..BtnBase")
local DarkShuangKouChallengeBtn = class("DarkShuangKouChallengeBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")

function DarkShuangKouChallengeBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("DarkShuangKouChallengeBtn.csb")
end

function DarkShuangKouChallengeBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function DarkShuangKouChallengeBtn:ctor(id, areaId, cfg)
    DarkShuangKouChallengeBtn.super.ctor(self, id, areaId, cfg)
    Utils:addSpine(self._aniNode, "ActBtns", "zzb_ad_rukou", "animation")
end

-- 获取代理事件列表
function DarkShuangKouChallengeBtn:getProxyEvents()
    local e = DarkShuangKouChallengeBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("DarkShuangKouChallenge"), eventKeyName = "EVENT_CHALLENGE_RED_POINT", callBack = "onUpdateRedPoint"})
    return e
end

function DarkShuangKouChallengeBtn:onCleanup()
    DarkShuangKouChallengeBtn.super.onCleanup(self)
end

function DarkShuangKouChallengeBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgRed"] = {varName = "_imgRed"},
        ["_aniNode"] = {varName = "_aniNode"},
    }
end

function DarkShuangKouChallengeBtn:checkShow(isFromGroup)
    local isOpen = XH.Bridge:getModule("DarkShuangKouChallenge"):checkActivityOpen()
    self:setVisible(isOpen)
    self:onUpdateRedPoint()
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function DarkShuangKouChallengeBtn:onClick()
    XH.Bridge.viewManager:openView("DarkShuangKouChallengeView", nil, self._areaId)
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        XH.Bridge:throwData("ohtz25040301", {page = "新金币大厅"})
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        XH.Bridge:throwData("ohtz25040301", {page = "选场大厅"})
    end
end

function DarkShuangKouChallengeBtn:onUpdateRedPoint()
    self._imgRed:setVisible(XH.Bridge:getModule("DarkShuangKouChallenge"):checkHaveRedPoint())
end

return DarkShuangKouChallengeBtn
