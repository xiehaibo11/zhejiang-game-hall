
local TanBtnLayer = CF.gameClass("TanBtnLayer", CF.ViewBase)

function TanBtnLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/TanBtnLayer.csb"
end

function TanBtnLayer:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName="_panelRoot"},
        ["_KW_PANEL_TAN_INFO"] = {varName="_panelTanInfo"},
        ["_KW_PANEL_TAN_BTN"] = {varName="_panelTanBtn"},
        ["_KW_IMG_WAIT_MAI_DI"] = {varName="_imgWaitMaiDi"},
        ["_KW_PANEL_LIU_JU_CNT"] = {varName="_panelLiuJuCnt"},
        ["_KW_TEXT_LIU_JU_CNT"] = {varName="_textLiuJuCnt"},
        ["_KW_BTN_TAN_"] = { varName = "_tanButton", beginIndex = 0, endIndex = 4, onTouch = "onTouchEventTanButton"},
    }
end

function TanBtnLayer:ctor(param)
    param = param or {}
	TanBtnLayer.super.ctor(self,param)
    local bShowTanButton = param.bShowTanButton or false
    self:initUI(bShowTanButton)
end

function TanBtnLayer:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_MAI_DI_BTNS", callBack = "showTanBtnInfo"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_WAIT_MAI_DI_TIP", callBack = "showWaitMaiDiTip"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_WALL_CARD_NUM", callBack = "showWallCardNum"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_RESULT", callBack = "onWinlostResult"},
    }
end

function TanBtnLayer:initUI(bShowTanButton)
    self:showTanBtnInfo({msg = {show = bShowTanButton}})
end

function TanBtnLayer:clearTable()
    self._panelTanInfo:setVisible(false)
    self._panelLiuJuCnt:setVisible(false)
end

function TanBtnLayer:showTanBtnInfo(event)
    local bShow = event.msg.show or false
    self._panelTanInfo:setVisible(bShow)
    self._panelTanBtn:setVisible(bShow)
    self._imgWaitMaiDi:setVisible(false)
end

--等待买底
function TanBtnLayer:showWaitMaiDiTip(event)
    local bShow = event.msg.show or false
    self._panelTanInfo:setVisible(bShow)
    self._imgWaitMaiDi:setVisible(bShow)
    self._panelTanBtn:setVisible(false)
end

--买底
function TanBtnLayer:onTouchEventTanButton(sender, eventType)
    local name = sender:getName()
    local num = CF.StringTool.getNumberSuffixByString(name)
    CF.msgManager:sendPlayerMaiDi(num)
    self._panelTanBtn:setVisible(false)
end

function TanBtnLayer:showWallCardNum(event)
    local bShow = event.msg.show or false
    local nCardNumnCardNum = event.msg.nCardNum or 0
    self._panelLiuJuCnt:setVisible(bShow)
    self._textLiuJuCnt:setString(nCardNumnCardNum)
end

function TanBtnLayer:onWinlostResult(event)
    self:removeSelf()
end

function TanBtnLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 999)
    self:setName("TanBtnLayer")
end

return TanBtnLayer
