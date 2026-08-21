local QingShenIconView = class("QingShenIconView", XH.ViewBase)
local Define = require("lobby.Modules.QingShen.Define")
local Compat = require("lobby.Modules.PropPush.Compat")
local MoveExtend = require("game.GameBase.Modules.LuckyTaskIcon.MoveExtend")

--- 开局后拖动位置本地缓存 key（对齐 ShuffleIconView）
local MOVE_POS_KEY = "qingshen_icon_move_pos"
--- 开局前底部图标行默认 Y（对齐原 updatePositionX）
local PRE_START_POS_Y = 118
--- 开局后左上角默认边距
local GAME_START_MARGIN_X = 70
local GAME_START_MARGIN_Y = 120
local ICON_SCALE = 1

function QingShenIconView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PropPush/PropPushIcon.csb"
end

function QingShenIconView:getBindingInfo()
    return {
        -- onTouch 交给 MoveExtend：拖动 / 点击区分
        ["_KW_PANEL_ICON"] = {varName = "_panelIcon", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"},
        ["_KW_IMG_LEVEL"] = {varName = "_imgLevel"},
        ["_KW_IMG_TIP"] = {varName = "_imgTip"},
    }
end

function QingShenIconView:getProxyEvents()
    local events = {
        { module = XH.lobby:getModule("PropPush"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStartChanged" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_ACT_LIST", callBack = "onActListChanged" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange" },
    }
    if CF and CF.roomData then
        events[#events + 1] = {
            module = CF.roomData,
            eventKeyName = "EVENT_GAMESTART_CHANGED",
            callBack = "onRoomGameStartChanged",
        }
        events[#events + 1] = {
            module = CF.roomData,
            eventKeyName = "EVENT_PLAYERLIST_CHANGED",
            callBack = "onPlayerListChanged",
        }
    end
    return events
end

function QingShenIconView:ctor(object, childObject)
    QingShenIconView.super.ctor(self)
    self.m_object = object
    self.m_childObject = childObject
    self._isGameStarted = Compat.isGameStarted() == true
    self._imgLevel:setLocalZOrder(2)
    self:_ensureBadgeNode()
    self:_setupMoveExtend()
    self:refreshIconDisplay()
    if self._isGameStarted then
        self:_applyGameStartPos()
    end
    XH.lobby:getModule("PropPush"):reqPropPush()
end

--- 搭建 MoveExtend 所需 root / layout（CSB 无全屏 Panel，运行时组装）
function QingShenIconView:_setupMoveExtend()
    if not self._panelIcon or tolua.isnull(self._panelIcon) then
        return
    end

    -- ViewBase 默认全屏；作为拖动边界 root
    self._panelRoot = self
    self:setTouchEnabled(false)

    local iconSize = self._panelIcon:getContentSize()
    local layout = ccui.Layout:create()
    layout:setContentSize(iconSize)
    layout:setAnchorPoint(cc.p(0.5, 0.5))
    layout:setTouchEnabled(false)
    self:addChild(layout, 10)
    self._layout = layout

    -- tip 跟随 icon
    if self._imgTip and not tolua.isnull(self._imgTip) then
        local tipParent = self._imgTip:getParent()
        local worldPos = tipParent:convertToWorldSpace(cc.p(self._imgTip:getPosition()))
        local localPos = self._panelIcon:convertToNodeSpace(worldPos)
        self._imgTip:retain()
        self._imgTip:removeFromParent()
        self._panelIcon:addChild(self._imgTip, 10)
        self._imgTip:setPosition(localPos)
        self._imgTip:release()
    end

    self._panelIcon:retain()
    self._panelIcon:removeFromParent()
    layout:addChild(self._panelIcon)
    self._panelIcon:setPosition(iconSize.width / 2, iconSize.height / 2)
    self._panelIcon:release()

    -- 开局前默认底部图标行
    layout:setPosition(cc.p(display.width - 130, PRE_START_POS_Y))

    MoveExtend.extend(self, {
        root = self._panelRoot,
        icon = self._panelIcon,
        layout = self._layout,
        key = MOVE_POS_KEY,
    })
end

function QingShenIconView:_getGameStartDefaultPos()
    local btnSize = self._layout and self._layout:getContentSize() or cc.size(100, 100)
    return cc.p(
        btnSize.width / 2 + GAME_START_MARGIN_X,
        display.height - btnSize.height / 2 - GAME_START_MARGIN_Y
    )
end

--- 开局后：有本地缓存则恢复，否则落到左上角
function QingShenIconView:_applyGameStartPos()
    if not self._layout or tolua.isnull(self._layout) then
        return
    end
    local saved = cc.UserDefault:getInstance():getStringForKey(MOVE_POS_KEY, "")
    if saved ~= "" then
        local pos = string.split(saved, ",")
        local x, y = tonumber(pos[1]), tonumber(pos[2])
        if x and y and x ~= 0 and y ~= 0 then
            self:updatPos()
            return
        end
    end
    self._layout:setPosition(self:_getGameStartDefaultPos())
end

function QingShenIconView:_applyPreStartPosY()
    if not self._layout or tolua.isnull(self._layout) then
        return
    end
    self._layout:setPositionY(PRE_START_POS_Y)
end

function QingShenIconView:_clearIconSpines()
    if self._iconCxSpine and not tolua.isnull(self._iconCxSpine) then
        self._iconCxSpine:removeFromParent()
        self._iconCxSpine = nil
    end
    if self._iconCx2Spine and not tolua.isnull(self._iconCx2Spine) then
        self._iconCx2Spine:removeFromParent()
        self._iconCx2Spine = nil
    end
    if self._iconLoopSpine and not tolua.isnull(self._iconLoopSpine) then
        self._iconLoopSpine:removeFromParent()
        self._iconLoopSpine = nil
    end
    self._loopPropId = nil
    self._loopLevel = nil
end

function QingShenIconView:_updateLevelImage(level, module)
    if module and module:isQingShenActive() and level and level >= 2 then
        self._imgLevel:loadTexture(
            "Common/CSB/GameBase/PropPush/Image/PropPush_Level_" .. level .. ".png",
            ccui.TextureResType.plistType
        )
        self._imgLevel:setVisible(true)
    else
        self._imgLevel:setVisible(false)
    end
end

--- 常驻展示：按激活/推荐/随机神明刷新循环动画（开局后仍显示，可拖动）
function QingShenIconView:refreshIconDisplay()
    if tolua.isnull(self) then return end
    local module = XH.lobby:getModule("QingShen")
    if not module then return end

    self:setVisible(true)
    if self._panelIcon and not tolua.isnull(self._panelIcon) then
        self._panelIcon:setTouchEnabled(true)
    end

    local propId = module:getIconDisplayPropId()
    local level = module:getGodRecommendLevel(propId)
    self:_updateLevelImage(level, module)
    self:_playIconLoopSpine(module, level, propId)
    self:_refreshBadge()
end

function QingShenIconView:_onIconAddImgEvent(level)
    if tolua.isnull(self) then return end
    local module = XH.lobby:getModule("QingShen")
    local propId = module and module:getIconDisplayPropId() or 0
    self:_updateLevelImage(level, module)
    if self._panelIcon and not tolua.isnull(self._panelIcon) then
        self._panelIcon:setTouchEnabled(true)
    end

    if not module then return end

    self:_playIconCx2Spine(module)
    self:_playIconLoopSpine(module, level, propId)
end

function QingShenIconView:_playIconCx2Spine(module)
    if self._iconCx2Spine and not tolua.isnull(self._iconCx2Spine) then
        self._iconCx2Spine:removeFromParent()
        self._iconCx2Spine = nil
    end
    local cx2Cfg = Define.QS_ICON_ANIM_CX2
    local cx2Spine = module:safeCreateSpine(cx2Cfg)
    if not cx2Spine then
        return
    end
    local size = self._imgLevel:getContentSize()
    cx2Spine:setPosition(cc.p(size.width / 2, size.height / 2 - 5))
    cx2Spine:setScale(ICON_SCALE)
    self._imgLevel:addChild(cx2Spine, 1)
    self._iconCx2Spine = cx2Spine
    cx2Spine:registerSpineEventHandler(function()
        display.performWithDelay(cx2Spine, function()
            if tolua.isnull(self) then return end
            if self._iconCx2Spine and not tolua.isnull(self._iconCx2Spine) then
                self._iconCx2Spine:removeFromParent()
                self._iconCx2Spine = nil
            end
        end, 0)
    end, sp.EventType.ANIMATION_COMPLETE)
    cx2Spine:update(0)
    cx2Spine:setAnimation(0, cx2Cfg.anim, false)
end

function QingShenIconView:_playIconLoopSpine(module, level, propId)
    propId = tonumber(propId) or (module and module:getIconDisplayPropId()) or 0
    local lv = tonumber(level) or 1
    if lv < 1 then lv = 1 end
    if self._iconLoopSpine and not tolua.isnull(self._iconLoopSpine)
        and self._loopPropId == propId and self._loopLevel == lv then
        return
    end
    if self._iconLoopSpine and not tolua.isnull(self._iconLoopSpine) then
        self._iconLoopSpine:removeFromParent()
        self._iconLoopSpine = nil
    end
    local loopCfg = Define.QS_ICON_ANIM_LOOP[propId]
    local loopSpine = module:safeCreateSpine(loopCfg)
    if not loopSpine then
        self._loopPropId = nil
        self._loopLevel = nil
        return
    end
    local size = self._panelIcon:getContentSize()
    loopSpine:setPosition(cc.p(size.width / 2, size.height / 2 - 5))
    loopSpine:setScale(ICON_SCALE)
    self._panelIcon:addChild(loopSpine, 1)
    local aniTrack = (loopCfg.anim and loopCfg.anim[lv]) or (loopCfg.anim and loopCfg.anim[1]) or "animation1"
    local trackid = 0
    if XH and XH.askIDManager and XH.askIDManager.getAskID then
        trackid = XH.askIDManager:getAskID()
    end
    loopSpine:update(0)
    loopSpine:setAnimation(trackid, aniTrack, true)
    self._iconLoopSpine = loopSpine
    self._loopPropId = propId
    self._loopLevel = lv
end

function QingShenIconView:playIconAni()
    local module = XH.lobby:getModule("QingShen")
    if not module then
        return
    end
    local level = module:getGodRecommendLevel(self._loopPropId)

    self:_clearIconSpines()

    local cxCfg = Define.QS_ICON_ANIM_CX1
    local cxSpine = module:safeCreateSpine(cxCfg)
    if not cxSpine then
        self:_onIconAddImgEvent(level)
        return
    end

    local size = self._panelIcon:getContentSize()
    cxSpine:setPosition(cc.p(size.width / 2, size.height / 2 - 5))
    cxSpine:setScale(ICON_SCALE)
    self._panelIcon:addChild(cxSpine, 2)
    self._iconCxSpine = cxSpine

    cxSpine:registerSpineEventHandler(function(event)
        if tolua.isnull(self) then return end
        if event and event.eventData and event.eventData.name == "add_img1" then
            self:_onIconAddImgEvent(level)
        end
    end, sp.EventType.ANIMATION_EVENT)

    cxSpine:registerSpineEventHandler(function()
        display.performWithDelay(cxSpine, function()
            if tolua.isnull(self) then return end
            if self._iconCxSpine and not tolua.isnull(self._iconCxSpine) then
                self._iconCxSpine:removeFromParent()
                self._iconCxSpine = nil
            end
            if not self._iconLoopSpine or tolua.isnull(self._iconLoopSpine) then
                self:_onIconAddImgEvent(level)
            end
        end, 0)
    end, sp.EventType.ANIMATION_COMPLETE)

    cxSpine:setAnimation(0, cxCfg.anim, false)
    self:setVisible(true)
    self:_refreshBadge()
end

function QingShenIconView:_ensureBadgeNode()
    return self._imgTip
end

function QingShenIconView:_refreshBadge()
    local module = XH.lobby:getModule("QingShen")
    local badge = self:_ensureBadgeNode()
    if not badge or tolua.isnull(badge) then return end
    local show = module and module:shouldShowIconBadge()
    badge:setVisible(show == true)
end

function QingShenIconView:onTouchProp(send, eventType)
    -- 开局前仍可点开整合页；开局后走 MoveExtend 拖动+点击
    if not self._isGameStarted then
        if eventType == ccui.TouchEventType.ended then
            self:onClick()
        end
        return
    end
    self:onTouch(send, eventType)
end

function QingShenIconView:onMoved(send, endX, endY)
end

function QingShenIconView:onMoveEnded(send, fun, icon)
end

function QingShenIconView:onClick()
    local module = XH.lobby:getModule("QingShen")
    if module then
        module:markIconBadgeClicked()
        self:_refreshBadge()
        if module.throwData then
            module:throwData(XH.NewThrowDataDefine.oh26042109)
        end
    end
    XH.viewManager:openView("QingShenIntegrateView")
end

function QingShenIconView:onEnter()
    QingShenIconView.super.onEnter(self)
    local module = XH.lobby:getModule("QingShen")
    if module then
        module:incrementIconBadgeCreateRoomCount()
        module:reqEquipState()
        if module.throwData then
            module:throwData(XH.NewThrowDataDefine.oh26042108)
        end
    end
    self:refreshIconDisplay()
    if module and module.tryShowTableGodTips then
        display.performWithDelay(self, function()
            if tolua.isnull(self) then
                return
            end
            module:tryShowTableGodTips(self)
        end, 0.3)
    end
end

function QingShenIconView:onPlayerListChanged(event)
    local msg = event and event.msg
    local mySeat = Compat.getSelfSeat()
    if mySeat == nil then
        return
    end
    if msg and msg.seatId ~= nil and tonumber(msg.seatId) ~= tonumber(mySeat) then
        return
    end
    if Compat.isGameStarted() then
        return
    end
    local module = XH.lobby:getModule("QingShen")
    if module then
        module:incrementIconBadgeCreateRoomCount()
        self:_refreshBadge()
    end
end

function QingShenIconView:onGameStartChanged(event)
    if not event then
        return
    end
    self._isGameStarted = true
    self:setVisible(true)
    self:_applyGameStartPos()
    self:refreshIconDisplay()
end

function QingShenIconView:onRoomGameStartChanged(event)
    local msg = event and event.msg
    local started = msg and msg.nowState
    if started == nil and CF and CF.roomData and CF.roomData.getIsGameStart then
        started = CF.roomData:getIsGameStart()
    end
    self._isGameStarted = started == true
    if started then
        local propPush = XH.lobby:getModule("PropPush")
        if propPush and propPush.onGameStart then
            propPush:onGameStart()
        end
        -- 手牌上方请神动画改由开局后下发首手牌（GameData.EVENT_FIRST_HAND_DATA）触发，
        -- 便于按游戏类型区分，详见 QingShenModule:onFirstHandData
        -- 开局时 game 模块已就绪，在此保底触发 game 层 FirstHandMahModule 懒加载
        if CF.game and CF.game.getModule then
            CF.game:getModule("FirstHandData")
        end
        self:setVisible(true)
        self:_applyGameStartPos()
        self:refreshIconDisplay()
    else
        self:_applyPreStartPosY()
        self:refreshIconDisplay()
    end
end

function QingShenIconView:onActListChanged()
    local module = XH.lobby:getModule("QingShen")
    if module and module.tryShowTableGodTips then
        module:tryShowTableGodTips(self)
    end
end

function QingShenIconView:onWinSizeChange()
    if not self._isGameStarted or not self.__getLocalPos or not self._layout then
        return
    end
    local iconPos = self:__getLocalPos()
    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._layout:getContentSize()
    if iconPos.x < btnSize.width / 2 then
        iconPos.x = btnSize.width / 2
    elseif iconPos.x > viewSize.width - btnSize.width / 2 then
        iconPos.x = viewSize.width - btnSize.width / 2
    end
    if iconPos.y < btnSize.height / 2 then
        iconPos.y = btnSize.height / 2
    elseif iconPos.y > viewSize.height - btnSize.height / 2 then
        iconPos.y = viewSize.height - btnSize.height / 2
    end
    self._layout:setPosition(iconPos)
    self:__setLocalPos()
end

--- IconAnimationManager 开局前底部图标行排布（开局后不覆盖拖动位置）
function QingShenIconView:updatePositionX(posX)
    if self._isGameStarted then
        return
    end
    if self._layout and not tolua.isnull(self._layout) then
        self._layout:setPosition(posX, PRE_START_POS_Y)
    elseif self._panelIcon and not tolua.isnull(self._panelIcon) then
        self._panelIcon:setPosition(posX, PRE_START_POS_Y)
    end
end

return QingShenIconView
�@  