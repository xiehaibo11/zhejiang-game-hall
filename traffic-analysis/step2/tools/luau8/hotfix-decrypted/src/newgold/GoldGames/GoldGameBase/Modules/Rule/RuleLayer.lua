local RuleLayer = NG.GAME.gameClass("RuleLayer", NG.ViewBase)

function RuleLayer:ctor(gameID)
    RuleLayer.super.ctor(self)

    self:initView()
    self:onBtnBaseRuleClicked()
end

function RuleLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/Rule/RuleLayer.csb"
end

function RuleLayer:getBindingInfo()
    return {
        --
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", onTouchEnded = "onBtnCloseClicked"},
        ["_KW_BTN_BASERULE"] = {varName = "_btnBaseRule", onTouchEnded = "onBtnBaseRuleClicked"},
        ["_KW_BTN_CARDTYPE"] = {varName = "_btnCardType", onTouchEnded = "onBtnCardTypeClicked"},
        ["_KW_SCROLLVIEW_PXSM"] = {varName = "_KW_SCROLLVIEW_PXSM"},
        ["_KW_SCROLLVIEW_JCGZ"] = {varName = "_KW_SCROLLVIEW_JCGZ"}
    }
end

function RuleLayer:initView()
    self:setTabBtnEnabled(self._btnBaseRule, false)
    self:setTabBtnEnabled(self._btnCardType, true)
    self._KW_SCROLLVIEW_PXSM:jumpToTop()
    self._KW_SCROLLVIEW_JCGZ:jumpToTop()
end

function RuleLayer:onBtnCloseClicked()
    self:close()
end

function RuleLayer:setTabBtnEnabled(btn, isEnabled)
    if btn then
        btn:setEnabled(isEnabled)
        local title = btn:getChildByName("KW_BTN_TITLE")
        if title then
            title:setVisible(isEnabled)
        end
    end
end

function RuleLayer:onBtnBaseRuleClicked()
    self:setTabBtnEnabled(self._btnBaseRule, false)
    self:setTabBtnEnabled(self._btnCardType, true)
    self._KW_SCROLLVIEW_JCGZ:jumpToTop()
    self._KW_SCROLLVIEW_JCGZ:setVisible(true)
    self._KW_SCROLLVIEW_PXSM:setVisible(false)
end

function RuleLayer:onBtnCardTypeClicked()
    self:setTabBtnEnabled(self._btnBaseRule, true)
    self:setTabBtnEnabled(self._btnCardType, false)
    self._KW_SCROLLVIEW_PXSM:jumpToTop()
    self._KW_SCROLLVIEW_PXSM:setVisible(true)
    self._KW_SCROLLVIEW_JCGZ:setVisible(false)
end

function RuleLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end

return RuleLayer
'