-- -*- coding: utf-8 -*-
--- 请神 Module 分片：装扮 / Icon / 角标（注入到 QingShenModule，对外 API 不变）
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
function QingShenModule:_resolveGodPlayLevel(propId, uid, fallback)
    local lv = self:getGodRecommendLevel(propId) or 0
    if lv < 1 and uid ~= nil then
        lv = self:_getLevelForUserProp(uid, propId)
    end
    if lv < 1 and fallback ~= nil then
        lv = tonumber(fallback) or 0
    end
    if lv < 1 then
        lv = 1
    end
    return lv
end


function QingShenModule:_removeChildByName(parent, name)
    if not parent or tolua.isnull(parent) or not name then
        return
    end
    -- 同名可能叠了多个（换装竞态）；全部打取消标记后移除
    while true do
        local child = parent:getChildByName(name)
        if not child or tolua.isnull(child) then
            break
        end
        child._qingShenCancelled = true
        child:removeFromParent()
    end
end

--- 清空头像请神挂点下所有 spine（按名 + 带 _qingShenPropId 的残留）
function QingShenModule:_clearHeadQingShenSpines(headNode)
    if not headNode or tolua.isnull(headNode) then
        return
    end
    self:_removeChildByName(headNode, HEAD_LOOP_SPINE_NAME)
    self:_removeChildByName(headNode, HEAD_UP_SPINE_NAME)
    local children = headNode:getChildren()
    if not children then
        return
    end
    for i = #children, 1, -1 do
        local c = children[i]
        if c and not tolua.isnull(c) and c._qingShenPropId ~= nil then
            c._qingShenCancelled = true
            c:removeFromParent()
        end
    end
end


function QingShenModule:safeCreateSpine(cfg)
    if not sp then return nil end
    if not cfg or not cfg.json or not cfg.atlas then return nil end
    local fileUtils = cc.FileUtils:getInstance()
    if not fileUtils:isFileExist(cfg.json) or not fileUtils:isFileExist(cfg.atlas) then
        return nil
    end
    local ok, spine = pcall(function()
        return sp.SkeletonAnimation:create(cfg.json, cfg.atlas)
    end)
    if ok and spine then
        return spine
    end
    return nil
end


function QingShenModule:_loadIconBadgeData()
    local raw = cc.UserDefault:getInstance():getStringForKey(_iconBadgeSaveKey(), "")
    if raw == "" then
        return { createRoomCount = 0, clicked = false }
    end
    local ok, data = pcall(cjson.decode, raw)
    if not ok or type(data) ~= "table" then
        return { createRoomCount = 0, clicked = false }
    end
    data.createRoomCount = tonumber(data.createRoomCount) or 0
    data.clicked = data.clicked == true
    return data
end


function QingShenModule:_saveIconBadgeData(data)
    if type(data) ~= "table" then
        return
    end
    local raw = cjson.encode({
        createRoomCount = tonumber(data.createRoomCount) or 0,
        clicked = data.clicked == true,
    })
    cc.UserDefault:getInstance():setStringForKey(_iconBadgeSaveKey(), raw)
end


function QingShenModule:incrementIconBadgeCreateRoomCount()
    local now = os.time()
    if self._lastIconBadgeIncrementAt == now then
        return
    end
    self._lastIconBadgeIncrementAt = now
    local data = self:_loadIconBadgeData()
    if data.clicked or data.createRoomCount >= Define.ICON_BADGE_MAX_CREATE_ROOM then
        return
    end
    data.createRoomCount = data.createRoomCount + 1
    self:_saveIconBadgeData(data)
end


function QingShenModule:markIconBadgeClicked()
    local data = self:_loadIconBadgeData()
    data.clicked = true
    self:_saveIconBadgeData(data)
end


function QingShenModule:shouldShowIconBadge()
    local data = self:_loadIconBadgeData()
    if data.clicked then
        return false
    end
    return data.createRoomCount < Define.ICON_BADGE_MAX_CREATE_ROOM
end


function QingShenModule:isQingShenActive()
    local equipped = self:getEquippedPropId()
    return equipped ~= nil and self:getGodPropTimeLeft(equipped) > 0
end


function QingShenModule:getEquippedPropId()
    if not _isEquipWorn(self._equipState) then
        return nil
    end
    local pid = tonumber(self._equippedPropId)
    if pid and pid > 0 and QS_ICON_ANIM_LOOP[pid] then
        return pid
    end
    return nil
end


function QingShenModule:getActiveBlessPropId()
    local equipped = self:getEquippedPropId()
    if equipped and self:getGodPropTimeLeft(equipped) > 0 then
        return equipped
    end
    local pending = tonumber(self._pendingAutoWearPropId)
    if pending and pending > 0 and self:getGodPropTimeLeft(pending) > 0 then
        return pending
    end
    local push = tonumber(self._propId)
    if push and push > 0 and self:_getMyPropTimeLeft(push) > 0 then
        return push
    end
    return equipped or pending or push
end


function QingShenModule:_getRenewTargetPropId()
    local equipped = self:getEquippedPropId()
    if equipped then
        return equipped
    end
    return tonumber(self._propId)
end


function QingShenModule:markPurchasePropId(propId)
    propId = tonumber(propId)
    if not propId or propId <= 0 then
        return
    end
    self._lastPurchasePropId = propId
    local equipped = self:getEquippedPropId()
    if not equipped or self:getGodPropTimeLeft(equipped) <= 0 then
        self._pendingAutoWearPropId = propId
    end
end


function QingShenModule:takeLastPurchasePropId()
    local pid = tonumber(self._lastPurchasePropId)
    self._lastPurchasePropId = nil
    return pid
end


function QingShenModule:_tryAutoWearPendingPurchase()
    local propId = tonumber(self._pendingAutoWearPropId)
    if not propId or propId <= 0 then
        return
    end
    if not self:hasPurchasedGod(propId) then
        return
    end
    local equipped = self:getEquippedPropId()
    if equipped == propId then
        self._pendingAutoWearPropId = nil
        return
    end
    if equipped and self:getGodPropTimeLeft(equipped) > 0 then
        self._pendingAutoWearPropId = nil
        return
    end
    self:startReq("ReqQingShenOperateEquip", { propId = propId, take_off = false })
end


function QingShenModule:_applyEquipState(user)
    self._equippedPropId = nil
    self._equipState = nil
    if type(user) ~= "table" then
        return
    end
    self._equipState = user.state
    local prop = user.prop
    local pid = nil
    if type(prop) == "table" then
        pid = tonumber(prop.propId or prop.prop_id)
    end
    if not pid or pid <= 0 then
        pid = tonumber(user.propId or user.prop_id)
    end
    if pid and pid > 0 then
        self._equippedPropId = pid
    end
end


function QingShenModule:reqEquipState(userid)
    userid = userid or XH.playerData:getNumberID()
    if not userid then
        return
    end
    local userIds = type(userid) == "table" and userid or { userid }
    self:startReq("ReqQingShenGetEquipState", userIds)
end


function QingShenModule:respQingShenGetEquipState(cell, type, data)
    if type ~= XH.Req.TYPE.SUCCESS or not data or not data.info then
        return
    end
    local prevEquipped = self:getEquippedPropId()
    local myId = XH.playerData:getNumberID()
    for _, user in ipairs(data.info) do
        local uid = tonumber(user.userId or user.user_id)
        if uid == myId then
            self:_applyEquipState(user)
            break
        end
    end
    self:refreshIconView()
    self:dispatchEvent({ name = Define.INTEGRATE_EVENT_REFRESH })
    local newEquipped = self:getEquippedPropId()
    -- 兑换后服务端可能已自动装扮：装扮变化或购买回流时通知同桌；纯打开整合页拉态不广播
    local fromPurchase = self._pendingPurchaseEquipBroadcast == true
    self._pendingPurchaseEquipBroadcast = nil
    local changed = tonumber(prevEquipped) ~= tonumber(newEquipped)
    local needTableNotice = self._pendingTableQingShenNotice == true
        and Compat.isSelfInTable and Compat.isSelfInTable()
    local shouldBroadcast = (changed or fromPurchase or needTableNotice) and newEquipped ~= nil
        and self:getGodPropTimeLeft(newEquipped) > 0
    if shouldBroadcast then
        self._pendingTableQingShenNotice = nil
    end
    self:_syncSelfHeadDisplayToEquipped({
        broadcast = shouldBroadcast,
        ani = fromPurchase and "full" or "loop",
    })
    self:_syncPropPushAfterEquip(self._equippedPropId)
end


function QingShenModule:getRecommendedPropId()
    local propPush = _getPropPushModule()
    local pushPropId = propPush and tonumber(propPush:getPushPropId()) or 0
    if pushPropId > 0 and QS_ICON_ANIM_LOOP[pushPropId] then
        return pushPropId
    end
    local pid = tonumber(self._recvPropId)
    if pid and pid > 0 and QS_ICON_ANIM_LOOP[pid] then
        return pid
    end
    return nil
end


function QingShenModule:getIconDisplayPropId()
    local equipped = self:getEquippedPropId()
    if equipped and self:getGodPropTimeLeft(equipped) > 0 then
        return equipped
    end
    local recommended = self:getRecommendedPropId()
    if recommended then
        return recommended
    end
    if not self._iconRandomPropId or not QS_ICON_ANIM_LOOP[self._iconRandomPropId] then
        local ids = ICON_CANDIDATE_PROP_IDS
        if #ids > 0 then
            self._iconRandomPropId = ids[math.random(1, #ids)]
        else
            self._iconRandomPropId = QING_SHEN_PROP_ID.MaZu
        end
    end
    return self._iconRandomPropId
end


function QingShenModule:_findIconView()
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then
        return nil
    end
    local function findByCname(node, cname)
        if not node or tolua.isnull(node) then return nil end
        if node.__cname == cname then return node end
        local children = node:getChildren()
        if not children then return nil end
        for i = 1, #children do
            local r = findByCname(children[i], cname)
            if r then return r end
        end
        return nil
    end
    return findByCname(scene, "QingShenIconView")
end


function QingShenModule:refreshIconView()
    local iconView = self:_findIconView()
    if iconView and not tolua.isnull(iconView) and iconView.refreshIconDisplay then
        iconView:refreshIconDisplay()
    end
end


function QingShenModule:_showIconViewWithLoopAni()
    local iconView = self:_findIconView()
    if not iconView or tolua.isnull(iconView) then
        return
    end
    if iconView.refreshIconDisplay then
        iconView:refreshIconDisplay()
    elseif iconView._onIconAddImgEvent then
        local level = tonumber(self._level) or 0
        iconView:_onIconAddImgEvent(level)
    end
end

--- 用当前请神道具 id、等级，从 _exchangeGoodsByPropId 同步当前档 goodInfo（供 getInfo / 兑换）


function QingShenModule:wearGod(propId)
    propId = tonumber(propId)
    if not propId or propId <= 0 then
        return
    end
    if not self:hasPurchasedGod(propId) then
        XH.TipTool.showToast("请先请神后再选择庇护", 3)
        return
    end
    self:startReq("ReqQingShenOperateEquip", { propId = propId, take_off = false })
end


function QingShenModule:respQingShenOperateEquip(cell, type, data)
    if type ~= XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("切换庇护失败", 3)
        return
    end
    if data and data.equip then
        self:_applyEquipState(data.equip)
    end
    -- 回包结构异常时用本次请求 propId 兜底，保证本机与广播装扮一致
    if not self:getEquippedPropId() then
        local reqPid = cell and tonumber(cell._propId)
        if reqPid and reqPid > 0 then
            self._equippedPropId = reqPid
        else
            self:reqEquipState()
        end
    end
    local worn = self:getEquippedPropId()
    if worn and tonumber(self._pendingAutoWearPropId) == worn then
        self._pendingAutoWearPropId = nil
    end
    -- 购买回流若已由 OperateEquip 通知同桌，避免随后 GetEquipState 再播一次
    self._pendingPurchaseEquipBroadcast = nil
    self:refreshIconView()
    -- self:dispatchEvent({ name = Define.INTEGRATE_EVENT_REFRESH })
    self:_syncPropPushAfterEquip(worn)
    -- 换装：同步本机 + 通知同桌只刷循环样式（勿播完整赐福链）
    self:_syncSelfHeadDisplayToEquipped({ broadcast = true, ani = "loop" })
end


function QingShenModule:_syncPropPushAfterEquip(propId)
    propId = tonumber(propId)
    if not propId or propId <= 0 then
        return
    end
    if self:getGodPropTimeLeft(propId) <= 0 then
        return
    end
    local propPush = _getPropPushModule()
    if not propPush or propPush:getPropPushType() ~= PropPushDefine.PushType.QingShen then
        return
    end
    self._propId = propId
    self._propCount = self._propCounts[propId] or 0
    self._recvPropId = propId
    local lv = self:getGodRecommendLevel(propId)
    if lv and lv >= 1 then
        self._level = lv
    end
    if next(self._exchangeGoodsByPropId) ~= nil then
        self:_syncGoodInfoFromExchangeMap()
    end
    if propPush.syncQingShenPushToEquipped then
        propPush:syncQingShenPushToEquipped(propId)
    end
end


function QingShenModule:_syncSelfHeadDisplayToEquipped(opt)
    opt = opt or {}
    local equipped = self:getEquippedPropId()
    if not equipped then
        return
    end
    local uid = self:_getMyUserId()
    if not uid or self:getPropTimeLeftForUserProp(uid, equipped) <= 0 then
        return
    end
    local myChair = Compat.getSelfSeat()
    if myChair == nil then
        return
    end
    local lv = self:_resolveGodPlayLevel(equipped, uid)
    self:playHeadAniLoop(myChair, lv, equipped)
    if opt.broadcast then
        self:noticeMyQingShen2Other({ ani = opt.ani or "loop" })
    end
end


function QingShenModule:getDefaultFocusPropId()
    local equipped = self:getEquippedPropId()
    if equipped then
        return equipped
    end
    return self:getRecommendedPropId() or self:getIconDisplayPropId()
end


end
   )<  