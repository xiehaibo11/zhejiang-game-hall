local GameBtnsLayer = NG.GAME.gameClass("GameBtnsLayer", NG.ViewBase)
local GoldCommonDefine = require("newgold.GoldCommon.Define.GoldCommonDefine")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local ClockAniNode = NG.GAME.gameRequire("Modules.GameMain.ClockAniNode")
local MiscLogic = NG.GAME.gameRequire("Modules.GameMain.TipHelp.MiscLogic")

function GameBtnsLayer:ctor()
    GameBtnsLayer.super.ctor(self)
    self._leftTime = 0
    self:initUI()
    self:initView()
end

function GameBtnsLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/GameMain/GameBtnsLayer.csb"
end

function GameBtnsLayer:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_GAME_BTNS", callBack = "showGameReadyBtns"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TIME_OUT_CHANGE_SEAT", callBack = "showTimeOutChangeSeatBtns"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_START_GAME", callBack = "onStartGame"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CHANGE_TABLE_SUCCESS", callBack = "initView"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_PLAY_CARD", callBack = "onPlayCard"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER", callBack = "onPower"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER_INFO", callBack = "onPowerInfo"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CAN_PLAY_CARD", callBack = "onCanPlayCard"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_LOOK_CARD_TYPE", callBack = "onLookCardType"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CLOCK", callBack = "onClock"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_CONTINUE_BTN", callBack = "onEventShowContinue"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RESET_TABLE", callBack = "onResetTable"},
        
        }
end

function GameBtnsLayer:getBindingInfo()
    return {
        --
        ["_KW_NOED_STARTGAME"] = {varName = "_startGameNode"},
        ["_KW_NOED_CALL_LANDLORD"] = {varName = "_callLandlordNode"},
        ["_KW_NOED_ROB_LANDLORD"] = {varName = "_robLandlordNode"},
        ["_KW_NOED_ADD_DOUBLE"] = {varName = "_addDoubleNode"},
        ["_KW_NOED_CONTINUE"] = {varName = "_continueNode"},
        ["_KW_NOED_RESULT_CONTINUE"] = {varName = "_resultContinueNode"},
        ["_KW_NOED_PLAY_CARD"] = {varName = "_playCardNode"},
        ["_KW_BTN_STARTGAME"] = {varName = "_KW_BTN_STARTGAME", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickStartGame"},
        ["_KW_BTN_CONTINUE"] = {varName = "_KW_BTN_CONTINUE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickContinueGame"},
        ["_KW_BTN_CHANGE_TABLE"] = {varName = "_KW_BTN_CHANGE_TABLE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickChangeTable"},
        ["_KW_BTN_RESULTINFO"] = {varName = "_KW_BTN_RESULTINFO", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickShowResult"},
        ["_KW_BTN_RESULT_CHANGETABLE"] = {varName = "_KW_BTN_RESULT_CHANGETABLE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickChangeTable"},
        ["_KW_BTN_RESULT_CONTINUE"] = {varName = "_KW_BTN_RESULT_CONTINUE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickContinueGame"},

        --叫地主
        ["_KW_BTN_NOT_CALL_LANDLORD"] = {varName = "_notCallLandlordBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickNotCallLandlordBtn"},
        ["_KW_BTN_CALL_LANDLORD"] = {varName = "_callLandlordBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCallLandlordBtn"},
        --抢地主
        ["_KW_BTN_NOT_ROB_LANDLORD"] = {varName = "_notRobLandlordBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickNotRobLandlordBtn"},
        ["_KW_BTN_ROB_LANDLORD"] = {varName = "_robLandlordBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickRobLandlordBtn"},
        --加倍
        ["_KW_BTN_NOT_ADD_DOUBLE"] = {varName = "_notAddDoubleBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickNotAddDoubleBtn"},
        ["_KW_BTN_ADD_DOUBLE"] = {varName = "_addDoubleBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickAddDoubleBtn"},
        ["_KW_BTN_SUPER_ADD_DOUBLE"] = {varName = "_superAddDoubleBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickSuperAddDoubleBtn"},
        --打牌相关
        ["_KW_BTN_PASS"] = {varName = "_passBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickPassBtn"},
        ["_KW_BTN_OUT_CARD"] = {varName = "_outCardBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickOutCardBtn"},
        ["_KW_BTN_TIP"] = {varName = "_tipBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickTipBtn"},
        ["_KW_BTN_NO_BIG"] = {varName = "_noBigBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickNoBigBtn"},
    }
end

function GameBtnsLayer:initUI()
    
end

local NodeType = {
    NONE = 0,
    StartGame = 1,
    CallLandlord = 2,
    RobLandlord = 3,
    AddDouble = 4,
    Continue = 5,
    PlayCard = 6,
    ResultContinue = 7
}
local NodeTypeToNode = {}
local NodeTypeToClockParent = {}
function GameBtnsLayer:initView()
    NodeTypeToNode = {
        [NodeType.StartGame] = self._startGameNode,
        [NodeType.CallLandlord] = self._callLandlordNode,
        [NodeType.RobLandlord] = self._robLandlordNode,
        [NodeType.AddDouble] = self._addDoubleNode,
        [NodeType.Continue] = self._continueNode,
        [NodeType.PlayCard] = self._playCardNode,
        [NodeType.ResultContinue] = self._resultContinueNode,
    }
    NodeTypeToClockParent = {
        [NodeType.CallLandlord] = self._callLandlordNode,
        [NodeType.RobLandlord] = self._robLandlordNode,
        [NodeType.AddDouble] = self._addDoubleNode,
        [NodeType.Continue] = self._continueNode,
        [NodeType.PlayCard] = self._playCardNode,
        [NodeType.ResultContinue] = self._resultContinueNode,
    }
    self._nowShowBtnNodeType = NodeType.NONE
    self:hideAllBtns()
    self:clearClock()
    self._clockTime = -1
end

function GameBtnsLayer:hideAllBtns()
    for _, v in pairs(NodeTypeToNode) do
        v:setVisible(false)
    end
    self._nowShowBtnNodeType = NodeType.NONE
end

function GameBtnsLayer:showBtnsNode(nodeType, isShow)
    if isShow then
        self:hideAllBtns()
        self._nowShowBtnNodeType = nodeType
    end
    if NodeTypeToNode[nodeType] then
        NodeTypeToNode[nodeType]:setVisible(isShow or false)
    end
    if isShow then
        self:showClock(self._clockTime)
    end
end

function GameBtnsLayer:showGameReadyBtns(event)
    local time = 15
    if event ~= nil and event.data ~= nil then
        time = event.data.nTime
    end
    self:setBtnTouchEnable(self._KW_BTN_CHANGE_TABLE, false)
    NG.SysTool.performDelayOnce(function()
        if self and self.setBtnTouchEnable then
            self:setBtnTouchEnable(self._KW_BTN_CHANGE_TABLE, true)
        end
    end, 3)
    self:showBtnsNode(NodeType.StartGame, true)
    self:showClock(time, NodeType.StartGame)
    if NG.goldGame:isAutoReady() then
        NG.goldGame:setAutoReady(false)
        self:onClickStartGame()
    end
end

function GameBtnsLayer:showTimeOutChangeSeatBtns()
    self:hideAllBtns()
    NG.TipTool.showToast("有玩家退出，请点击继续按钮继续匹配~")
    self:showBtnsNode(NodeType.Continue, true)
    NG.goldGame:getModule("Players"):removeWhenPlayerLeave(NG.GAME.roomTableData:getSelfSeat())
end

function GameBtnsLayer:onEventShowContinue()
    self:showBtnsNode(NodeType.Continue, true)
end

-- 触发开始游戏
function GameBtnsLayer:onClickStartGame()
    NG.goldGame:getModule("GameMain"):sendGameReady()
    self:hideAllBtns()
end

function GameBtnsLayer:onClickNotCallLandlordBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_CALL_BANKER.PID_CB_NOT_CALL)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickCallLandlordBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_CALL_BANKER.PID_CB_CALL_BANKER)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickNotRobLandlordBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_ROB_BANKER.PID_RB_NOT_ROB)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickRobLandlordBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_ROB_BANKER.PID_RB_ROB_BANKER)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickNotAddDoubleBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_NOT_DOUBLE)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickAddDoubleBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_NORMAL_DOUBLE)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickSuperAddDoubleBtn()
    NG.msgManager:sendRespPower(GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_SUPER_DOUBLE)
    self:hideAllBtns()
end

function GameBtnsLayer:onClickPassBtn()
    NG.msgManager:sendPlayCard({},0,0)
    self:showBtnsNode(NodeType.PlayCard, false)
end

local get_num_weight = function (num)
    if num == GameMainDefine.CardPower.CP_BJ then
        return 22
    elseif num == GameMainDefine.CardPower.CP_SJ then
        return 21;
    elseif num == GameMainDefine.CardPower.CP_2 then
        return 19;
    else
        return num
    end
end

function GameBtnsLayer:onClickOutCardBtn()
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local outCards = gameData:getSelectOutCards()
    if outCards == nil then
        return
    end
    if #outCards.outCard <= 0 then
        NG.TipTool.showToast("出牌的牌型不符合规则")
        return
    end
    if outCards.cardType == GameMainDefine.CardType.CTID_NONE then
        NG.TipTool.showToast("出牌的牌型不符合规则")
    end
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local prePlayerSeat = gameData:getPrePlayerSeat()
    if prePlayerSeat ~= GameMainDefine.SELF_LOCAL_SEAT then
        local preOutCard = gameData:getOutCards(prePlayerSeat)
        local isBig = MiscLogic.compCardsMax(
            { nTypeID = outCards.cardType, nWeight = get_num_weight(outCards.cardPower), nCount = #outCards.outCard },
            { nTypeID = preOutCard.nTypeID, nWeight = get_num_weight(preOutCard.nPower), nCount = #preOutCard.nCards }
        )
        if not isBig then
            NG.TipTool.showToast("出牌的牌型不符合规则")
        end
    end
    -- dump(outCards,"出牌")
    NG.msgManager:sendPlayCard(outCards.outCard, outCards.cardType, outCards.cardPower)
    self:showBtnsNode(NodeType.PlayCard, false)
end

function GameBtnsLayer:onClickTipBtn()
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local powers,tipData = gameData:getCurrentTipData()
    if powers and tipData then
        -- dump(tipData,"onClickTipBtn")
        NG.goldGame:getModule("GameMain"):sendTipCard(powers,tipData)
    end
end

function GameBtnsLayer:onClickNoBigBtn()
    NG.msgManager:sendPlayCard({},0,0)
    self:showBtnsNode(NodeType.PlayCard, false)
end

-- 收到游戏开始的消息
function GameBtnsLayer:onStartGame()
    self:hideAllBtns()
end

-- 继续游戏
function GameBtnsLayer:onClickContinueGame()
    if NG.GAME.roomTableData:isPlayerFull() then
        NG.goldGame:getModule("GameMain"):sendGameReady()
        return
    end
    NG.goldGame:getModule("GameMain"):changeTableWithResult(false)
end

-- 换桌
function GameBtnsLayer:onClickChangeTable()
    NG.goldGame:getModule("GameMain"):changeTableWithResult(true)
end

function GameBtnsLayer:onPlayCard(event)
    if event.msg.localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self:showBtnsNode(NodeType.PlayCard, false)
    end
end

function GameBtnsLayer:onCanPlayCard(event)
    
end

function GameBtnsLayer:onPass(event)
    if event.msg.localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self:showBtnsNode(NodeType.PlayCard, false)
    end
end

function GameBtnsLayer:onPower(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    local power = gameData:getPower(localSeat)
    if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_BANKER then
        self:showBtnsNode(NodeType.CallLandlord, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ROB_BANKER then
        self:showBtnsNode(NodeType.RobLandlord, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_DOUBLE then
        self:showBtnsNode(NodeType.AddDouble, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD then
        self:showBtnsNode(NodeType.PlayCard, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
        if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
            self:updatePlayCardBtnLayer(power)
        end
    end
end

function GameBtnsLayer:onPowerInfo(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_BANKER then
            self:showBtnsNode(NodeType.CallLandlord, false)
        elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ROB_BANKER then
            self:showBtnsNode(NodeType.RobLandlord, false)
        elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_DOUBLE then
            self:showBtnsNode(NodeType.AddDouble, false)
        elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD then
            self:showBtnsNode(NodeType.PlayCard, false)
        end
    end
end

function GameBtnsLayer:setBtnTouchEnable(btn, canTouch)
    if not btn then
        return
    end
    canTouch = canTouch or false
    btn:setEnabled(canTouch)

    local grayTitle = btn:getChildByName("KW_IMG_TEXT_BTNNAME_GRAY")
    local normalTitle = btn:getChildByName("KW_IMG_TEXT_BTNNAME")
    if normalTitle and grayTitle then
        normalTitle:setVisible(canTouch)
        grayTitle:setVisible(not canTouch)
    end
end

local PlayCardBtnsPosXConf = {
    [1] = {BtnsPosX = {70}, ClockPosX = -120},
    [2] = {BtnsPosX = {-200, 200}, ClockPosX = 0},
    [3] = {BtnsPosX = {-310, 70, 310}, ClockPosX = -120},
}
function GameBtnsLayer:updatePlayCardBtnLayer(power)
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local prePlayerSeat = gameData:getPrePlayerSeat()
    local nowPlayerSeat = gameData:getNowPlayerSeat()
    local showBtns = {}
    if prePlayerSeat == nowPlayerSeat then
        --自己首出
        self._tipBtn:setVisible(true)
        self:setBtnTouchEnable(self._tipBtn, false)
        self._outCardBtn:setVisible(true)
        self._noBigBtn:setVisible(false)
        self._passBtn:setVisible(false)
        showBtns = {self._tipBtn, self._outCardBtn}
    else
        local tipData = gameData:getTipData()
        if tipData and tipData.tipArr and #tipData.tipArr > 0 then
            --有提示数据
            self._passBtn:setVisible(true)
            self:setBtnTouchEnable(self._tipBtn, true)
            self._tipBtn:setVisible(true)
            self._outCardBtn:setVisible(true)
            self._noBigBtn:setVisible(false)
            showBtns = {self._passBtn, self._tipBtn, self._outCardBtn}
        else
            self._passBtn:setVisible(false)
            self:setBtnTouchEnable(self._tipBtn, true)
            self._tipBtn:setVisible(false)
            self._outCardBtn:setVisible(false)
            self._noBigBtn:setVisible(true)
            showBtns = {self._noBigBtn}
            --无提示数据

            self:showClock(3, nil, function ()
                NG.msgManager:sendPlayCard({},0,0)
            end)
        end
    end

    local showBtnsCount = #showBtns
    if PlayCardBtnsPosXConf[showBtnsCount] then
        for i, v in ipairs(showBtns) do
            v:setPositionX(PlayCardBtnsPosXConf[showBtnsCount].BtnsPosX[i])
        end
        local clockNode = self._playCardNode:getChildByName("KW_CLOCK")
        if clockNode then
            clockNode:setPositionX(PlayCardBtnsPosXConf[showBtnsCount].ClockPosX)
        end
    end
end

function GameBtnsLayer:updateBtnState(btnName, isShow)
    if btnName == 'btnPass' then
        
    end
end

function GameBtnsLayer:clearClock()
    if self._clockNode then
        self._clockNode:removeFromParent()
    end
    self._clockNode = nil
end

function GameBtnsLayer:showClock(time, nodeType, callBack)
    self:clearClock()
    nodeType = nodeType or self._nowShowBtnNodeType
    if not nodeType or not time or time < 0 then
        return
    end
    if NodeTypeToNode[nodeType] then
        local clockParent = NodeTypeToNode[nodeType]:getChildByName("KW_CLOCK")
        if clockParent then
            self._clockNode = ClockAniNode.create(time, clockParent, callBack, function (leftTime)
                if self._clockTime > 0 and leftTime ~= nil then
                    self._clockTime = leftTime
                end
            end)
        end
    end
end

function GameBtnsLayer:onClock(event)
    local localSeat = event.msg.localSeat
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self._clockTime = event.msg.time
        self:showClock(self._clockTime)
    else
        self:clearClock()
        self._clockTime = -1
    end
end

function GameBtnsLayer:onLookCardType()
    self:showBtnsNode(NodeType.ResultContinue, true)
end

function GameBtnsLayer:onClickShowResult()
    NG.goldGame:showWinlost(false)
end

function GameBtnsLayer:onResetTable()
    self:hideAllBtns()
end

return GameBtnsLayer
 G  