-- -*- coding: utf-8 -*-
--- 请神 Module 分片：道具时效倒计时（注入到 QingShenModule，对外 API 不变）
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
function QingShenModule:getGodPropTimeLeft(propId)
    propId = tonumber(propId)
    local uid = self:_getMyUserId()
    if not uid or not propId then
        return 0
    end
    return self:_leftSecondsFromEndTime(self._propTimeMap[uid] and self._propTimeMap[uid][propId])
end


function QingShenModule:_getMyPropTimeLeft(propId)
    return self:getGodPropTimeLeft(propId)
end


function QingShenModule:getPropTimeLeftForUserProp(userId, propId)
    userId = tonumber(userId)
    propId = tonumber(propId)
    if userId == nil then
        return 0
    end
    local myUid = self:_getMyUserId()
    if myUid and userId == myUid then
        local equipped = self:getEquippedPropId()
        if equipped then
            propId = equipped
        end
    end
    if propId == nil then
        return 0
    end
    local pmap = self._propTimeMap[userId]
    return self:_leftSecondsFromEndTime(pmap and pmap[propId])
end


function QingShenModule:_hasAnyPropTimeLeft()
    local now = XH.lobby:getModule("Shop"):getServerTime()
    for _, pmap in pairs(self._propTimeMap) do
        if type(pmap) == "table" then
            for _, endTime in pairs(pmap) do
                if (tonumber(endTime) or 0) > now then
                    return true
                end
            end
        end
    end
    return false
end


function QingShenModule:_stopPropTimeTick()
    if self._propTimeScheduleId then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._propTimeScheduleId)
        self._propTimeScheduleId = nil
    end
end


function QingShenModule:_tickPropTime()
    local expiredList = {}
    local now = XH.lobby:getModule("Shop"):getServerTime()
    -- 先快照 key，再在循环内改表，避免 pairs 遍历中删键导致漏判
    local userIds = {}
    for uid in pairs(self._propTimeMap) do
        userIds[#userIds + 1] = uid
    end
    for i = 1, #userIds do
        local userId = userIds[i]
        local pmap = self._propTimeMap[userId]
        if type(pmap) == "table" then
            local propIds = {}
            for pid in pairs(pmap) do
                propIds[#propIds + 1] = pid
            end
            for j = 1, #propIds do
                local propId = propIds[j]
                local endTime = tonumber(pmap[propId]) or 0
                if endTime <= now then
                    pmap[propId] = nil
                    -- 保留 _propLevelMap：归零后整合页续费仍按上次等级选付费档
                    if endTime > 0 then
                        expiredList[#expiredList + 1] = { userId = userId, propId = propId }
                    end
                end
            end
            if next(pmap) == nil then
                self._propTimeMap[userId] = nil
            end
        end
    end
    self:_updateRenewRemind()
    local isOwnExpired = false
    local myUid = self:_getMyUserId()
    for i = 1, #expiredList do
        local item = expiredList[i]
        if myUid and item.userId == myUid then
            isOwnExpired = true
        end
        -- 归 0 时统一清理该玩家头像上的循环动画与倒计时节点：
        -- 其他玩家头像只有 loop spine，需要由此路径移除；
        self:_cleanupHeadEffectsByUserId(item.userId)
    end
    if isOwnExpired then
        -- 时效归零后立刻刷新桌面 Icon（等级角标 / 循环立绘），勿等延时拉数
        self:refreshIconView()
        self:dispatchEvent({ name = self.INTEGRATE_EVENT_REFRESH })
        XH.SysTool.performWithDelayGlobal(function()
            local propPush = _getPropPushModule()
            if propPush and propPush.reqPropPush then
                propPush:reqPropPush()
            end
            self:getPropsCount({ fromPurchase = false })
        end, 2)
    end
    if not self:_hasAnyPropTimeLeft() then
        self:_stopPropTimeTick()
    end
end


function QingShenModule:_cleanupHeadEffectsByChair(chairId)
    if chairId == nil or chairId < 0 then
        return
    end
    local headNode = self:getPlayerHeadNodeByChairId(chairId)
    if not headNode or tolua.isnull(headNode) then
        return
    end
    self:_clearHeadQingShenSpines(headNode)
    self:_removeChildByName(headNode, Define.NODE_NAME)
    local myChair = Compat.getSelfSeat()
    if myChair == chairId then
        self:_hideRenewRemind()
    end
end


function QingShenModule:_cleanupHeadEffectsByUserId(userId)
    userId = tonumber(userId)
    if userId == nil or userId == 0 then
        return
    end
    local chairId = _chairIdFromRoomUserId(userId)
    self:_cleanupHeadEffectsByChair(chairId)
end


function QingShenModule:_ensurePropTimeTick()
    if self._propTimeScheduleId ~= nil then
        return
    end
    if not self:_hasAnyPropTimeLeft() then
        return
    end
    local scheduler = cc.Director:getInstance():getScheduler()
    self._propTimeScheduleId = scheduler:scheduleScriptFunc(handler(self, self._tickPropTime), 1.0, false)
end


function QingShenModule:_leftSecondsFromEndTime(endTime)
    endTime = tonumber(endTime) or 0
    if endTime <= 0 then
        return 0
    end
    local left = endTime - XH.lobby:getModule("Shop"):getServerTime()
    return left > 0 and left or 0
end


function QingShenModule:_setPropTimeForUserProp(opt)
    if type(opt) ~= "table" then
        return
    end
    local userId = tonumber(opt.userId)
    local propId = tonumber(opt.propId)
    if userId == nil or propId == nil then
        return
    end
    local now = XH.lobby:getModule("Shop"):getServerTime()
    local endTime = tonumber(opt.endTime)
    if endTime == nil then
        local seconds = tonumber(opt.seconds) or 0
        if seconds > 0 then
            endTime = now + seconds
        else
            endTime = 0
        end
    end
    if endTime > now then
        local pmap = self._propTimeMap[userId]
        if not pmap then
            pmap = {}
            self._propTimeMap[userId] = pmap
        end
        pmap[propId] = endTime
        if opt.level ~= nil then
            local lv = tonumber(opt.level)
            if lv and lv >= 1 then
                local lmap = self._propLevelMap[userId]
                if not lmap then
                    lmap = {}
                    self._propLevelMap[userId] = lmap
                end
                lmap[propId] = lv
            end
        end
        self:_ensurePropTimeTick()
    else
        local pmap = self._propTimeMap[userId]
        if pmap then
            pmap[propId] = nil
            if next(pmap) == nil then
                self._propTimeMap[userId] = nil
            end
        end
        -- 过期清零时不删 _propLevelMap，避免续费选档掉到 0 价档
        if not self:_hasAnyPropTimeLeft() then
            self:_stopPropTimeTick()
        end
    end
end


function QingShenModule:_getLevelForUserProp(userId, propId)
    userId = tonumber(userId)
    propId = tonumber(propId)
    if userId == nil or propId == nil then
        return 1
    end
    local lmap = self._propLevelMap[userId]
    local lv = lmap and tonumber(lmap[propId])
    if lv and lv >= 1 then
        return lv
    end
    return 1
end


end
