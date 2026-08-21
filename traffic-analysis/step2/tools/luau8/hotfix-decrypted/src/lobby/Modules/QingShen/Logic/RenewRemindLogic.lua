-- -*- coding: utf-8 -*-
--- 请神 Module 分片：续费提醒气泡（注入到 QingShenModule，对外 API 不变）
local Util = require("lobby.Modules.QingShen.Logic.Util")
local Compat = require("lobby.Modules.PropPush.Compat")
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
function QingShenModule:_getRenewRemindSeconds()
    local cached = self._renewRemindSecondsCache
    if cached then
        return cached
    end
    local cfg = Compat.getPropPushAllCfg()
    local sec = cfg and cfg.PropPush and cfg.PropPush.qingShenRenewRemindSec
    sec = tonumber(sec)
    if sec and sec > 0 then
        self._renewRemindSecondsCache = sec
        return sec
    end
    self._renewRemindSecondsCache = Define.RENEW_REMIND_SECONDS_DEFAULT
    return self._renewRemindSecondsCache
end


function QingShenModule:_isSelfInRoomWithVisibleHead()
    if not self._tableGetPlayerFaceNodeFunc then
        return false
    end
    local myChair = Compat.getSelfSeat()
    if myChair == nil then
        return false
    end
    local faceBtn = self:getPlayerFaceBtnByChairId(myChair)
    if not faceBtn or tolua.isnull(faceBtn) or not faceBtn:isVisible() then
        return false
    end
    return true
end


function QingShenModule:_getHeadBubbleRightFlag(chairId)
    if not self._tableGetPlayerFaceNodeFuncTarget or not self._tableGetPlayerFaceNodeFunc then
        return false
    end
    local ok, _, bRight = pcall(function()
        return self._tableGetPlayerFaceNodeFunc(self._tableGetPlayerFaceNodeFuncTarget, chairId)
    end)
    if ok and bRight ~= nil then
        return bRight == true
    end
    return false
end


function QingShenModule:_getRenewBubbleLayout(chairId)
    local target = self._tableGetPlayerFaceNodeFuncTarget
    if target and target.GetQingShenRenewBubbleLayout then
        local layout = target:GetQingShenRenewBubbleLayout(chairId)
        if type(layout) == "table" then
            return layout
        end
    end
    local bRight = self:_getHeadBubbleRightFlag(chairId)
    return { bRight = bRight }
end


function QingShenModule:_pickRenewRemindText(propId)
    propId = tonumber(propId) or tonumber(self._propId)
    local pool = propId and Define.RENEW_REMIND_TEXTS[propId]
    if not pool or #pool == 0 then
        pool = Define.RENEW_REMIND_TEXTS[Define.QingShenPropId.MaZu] or { "神佑要结束了~" }
    end
    return pool[math.random(1, #pool)]
end


function QingShenModule:getRenewRemindPriceInfo()
    local pid = self:_getRenewTargetPropId()
    local info = (pid and self:getInfoForPropId(pid)) or self:getInfo()
    pid = tonumber(info and info.propId) or pid
    local lv = tonumber(info and info.level) or 1
    if lv < 1 then
        lv = 1
    end
    if info.isFree then
        return {
            propId = pid,
            price = 0,
            costPropId = info.costPropId,
            isFree = true,
            propCount = info.propCount,
        }
    end
    if (info.propCount or 0) > 0 then
        return {
            propId = pid,
            price = 0,
            costPropId = pid,
            isFree = false,
            propCount = info.propCount,
        }
    end
    local byProp = pid and self._exchangeGoodsByPropId[pid]
    local good = byProp and byProp[lv]
    if lv < 3 then
        good = (byProp and byProp[lv + 1]) or good
    end
    if good then
        local pay, _, _ = _priceTripleFromGood(good)
        local costPropId = tonumber(good.costPropId) or info.costPropId
        return {
            propId = pid,
            price = pay,
            costPropId = costPropId,
            isFree = false,
            propCount = 0,
        }
    end
    return {
        propId = pid,
        price = info.price,
        costPropId = info.costPropId,
        isFree = false,
        propCount = info.propCount,
    }
end


function QingShenModule:_canRenewQingShen()
    local pid = self:_getRenewTargetPropId()
    local info = pid and self:getInfoForPropId(pid)
    if info and info.isFree then
        return true
    end
    if pid and (self._propCounts[pid] or 0) > 0 then
        return true
    end
    if info then
        local good = self:_getExchangeGoodForProp(pid, info.level)
        if good and good.act and good.gid ~= nil then
            return true
        end
    end
    local good = self._goodInfo
    if tonumber(self._propId) == tonumber(pid) and good and good.act and good.gid ~= nil then
        return true
    end
    local lv = math.max(tonumber(info and info.level) or 1, 1)
    local slot = pid and self._exchangeGoodsByPropId[pid] and self._exchangeGoodsByPropId[pid][lv]
    return slot ~= nil
end


function QingShenModule:_hideRenewRemind()
    if self._renewRemindNode and not tolua.isnull(self._renewRemindNode) then
        self._renewRemindNode:detach()
    end
    self._renewRemindNode = nil
end


function QingShenModule:_isRenewRemindShowing()
    local node = self._renewRemindNode
    if not node or tolua.isnull(node) then
        return false
    end
    if not node.getParent or not node:getParent() or tolua.isnull(node:getParent()) then
        self._renewRemindNode = nil
        return false
    end
    return true
end


function QingShenModule:_throwRenewRemindData(key, extraData)
    local propPush = _getPropPushModule()
    if not propPush or not propPush.throwData then
        return
    end
    local throwScene = propPush.getThrowScene and propPush:getThrowScene() or ""
    local data = {
        page_item_id = throwScene ~= "" and throwScene or "首局准备阶段",
        item_id = self._level or 0,
    }
    if extraData then
        for k, v in pairs(extraData) do
            data[k] = v
        end
    end
    propPush:throwData(key, data)
end


function QingShenModule:_onRenewRemindDismiss()
    self._renewRemindDismissed = true
    self:_hideRenewRemind()
end


function QingShenModule:_onRenewRemindBuy()
    self:_throwRenewRemindData(XH.NewThrowDataDefine.oh26042107)
    self._renewRemindDismissed = true
    self:_hideRenewRemind()
    self:setPurchaseSceneType(Define.ThrowSceneType.Popup)
    self:purchase(self:_getRenewTargetPropId())
end


function QingShenModule:_showRenewRemind()
    if self:_isRenewRemindShowing() then
        return
    end
    local myChair = Compat.getSelfSeat()
    local faceBtn = myChair and self:getPlayerFaceBtnByChairId(myChair)
    if not faceBtn or tolua.isnull(faceBtn) then
        self:_hideRenewRemind()
        return
    end
    if not self._renewRemindTipText then
        self._renewRemindTipText = self:_pickRenewRemindText(self:_getRenewTargetPropId())
    end
    local priceInfo = self:getRenewRemindPriceInfo()
    local layout = self:_getRenewBubbleLayout(myChair)
    local RenewRemindNode = require("lobby.Modules.QingShen.RenewRemindNode")
    local mod = self
    local node = RenewRemindNode.new({
        text = self._renewRemindTipText,
        priceInfo = priceInfo,
        attachNode = faceBtn,
        layout = layout,
        onDismiss = function()
            mod:_onRenewRemindDismiss()
        end,
        onShow = function()
            mod:_throwRenewRemindData(XH.NewThrowDataDefine.oh26042106)
        end,
        onBuy = function()
            mod:_onRenewRemindBuy()
        end,
    })
    if node and not tolua.isnull(node) and node:getParent() and not tolua.isnull(node:getParent()) then
        self._renewRemindNode = node
    end
end


function QingShenModule:_updateRenewRemind()
    if not self:isSupport() then
        self:_hideRenewRemind()
        return
    end
    local pid = self:_getRenewTargetPropId()
    local left = pid and self:getGodPropTimeLeft(pid) or 0
    local threshold = self:_getRenewRemindSeconds()
    if left <= 0 then
        self._renewRemindDismissed = false
        self._renewRemindTipText = nil
        self:_hideRenewRemind()
        return
    end
    if left > threshold then
        self._renewRemindDismissed = false
        self._renewRemindTipText = nil
        self:_hideRenewRemind()
        return
    end
    if self._renewRemindDismissed then
        return
    end
    if not self:_canRenewQingShen() then
        self:_hideRenewRemind()
        return
    end
    if not self:_isSelfInRoomWithVisibleHead() then
        self:_hideRenewRemind()
        return
    end
    if self:_isRenewRemindShowing() then
        return
    end
    self:_showRenewRemind()
end


end
]%