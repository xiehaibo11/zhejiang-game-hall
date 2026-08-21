local LuckyTaskIcon = CF.gameClass("LuckyTaskIcon", CF.ViewBase)
local MoveExtend = require("game.GameBase.Modules.LuckyTaskIcon.MoveExtend")
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")

function LuckyTaskIcon:ctor()
    LuckyTaskIcon.super.ctor(self)
    MoveExtend.extend(self, {root = self._panelRoot, icon = self._icon, layout = self._layout, key = self.__cname .. "MOVE_POS"})
    XH.lobby:getModule("LuckyTask"):setInGameShowed(false)

    local module = CF.game:getModule("IconAnimationManager")
    local isHaveAward = XH.lobby:getModule("LuckyTask"):isHaveAward()
    if module:GetPlayAnimationIndex() == module.PlayType.LuckyTask then
        local aniPath = "animation/Lobby/Base/zzb_dt_xyrw_rk/"
        local aniName = isHaveAward and "animation3" or "animation"
        local params = {path = aniPath, tex = "zzb_xyrw_icon.json", ske = "zzb_xyrw_icon.atlas", armatureName = aniName, scale = 1}
        local ani = display.playDargonBonesSpine(params)
        self._icon:addChild(ani)
        self._ani = ani
        ani:setPosition(70, 0)
        self._imagIcon:setVisible(false)
    else
        self._imagIcon:setVisible(true)
        self._imagIcon:getChildByName("_KW_IMG_FLAG"):setVisible(isHaveAward and true or false)
    end
    -- XH.lobby:getModule("LuckyTask"):reqIsHaveDuiJuTask(function(isHaveDuiJuTask, taskInfo)
    --     if tolua.isnull(self) then return end
    -- end)
    -- self._layout:setVisible(self:getBtnVisible())
end

function LuckyTaskIcon:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/LuckyTask/LuckyTaskIcon.csb"
end

function LuckyTaskIcon:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "checkAutoShow"},
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_STATE_CHANGED", callBack = "checkAutoShow"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NUIAddLobbyIcon", callBack = "updateBtnVisivble"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NUIUPDATELOBBYICONBUBBLETIP", callBack = "onEventLuckyTaskIconTip"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
        -- {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
    }
end

function LuckyTaskIcon:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot"},
        ["_KW_PANEL_ICON"] = {varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"}, --处理点击监听
        ["_KW_PANEL_LAYOUT"] = {varName = "_layout"}, --进行移动的
        ["_KW_IMG_ICON"] = {varName = "_imagIcon"},
    }
end

function LuckyTaskIcon:onWinSizeChange()
    -- local iconPos = self:__getLocalPos()
    -- local viewSize = self._panelRoot:getContentSize()
    -- local btnSize = self._layout:getContentSize()
    -- if iconPos.x < btnSize.width/2 then
    --     iconPos.x = btnSize.width/2
    -- elseif iconPos.x > viewSize.width - btnSize.width/2 then
    --     iconPos.x = viewSize.width - btnSize.width/2
    -- end
    -- if iconPos.y < btnSize.height/2 then
    --     iconPos.y = btnSize.height/2
    -- elseif iconPos.y > viewSize.height - btnSize.height/2 then
    --     iconPos.y = viewSize.height - btnSize.height/2
    -- end
    -- self._layout:setPosition(iconPos)
    -- self:__setLocalPos()
end
function LuckyTaskIcon:updateBtnVisivble(event)
    if not event or not event.data or not self or tolua.isnull(self) then
        return
    end
    local isShow = event.data.isShow
    if self:isInGaming() then
        local cfg = XH.lobby:getModule("LuckyTask"):getClientCfg()
        isShow = isShow and cfg.isGameShowIcon
    end
    self._layout:setVisible(isShow)
    if isShow and not self._isReport then
        XH.lobby:getModule("LuckyTask"):reportData("iconShow", self:isInGaming() and "桌面游戏中" or "桌面开局前")
        self._isReport = true
    end
end

function LuckyTaskIcon:onTouchProp(send, eventType)
    if eventType == ccui.TouchEventType.ended then
        self:onClick(send)
    end
end

function LuckyTaskIcon:onMoved(send, endX, endY)
end

function LuckyTaskIcon:onMoveEnded(send, fun, icon)
end

function LuckyTaskIcon:onClick(send, fun, icon)
    XH.lobby:getModule("LuckyTask"):reportData("iconClick", self:isInGaming() and "桌面游戏中" or "桌面开局前")
    XH.viewManager:openView("LuckyTaskView", nil, self:isInGaming() and LuckyTaskDefine.POP_FROM.GAME_START or LuckyTaskDefine.POP_FROM.GAME_NOTSTART)
end

function LuckyTaskIcon:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.oldState ~= event.msg.nowState then
        if event.msg.nowState then
            self:onGameStart()
        else
            self:onGameEnd()
        end
    end
    self:checkAutoShow()
end

function LuckyTaskIcon:onGameStart()
    local cfg = XH.lobby:getModule("LuckyTask"):getClientCfg()
    local bShow = XH.lobby:getModule("LuckyTask"):isHaveTask() and cfg.isGameShowIcon
    self._layout:setVisible(bShow)
end

function LuckyTaskIcon:onGameEnd()
end

function LuckyTaskIcon:isInGaming()
    if CF.roomData:isMatching() then
        return false
    end
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if not selfPlayerData or selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psNull then
        return false
    end
    local playCount = CF.roomData:getPlayCount()
    local isStart = playCount > 0 or CF.roomData:getIsGameStart() or selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psPlaying
    return isStart
end

function LuckyTaskIcon:checkAutoShow()
    if self:isInGaming() or self._isChecked then
        return
    end
    XH.lobby:getModule("AutoPop"):checkInGameAutoShow(self:__getLocalPos())
    XH.lobby:getModule("LuckyTask"):reqTaskList(true)
    self._isChecked = true
end

function LuckyTaskIcon:onEventLuckyTaskIconTip()
    if not self or tolua.isnull(self) then
        return 
    end
    local isHaveAward = XH.lobby:getModule("LuckyTask"):isHaveAward()
    local aniName = isHaveAward and "animation3" or "animation"
    if self._ani then
        self._ani:setAnimation(0, aniName, true)
    end
    self._imagIcon:getChildByName("_KW_IMG_FLAG"):setVisible(isHaveAward and true or false)
end
return LuckyTaskIcon
