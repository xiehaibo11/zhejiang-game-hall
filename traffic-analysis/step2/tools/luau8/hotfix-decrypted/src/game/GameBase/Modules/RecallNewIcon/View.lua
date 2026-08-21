local RecallNewIconView = CF.gameClass("RecallNewIconView", CF.ViewBase)

function RecallNewIconView:ctor()
    RecallNewIconView.super.ctor(self)
    self:AdaptationIphoneX()

    self._layout:setVisible(false)
    self:updateBtnVisivble()

    local module = CF.game:getModule("IconAnimationManager")
    if module:GetPlayAnimationIndex() == module.PlayType.RECALLNEW then
        local aniPath = "animation/Lobby/Base/zzb_hghl_icon/"
        local aniName = "animation"
        local params = { path = aniPath, tex = "zzb_hghl_icon.json", ske = "zzb_hghl_icon.atlas", armatureName = aniName, scale = 1 }
        local ani = display.playDargonBonesSpine(params)
        ani:setPosition(self._KW_ANI_ICON:getContentSize().width / 2, -30)
        self._KW_ANI_ICON:addChild(ani)
        self._KW_ANI_ICON:setVisible(true)
        self._KW_IMG_ICON:setVisible(false)
    else
        self._KW_ANI_ICON:setVisible(false)
        self._KW_IMG_ICON:setVisible(true)
    end
end

function RecallNewIconView:getAdaptationConfig()
    return {
        { node = self._KW_POS, bRight = true, bHalf = true },
    }
end

function RecallNewIconView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/RecallNewIcon.csb"
end

function RecallNewIconView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "updateBtnVisivble" }
    }
end

function RecallNewIconView:getBindingInfo()
    return {
        ["_KW_PANEL_ICON"] = { varName = "_KW_PANEL_ICON", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick" },
        ["_KW_ANI_ICON"] = { varName = "_KW_ANI_ICON" },
        ["_KW_PANEL_ROOT"] = { varName = "_panelRoot" },
        ["_KW_NODE_ANI"] = { varName = "_nodeAni" },
        ["_KW_IMG_ICON"] = { varName = "_KW_IMG_ICON" }, --处理点击监听
        ["_KW_PANEL_LAYOUT"] = { varName = "_layout" }, --进行移动的
        ["_KW_RED_POINT"] = { varName = "_KW_RED_POINT" },
        ["_KW_POS"] = { varName = "_KW_POS" },
    }
end

function RecallNewIconView:onGameStartChanged(event)
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

function RecallNewIconView:onGameStart()
    self._layout:setVisible(false)
end

function RecallNewIconView:onGameEnd()
end

function RecallNewIconView:updateBtnVisivble()
    if self:isInGaming() then
        return
    end
    self._layout:setVisible(XH.lobby:getModule("RecallNew"):isInAct())
    self._KW_RED_POINT:setVisible(XH.lobby:getModule("RecallNew"):isShowRedPointList())
end

function RecallNewIconView:isInGaming()
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

function RecallNewIconView:onTouchProp(send, eventType)
    self:onTouch(send, eventType)
end

function RecallNewIconView:onMoved(send, endX, endY)
end

function RecallNewIconView:onMoveEnded(send, fun, icon)
end

function RecallNewIconView:onClick(send, fun, icon)
    XH.viewManager:openView("RecallNewView", nil, nil, "游戏区")
end

function RecallNewIconView:updatePositionX(posX)
    self._layout:setPositionX(posX)
end

return RecallNewIconView/