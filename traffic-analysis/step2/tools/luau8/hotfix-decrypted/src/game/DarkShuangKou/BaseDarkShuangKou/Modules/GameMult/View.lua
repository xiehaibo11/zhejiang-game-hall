local GameMultView = CF.gameClass("GameMultView", CF.ViewBase)
local CardEnum = CF.gameRequire("Define.CardEnum")

function GameMultView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/GameMult.csb"
end

function GameMultView:getBindingInfo()
    return {
        ["_KW_TEXT_MULT_"] = {varName = "_textMult", beginIndex = 1, endIndex = 29},
        ["_KW_TEXT_SCORE_JOKER"] = {varName = "_textScoreJoker"},
        ["_KW_TEXT_SCORE_NOT_JOKER"] = {varName = "_textScoreNotJoker"},
        ["_KW_TEXT_BOOM_MULT"] = {varName = "_textBoomMult"},
        ["_KW_PANEL_TOUCH"] = {varName = "_KW_PANEL_TOUCH", onTouchEnded = "close"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "close"}
    }
end

function GameMultView:ctor(param)
    param = param or {}
    GameMultView.super.ctor(self, param)
    self:initUI()
end

function GameMultView:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TOTAL_WINLOST", callBack = "close"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CONFIG_UPDATE", callBack = "initUI"}
    }
end

function GameMultView:initUI()
    for i = 1, 29 do
        if self["_textMult" .. i] then
            self["_textMult" .. i]:setString(CardEnum.getCardTypeInfoByCardTypeID(i).mult .. "倍")
        end
    end

    self._textScoreJoker:setString(CardEnum.CardScore.JOKER .. "分")
    self._textScoreNotJoker:setString(CardEnum.CardScore.NOT_JOKER .. "分")
    self._textBoomMult:setString(CardEnum.CardBoomMult .. "倍")
end

function GameMultView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

return GameMultView
