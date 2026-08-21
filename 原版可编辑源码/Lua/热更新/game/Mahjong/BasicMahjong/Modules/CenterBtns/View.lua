local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.GameBase.Modules.CenterBtns.View")

function CenterBtnsView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/CenterBtnsLayer.csb"
end

function CenterBtnsView:getBindingInfo()
    local bindingInfo = CenterBtnsView.super.getBindingInfo(self)
    bindingInfo["_KW_BTN_QUICK"] = { varName = "_quickBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQuickBtnClicked"}
    bindingInfo["_KW_BTN_SHOW_SETTLE"] = { varName = "_showSettleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShowSettleBtnClicked"}
    bindingInfo["_KW_CONTINE_TIME"] = { varName = "_uContinueTime"}
    bindingInfo["_KW_TEXT_QUICK_TIPS"] = { varName = "_quickTipsText"}
    bindingInfo["_KW_ANI_NEXT_GAME"] = { varName = "_aniNextGame"}
    bindingInfo["_KW_WAITTIP_POS"] = { varName = "_waittippos"}
    return bindingInfo
end

function CenterBtnsView:getProxyEvents()
    local proxyEvents = CenterBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_SHOW_QUICK_BUTTON", callBack = "onShowQuickButton" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_SHOW_SETTLE_BUTTON", callBack = "onShowSettleButton" }
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStateChanged"}
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("ReadyTip"), eventKeyName = "EVENT_SHOW_FINGER", callBack = "showGuideFinger" }
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    return proxyEvents
end

function CenterBtnsView:onShowQuickButton(event)
    self._quickBtn:setVisible(event.msg.isShow)
    self._quickTipsText:setString(event.msg.playerCount.."人也能开")
end

function CenterBtnsView:onQuickBtnClicked(send,eventType)
    CF.msgManager:sendGameQuickStart(2)
end

function CenterBtnsView:onShowSettleButton()
    self._showSettleBtn:setVisible(true)
    self._nextBtn:setVisible(true)
    self:isShowFinger()
	local curTime = 5
    self._uContinueTime:stopAllActions()
    local lobbyID = CF.areaData:getLobbyID()
    local curCount = CF.roomData:getPlayCount()
    local maxCount = CF.roomData:getMaxPlayCount()
    if curCount ~= maxCount and lobbyID == CF.LOBBY_ID.LISHUI then
        self._uContinueTime:setString(curTime .. "s")
        self._uContinueTime:setVisible(true)
        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            curTime = curTime - 1
            if curTime >= 0 then
                self._uContinueTime:setString(curTime .. "s")
            else
                self._uContinueTime:stopAllActions()
                if CF.roomData:isGoldRoom() then
                    self._uContinueTime:setVisible(false)
				else 
                    self:onNextBtnClicked(nil, ccui.TouchEventType.ended)
				end
            end
        end)
    end
    self._startBtn:setVisible(false)
end

function CenterBtnsView:isShowFinger()
    local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
    if node then
        return 
    end
    self._aniNextGame:setVisible(false)
end

function CenterBtnsView:showGuideFinger()
    if self._aniNextGame then
		self._aniNextGame:setVisible(true)
	end
end

function CenterBtnsView:onNextBtnClicked(send, eventType)
    CenterBtnsView.super.onNextBtnClicked(send, eventType)
    self:onHideSettleButton()
	CF.game:getModule("ShareWin"):closeWin()
    self._aniNextGame:setVisible(false)
end

function CenterBtnsView:onPlayerStart(event)
    if event.msg and not CF.roomData:getIsSeer() and event.msg.seatID == CF.roomData:getSelfSeat() then
        self:onHideSettleButton()
        self._aniNextGame:setVisible(false)
    end
end

function CenterBtnsView:onHideSettleButton()
    self._showSettleBtn:setVisible(false)
    self._nextBtn:setVisible(false)
    self._uContinueTime:setVisible(false)
    self._uContinueTime:stopAllActions()
    --self._aniNextGame:setVisible(false)
end

function CenterBtnsView:onShowSettleBtnClicked(send, eventType)
    self:onHideSettleButton()
    CF.game:getModule("WinLost"):showSettleWindow(true)
    self:updateReadyTipPos()
end

function CenterBtnsView:updateReadyTipPos()
    local scene = display.getRunningScene()
    local node = scene:getChildByName("ScrollTipLayer")
    if node then
        node:move(node:getPositionX(),node:getPositionY() - 265 )
    end 
end 

function CenterBtnsView:getStartBtnVisible()
    -- 匹配中不显示开始按钮
    if CF.roomData:isMatching() then
        return false
    end
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if not selfPlayerData then
        return false
    end
    local isStart = CF.roomData:getIsGameStart()
    local isReady = selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psReady
    return (not isReady) and (not isStart)
end

function CenterBtnsView:onGameStateChanged(event)
    self:updateStarteBtnVisible()
end

function CenterBtnsView:onClearTable(event)
    self:onHideSettleButton()
end

function CenterBtnsView:onPlayerStateChanged(event)
    if not event.msg then
        return
    end
    if event.msg.seatId == CF.roomData:getSelfSeat() then
        if self and self.updateBtnsVisible then
            self:updateBtnsVisible()
        end
    end
end

return CenterBtnsView