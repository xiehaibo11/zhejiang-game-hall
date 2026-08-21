local PlayBackView = CF.gameClass("PlayBackView", CF.ViewBase)

function PlayBackView:ctor()
    PlayBackView.super.ctor(self)
end

function PlayBackView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PlayBackLayer.csb"
end

function PlayBackView:getBindingInfo()
    return {
        ["KW_IMG_BG"] = { varName = "_playBackPanel"},
        ["_KW_TEXT_SPEED"] = { varName = "_speedText"},
        ["_KW_PLAY_BACK_SLIDER"] = { varName = "_playBackSlider", type = CF.UI_TYPE.NODE, onTouchEnded = "onSliderTouchEnded"},
        ["_KW_BTN_MINUS_SPEED"] = { varName = "_btnSlow", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSlowBtnClick"},
        ["_KW_BTN_ADD_SPEED"] = { varName = "_btnFast", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onFastBtnClick"},
        ["_KW_BTN_PAUSE_BACK"] = { varName = "_btnPause", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onPauseBtnClick"},
        ["_KW_BTN_PLAY_BACK"] = { varName = "_btnPlay", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onPlayBtnClick"},
        ["_KW_BTN_PLAY_BACK_EXIT"] = { varName = "_btnExit", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitBtnClick"},
    }
end

function PlayBackView:getProxyEvents()
    return {
        { module = CF.game:getModule("PlayBack"), eventKeyName = "EVENT_PLAY_BACK_SPEED_CHANGED", callBack = "onEventSpeedChanged" },
        { module = CF.game:getModule("PlayBack"), eventKeyName = "EVENT_PLAY_BACK_PROCESS_CHANGED", callBack = "onEventProcessChanged" },
    }
end

function PlayBackView:onEventSpeedChanged(event)
    local nowSpeed = tostring(CF.game:getModule("PlayBack"):getPlayBackSpeed())
    self._speedText:setText("X"..nowSpeed)
end

function PlayBackView:onSlowBtnClick(send, eventType)
    local minSpeed = 0.25
    local nowSpeed = CF.game:getModule("PlayBack"):getPlayBackSpeed()
    if nowSpeed > minSpeed then
        nowSpeed = nowSpeed / 2.0
    else
        nowSpeed = minSpeed
    end
    CF.game:getModule("PlayBack"):slow(nowSpeed)
end

function PlayBackView:onFastBtnClick(send, eventType)
    local maxSpeed = 4
    local nowSpeed = CF.game:getModule("PlayBack"):getPlayBackSpeed()
    if nowSpeed < maxSpeed then
        nowSpeed = nowSpeed * 2
    else
        nowSpeed = maxSpeed
    end
    CF.game:getModule("PlayBack"):fast(nowSpeed)
end

function PlayBackView:onPauseBtnClick(send, eventType)
    CF.game:getModule("PlayBack"):pause()
    self._btnPlay:setVisible(true)
    self._btnPause:setVisible(false)
end

function PlayBackView:onPlayBtnClick(send, eventType)
    CF.game:getModule("PlayBack"):play()
    self._btnPlay:setVisible(false)
    self._btnPause:setVisible(true)
end

function PlayBackView:onExitBtnClick(send, eventType)
    CF.game:getModule("PlayBack"):stopPlayback()

    local startTime = cc.UserDefault:getInstance():getIntegerForKey("KW_PLAYBACK_STARTTIME", os.time())
    local data = {
        duration = os.time() - startTime,
        item_id = CF.roomData and CF.roomData:getGameID() or 0
    }
    cc.UserDefault:getInstance():getIntegerForKey("KW_PLAYBACK_STARTTIME", os.time())
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041703, data)
    CF.game:leaveGame()
end

function PlayBackView:onEventProcessChanged(send, eventType)
    local allCount = CF.game:getModule("PlayBack"):getAllMsgCount()
    local curCount = CF.game:getModule("PlayBack"):getPlayedMsgCount()

    self._playBackSlider:setMaxPercent(allCount)
    self._playBackSlider:setPercent(curCount)
end

function PlayBackView:onSliderTouchEnded(send, eventType)
    local percent = self._playBackSlider:getPercent()
    if percent == CF.game:getModule("PlayBack"):getPlayedMsgCount() then
        return
    end

    CF.game:getModule("PlayBack"):fastPlay(percent)
end

return PlayBackView