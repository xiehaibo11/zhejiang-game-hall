-- -*- coding: utf-8 -*-
--- 请神 Module 分片：请神动画链路（注入到 QingShenModule，对外 API 不变）
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
function QingShenModule:playQingShenAni(chairId, level, propId)
    -- 入口校验:chairId 当前在 GameFrame 上根本没头像节点(尚未 LoadGameView 完毕等)就直接退。
    -- 链路里的每段函数会各自再取一次最新 headNode,以应对中途 LoadGameView 重建头像树。
    if not self:getPlayerHeadNodeByChairId(chairId) then
        return
    end
    level = tonumber(level) or tonumber(self._level) or 1
    if level < 1 then level = 1 end
    propId = tonumber(propId) or tonumber(self._propId)
    if chairId == Compat.getSelfSeat() then
        self:playQsStage1Ani(chairId, level, propId)
    else
        self:playHeadAniUp(chairId, level, propId)
    end
end


function QingShenModule:playQsStage1Ani(chairId, level, propId)
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then return end
    local headNode = self:getPlayerHeadNodeByChairId(chairId)
    if not headNode or tolua.isnull(headNode) then return end
    local animCfg = Define.QS_STAGE1_ANIM[propId]
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    if animCfg.scale then
        spine:setScale(animCfg.scale)
    end
    if animCfg.sound then
        Compat.playGameSound(animCfg.sound)
    end
    local zOrder = 99
    -- 文殊菩萨等级1的层级要高于等级2
    if propId == QING_SHEN_PROP_ID.WenShuPuSa then
        zOrder = 100
    end
    scene:addChild(spine, zOrder)
    spine:setPosition(display.cx, display.cy)
    spine:setAnimation(0, animCfg.anim, false)
    local mod = self
    -- 文殊菩萨特殊处理:第一段动画播放到自定义事件 cx 时即接第二段(两段重叠过渡),
    -- 第一段动画播完后只负责移除自身;其它神明仍是第一段播完才接第二段。
    if propId == QING_SHEN_PROP_ID.WenShuPuSa then
        spine:registerSpineEventHandler(function(event)
            if event and event.eventData and event.eventData.name == "cx" then
                mod:playQsStage2Ani(chairId, level, propId)
            end
        end, sp.EventType.ANIMATION_EVENT)
        _onSpineCompleteRemove(spine)
    else
        _onSpineCompleteRemove(spine, function()
            mod:playQsStage2Ani(chairId, level, propId)
        end)
    end
end


function QingShenModule:playQsStage2Ani(chairId, level, propId)
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then return end
    local animCfg = Define.QS_STAGE2_ANIM[propId]
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    if animCfg.scale then
        spine:setScale(animCfg.scale)
    end
    scene:addChild(spine, 99)
    spine:setPosition(display.cx, display.cy)
    spine:setAnimation(0, animCfg.anim[level] or "animation1", false)
    local mod = self
    _onSpineCompleteRemove(spine, function()
        mod:playCXAni(chairId, level, propId)
    end)
end


function QingShenModule:playCXAni(chairId, level, propId)
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then
        return
    end
    -- 早退仅用作"chairId 当前没头像节点就别播全屏特效"的护栏(例如玩家已离桌),
    -- 不再保留 headNode 引用,后续 playFlyAni 会自取最新的。
    local headNode = self:getPlayerHeadNodeByChairId(chairId)
    if not headNode or tolua.isnull(headNode) then
        return
    end
    local animCfg = Define.BKCX_ANIM
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    scene:addChild(spine, 99)
    spine:setPosition(display.cx, display.cy)
    spine:setAnimation(0, animCfg.anim, false)
    local mod = self
    _onSpineCompleteRemove(spine, function()
        mod:playFlyAni(chairId, level, propId)
    end)
end


function QingShenModule:playFlyAni(chairId, level, propId)
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then
        return
    end
    -- 飞行起点是屏幕中心,终点要按 headNode 当前世界坐标算,所以这里取一次 headNode
    -- 仅用于计算 endPos;后续不再持有该引用,playHeadAniUp 内部会重新自取。
    local headNode = self:getPlayerHeadNodeByChairId(chairId)
    if not headNode or tolua.isnull(headNode) then
        return
    end
    local world = headNode:convertToWorldSpace(cc.p(0, 0))
    local endPos = scene:convertToNodeSpace(world)
    local animCfg = Define.FXGD_ANIM
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    scene:addChild(spine, 99)
    local startX, startY = display.cx, display.cy
    spine:setPosition(startX, startY)
    spine:setAnimation(0, animCfg.anim, true)
    -- 计算飞行动画的角度
    local dx = endPos.x - startX
    local dy = endPos.y - startY
    local rad = math.atan2(dy, dx)
    local deg = math.deg(rad)
    spine:setRotation(-(deg - 90))
    local mod = self
    local move = cc.MoveTo:create(0.5, endPos)
    spine:runAction(cc.Sequence:create(move, cc.CallFunc:create(function()
        if spine and not tolua.isnull(spine) then
            spine:removeFromParent()
        end
        mod:playHeadAniUp(chairId, level, propId)
    end)))
end

--- 收到同桌请神转发：在对应头像处播放完整特效


function QingShenModule:playRemoteQingShenAnim(chairId, level, propId)
    self:playQingShenAni(chairId, level, propId)
end


function QingShenModule:playHeadAniUp(chairId, level, propId)
    local headNode = self:getPlayerHeadNodeByChairId(chairId)
    if not headNode or tolua.isnull(headNode) then
        return
    end
    self:_clearHeadQingShenSpines(headNode)
    local animCfg = Define.YUNSHI_ANIM[propId]
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    local aniPos = Define.HEAD_ANI_POS
    spine:setPosition(aniPos.x, aniPos.y)
    if animCfg.scale then
        spine:setScale(animCfg.scale, animCfg.scale)
    end
    headNode:addChild(spine, 99)
    spine:setName(HEAD_UP_SPINE_NAME)
    spine._qingShenPropId = tonumber(propId)
    local track = animCfg.anim or "animation1"
    spine:update(0)
    spine:setAnimation(0, track, false)
    local mod = self
    local expectPropId = tonumber(propId)
    _onSpineCompleteRemove(spine, function()
        if spine._qingShenCancelled then
            return
        end
        -- 期间若已换装/同步了新循环，勿用旧 prop 盖回去
        local head = mod:getPlayerHeadNodeByChairId(chairId)
        if not head or tolua.isnull(head) then
            return
        end
        local loop = head:getChildByName(HEAD_LOOP_SPINE_NAME)
        if loop and not tolua.isnull(loop) and tonumber(loop._qingShenPropId) ~= nil
            and tonumber(loop._qingShenPropId) ~= expectPropId then
            return
        end
        mod:playHeadAniLoop(chairId, level, expectPropId)
    end)
end


function QingShenModule:showHeadCountdown(headNode, userId, propId)
    if not headNode or tolua.isnull(headNode) then
        return nil
    end
    userId = tonumber(userId)
    propId = tonumber(propId)
    if userId == nil or propId == nil then
        return nil
    end
    local LeftTimeNode = require("lobby.Modules.QingShen.LeftTimeNode")
    local mod = self
    return LeftTimeNode.new(headNode, function()
        return mod:getPropTimeLeftForUserProp(userId, propId)
    end, propId)
end


function QingShenModule:playHeadAniLoop(chairId, level, propId)
    local headNode = self:getPlayerHeadNodeByChairId(chairId)
    if not headNode or tolua.isnull(headNode) then
        return
    end
    -- 本机头像循环必须以「生效装扮神」为准：购买其它神的全屏赐福后，不覆盖当前装扮
    local myChair = Compat.getSelfSeat()
    if myChair ~= nil and chairId == myChair then
        local active = self:getEquippedPropId()
        if active and active > 0 then
            propId = active
            local uid = self:_getMyUserId()
            if uid then
                level = self:_resolveGodPlayLevel(active, uid)
            else
                local lv = self:getGodRecommendLevel(active) or 0
                if lv >= 1 then
                    level = lv
                end
            end
        end
    end
    propId = tonumber(propId)
    if not propId then
        return
    end
    headNode:setVisible(true)
    -- 同一神明循环已在播且无叠层：不重建，避免闪一下
    if self:_isSameHeadLoopPlaying(headNode, propId) then
        if myChair ~= nil and chairId == myChair then
            local userId = _userIdFromChairId(chairId)
            if userId then
                local left = headNode:getChildByName(Define.NODE_NAME)
                if not left or tolua.isnull(left) then
                    self:showHeadCountdown(headNode, userId, propId)
                end
            end
            self:_updateRenewRemind()
        end
        return
    end
    -- 换装或异常叠层：清干净再挂
    self:_clearHeadQingShenSpines(headNode)
    local animCfg = Define.YUNSHI_ANIM[propId]
    if not animCfg then
        return
    end
    local aniTrack = animCfg.animLoop or "animation11"
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    if animCfg.scale then
        spine:setScale(animCfg.scale, animCfg.scale)
    end
    headNode:addChild(spine, 99)
    local aniPos = Define.HEAD_ANI_POS
    spine:setPosition(aniPos.x, aniPos.y)
    spine:setName(HEAD_LOOP_SPINE_NAME)
    spine._qingShenPropId = propId
    spine:setVisible(true)
    spine:setAnimation(0, aniTrack, true)

    -- 倒计时仅挂在本机自己头像上；其他玩家头像不显示 LeftTimeNode
    if myChair == nil or chairId ~= myChair then
        return
    end
    -- 倒计时以 numberID 为主键；chairId 解析不到 userId 时直接不挂，
    -- 避免误用本机 userId 导致"自己没有请神时效也显示倒计时"的错误。
    local userId = _userIdFromChairId(chairId)
    if userId == nil then
        return
    end
    propId = propId or tonumber(self._propId)
    self:showHeadCountdown(headNode, userId, propId)
    self:_updateRenewRemind()
end


--- 头像上是否已在播指定神明的循环动画（且无升起动画、无同名叠层）
function QingShenModule:_isSameHeadLoopPlaying(headNode, propId)
    if not headNode or tolua.isnull(headNode) then
        return false
    end
    propId = tonumber(propId)
    if not propId then
        return false
    end
    local up = headNode:getChildByName(HEAD_UP_SPINE_NAME)
    if up and not tolua.isnull(up) then
        return false
    end
    local existing = headNode:getChildByName(HEAD_LOOP_SPINE_NAME)
    if not existing or tolua.isnull(existing) or tonumber(existing._qingShenPropId) ~= propId then
        return false
    end
    local loopCount = 0
    for _, c in ipairs(headNode:getChildren() or {}) do
        if c and not tolua.isnull(c) and c:getName() == HEAD_LOOP_SPINE_NAME then
            loopCount = loopCount + 1
        end
    end
    return loopCount == 1
end


function QingShenModule:playHandCardTopAni()
    local propId = self:getEquippedPropId()
    if not propId or self:getGodPropTimeLeft(propId) <= 0 then
        return
    end
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then return end
    local animCfg = Define.QS_HAND_ANIM[propId]
    local sound = animCfg and animCfg.sound or nil
    local spine = self:safeCreateSpine(animCfg)
    if not spine then return end
    spine:setPosition(display.cx, display.cy)
    if animCfg.scale then
        spine:setScale(animCfg.scale)
    end
    if sound then
        Compat.playGameSound(sound)
    end
    scene:addChild(spine, 99)
    spine:update(0)
    spine:setAnimation(0, animCfg.anim, false)
    _onSpineCompleteRemove(spine)
end

--- 开局后下发自己首手牌时的回调（由 game 层 GameData.EVENT_FIRST_HAND_DATA 事件触发）
--- 在此按游戏类型区分是否播放手牌顶部动画
function QingShenModule:onFirstHandData()
    if not self:isSupport() then
        return
    end
    -- 按游戏类型区分：此处默认所有支持的麻将游戏均播放，
    -- 如需特定游戏不播放，可在此根据 XH.areaData:getLobbyID() 做过滤
    if not self:_isSupportHandTopAni() then
        return
    end
    self:playHandCardTopAni()
end

--- 是否需要在下发首手牌时播放顶部动画（可在此按游戏类型区分）
function QingShenModule:_isSupportHandTopAni()
    -- 示例：仅部分游戏需要，可取消注释并按 lobbyId 区分
    -- local lobbyId = XH.areaData and XH.areaData:getLobbyID()
    -- if lobbyId == XXX then return false end
    return true
end


end
�7