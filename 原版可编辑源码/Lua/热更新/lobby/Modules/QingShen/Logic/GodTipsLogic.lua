-- -*- coding: utf-8 -*-
--- 请神 Module 分片：请神教程 tips（注入到 QingShenModule，对外 API 不变）
local Util = require("lobby.Modules.QingShen.Logic.Util")
local Define = Util.Define
local PropPushDefine = Util.PropPushDefine
local cjson = Util.cjson

local _getPropPushModule = Util.getPropPushModule
local _chairIdFromRoomUserId = Util.chairIdFromRoomUserId
local _userIdFromChairId = Util.userIdFromChairId
local _isEquipWorn = Util.isEquipWorn
local _iconBadgeSaveKey = Util.iconBadgeSaveKey
local _exchangeLevelFromGood = Util.exchangeLevelFromGood
local _enrichGoodInfoForQingShen = Util.enrichGoodInfoForQingShen
local _priceTripleFromGood = Util.priceTripleFromGood
local _onSpineCompleteRemove = Util.onSpineCompleteRemove

local HEAD_LOOP_SPINE_NAME = Util.HEAD_LOOP_SPINE_NAME
local HEAD_UP_SPINE_NAME = Util.HEAD_UP_SPINE_NAME
local QS_ICON_ANIM_LOOP = Util.QS_ICON_ANIM_LOOP
local QING_SHEN_PROP_ID = Util.QING_SHEN_PROP_ID
local QING_SHEN_PROP_SET = Util.QING_SHEN_PROP_SET
local ICON_CANDIDATE_PROP_IDS = Util.ICON_CANDIDATE_PROP_IDS

return function(QingShenModule)
function QingShenModule:setHasGodTipsAct(flag)
    self._hasGodTipsAct = flag == true
end


function QingShenModule:hasGodTipsAct()
    if self._hasGodTipsAct then
        return true
    end
    local lobby = XH.lobby and XH.lobby.getModule and XH.lobby:getModule("Lobby")
    if lobby and lobby.getActId then
        local aid = lobby:getActId(Define.ACT_TYPE_GOD_TIPS)
        if aid and tonumber(aid) and tonumber(aid) > 0 then
            self._hasGodTipsAct = true
            return true
        end
    end
    return false
end


function QingShenModule:_isGodTipsExpired()
    local now = XH.lobby:getModule("Shop"):getServerTime()
    now = tonumber(now) or os.time()
    return now >= (Define.GOD_TIPS_EXPIRE_TIME or 0)
end


function QingShenModule:_godTipsSaveKey(prefix)
    local uid = self:_getMyUserId() or 0
    return tostring(prefix or "") .. tostring(uid)
end


function QingShenModule:_isGodTipsShown(prefix)
    local key = self:_godTipsSaveKey(prefix)
    return cc.UserDefault:getInstance():getBoolForKey(key, false) == true
end


function QingShenModule:_markGodTipsShown(prefix)
    local key = self:_godTipsSaveKey(prefix)
    cc.UserDefault:getInstance():setBoolForKey(key, true)
    cc.UserDefault:getInstance():flush()
end


function QingShenModule:shouldShowTableGodTips()
    if self:_isGodTipsExpired() then
        return false
    end
    if not self:hasGodTipsAct() then
        return false
    end
    if self:_isGodTipsShown(Define.GOD_TIPS_TABLE_SAVE_KEY) then
        return false
    end
    local propPush = _getPropPushModule()
    if not propPush or not propPush:isSupport() then
        return false
    end
    if propPush:isGameStart() then
        return false
    end
    return true
end


function QingShenModule:markTableGodTipsShown()
    self:_markGodTipsShown(Define.GOD_TIPS_TABLE_SAVE_KEY)
end


function QingShenModule:shouldShowIntegrateGodTips()
    if self:_isGodTipsExpired() then
        return false
    end
    if self:_isGodTipsShown(Define.GOD_TIPS_INTEGRATE_SAVE_KEY) then
        return false
    end
    return true
end


function QingShenModule:markIntegrateGodTipsShown()
    self:_markGodTipsShown(Define.GOD_TIPS_INTEGRATE_SAVE_KEY)
end


function QingShenModule:tryShowTableGodTips(iconView)
    if not self:shouldShowTableGodTips() then
        return false
    end
    local scene = display.getRunningScene()
    if scene and not tolua.isnull(scene) then
        local old = scene:getChildByName("QingShenGodTipsGuideView")
        if old and not tolua.isnull(old) then
            return false
        end
    end
    local GuideView = require("lobby.Modules.QingShen.GodTipsGuideView")
    GuideView.new({
        tipType = "table",
        iconView = iconView,
        tipText = Define.GOD_TIPS_TABLE_TEXT,
        autoCloseSec = Define.GOD_TIPS_TABLE_AUTO_CLOSE_SEC,
        onClose = function()
            self:markTableGodTipsShown()
        end,
    }):showSelf()
    return true
end


function QingShenModule:tryShowIntegrateGodTips(integrateView)
    if not self:shouldShowIntegrateGodTips() then
        return false
    end
    if not integrateView or tolua.isnull(integrateView) then
        return false
    end
    if integrateView.showOldGodGuide then
        return integrateView:showOldGodGuide() == true
    end
    return false
end


end
