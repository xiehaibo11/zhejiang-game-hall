local GameBtnsLayer = NG.GAME.gameClass("GameBtnsLayer", NG.ViewBase)
local GoldCommonDefine = require("newgold.GoldCommon.Define.GoldCommonDefine")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local ClockAniNode = NG.GAME.gameRequire("Modules.GameMain.ClockAniNode")
local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D") 
local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")

function GameBtnsLayer:ctor()
    GameBtnsLayer.super.ctor(self)
    self._leftTime = 0
    self._gameData = NG.goldGame:getModule("GameMain"):getData()
    self:initUI()
    self:initView()
end

function GameBtnsLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/GameMain/GameBtnsLayer.csb"
end

function GameBtnsLayer:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_GAME_BTNS", callBack = "showGameReadyBtns"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TIME_OUT_CHANGE_SEAT", callBack = "showTimeOutChangeSeatBtns"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onStartGame"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CHANGE_TABLE_SUCCESS", callBack = "initView"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_START", callBack = "onHuanPaiStart"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_END", callBack = "onHuanPaiEnd"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER", callBack = "onPower"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER_INFO", callBack = "onPowerInfo"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_LOOK_CARD_TYPE", callBack = "onLookCardType"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CLOCK", callBack = "onClock"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_CONTINUE_BTN", callBack = "onEventShowContinue"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RESET_TABLE", callBack = "onResetTable"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_BG_CLICK", callBack = "onBgClick"},

        {module = NG.goldGame:getModule("GameMain"):getData(), eventKeyName = "EVENT_MAHLAYER_LAST_TING_MAHS", callBack = "onLastTingData"},
        {module = NG.goldGame:getModule("GameMain"):getData(), eventKeyName = "EVENT_EXCLUDE_MAH", callBack = "onExludeMah"},
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_NOTIFY_JOIN_MATCH_SUCCESS", callBack = "onEventNewMatchStart" },
    }
end

function GameBtnsLayer:getBindingInfo()
    return {
        --
        -- ["_KW_PANEL_ROOT"] = {varName = "_rootNode", onTouchEnded = "onBgClick"},
        ["_KW_NOED_STARTGAME"] = {varName = "_startGameNode"},
        ["_KW_NOED_CALL_LANDLORD"] = {varName = "_callLandlordNode"},
        ["_KW_NOED_ROB_LANDLORD"] = {varName = "_robLandlordNode"},
        ["_KW_NOED_ADD_DOUBLE"] = {varName = "_addDoubleNode"},
        ["_KW_NOED_CONTINUE"] = {varName = "_continueNode"},
        ["_KW_NOED_RESULT_CONTINUE"] = {varName = "_resultContinueNode"},
        ["_KW_NOED_HUANPAI"] = {varName = "_huanPaiNode"},
        ["_KW_BTN_STARTGAME"] = {varName = "_KW_BTN_STARTGAME", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickStartGame"},
        ["_KW_BTN_CONTINUE"] = {varName = "_KW_BTN_CONTINUE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickContinueGame"},
        ["_KW_BTN_CHANGE_TABLE"] = {varName = "_KW_BTN_CHANGE_TABLE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickChangeTable"},
        ["_KW_BTN_RESULTINFO"] = {varName = "_KW_BTN_RESULTINFO", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickShowResult"},
        ["_KW_BTN_RESULT_CHANGETABLE"] = {varName = "_KW_BTN_RESULT_CHANGETABLE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickChangeTable"},
        ["_KW_BTN_RESULT_CONTINUE"] = {varName = "_KW_BTN_RESULT_CONTINUE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickContinueGame"},

         ["_KW_BTN_HU"] = {varName = "_tingBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickTingBtn"},
         ["_KW_BTN_BILL"] = {varName = "_beanLogBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickBeanLog"},

         ["_KW_BTN_HUAN"] = {varName = "_huanBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickHuanBtn"},
        --  ["_KW_BTN_BUHUAN"] = {varName = "_buHuanBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickBuHuanBtn"},

         ["_KW_BTN_QUE"] = {varName = "_queBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickQueBtn"},
         ["_KW_NODE_QUE_INFO"] = {varName = "_queInfoNode"},
         ["_KW_MAHS"] = {varName = "_mahNode"},
         ["_KW_HUAN_TIME"] = {varName = "_huanTime"},
         ["_KW_HUANTOP"] = {varName = "_huanNodeTop"},
         ["_KW_HUANBOTTOM"] = {varName = "_huanNodeBottom"},
        -- ["_KW_BTN_TIP"] = {varName = "_tipBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickTipBtn"},
        -- ["_KW_BTN_NO_BIG"] = {varName = "_noBigBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickNoBigBtn"},
    }
end

function GameBtnsLayer:initUI()
    --test
    -- self:initQueInfo()
end

local NodeType = {
    NONE = 0,
    StartGame = 1,
    -- CallLandlord = 2,
    -- RobLandlord = 3,
    -- AddDouble = 4,
    Continue = 5,
    HuanPai = 6,
    ResultContinue = 7
}
local NodeTypeToNode = {}
function GameBtnsLayer:initView()
    NodeTypeToNode = {
        [NodeType.StartGame] = self._startGameNode,
        -- [NodeType.CallLandlord] = self._callLandlordNode,
        -- [NodeType.RobLandlord] = self._robLandlordNode,
        -- [NodeType.AddDouble] = self._addDoubleNode,
        [NodeType.Continue] = self._continueNode,
        [NodeType.HuanPai] = self._huanPaiNode,
        [NodeType.ResultContinue] = self._resultContinueNode,
    }
    self._nowShowBtnNodeType = NodeType.NONE
    self._queInfoNode:setVisible(false)
    self._tingBtn:setVisible(false)
    self._queBtn:setVisible(false)
    self._beanLogBtn:setVisible(false)
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

local isTest = true
function GameBtnsLayer:showGameReadyBtns(event)
    if isTest then return end
    local time = 15
    if event ~= nil and event.data ~= nil then
        time = event.data.nTime
    end
    self:setBtnTouchEnable(self._KW_BTN_CHANGE_TABLE, false)
    NG.SysTool.performDelayOnce(function()
        self:setBtnTouchEnable(self._KW_BTN_CHANGE_TABLE, true)
    end, 3)
    self:showBtnsNode(NodeType.StartGame, true)
    self:showClock(time, NodeType.StartGame)
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

-- function GameBtnsLayer:onClickNotCallLandlordBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_CALL_BANKER.PID_CB_NOT_CALL)
--     self:hideAllBtns()
-- end

-- function GameBtnsLayer:onClickCallLandlordBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_CALL_BANKER.PID_CB_CALL_BANKER)
--     self:hideAllBtns()
-- end

-- function GameBtnsLayer:onClickNotRobLandlordBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_ROB_BANKER.PID_RB_NOT_ROB)
--     self:hideAllBtns()
-- end

-- function GameBtnsLayer:onClickRobLandlordBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_ROB_BANKER.PID_RB_ROB_BANKER)
--     self:hideAllBtns()
-- end

-- function GameBtnsLayer:onClickNotAddDoubleBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_NOT_DOUBLE)
--     self:hideAllBtns()
-- end

-- function GameBtnsLayer:onClickAddDoubleBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_NORMAL_DOUBLE)
--     self:hideAllBtns()
-- end

-- function GameBtnsLayer:onClickSuperAddDoubleBtn()
--     NG.msgManager:sendRespPower(GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_SUPER_DOUBLE)
--     self:hideAllBtns()
-- end

function GameBtnsLayer:onClickHuanBtn()
    local mainModule = NG.goldGame:getModule("GameMain")
    local gameData = mainModule:getData()
    if gameData:getCurGameStep() ~= NG.GAME.GameDefine.ENUM_GAME_STEP.GAME_STEP_CHANGE_MAH then
        self._huanPaiNode:setVisible(false)
        NG.TipTool.showToast("已经不在换牌阶段~")
        return
    end
    -- NG.goldGame:getModule("GameMain.MahLayer").endHuanPai()
    local mahIds= gameData:getHuanPaiMahIDs()
    if #mahIds > 0 then
        gameData:deleteHandMahData(NG.GAME.roomTableData:getSelfSeat(), mahIds)
    end
    NG.msgManager:sendHuanPai(mahIds,0,0)
    -- self:hideAllBtns()
    -- mainModule:huanPaiEnd()
    self._huanNodeBottom:setVisible(false)
end

-- function GameBtnsLayer:onClickBuHuanBtn()
--     -- NG.goldGame:getModule("GameMain.MahLayer").endHuanPai()
--     NG.msgManager:sendHuanPai({},0,0)
--     self:hideAllBtns()
-- end

function GameBtnsLayer:onClickQueBtn()
    local bShow = not self._queInfoNode:isVisible()
    self._queInfoNode:setVisible(bShow)
    self._queInfoNode:stopAllActions()
    if bShow then
        self:initQueInfo()
        self._queInfoNode:runAction(cc.Sequence:create(cc.DelayTime:create(10),cc.CallFunc:create(function()
            self._queInfoNode:setVisible(false)
        end)))
    end
end

function GameBtnsLayer:onBgClick()
    self._queInfoNode:stopAllActions()
    self._queInfoNode:setVisible(false)
end

function GameBtnsLayer:initQueInfo()
    self._mahNode:removeAllChildren()
    local mahs = self._gameData:getExcludeMah()
    for i = 1, #mahs do
        local temp = UIMah.new("default", UIMahConfig.SimpleMah.QuePai)
        temp:setAnchorPoint(cc.p(0.5, 0.5))
        --计算麻将子位置
        local x = (i-1)*68
        local y = 0
        temp:setPosition(x, y)
        temp:setMahValue(mahs[i])
        temp:setScale(1.2)
        self._mahNode:addChild(temp)
    end
end

-- function GameBtnsLayer:onClickTipBtn()
--     local gameData = NG.goldGame:getModule("GameMain"):getData()
--     local powers,tipData = gameData:getCurrentTipData()
--     if powers and tipData then
--         -- dump(tipData,"onClickTipBtn")
--         NG.goldGame:getModule("GameMain"):sendTipCard(powers,tipData)
--     end
-- end

-- function GameBtnsLayer:onClickNoBigBtn()
--     NG.msgManager:sendPlayCard({},0,0)
--     self:showBtnsNode(NodeType.HuanPai, false)
-- end

-- 收到游戏开始的消息
function GameBtnsLayer:onStartGame()
    self:hideAllBtns()
    self._queBtn:setVisible(true)
    self._beanLogBtn:setVisible(true)
end

-- 继续游戏
function GameBtnsLayer:onClickContinueGame()
    -- if NG.GAME.roomTableData:isPlayerFull() then
    --     NG.goldGame:getModule("GameMain"):sendGameReady()
    --     return
    -- end
    NG.goldGame:getModule("GameMain"):changeTableWithResult(false)
end

-- 换桌
function GameBtnsLayer:onClickChangeTable()
    NG.goldGame:getModule("GameMain"):changeTableWithResult(true)
end

function GameBtnsLayer:onHuanPaiStart(event)
    if event.msg.seat == NG.GAME.roomTableData:getSelfSeat() then
        self:showBtnsNode(NodeType.HuanPai, true)
        self:showClock(10, NodeType.HuanPai)
        self._huanNodeTop:setVisible(true)
        self._huanNodeBottom:setVisible(true)
        self._huanLeftTime = 10
        self._huanTime:setString("(10s)")
        self._huanTime:stopAllActions()
        self._huanTime:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
            self:updateHuanLeftTime()
        end)))
    end
end
function GameBtnsLayer:onHuanPaiEnd(event)
    self:hideAllBtns()
    print("onHuanPaiEnd")
    -- self:showBtnsNode(NodeType.NONE, false)
end

function GameBtnsLayer:updateHuanLeftTime()
    self._huanLeftTime = self._huanLeftTime - 1
    self._huanTime:setString("("..self._huanLeftTime.."s)")
    if self._huanLeftTime > 0 then
        self._huanTime:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
            self:updateHuanLeftTime()
        end)))
    else
        -- NG.msgManager:sendHuanPai({})
        -- self._huanNodeBottom:setVisible(false)
    end
end

function GameBtnsLayer:onPass(event)
    if event.msg.localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self:showBtnsNode(NodeType.HuanPai, false)
    end
end

function GameBtnsLayer:onPower(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    local power = gameData:getPower(localSeat)
    if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_HAUN_PAI then
        self:showBtnsNode(NodeType.HuanPai, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    -- elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ROB_BANKER then
    --     self:showBtnsNode(NodeType.RobLandlord, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    -- elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_DOUBLE then
    --     self:showBtnsNode(NodeType.AddDouble, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    else
        self:showBtnsNode(NodeType.NONE, localSeat == GameMainDefine.SELF_LOCAL_SEAT)
    end
end

function GameBtnsLayer:onPowerInfo(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_HAUN_PAI then
            self:showBtnsNode(NodeType.HuanPai, false)
        else
            self:showBtnsNode(NodeType.NONE, false)
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

function GameBtnsLayer:updatePlayCardBtnLayer(power)

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

function GameBtnsLayer:onClickTingBtn(sender)
    if not tolua.isnull(self._canhuUI) then
        self._canhuUI:removeFromParent()
        return
    end
    local tingData = clone(self._gameData:getLastTingData()) or {}
    if next(tingData) == nil then
        NG.TipTool.showToast("无听牌数据")
        return
    end
    local data = {}
    data.tingMahID = 0
    self._canhuUI = NG.GAME.gameRequire("Modules.GameMain.MahLayer.CanHuMahsUI").new(data):showSelf()
end

function GameBtnsLayer:onClickBeanLog()
    -- NG.goldGame:showWinlost(true)

    -- NG.goldGame:getModule("GameMain.MahLayer"):onMsgGangFeng({})
    NG.goldGame:showBeanLog()

    -- local aniPath = "NewGoldRes/Spine/MahXueLiu/SpecialHu/"
    -- local aniName = "Qixinglianzhu"
    -- local node = cc.Node:create()
    -- local params = { path = aniPath, tex = aniName..".json", ske = aniName..".atlas", armatureName = "animation", loop = false }
    -- local spineNode = display.playDargonBonesSpine(params)
    -- if spineNode then
    --     spineNode:setScale(1)
    --     spineNode:setPosition(960, 540)
    --     node:addChild(spineNode)

    --     spineNode:registerSpineEventHandler(function(event)
    --         if event.eventData.name ~= "end" then
    --             NG.audioManager:playEffect(aniPath .. event.eventData.name..".MP3")
    --         end
    --     end, sp.EventType.ANIMATION_EVENT)
    --     spineNode:registerSpineEventHandler(function(event)
    --         if event.type == 'complete' then
    --             node:runAction(cc.Sequence:create(
    --                 cc.DelayTime:create(0.1),
    --                 cc.CallFunc:create(function()
    --                     node:removeFromParent(true)
    --                 end)
    --             ))
    --         end
    --     end, sp.EventType.ANIMATION_COMPLETE)
    -- end
    -- self:addChild(node)
end

function GameBtnsLayer:onLastTingData(data)
    data = data or {}
    self._tingBtn:setVisible(next(data.data) ~= nil)
end

function GameBtnsLayer:onExludeMah(data)
    if not self._queInfoNode:isVisible() then
        self:onClickQueBtn()
    end
end

function GameBtnsLayer:onEventNewMatchStart(data)
    self._tingBtn:setVisible(false)
    self._queBtn:setVisible(false)
    self._beanLogBtn:setVisible(false)
    self._queInfoNode:setVisible(false)
end

return GameBtnsLayer
  vL  