
local TableInfoLayer = class("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_IMG_LEFT_SHENG_PAI"] = {varName="_imgLeftShengPai"},
        ["_KW_TXT_LEFT_SHENG_PAI"] = {varName="_txtLeftShengPai"},
        ["_KW_PANEL_MAI_DI"] = {varName="_panelMaiDi"},
        ["_KW_PANEL_MAI_DI_SELECT"] = {varName="_panelMaiDiSelect"},
        ["_KW_PANEL_MAI_DI_WAIT"] = {varName="_panelMaiDiWait"},
        ["_KW_BTN_MAI_DI"] = {varName="_btnMaiDi", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnMaiDi"},
        ["_KW_BTN_MAI_DI_CANCEL"] = {varName="_btnMaiDiCancel", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnMaiDiCancel"},
        ["_KW_TEXT_WAIT_MAI_DI"] = {varName="_txtWaitMaiDi"},
        ["_KW_TEXT_WAIT_OHTER_MAI_DI"] = {varName="_txtWaitOtherMaiDi"},
        ["_KW_BTN_EARLY_START"] = {varName="_btnEarlyStart", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnEarlyStart"},
        ["_KW_TEXT_TIP_EARLY_START"] = {varName="_txtTipEarlyStart"},
    }
end

function TableInfoLayer:ctor(param)
    param = param or {}
	TableInfoLayer.super.ctor(self, param)

    self._isMaiDi = false
end

function TableInfoLayer:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable" },
        { module = CF.roomData, eventKeyName = "EVENT_PLAYER_STATE_CHANGED", callBack = "onReadyStateChanged" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SHENG_PAI_INFO", callBack = "showShengPaiInfo" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_WAITTING_MAIDI", callBack = "showWaittingMaiDi" },
        { module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_SHOW_SETTLE_BUTTON", callBack = "onShowSettleButton" },
    }
end

function TableInfoLayer:clearTable()
    self._imgLeftShengPai:setVisible(false)
    self._panelMaiDi:setVisible(false)
    self._btnEarlyStart:setVisible(false)
    self._isMaiDi = false
    self._txtWaitMaiDi:setVisible(false)
    self._txtWaitOtherMaiDi:setVisible(false)
    self._panelMaiDiSelect:setVisible(false)
end

--生牌信息
function TableInfoLayer:showShengPaiInfo(event)
    if not CF.configData:isHaveShengPaiJieDuan() then
        return
    end
    local bShow = event.msg.show or false
    local nLeftShengPaiCount = event.msg.cnt or 0
    --是否显示生牌信息ui
    self._imgLeftShengPai:setVisible(bShow)
    --生牌张数
    if bShow then
        self._txtLeftShengPai:setString(nLeftShengPaiCount)
    end
end

--等待买底
function TableInfoLayer:showWaittingMaiDi(event)
    if not CF.configData:isHaveMaiDi() then
        return
    end
    self._panelMaiDi:setVisible(event.msg.bShow)
    local data = event.msg.data
    if not data then return end
    --self._txtWaitMaiDi:setVisible(false)
    --self._txtWaitOtherMaiDi:setVisible(false)
    --self._panelMaiDiSelect:setVisible(false)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:getBankerSeat() == CF.roomData:getSelfSeat() then
        self._panelMaiDiWait:setVisible(true)
        self._txtWaitMaiDi:setVisible(true)
    elseif data.nSeat == CF.roomData:getSelfSeat() then
        if data.maiDi == 1 then
            self._panelMaiDiSelect:setVisible(not self._isMaiDi)
            if self._isMaiDi then
                self._panelMaiDiWait:setVisible(true)
                self._txtWaitOtherMaiDi:setVisible(true)
            end
        elseif data.maiDi == 2 then
            self._panelMaiDiWait:setVisible(true)
            self._txtWaitOtherMaiDi:setVisible(true)
        end
    end
end

--推倒胡买底
function TableInfoLayer:onBtnMaiDi(sender, eventType)
    if not CF.configData:isHaveMaiDi() then
        return
    end
    CF.msgManager:sendPlayerMaiDi(2)
    self._panelMaiDiSelect:setVisible(false)
    self._isMaiDi = true
end

--推倒胡取消买底
function TableInfoLayer:onBtnMaiDiCancel(sender, eventType)
    if not CF.configData:isHaveMaiDi() then
        return
    end
    CF.msgManager:sendPlayerMaiDi(1)
    self._panelMaiDiSelect:setVisible(false)
    self._isMaiDi = true
end

function TableInfoLayer:earlyBeginStart(event)
    local nPlayerCnt = event.msg.nPlayerCnt
    local bShow = event.msg.bShow or false
    self._btnEarlyStart:setVisible(bShow)
    if bShow then
        if nPlayerCnt ~= CF.roomData:getMaxPlayer() and nPlayerCnt >= CF.roomData:getMinPlayer() then
            local strTip = string.format("%d人也能开!", nPlayerCnt)
            self._txtTipEarlyStart:setString(strTip)
        end
    end
end

function TableInfoLayer:onBtnEarlyStart(sender, eventType)
    CF.msgManager:sendGameStart()
    CF.msgManager:sendReqEarlyStart()
end

function TableInfoLayer:onReadyStateChanged(event)
    local seatId = event.msg.seatId
    if seatId ~= CF.roomData:getSelfSeat() then
        return
    end
    local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
    if playerData then
        if playerData:getStateEx() == playerData.USER_STATEEX.psReady then
            self._btnEarlyStart:setPositionY(388)
        else
            self._btnEarlyStart:setPositionY(528)
        end
    end
end

function TableInfoLayer:onShowSettleButton(event)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:getShengPaiJieDuan() then
        self._imgLeftShengPai:setVisible(true)
    end
end

return TableInfoLayer