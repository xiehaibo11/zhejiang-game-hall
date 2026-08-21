
local TableInfoLayer = class("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/WaHua/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_BTN_TAO_HUA"] = {varName="_btnTaoHua", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnTaoHua"},
        ["_KW_PANEL_OFFLINE_TIP"] = {varName="_panelOfflineTip"},
        ["_KW_TEXT_OFFLINE_TIME"] = {varName="_textOfflineTime"},
        ["_KW_PANEL_CUR_DAO_INFO"] = {varName="_panelCurDaoShu"},
        ["_KW_TEXT_CUR_DAO"] = {varName="_textCurDaoSHu"},
    }
end

function TableInfoLayer:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CUR_DAO_SHU", callBack = "showCurDaoShu" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_BTN_TAO_HUA", callBack = "showBtnTaoHua" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHAO_SHI_TAO_HUA", callBack = "showChaoShiTaoHua" },
        { module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_RESULT", callBack = "onWinlostResult"},
        { module = CF.game:getModule("WatchGame"), eventKeyName = "EVENT_WATCH_CLEAR_TABLEUI", callBack = "onPlayerStart" },
    }
end

function TableInfoLayer:getAdaptationConfig()
    return {
        {node = self._panelCurDaoShu, bRight = false, bHalf = false},
    }
end

function TableInfoLayer:onPlayerStart()
    self._panelOfflineTip:setVisible(false)
    self._panelCurDaoShu:setVisible(false)
    self._btnTaoHua:setVisible(false)
end

function TableInfoLayer:showCurDaoShu(event)
    local bShow = event.msg.bShow or false
    local nCurDaoShu = event.msg.data or 0
    self._panelCurDaoShu:setVisible(bShow)
    self._textCurDaoSHu:setString(nCurDaoShu)
end

function TableInfoLayer:showBtnTaoHua(event)
    local bShow = event.msg.bShow or false
    self._btnTaoHua:setVisible(bShow)
end

function TableInfoLayer:onBtnTaoHua(sender, eventType)
    self._btnTaoHua:setVisible(false)
    CF.msgManager:sendTaoHua(true)
end

function TableInfoLayer:onWinlostResult(event)
    self._btnTaoHua:setVisible(false)
end

function TableInfoLayer:showChaoShiTaoHua(event)
    local nTime = event.msg.nTime
    local bShow = event.msg.bShow
    if nTime <= 0 or not bShow then
        self._panelOfflineTip:setVisible(false)
        self._textOfflineTime:stopAllActions()
        return
    end
    self._panelOfflineTip:setVisible(true)
    self._textOfflineTime:setString(string.format("%02d", nTime))
    self._textOfflineTime:stopAllActions()
    self._textOfflineTime:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1),
        cc.CallFunc:create(function()
            nTime = nTime - 1
            self._textOfflineTime:setString(string.format("%02d",nTime))
            if nTime <= 0 then
                self._panelOfflineTip:setVisible(false)
                self._textOfflineTime:stopAllActions()
            end
        end))))
end

return TableInfoLayer