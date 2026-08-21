local CardRecorderView = NG.GAME.gameClass("CardRecorderView", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local Card = NG.GAME.gameRequire("Modules.GameMain.CardLayer.Card")

function CardRecorderView:ctor()
    CardRecorderView.super.ctor(self)

    self:initView()
end

function CardRecorderView:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/CardRecorder/CardRecorderLayer.csb"
end

function CardRecorderView:getBindingInfo()
    return {
        --
        ["_KW_BTN_JIPAIQI_ICON"] = { varName = "_recorderBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onRecorderBtnClicked" },
        ["_KW_IMG_JIPAIQI_LINE"] = { varName = "_infoNode" },
        ["_KW_TEXT_JIPAIQI_NUM_"] = { varName = "_textRecorderNum", beginIndex = 1, endIndex = 15 },
        ["_KW_PANEL_DIPAI"] = { varName = "_KW_PANEL_DIPAI" },
        ["_KW_PANEL_MULT"] = { varName = "_KW_PANEL_MULT" },
        ["_KW_TEXT_BEI"] = { varName = "_KW_TEXT_BEI" }
    }
end

function CardRecorderView:getProxyEvents()
    return {
        --
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_GAME_STEP_CHANGE", callBack = "onGameStepChange" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_UPDATE_MARKER_DATA", callBack = "onMarkerDataUpdate" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_UPDATE_SPACE_BASE", callBack = "onMarkerMultUpdate" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onMsgResult" }
    }
end

function CardRecorderView:onMarkerMultUpdate(event)
    local data = NG.goldGame:getModule("GameMain"):getData():getSpaceBase()
    self._KW_PANEL_MULT:setVisible(false)
    if data.nMult ~= nil and data.nMult > 0 then
        self._KW_PANEL_MULT:setVisible(true)
        self._KW_TEXT_BEI:setString(data.nMult .. "倍")
    end
end

function CardRecorderView:onMarkerDataUpdate(event)
    if event == nil or event.data == nil then
        return
    end
    local isHasData = self:isHasData()
    self._textRecorderNum1:setString(event.data.cardAcount)
    self._textRecorderNum2:setString(event.data.card2count)
    self._textRecorderNum3:setString(event.data.card3count)
    self._textRecorderNum4:setString(event.data.card4count)
    self._textRecorderNum5:setString(event.data.card5count)
    self._textRecorderNum6:setString(event.data.card6count)
    self._textRecorderNum7:setString(event.data.card7count)
    self._textRecorderNum8:setString(event.data.card8count)
    self._textRecorderNum9:setString(event.data.card9count)
    self._textRecorderNum10:setString(event.data.card10count)
    self._textRecorderNum11:setString(event.data.cardJcount)
    self._textRecorderNum12:setString(event.data.cardQcount)
    self._textRecorderNum13:setString(event.data.cardKcount)
    self._textRecorderNum14:setString(event.data.cardFcount)
    self._textRecorderNum15:setString(event.data.cardZcount)
    self._KW_PANEL_DIPAI:removeAllChildren()
    for i = 1, #event.data.baseCards do
        local cView = Card.new()
        cView:setCardID(event.data.baseCards[i])
        cView:setScale(0.25)
        cView:setPosition(i * 25 + 1, 35)
        cView:setName(i)
        self._KW_PANEL_DIPAI:addChild(cView)
    end
    for i = 1, #event.data.baseCardsOutInfo do -- 1未出，2已出
        local node = self._KW_PANEL_DIPAI:getChildByName(i)
        if node ~= nil then
            local colorState = Card.COLOR_STATE.NONE
            if event.data.baseCardsOutInfo[i] == 2 then
                colorState = Card.COLOR_STATE.GRAY
            end
            node:setColorState(colorState)
        end
    end
    -- 首次获取到牌数据
    if isHasData == false and self:isHasData() then
        self:onRecorderBtnClicked()
    end
end

function CardRecorderView:initView()
    self._infoNode:setVisible(false)
    self._recorderBtn:setVisible(false)
    self._KW_PANEL_MULT:setVisible(false)
    self._KW_PANEL_DIPAI:removeAllChildren()
    for i = 1, 15 do
        self["_textRecorderNum" .. i]:setString(0)
    end
end

function CardRecorderView:isHasData()
    for i = 1, 15 do
        if self["_textRecorderNum" .. i]:getString() ~= "0" then
            return true
        end
    end
    return false
end

function CardRecorderView:onRecorderBtnClicked(send, eventType)
    if not self:isHasData() then
        NG.TipTool.showToast("出牌阶段自动使用")
        return
    end
    self._infoNode:setVisible(not self._infoNode:isVisible())
    NG.goldGame:getModule("GameMain"):flushMarkerState(self._infoNode:isVisible())
end

function CardRecorderView:onGameStepChange(event)
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    if gameStep >= GameMainDefine.ENUM_GAME_STEP.GAME_STEP_START_GAME then
        self._recorderBtn:setVisible(true)
    elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_WIN_LOST then
        self._recorderBtn:setVisible(false)
    end
    self._infoNode:setVisible(false)
end

function CardRecorderView:onMsgResult()
    self:initView()
    NG.goldGame:getModule("GameMain"):flushMarkerState(self._infoNode:isVisible())
end

return CardRecorderView