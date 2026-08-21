local RuleLayer = NG.GAME.gameClass("RuleLayer", "newgold.GoldGames.GoldGameBase.Modules.Rule.RuleLayer")


function RuleLayer:ctor(gameID)
    RuleLayer.super.ctor(self)
end

function RuleLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Basic/RuleLayer.csb"
end

function RuleLayer:getBindingInfo()
    return {
        --
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", onTouchEnded = "onBtnCloseClicked"},
        ["_KW_BTN_BASERULE"] = {varName = "_btnBaseRule", onTouchEnded = "onBtnBaseRuleClicked"},
        ["_KW_BTN_CARDTYPE"] = {varName = "_btnCardType", onTouchEnded = "onBtnCardTypeClicked"},
        ["_KW_SCROLLVIEW_PXSM"] = {varName = "_KW_SCROLLVIEW_PXSM"},
        ["_KW_SCROLLVIEW_JCGZ"] = {varName = "_KW_SCROLLVIEW_JCGZ"},
        ["_KW_PANEL_BG"] = {varName = "_panelBg"},
    }
end

function RuleLayer:initView()
    self:setTabBtnEnabled(self._btnBaseRule, false)
    self:setTabBtnEnabled(self._btnCardType, true)
    self._KW_SCROLLVIEW_PXSM:jumpToTop()
    self._KW_SCROLLVIEW_JCGZ:jumpToTop()

    self._panelBg:setTouchEnabled(true)
    self._panelBg:addTouchEventListener(handler(self, self.onBtnCloseClicked))
end

return RuleLayer
�