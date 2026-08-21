local LuckyMissionIconView = CF.gameClass("LuckyMissionIconView", CF.ViewBase)

function LuckyMissionIconView:ctor()
    LuckyMissionIconView.super.ctor(self)
    self:AdaptationIphoneX()

    self._layout:setVisible(false)
    self:updateBtnVisivble()

    local module = CF.game:getModule("IconAnimationManager")
    local aniPath = "animation/Lobby/Base/zzb_flrw_icon/"
    local aniName = module:GetPlayAnimationIndex() == module.PlayType.LuckyMission and "animation" or "animation2"
    local params = { path = aniPath, tex = "zzb_flrw_icon.json", ske = "zzb_flrw_icon.atlas", armatureName = aniName, scale = 1 }
    local ani = display.playDargonBonesSpine(params)
    ani:setPosition(self._KW_PANEL_ANI:getContentSize().width / 2, -30)
    self._KW_PANEL_ANI:addChild(ani)
end

function LuckyMissionIconView:getAdaptationConfig()
    return {
        { node = self._KW_POS, bRight = true, bHalf = true },
    }
end

function LuckyMissionIconView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/LuckyMissionIcon.csb"
end

function LuckyMissionIconView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "updateBtnVisivble" },
    }
end

function LuckyMissionIconView:getBindingInfo()
    return {
        ["_KW_PANEL_ANI"] = { varName = "_KW_PANEL_ANI" },
        ["_KW_PANEL_ICON"] = { varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick" },
        ["_KW_PANEL_LAYOUT"] = { varName = "_layout" },
        ["_KW_RED_POINT"] = { varName = "_KW_RED_POINT" },
        ["_KW_POS"] = { varName = "_KW_POS" },
    }
end

function LuckyMissionIconView:onGameStartChanged(event)
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
end

function LuckyMissionIconView:onGameStart()
    self._layout:setVisible(false)
end

function LuckyMissionIconView:onGameEnd()
end

function LuckyMissionIconView:updateBtnVisivble()
    if not self or tolua.isnull(self) then
        return
    end
    if self:isInGaming() then
        return
    end
    if CF.roomData:isGoldRoom() then
        return
    end
    self._layout:setVisible(XH.lobby:getModule("LuckyMission"):isInAct())
    self._KW_RED_POINT:setVisible(XH.lobby:getModule("LuckyMission"):isShowRedPointList())
    if self._reportShow == nil and XH.lobby:getModule("LuckyMission"):isInAct() then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092201, { page = "游戏区" })
        self._reportShow = true
    end
end

function LuckyMissionIconView:isInGaming()
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

function LuckyMissionIconView:onTouchProp(send, eventType)
    self:onTouch(send, eventType)
end

function LuckyMissionIconView:onMoved(send, endX, endY)
end

function LuckyMissionIconView:onMoveEnded(send, fun, icon)
end

function LuckyMissionIconView:onClick(send, fun, icon)
    XH.viewManager:openView("LuckyMissionView", nil, nil, "游戏区")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092202, { page = "游戏区" })
end

function LuckyMissionIconView:updatePositionX(posX)
    self._layout:setPositionX(posX)
end

return LuckyMissionIconView�