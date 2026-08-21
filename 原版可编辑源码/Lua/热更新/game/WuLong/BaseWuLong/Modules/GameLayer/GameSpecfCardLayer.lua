local GameSpecfCardLayer = CF.gameClass("GameSpecfCardLayer", CF.ViewBase)
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")

function GameSpecfCardLayer:getCSBPath()
    return "res/cocosStudio/WuLong/GameLayer/CSB/SpecfCardLayer.csb"
end

function GameSpecfCardLayer:getBindingInfo()
    return {
        ["_KW_BTN_CANCAL"] = { varName = "_cancalBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCancelBtnClicked" },
        ["_KW_BTN_SEND"] = { varName = "_sendBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSendBtnClicked" },
        ["_KW_BTN_SEND_DO"] = { varName = "_KW_BTN_SEND_DO", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSendDoBtnClicked" },
        ["_KW_UI_HAND_CARDS"] = { varName = "_handCards" },
        ["_KW_PANEL_SPECF_CARDS"] = { varName = "_specfCards" },
        ["_KW_CUR_TEXT_"] = { varName = "_KW_CUR_TEXT_", beginIndex = 1, endIndex = 15 },
        ["_KW_INPUT_"] = { varName = "_KW_INPUT_", beginIndex = 1, endIndex = 15 },
    }
end

function GameSpecfCardLayer:ctor(param)
    GameSpecfCardLayer.super.ctor(self, param)
    self._specfCardTable = {}
    for i = 1, 15 do
        self["_KW_INPUT_" .. i]:setFontColor(cc.c3b(255, 255, 255))
    end
end

function GameSpecfCardLayer:setAllCards(cards)
    local tCardPower = CardLogic.switchCardIDsToPowerKey(cards)
    --先将每一种power内部排序
    for i = CardEnum.CARD_POWER.CP_3, CardEnum.CARD_POWER.CP_BJ do
        if tCardPower[i] then
            table.sort(
            tCardPower[i],
            function(a, b)
                return a < b
            end
            )
        end
    end
    self._specfCardTable = tCardPower
    self:initCardsUI()
end

function GameSpecfCardLayer:initCardsUI()
    for i = 1, 15 do
        self["_KW_CUR_TEXT_" .. i]:setString(0)
        if self._specfCardTable[i + 2] then
            self["_KW_CUR_TEXT_" .. i]:setString(#self._specfCardTable[i + 2])
        end
        self["_KW_INPUT_" .. i]:setText(0)
    end
end

function GameSpecfCardLayer:onSendDoBtnClicked(send, eventType)
    local sendCards = {}
    for i = 1, 15 do
        local needCount = tonumber(self["_KW_CUR_TEXT_" .. i]:getString())
        for j = 1, needCount do
            if self._specfCardTable[i + 2] and self._specfCardTable[i + 2][j] then
                sendCards[#sendCards + 1] = self._specfCardTable[i + 2][j]
            end
        end
        if #sendCards >= 71 then
            break
        end
    end
    CF.msgManager:sendSpecCard(sendCards)
    self:showSpecfLayer(false)
end

function GameSpecfCardLayer:onSendBtnClicked(send, eventType)
    local sendCards = {}
    for i = 1, 15 do
        local needCount = tonumber(self["_KW_INPUT_" .. i]:getText())
        for j = 1, needCount do
            if self._specfCardTable[i + 2] and self._specfCardTable[i + 2][j] then
                sendCards[#sendCards + 1] = self._specfCardTable[i + 2][j]
            end
        end
    end
    CF.msgManager:sendSpecCard(sendCards)
    self:showSpecfLayer(false)
end

function GameSpecfCardLayer:onCancelBtnClicked(send, eventType)
    self:initCardsUI()
end

function GameSpecfCardLayer:showSpecfLayer(bShow)
    local bTest = CF.areaData:getAreaTypeID() > 1000 and CF.areaData:getSrsGroupID() == 5008
    self:setVisible(bShow and bTest)
end

return GameSpecfCardLayer