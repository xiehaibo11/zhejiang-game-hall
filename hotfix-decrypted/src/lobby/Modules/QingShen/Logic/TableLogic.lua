-- -*- coding: utf-8 -*-
--- 请神 Module 分片：同桌广播 / 进离桌 / 换位（注入到 QingShenModule，对外 API 不变）
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
function QingShenModule:setTableGetPlayerFaceNodeFunc(target, func)
    self._tableGetPlayerFaceNodeFuncTarget = target
    self._tableGetPlayerFaceNodeFunc = func
    if not func then
        self:_hideRenewRemind()
        self._renewRemindDismissed = false
        self._renewRemindTipText = nil
    end
    -- 大厅提前创建 Module 时 CF.roomData 可能尚未就绪；挂接头像节点时补绑 RoomData 事件
    -- if CF and CF.roomData and self.initProxyEvents then
    --     self:initProxyEvents()
    -- end
end


--- 延迟重挂：同事件内 PlayerView 会 removeAllPlayers 重建头像，需等新节点就绪
function QingShenModule:_scheduleSwitchChair()
    if not self._tableGetPlayerFaceNodeFunc then
        return
    end
    local function doSwitch()
        if self and self._tableGetPlayerFaceNodeFunc and self._switchChair then
            self:_switchChair()
        end
    end
    -- 首帧后挂一次；短延迟再挂一次，覆盖头像晚创建 / 重连闪断
    XH.SysTool.performWithDelayGlobal(doSwitch, 0.05)
    XH.SysTool.performWithDelayGlobal(doSwitch, 0.4)
end

--- 本机请神同步给同桌（短延迟，避免头像未建好；可多次调度，notice 内有座位校验）
function QingShenModule:_scheduleNoticeMyQingShen(delay)
    delay = tonumber(delay) or 0.3
    XH.SysTool.performWithDelayGlobal(function()
        if self and self.noticeMyQingShen2Other then
            self:noticeMyQingShen2Other({ ani = "loop" })
        end
    end, delay)
end

--- CF.roomData.EVENT_PLAYERLIST_CHANGED：进离座 / 换位后刷新头像特效
function QingShenModule:onRoomPlayerListChanged(event)
    if not self:isSupport() then
        return
    end
    local msg = event and event.msg
    local seatId = msg and msg.seatId
    if seatId == nil then
        self:_scheduleSwitchChair()
        return
    end
    seatId = tonumber(seatId)
    local pd = CF.roomData and CF.roomData:getPlayerDataBySeatId(seatId)
    if pd then
        local myId = Compat.getMyNumberId()
        local uid = tonumber(pd:getNumberID())
        if myId and uid == myId then
            self:playerEnterOrExitThisTable(true, seatId)
            -- 触发 game 层 FirstHandMahModule 懒加载（其内部注册首发手牌监听）
            if CF.game and CF.game.getModule then
                CF.game:getModule("FirstHandData")
            end
        elseif myId and uid and uid ~= myId then
            self:_onOtherPlayerJoinedForQingShen(uid)
        end
        -- 座位列表变化后按当前座位重挂循环特效（含本机；覆盖宝宝 SwitchChair）
        self:_scheduleSwitchChair()
    else
        self:playerEnterOrExitThisTable(false, seatId)
        self:_scheduleSwitchChair()
    end
end


--- CF.roomData.EVENT_PLAYER_STATE_CHANGED：其他玩家状态变化时重发本机请神广播
function QingShenModule:onRoomPlayerStateChanged(event)
    if not self:isSupport() then
        return
    end
    local msg = event and event.msg
    local seatId = msg and msg.seatId
    if seatId == nil or not CF.roomData then
        return
    end
    local pd = CF.roomData:getPlayerDataBySeatId(tonumber(seatId))
    if not pd then
        return
    end
    self:_onOtherPlayerJoinedForQingShen(tonumber(pd:getNumberID()))
end


function QingShenModule:onRoomClearTable()
    if not self:isSupport() then
        return
    end
    local mySeat = Compat.getSelfSeat()
    self:playerEnterOrExitThisTable(false, mySeat)
end


function QingShenModule:_onOtherPlayerJoinedForQingShen(uid)
    uid = tonumber(uid)
    if not uid or uid == 0 then
        return
    end
    if not Compat.isSelfInTable() then
        return
    end
    local myId = Compat.getMyNumberId()
    if myId and uid == myId then
        return
    end
    local pid = tonumber(self._propId)
    if not pid or self:_getMyPropTimeLeft(pid) <= 0 then
        local active = self:getEquippedPropId()
        if not active or self:getGodPropTimeLeft(active) <= 0 then
            return
        end
    end
    -- 对方进桌后尽快同步本机装扮（原 3s 会导致对方先清头像后长时间空白）
    self:_scheduleNoticeMyQingShen(0.3)
    self:_scheduleNoticeMyQingShen(1.0)
end


--- 局内同桌请神广播入口（替代宝宝 ENotifySubject.kNotifySubject_QingShen）
--- payload: json 字符串，或已解码 table；亦可传 { szChatString = "..." }
--- content.ani: "full"=完整赐福链；"loop"/缺省=只刷头像循环（换装/进桌同步）
function QingShenModule:onQingShenTableBroadcast(payload)
    local content = nil
    if type(payload) == "string" then
        local ok, decoded = pcall(cjson.decode, payload)
        if ok and type(decoded) == "table" then
            content = decoded
        end
    elseif type(payload) == "table" then
        if type(payload.szChatString) == "string" and payload.szChatString ~= "" then
            local ok, decoded = pcall(cjson.decode, payload.szChatString)
            if ok and type(decoded) == "table" then
                content = decoded
            end
        elseif tonumber(payload.userId) ~= nil then
            content = payload
        end
    end
    if not content or tonumber(content.userId) == nil then
        return
    end
    local propId = tonumber(content.propId)
    local propTimeLeft = tonumber(content.propTimeLeft) or 0
    local userId = tonumber(content.userId)
    if userId == XH.playerData:getNumberID() then
        return
    end
    if userId then
        -- 同桌广播仅表示对方当前装扮神：清理该用户其它请神时效，避免换位时多神循环互相覆盖
        local myUid = self:_getMyUserId()
        if not myUid or userId ~= myUid then
            local pmap = self._propTimeMap[userId]
            if type(pmap) == "table" then
                local keepId = propId
                for pid, _ in pairs(pmap) do
                    if tonumber(pid) ~= keepId then
                        pmap[pid] = nil
                    end
                end
                if next(pmap) == nil then
                    self._propTimeMap[userId] = nil
                end
            end
        end
        -- 优先用广播里的结束时间戳；旧包仅有剩余秒时用当前服务端时间换算
        local endTime = tonumber(content.propExpireAt or content.endTime)
        if not endTime or endTime <= 0 then
            if propTimeLeft > 0 then
                endTime = XH.lobby:getModule("Shop"):getServerTime() + propTimeLeft
            else
                endTime = 0
            end
        end
        self:_setPropTimeForUserProp({
            userId = userId,
            propId = propId,
            endTime = endTime,
            level = content.level,
        })
    end
    if propTimeLeft > 0 then
        local chairId = userId and _chairIdFromRoomUserId(userId)
        local level = content.level
        local ani = content.ani
        local function applyRemoteAni(cid)
            if not cid then
                return false
            end
            if ani == "full" then
                self:playRemoteQingShenAnim(cid, level, propId)
            else
                -- playHeadAniLoop 内部同 prop 已在播则跳过，避免清挂点导致闪一下
                self:playHeadAniLoop(cid, level, propId)
            end
            return true
        end
        if not applyRemoteAni(chairId) then
            -- 座位映射尚未就绪（对方刚进桌）：短延迟重试
            XH.SysTool.performWithDelayGlobal(function()
                if not self then
                    return
                end
                applyRemoteAni(_chairIdFromRoomUserId(userId))
            end, 0.4)
        end
    end
end


function QingShenModule:playerEnterOrExitThisTable(isEnter, chairId)
    if not self:isSupport() then
        return
    end
    if not isEnter then
        self:_hideRenewRemind()
        self._renewRemindDismissed = false
        self._renewRemindTipText = nil
    end
    if isEnter then
        -- 重连进桌时装扮/时效可能尚未拉回，先打标；时效就绪后由 getPropsCount/equip 补广播
        self._pendingTableQingShenNotice = true
        local active = self:getEquippedPropId()
        if active and self:getGodPropTimeLeft(active) > 0 then
            self:_scheduleNoticeMyQingShen(0.3)
            self:_scheduleNoticeMyQingShen(1.0)
            self._pendingTableQingShenNotice = nil
        end
        return
    end
    if not chairId or chairId < 0 then
        return
    end
    -- 离座：不主动清对方头像特效；时效保留，由随后 _switchChair 按座位刷新
end


function QingShenModule:noticeMyQingShen2Other(opt)
    if not self:isSupport() then
        return
    end
    opt = opt or {}
    local myChairID = Compat.getSelfSeat()
    if myChairID == nil then
        return
    end
    local propId = self:getEquippedPropId() or 0
    local propTimeLeft = (propId and propId > 0) and self:_getMyPropTimeLeft(propId) or 0
    if propTimeLeft < 0 then
        return
    end
    local uid = Compat.getMyNumberId() or 0
    local level = 0
    if propId and propId > 0 then
        level = self:_resolveGodPlayLevel(propId, uid, self._level)
    end
    local propExpireAt = 0
    if propId and propId > 0 and uid > 0 then
        local pmap = self._propTimeMap[uid]
        propExpireAt = pmap and tonumber(pmap[propId]) or 0
    end
    local payload = {
        userId = uid,
        level = level,
        propId = propId,
        propTimeLeft = propTimeLeft,
        propExpireAt = propExpireAt,
        -- full=完整赐福；loop=只刷头像循环（默认，避免同桌闪烁）
        ani = (opt.ani == "full") and "full" or "loop",
    }
    local ok, jsonStr = pcall(cjson.encode, payload)
    if ok and type(jsonStr) == "string" then
        if CF and CF.msgManager and CF.msgManager.sendQingShenMsg then
            CF.msgManager:sendQingShenMsg(jsonStr)
        end
    end
end


function QingShenModule:_switchChair()
    local myChair = Compat.getSelfSeat()
    local chairCount = Compat.safeChairCount() or 0
    if chairCount <= 0 then
        return
    end
    self:_hideRenewRemind()
    local now = XH.lobby:getModule("Shop"):getServerTime()
    -- 不整桌先清挂点：同神循环已在播则 playHeadAniLoop 直接跳过，避免闪一下
    for seatId = 0, chairCount - 1 do
        local uid = Compat.userIdFromSeat(seatId)
        local pmap = uid and uid > 0 and self._propTimeMap[uid] or nil
        local bestPropId, bestEnd = nil, 0
        if type(pmap) == "table" then
            for storedPropId, endTime in pairs(pmap) do
                local et = tonumber(endTime) or 0
                if et > now and et >= bestEnd then
                    bestEnd = et
                    bestPropId = storedPropId
                end
            end
        end
        if bestPropId then
            local lv = self:_getLevelForUserProp(uid, bestPropId)
            self:playHeadAniLoop(seatId, lv, bestPropId)
        else
            self:_cleanupHeadEffectsByChair(seatId)
        end
    end
    -- 本机以当前装扮神为准再补一次（仅本地；进离座不广播，避免同桌闪烁）
    if myChair ~= nil and self._syncSelfHeadDisplayToEquipped then
        self:_syncSelfHeadDisplayToEquipped({ broadcast = false })
    end
    self:_updateRenewRemind()
end


function QingShenModule:getPlayerHeadNodeByChairId(chairId)
    if not self._tableGetPlayerFaceNodeFuncTarget or not self._tableGetPlayerFaceNodeFunc then
        return nil
    end
    local ok, faceNode = pcall(function()
        return self._tableGetPlayerFaceNodeFunc(self._tableGetPlayerFaceNodeFuncTarget, chairId)
    end)
    if not ok or not faceNode or tolua.isnull(faceNode) then
        return nil
    end

    -- 浙江：faceNode 为 PlayerHeadNode；在其上挂载 QingShenAniParent 作为特效容器
    local spNode = faceNode:getChildByName(Define.HEAD_NODE_ANI_NAME)
    if (not spNode or tolua.isnull(spNode)) and XH.UITool and XH.UITool.seekNodeByName then
        spNode = XH.UITool.seekNodeByName(faceNode, Define.HEAD_NODE_ANI_NAME)
    end
    if not spNode or tolua.isnull(spNode) then
        spNode = cc.Node:create()
        spNode:setName(Define.HEAD_NODE_ANI_NAME)
        faceNode:addChild(spNode, 99)
        -- 对齐头像框中心；无头像框则用节点中心
        local headFrame = faceNode._headFrame
        if headFrame and not tolua.isnull(headFrame) then
            spNode:setPosition(cc.p(headFrame:getPosition()))
        else
            local size = faceNode:getContentSize()
            if size and size.width > 0 and size.height > 0 then
                spNode:setPosition(size.width / 2, size.height / 2)
            else
                spNode:setPosition(0, 0)
            end
        end
    end
    return spNode
end


function QingShenModule:getPlayerFaceBtnByChairId(chairId)
    -- 续费气泡挂在整个 PlayerHeadNode 上（非 QingShenAniParent）
    if not self._tableGetPlayerFaceNodeFuncTarget or not self._tableGetPlayerFaceNodeFunc then
        return nil
    end
    local ok, faceNode = pcall(function()
        return self._tableGetPlayerFaceNodeFunc(self._tableGetPlayerFaceNodeFuncTarget, chairId)
    end)
    if ok and faceNode and not tolua.isnull(faceNode) then
        return faceNode
    end
    return nil
end


end
�:  