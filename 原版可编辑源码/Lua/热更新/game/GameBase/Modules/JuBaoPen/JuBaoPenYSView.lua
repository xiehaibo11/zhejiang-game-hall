local JuBaoPenYSView = CF.gameClass("JuBaoPenYSView", CF.ViewBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

function JuBaoPenYSView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenYSView.csb"
end

function JuBaoPenYSView:getBindingInfo()
    return {
        ["_KW_TOUCH_LAYER"] = {varName = "_touchLayer", onTouchEnded = "onTouchLayerClick"},
        ["_KW_BTN_HELP"] = {varName = "_btnHelp", onTouchEnded = "onBtnHelpClick"},
        ["_KW_TOTAL_YS"] = {varName = "_txtTotalYS"},
        ["_KW_TXT_QCY_YS"] = {varName = "_txtQCYYS"},
        ["_KW_TXT_QCY_YS_2"] = {varName = "_txtQCYYS2"},
        ["_KW_BTN_QCY_GO"] = {varName = "_btnQCYGo", onTouchEnded = "onBtnQCYClick"},
        ["_KW_TXT_QCS_YS"] = {varName = "_txtQCSYS"},
        ["_KW_TXT_QCS_YS_2"] = {varName = "_txtQCSYS2"},
        ["_KW_BTN_QCS_GO"] = {varName = "_btnQCSGo", onTouchEnded = "onBtnQCSClick"},
        ["_KW_TXT_JBP_YS"] = {varName = "_txtJBPYS"},
        ["_KW_TXT_JBP_YS_2"] = {varName = "_txtJBPYS2"},
        ["_KW_BTN_JBP_GO"] = {varName = "_btnJBPGo", onTouchEnded = "onBtnJBPClick"},
        ["_KW_TXT_TITLE"] = {varName = "_txtTitle"},
    }
end

function JuBaoPenYSView:ctor(param)
    JuBaoPenYSView.super.ctor(self)
    self:initUI()

    local module = CF.game:getModule("JuBaoPen")
    module:updateYS()
end

function JuBaoPenYSView:initUI()
    local module = CF.game:getModule("JuBaoPen")
    self._txtTotalYS:setText("总运势 +"..module:getTotalYS())
    self._txtQCYYS:setText("运势 +"..module:getQiuCaiYunYS())
    if module:isQiuCaiYunFull() then
        self._txtQCYYS2:setVisible(true)
        self._txtQCYYS2:setText("(满级额外 +1334)")
    else
        self._txtQCYYS2:setVisible(false)
    end
    self._txtQCSYS:setText("运势 +"..module:getQingCaiShenYS())
    self._txtJBPYS:setText("运势 +"..module:getJuBaoPenYS())
    self._txtTitle:setText(module:getTitleText())
end

function JuBaoPenYSView:onTouchLayerClick()
    self:close()
end

function JuBaoPenYSView:onBtnHelpClick()
    CF.gameRequire("Modules.JuBaoPen.JuBaoPenYSDesView").new():showSelf()
end

function JuBaoPenYSView:onBtnQCYClick()
    CF.gameRequire("Modules.CaiYunPropNew.View").new():showSelf()
    self:close()
end

function JuBaoPenYSView:onBtnQCSClick()
    CF.gameRequire("Modules.CaiYunProp.View").new():showSelf()
    self:close()
end

function JuBaoPenYSView:onBtnJBPClick()
    CF.gameRequire("Modules.JuBaoPen.JuBaoPenMainView").new():showSelf()
    self:close()
end

function JuBaoPenYSView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

return JuBaoPenYSView
