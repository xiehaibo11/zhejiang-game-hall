local RightBtnsView = CF.gameClass("RightBtnsView", CF.ViewBase)
local FIRSTVOICETIPINGAME = "FIRST_GETSEX" .. CF.areaData:getAreaID()

function RightBtnsView:ctor()
    RightBtnsView.super.ctor(self)
    self._imMessageIcon = nil
    self:initUI()
    self._isMenuOpen = false
    self._panelTouch:setSwallowTouches(false)
end

function RightBtnsView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/RightBtnsLayer.csb"
end

function RightBtnsView:getBindingInfo()
    return {
        ["_KW_TOUCH_LAYER"] = {varName = "_panelTouch", onTouchEnded = "onTouchLayer"},
        ["_KW_PANEL_RIGHT_CENTER_BTNS"] = {varName = "_KW_PANEL_RIGHT_CENTER_BTNS"},
        ["_KW_PANEL_RIGHT_TOP_BTNS"] = {varName = "_KW_PANEL_RIGHT_TOP_BTNS"},
        ["_KW_PANEL_RIGHT_BOTTOM_BTNS"] = {varName = "_KW_PANEL_RIGHT_BOTTOM_BTNS"},
        ["_KW_BTN_REVENUE"] = {varName = "_revenueBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRevenueBtnClicked"},
        ["_KW_BTN_INFO"] = {varName = "_btnInfo", type = CF.UI_TYPE.BUTTON, onTouch = "onBtnInfo"},
        ["_KW_BTN_MSG"] = {varName = "_msgBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onMsgBtnClicked"},
        ["_KW_IMG_MENU_BACK"] = {varName = "_imgMenuBack"},
        ["_KW_IMG_TIP_BACK"] = {varName = "_imgTipBack"},
        ["_KW_TEXT_TIP"] = {varName = "_textTip"},
        ["_KW_BTN_MENU"] = {varName = "_menuBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onMenuBtnClicked"},
        ["_KW_BTN_SET"] = {varName = "_setBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSetBtnClicked"},
        ["_KW_BTN_RULE"] = {varName = "_ruleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRuleBtnClicked"},
        ["_KW_BTN_EXIT"] = {varName = "_exitBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitBtnClicked"},
        ["_KW_BTN_MULT"] = {varName = "_multBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onMultBtnClicked"}
    }
end

function RightBtnsView:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TOTAL_WINLOST", callBack = "onTouchLayer"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_RULE_CHANGED", callBack = "onGameRuleChanged"},
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_FLAG_SHOW", callBack = "onMatchFlagShowEvent"},
        {module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged"}
    }
end

function RightBtnsView:getAdaptationConfig()
    return {
        {node = self._KW_PANEL_RIGHT_CENTER_BTNS, bRight = true, bHalf = false},
        {node = self._KW_PANEL_RIGHT_TOP_BTNS, bRight = true, bHalf = false},
        {node = self._KW_PANEL_RIGHT_BOTTOM_BTNS, bRight = true, bHalf = false}
    }
end

function RightBtnsView:initUI()
    if CF.roomData:isTeaching() then
        self:updateRightBtns(true)
    else
        self:updateRightBtns(false)
    end
    self:updateMenuBtn()
    self._imgTipBack:setVisible(false)
end

function RightBtnsView:updateRightBtns(show)
    self._multBtn:setVisible(show)
    self._revenueBtn:setVisible(show)
    self._btnInfo:setVisible(show)
    self._msgBtn:setVisible(show)
end

function RightBtnsView:updateMenuBtn()
    self._setBtn:setVisible(self._isMenuOpen)
    self._ruleBtn:setVisible(self._isMenuOpen)
    self._exitBtn:setVisible(self._isMenuOpen)
    self._imgMenuBack:setVisible(self._isMenuOpen)
end

function RightBtnsView:onRevenueBtnClicked(send, eventType)
    CF.game:getModule("GameLayer"):sendGameRevenueReq()
    CF.game:getModule("IconAnimationManager"):reportData("流水")
end

function RightBtnsView:onMsgBtnClicked(send, eventType)
    CF.gameRequire("Modules.Chat.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("聊天")
end

function RightBtnsView:onTouchLayer()
    if self._isMenuOpen == true then
        self._isMenuOpen = false
        self:updateMenuBtn()
    end
end

function RightBtnsView:onMenuBtnClicked(send, eventType)
    self._isMenuOpen = not self._isMenuOpen
    self:updateMenuBtn()
    if self._isMenuOpen then
        CF.game:getModule("IconAnimationManager"):reportData("菜单")
    end
end

function RightBtnsView:onRuleBtnClicked(send, eventType)
    CF.gameRequire("Modules.Rule.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("菜单_规则")
end

function RightBtnsView:onExitBtnClicked(send, eventType)
    CF.game:getModule("IconAnimationManager"):reportData("菜单_退出")
    if CF.game:getModule("GameLayer"):checkIsInRevive() then
        -- 复活中，可直接离开
        CF.game:getModule("GameLayer"):sendRevive(0)
        CF.game:getModule("Setting"):doReturnToLobby()
        return
    end

    if CF.roomData:isMatching() then
        CF.game:getModule("Setting"):doReturnToLobby()
    elseif CF.roomData:getIsGameStart() then
        CF.TipTool.showToast("正在对局中，无法退出牌桌")
    else
        CF.game:getModule("Setting"):doReturnToLobby()
    end
end

function RightBtnsView:onSetBtnClicked(send, eventType)
    local voiceTip = self._setBtn:getParent():getChildByName("KW_IMG_BUBBLETIP")
    if voiceTip ~= nil then
        self._setBtn:getParent():removeChildByName("KW_IMG_BUBBLETIP")
        cc.UserDefault:getInstance():setBoolForKey(FIRSTVOICETIPINGAME, true)
    end
    CF.gameRequire("Modules.Setting.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("菜单_设置")
end

function RightBtnsView:onMultBtnClicked(send, eventType)
    CF.gameRequire("Modules.GameMult.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("倍数")
end

function RightBtnsView:showPermissionDialog(text, func)
    local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK_CANCEL})
    tipPlayer:setTouchBackGround(false)
    tipPlayer:setText(text)
    if func then
        tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, func)
    end
end

function RightBtnsView:onMatchFlagShowEvent(event)
    local show = event.msg.show or false
    self:updateRightBtns(not show) -- 这边的show，是匹配的show，匹配显示时，其他按钮不显示
end

function RightBtnsView:onMatchStatusEvent(event)
    local show = event.msg.show or false
    self:updateRightBtns(not show) -- 这边的show，是匹配的show，匹配显示时，其他按钮不显示
end

function RightBtnsView:updateGameInfo()
    local gameInfo = CF.game:getModule("GameLayer"):getGameData():getGameInfo()
    local info =
        string.format(
        "底分%s 封顶%s金币\n桌费%s",
        CF.StringTool.numberToStringNew(gameInfo.iBaseScore, 2),
        CF.StringTool.numberToStringNew(gameInfo.iMaximumLimit, 2),
        CF.StringTool.numberToStringNew(gameInfo.iTableFee, 2)
    )
    self._textTip:setString(info)
    self._imgTipBack:setContentSize(cc.size(self._textTip:getContentSize().width + 50, self._imgTipBack:getContentSize().height))
    self._textTip:setPositionX(self._imgTipBack:getContentSize().width / 2)
end

function RightBtnsView:onGameRuleChanged()
    self:updateGameInfo()
    self._imgTipBack:runAction(cc.Sequence:create(cc.Show:create(), cc.DelayTime:create(1), cc.Hide:create()))
end

function RightBtnsView:onBtnInfo(send, eventType)
    if eventType == ccui.TouchEventType.began then
        self:updateGameInfo()
        self._imgTipBack:setVisible(true)
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        self._imgTipBack:setVisible(false)
        CF.game:getModule("IconAnimationManager"):reportData("桌面信息")
    end
end

return RightBtnsView
