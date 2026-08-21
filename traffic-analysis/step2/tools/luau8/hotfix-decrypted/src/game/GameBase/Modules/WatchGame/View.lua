local WatchGameView = CF.gameClass("WatchGameView", CF.ViewBase)

function WatchGameView:ctor()
    WatchGameView.super.ctor(self)
    self._changeLock = false
    self:onEventWatchModelChanged()
end

function WatchGameView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/WatchLayer.csb"
end

function WatchGameView:getBindingInfo()
    return {
        ["KW_PANEL_BG"] = { varName = "_watchPanel"},
        ["_KW_TEXT_SPEED"] = { varName = "_speedText"},
        ["_KW_BTN_SPEED"] = { varName = "_btnSpeed", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSpeedBtnClick"},
        ["_KW_BTN_REAL"] = { varName = "_btnReal", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRealWatchClick"},
        ["_KW_BTN_DELAY"] = { varName = "_btnDelay", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDelayWatchClick"},
    }
end

function WatchGameView:getProxyEvents()
    return {
        { module = CF.game:getModule("WatchGame"), eventKeyName = "EVENT_PLAY_BACK_SPEED_CHANGED", callBack = "onEventSpeedChanged" },
        { module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged" },
        { module = CF.game:getModule("WatchGame"), eventKeyName = "EVENT_WATCH_MODEL_CHANGE", callBack = "onEventWatchModelChanged" },
    }
end

function WatchGameView:onEventSpeedChanged(event)
    local nowSpeed = tostring(CF.game:getModule("WatchGame"):getPlayBackSpeed())
    self._speedText:setText("X " .. nowSpeed)
end

function WatchGameView:onSpeedBtnClick(send, eventType)
    local maxSpeed = 4
    local nowSpeed = CF.game:getModule("WatchGame"):getPlayBackSpeed()
    if nowSpeed < maxSpeed then
        nowSpeed = nowSpeed + 1
    else
        nowSpeed = 1
    end
    CF.game:getModule("WatchGame"):fast(nowSpeed)
end

function WatchGameView:onPauseBtnClick(send, eventType)
    CF.game:getModule("WatchGame"):pause()
    self._btnPlay:setVisible(true)
    self._btnPause:setVisible(false)
end

function WatchGameView:onPlayBtnClick(send, eventType)
    CF.game:getModule("WatchGame"):play()
    self._btnPlay:setVisible(false)
    self._btnPause:setVisible(true)
end

function WatchGameView:onExitBtnClick(send, eventType)
    CF.game:getModule("WatchGame"):stopPlayback()
    CF.game:leaveGame()
end

function WatchGameView:onEventProcessChanged(send, eventType)
    local allCount = CF.game:getModule("WatchGame"):getAllMsgCount()
    local curCount = CF.game:getModule("WatchGame"):getPlayedMsgCount()
end

-- 切换到实时观战
function WatchGameView:onRealWatchClick(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._changeLock then
        XH.TipTool.showToast("您操作的太频繁了，请稍后再试")
        return
    end
    self:lockChangeModel()
    CF.game:getModule("WatchGame"):changeToRealWatch()
end

-- 切换到延时观战
function WatchGameView:onDelayWatchClick(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if CF.roomData and (CF.roomData:getWatchRound() <= 1 or CF.roomData:isDelayWatch()) then
        CF.TipTool.showToast("暂无延时数据可查看")
        return
    end
    if CF.roomData:getIsFastPlay() then
        return
    end
    if self._changeLock then
        XH.TipTool.showToast("您操作的太频繁了，请稍后再试")
        return
    end
    self:lockChangeModel()
    CF.TipTool.showLoading()
    CF.game:getModule("WatchGame"):reqDelayWatch()
end

function WatchGameView:onPlayCountChanged(event)
    if CF.roomData and CF.roomData:isDelayWatch() then
        CF.UITool.resetGray(self._btnDelay)
        return
    end
    local playCount = CF.roomData:getWatchRound()
    if playCount <= 1 then
        self._btnDelay:setTouchEnabled(false)
        CF.UITool.gray(self._btnDelay)
    else
        CF.UITool.resetGray(self._btnDelay)
        self:setButtonState(self._btnDelay, true)
    end
end

function WatchGameView:onEventWatchModelChanged(event)
    local isDelay = CF.roomData:isDelayWatch()
    if CF.roomData:getWatchRound() <= 1 then
        self._btnDelay:setTouchEnabled(false)
        CF.UITool.gray(self._btnDelay)
    else
        self:setButtonState(self._btnDelay, not isDelay)
    end
    if isDelay then
        CF.UITool.resetGray(self._btnDelay)
        self:setButtonState(self._btnDelay, not isDelay)
    end
    self:setButtonState(self._btnReal, isDelay)
    -- self._btnSpeed:setVisible(isDelay)
    CF.game:getModule("WatchGame"):fast(isDelay and 1 or 4)
end

function WatchGameView:setButtonState(node, enable)
    if not node then
        return
    end
    node:setEnabled(enable)
    node:setTouchEnabled(enable)
    node:setBright(enable)
end

function WatchGameView:lockChangeModel()
    self._changeLock = true
    self:performWithDelay(function()
        if not self or tolua.isnull(self) then
            return
        end
        self._changeLock = false
    end, 2)
end

return WatchGameView�