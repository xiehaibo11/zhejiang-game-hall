local CenterBtnsView = CF.gameClass("CenterBtnsView", CF.ViewBase)

function CenterBtnsView:ctor()
    CenterBtnsView.super.ctor(self)
    self._leftTime = self:getMaxTime()
    self:startSchedule()
    self:initUI()
end

function CenterBtnsView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CenterBtnsLayer.csb"
end

function CenterBtnsView:getBindingInfo()
    return {
        ["_KW_PANEL_TOP_BTNS"] = { varName = "_centerBottomBtns"},
        ["_KW_BTN_INVITE"] = { varName = "_inviteBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onInviteBtnClicked", monitorPoint = CF.MonitorPoint.TYPE_GAME_INVITE},
        ["_KW_BTN_START"] = { varName = "_startBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onStartBtnClicked"},
        ["_KW_BTN_COPY"] = { varName = "_copyBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCopyBtnClicked"},
        ["_KW_IMG_COPY_TIPS"] = { varName = "_imgCopyTips"},
        ["_KW_BTN_CONTINUE"] = { varName = "_nextBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNextBtnClicked"},
        ["_KW_BTN_CHANGE_SEAT"] = { varName = "_KW_BTN_CHANGE_SEAT", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onChangeSeatBtnClicked"},
    }
end

function CenterBtnsView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "onPlayerListChanged" },
        { module = CF.roomData, eventKeyName = "EVENT_PLAYER_STATE_CHANGED", callBack = "onPlayerStateChanged" },
        { module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" },
        { module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue" },
        { module = CF.getLobbyModule("Guide"), eventKeyName = "EVENT_UPDATE_BOX_ROOM_GUIDE_COPY", callBack = "onCopyBtnClicked" },
        { module = CF.getLobbyModule("Guide"), eventKeyName = "EVENT_UPDATE_BOX_ROOM_GUIDE_INVITE", callBack = "onInviteBtnClicked" },
        { module = CF.roomData, eventKeyName = "EVENT_GAME_UPDATE_SEER", callBack = "onUpdateBtnVisible"},
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart" },
        { module = CF.game:getModule("Player"), eventKeyName = "EVENT_PLAYER_READY", callBack = "onPlayerReady"},
        { module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_UPDATE_CHANGESEAT", callBack = "updateStarteBtnVisible"},
    }
end

function CenterBtnsView:initUI()

end

function CenterBtnsView:flushChangeSeatState()
    if not CF.roomData:isBianChaDKGoldRoom() or CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE then
        return
    end
    if CF.roomData:isNewUI() then
        self._KW_BTN_CHANGE_SEAT:setPositionY(330)
    end
    self._KW_BTN_CHANGE_SEAT:setVisible(false)
    --游戏中不能换桌
    local isGameStart = false
    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer then
        if selfPlayer:getStateEx() == selfPlayer.USER_STATEEX.psPlaying then
            isGameStart = true
        end
    end
    if CF.roomData:getIsGameStart() then
        isGameStart = true
    end
    if self:isWinLostNewUIVisible() then
        isGameStart = true
    end

    if CF.roomData:is220Model() then
        isGameStart = true
    end

    self._KW_BTN_CHANGE_SEAT:setVisible(not isGameStart)
end

function CenterBtnsView:startSchedule()
    cc.Director:getInstance():getScheduler():scheduleScriptFunc(
    function()
        if not self or tolua.isnull(self) then
            return
        end
        self._leftTime = self._leftTime - 1
    end,
    1,
    false
    )
end

function CenterBtnsView:getMaxTime()
    return 1
end

function CenterBtnsView:onChangeSeatBtnClicked()
    if self._leftTime > 0 then
        XH.TipTool.showToast("换桌过快，请稍后重试~")
        return
    end
    self._leftTime = self:getMaxTime()
    self._KW_BTN_CHANGE_SEAT:setVisible(false)
    local setModule = CF.game:getModule("Setting")
    setModule:doChangeTable(setModule.ChangeTabSource.CenterBtn)
end

-- 旁观玩家隐藏桌面按钮
function CenterBtnsView:onUpdateBtnVisible()
    if not self or tolua.isnull(self) then
        return
    end
    if not tolua.isnull(self._inviteBtn) then
        self._inviteBtn:setVisible(false)
    end
    if not tolua.isnull(self._copyBtn) then
        self._copyBtn:setVisible(false)
    end
    if not tolua.isnull(self._startBtn) then
        self._startBtn:setVisible(false)
    end
end

function CenterBtnsView:onPlayerListChanged()
    if self and self.updateBtnsVisible then
        self:updateBtnsVisible()
    end
end

function CenterBtnsView:onPlayerStateChanged()
    if self and self.updateBtnsVisible then
        self:updateBtnsVisible()
    end
end

function CenterBtnsView:onMatchStateChanged()
    self:updateStarteBtnVisible()
end

function CenterBtnsView:getInviteBtnVisible()
    if CF.roomData:isGoldRoom() or CF.roomData:getIsSeer() then
        return false
    end
    
    if CF.roomData:getPlayCount() ~= 0 then
        return false
    end

    return CF.roomData:getChairs() > CF.roomData:getCurPlayerCount()
end

function CenterBtnsView:getCopyBtnVisible()
    return self:getInviteBtnVisible()
end

function CenterBtnsView:getStartBtnVisible()
    -- 匹配中不显示开始按钮
    if CF.roomData:isMatching() or CF.roomData:getIsSeer() then
        return false
    end
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if not selfPlayerData then
        return false
    end
    if self:isWinLostNewUIVisible() then
        return false
    end
    return selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psWait
end

function CenterBtnsView:isWinLostNewUIVisible()
    if CF.roomData:isNewUI() then
        local winlostViewNew = display.getRunningScene():getChildByName("GameWinLostLayerNew")
        if winlostViewNew and not tolua.isnull(winlostViewNew) then
            return true
        end
    end
    return false
end

function CenterBtnsView:updateInviteBtnVisible()
    self._inviteBtn:setVisible(self:getInviteBtnVisible())
    self:updateNewPlayerInviteGuide()
end

function CenterBtnsView:updateCopyBtnVisible()
    self._copyBtn:setVisible(self:getCopyBtnVisible())
end

function CenterBtnsView:updateStarteBtnVisible()
    self:flushChangeSeatState()
    self._startBtn:setVisible(self:getStartBtnVisible())
end

function CenterBtnsView:updateBtnsVisible()
    self:updateInviteBtnVisible()
    self:updateCopyBtnVisible()
    self:updateStarteBtnVisible()
end

function CenterBtnsView:onInviteBtnClicked(send, eventType)
    -- 触发延迟
    if CF.game:getModule("BoxConversionRate") then
        CF.game:getModule("BoxConversionRate"):trackDelay()
    end
    if CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240115)
    end
    CF.game:getModule("CenterBtns"):onInviteEvent()
    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_INVITE)  
end

function CenterBtnsView:onStartBtnClicked(send, eventType)
    CF.game:getModule("CenterBtns"):onStartGameEvent()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.YUEJU_08) 
end

function CenterBtnsView:onNextBtnClicked(send, eventType)
    if CF.roomData and CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
        CF.game:getModule("WatchGame"):changeToRealWatch()
        return
    end
    CF.game:getModule("CenterBtns"):onStartGameEvent()
end

function CenterBtnsView:onCopyBtnClicked(send, eventType)
    -- 触发延迟
    if CF.game:getModule("BoxConversionRate") then
        CF.game:getModule("BoxConversionRate"):trackDelay()
    end
    if CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240114)
    end
    CF.game:getModule("CenterBtns"):onCopyEvent()   
    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_COPY)
end

-- 续桌成功，刷新开始按钮状态
function CenterBtnsView:onGameContinue(event)
    local msg = event.msg 
    if msg.bSuccess then
        self._startBtn:setVisible(self:getStartBtnVisible())
    end
end

function CenterBtnsView:updateNewPlayerInviteGuide()
    if not self._inviteBtn or self._inviteBtn:isVisible() == false then
        return
    end
    CF.UITool.setVisible(self._inviteBtn, "_KW_TIPS_INVITE", false)
end

function CenterBtnsView:onGameStart()
    if self._KW_BTN_CHANGE_SEAT then
        self._KW_BTN_CHANGE_SEAT:setVisible(false)
    end
end

function CenterBtnsView:onPlayerReady(event)
    local seatId = event.msg.seatId
    if seatId == CF.roomData:getSelfSeat() then 
        local isReady = event.msg.isReady
        self:flushChangeSeatState()
        self._startBtn:setVisible(not isReady)
    end 
 end


return CenterBtnsView   �#  