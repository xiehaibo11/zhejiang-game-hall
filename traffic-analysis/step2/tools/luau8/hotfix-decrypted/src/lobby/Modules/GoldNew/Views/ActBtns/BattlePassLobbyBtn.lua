local BtnBase = import("..BtnBase")
local BattlePassLobbyBtn = class("BattlePassLobbyBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function BattlePassLobbyBtn:getCSBPath()
    return "hall/CSB/NewGoldHall/BattlePassLobbyBtn.csb"
end

function BattlePassLobbyBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function BattlePassLobbyBtn:ctor(id, areaId, cfg)
    BattlePassLobbyBtn.super.ctor(self, id, areaId, cfg)
    XH.SpineManager:playAni(self._aniNode, "animation/Common/", "zzb_ty_xingguang", "animation", true)
end

-- 获取代理事件列表
function BattlePassLobbyBtn:getProxyEvents()
    local e = BattlePassLobbyBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_UPDATE_BATTLE_PASS_REDPOINT", callBack = "onUpdateRedPoint"})
    table.insert(e, {module = XH.Bridge:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_UPDATE_BATTLE_PASS_ICON", callBack = "onEventUpdateBattlePassIcon"})
    return e
end

function BattlePassLobbyBtn:onCleanup()
    BattlePassLobbyBtn.super.onCleanup(self)
end

function BattlePassLobbyBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgRed"] = {varName = "_imgRed"},
        ["_aniNode"] = {varName = "_aniNode"}
    }
end

function BattlePassLobbyBtn:checkShow(isFromGroup)
    local isOpen = XH.Bridge:getModule("BattlePass.Lobby"):checkActivityOpen()
    self:setVisible(isOpen)
    self:onUpdateRedPoint()
    -- 埋点
    if isOpen and not self._isOpen then
        self._isOpen = isOpen
        local page = "金币大厅"
        XH.Bridge:throwData("zjq25042701", {page = page})
    end
end

function BattlePassLobbyBtn:onClick()
    local page = "金币大厅"
    XH.Bridge:throwData("zjq25042702", {page = page})
    XH.Bridge:getModule("GoldNew"):openFullView("LobbyBattlePassView")
    -- XH.Bridge.viewManager:openView("LobbyBattlePassView", nil, self._areaId)
end

function BattlePassLobbyBtn:onUpdateRedPoint(event)
    self._imgRed:setVisible(XH.Bridge:getModule("BattlePass.Lobby"):checkHaveRedPoint())
end

function BattlePassLobbyBtn:onEventUpdateBattlePassIcon(event)
    if not event or not event.data then
        return
    end
    local isOpen = XH.Bridge:getModule("BattlePass.Lobby"):checkActivityOpen()
    self:setVisible(isOpen)
end

return BattlePassLobbyBtn
�	