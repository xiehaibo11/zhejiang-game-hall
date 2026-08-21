local GameMainModule = NG.GAME.gameClass("GameMainModule", NG.GAME.ModuleBase)
local FWProtocol = NG.GAME.gameRequire("Protocol.FWProtocol")
local RLProtocol = NG.GAME.gameRequire("Protocol.RLProtocol")
local GLProtocol = NG.GAME.gameRequire("Protocol.GLProtocol")
local LCLProtocol = NG.GAME.gameRequire("Protocol.LCLProtocol")
local GameData = NG.GAME.gameRequire("Modules.GameMain.Data.GameData")
local TipLogic = NG.GAME.gameRequire("Modules.GameMain.TipHelp.TipLogic")
local GoldCommonDefine = require("newgold.GoldCommon.Define.GoldCommonDefine")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")
local TrustLayer = NG.GAME.gameRequire("Modules.GameMain.TrustLayer")

GameMainModule.EVENT_SHOW_GAME_BTNS = "EVENT_SHOW_GAME_BTNS" -- 显示准备按钮
GameMainModule.EVENT_START_GAME = "EVENT_START_GAME" -- 开始游戏
GameMainModule.EVENT_TIME_OUT_CHANGE_SEAT = "EVENT_TIME_OUT_CHANGE_SEAT" -- 匹配超时
GameMainModule.EVENT_TALK_MSG = "EVENT_TALK_MSG"
GameMainModule.EVENT_CHANGE_TABLE_SUCCESS = "EVENT_CHANGE_TABLE_SUCCESS" -- 换桌成功
GameMainModule.EVENT_GAME_STEP_CHANGE = "EVENT_GAME_STEP_CHANGE"
GameMainModule.EVENT_TAKE_FIRST = "EVENT_TAKE_FIRST"
GameMainModule.EVENT_BASE_CARDS_CHANGE = "EVENT_BASE_CARDS_CHANGE"
GameMainModule.EVENT_RELINK_ENTER = "EVENT_RELINK_ENTER"
GameMainModule.EVENT_ADD_BASE = "EVENT_ADD_BASE"
GameMainModule.EVENT_TIP_CARD = "EVENT_TIP_CARD"
GameMainModule.EVENT_PLAY_CARD = "EVENT_PLAY_CARD"
GameMainModule.EVENT_POWER = "EVENT_POWER"
GameMainModule.EVENT_POWER_INFO = "EVENT_POWER_INFO"
GameMainModule.EVENT_CAN_PLAY_CARD = "EVENT_CAN_PLAY_CARD"
GameMainModule.EVENT_UPDATE_MARKER_DATA = "EVENT_UPDATE_MARKER_DATA" -- 更新记牌器
GameMainModule.EVENT_UPDATE_SPACE_BASE = "EVENT_UPDATE_SPACE_BASE" -- 特殊底
GameMainModule.EVENT_CALL_DOUBLE = "EVENT_CALL_DOUBLE" -- 加倍信息
GameMainModule.EVENT_UPDATE_MULT_DATA = "EVENT_UPDATE_MULT_DATA" -- 超级加倍广播
GameMainModule.EVENT_CLOCK = "EVENT_CLOCK"
GameMainModule.EVENT_ON_MSG_RESULT = "EVENT_ON_MSG_RESULT" -- 游戏结束，收到结算
GameMainModule.EVENT_ON_MSG_FEE_BASE_SCORE = "EVENT_ON_MSG_FEE_BASE_SCORE" -- 服务费和底分，输赢封顶
GameMainModule.EVENT_BANKER = "EVENT_BANKER"
GameMainModule.EVENT_LOOK_CARD_TYPE = "EVENT_LOOK_CARD_TYPE"
GameMainModule.EVENT_SHOW_CONTINUE_BTN = "EVENT_SHOW_CONTINUE_BTN"
GameMainModule.EVENT_RESET_TABLE = "EVENT_RESET_TABLE"
GameMainModule.EVENT_PLAYER_TRUST = "EVENT_PLAYER_TRUST"
GameMainModule.EVENT_SG_ANI = "EVENT_SG_ANI"
GameMainModule.EVENT_UPDATE_MULT_DATA_SINGLE = "EVENT_UPDATE_MULT_DATA_SINGLE"
GameMainModule.EVENT_SHOW_CARDTYPE_WAIT = "EVENT_SHOW_CARDTYPE_WAIT"
GameMainModule.EVENT_START_GAME_READY = "EVENT_START_GAME_READY"
GameMainModule.EVENT_OUT_CARDS = "EVENT_OUT_CARDS"
GameMainModule.EVENT_PLAYER_CONNECT_FAILED = "EVENT_PLAYER_CONNECT_FAILED"
GameMainModule.EVENT_FLUSH_MARKER_STATE = "EVENT_FLUSH_MARKER_STATE"

function GameMainModule:ctor()
    GameMainModule.super.ctor(self)

    self._tipLogic = TipLogic.new()
    self._gameData = GameData.new()
    self:initMessages()
    self:startHeartBeat()
    self:initEvents()
    
    NG.SysTool.performDelayOnce(function()
        -- self:changeTableSuccess() -- 先默认显示匹配
        NG.msgManager:sendPlayerConnect()
    end, 0.001)
end

function GameMainModule:initMessages()
    NG.netEngine:addProtocolScriptFuncByObj(self, self.respStartGame, GoldRoomProtoDefine.processid, GoldAreaConfig.GroupID)
end

function GameMainModule:getData()
    return self._gameData
end

function GameMainModule:getTipLogic()
    return self._tipLogic
end

function GameMainModule:getProxyEvents()
    return {
        --
        {module = NG.goldLobby:getModule("GoldLogin"), eventKeyName = "EVENT_LOGIN_SUCCESS_GOLD_NEW", callBack = "relinkSuccess"}
    }
end

function GameMainModule:getSubXYDealList()
    return {
        -- RL
        {callback = handler(self, self.onMsgShowBtns), msgClass = RLProtocol.msgShowPlayerReady}, -- 显示准备按钮
        {callback = handler(self, self.onMsgTimeOutChangeSeat), msgClass = RLProtocol.msgTimeOutChangeSeat}, -- 匹配成功后超时了，需要换桌处理
        {callback = handler(self, self.onMsgFeeBaseScore), msgClass = RLProtocol.msgFeeAndBaseScore}, -- 服务费和底分，输赢封顶
        {callback = handler(self, self.onMsgResult), msgClass = RLProtocol.msgResult}, -- 结算
        {callback = handler(self, self.onMsgPlayerGoBroke), msgClass = RLProtocol.msgPlayerGoBroke}, -- 破产和封顶
        -- GL
        {callback = handler(self, self.onMsgKickReason), msgClass = GLProtocol.msgKickReason}, -- 踢人理由
        {callback = handler(self, self.onMsgMultData), msgClass = GLProtocol.msgMultData}, -- 接收加倍广播
        {callback = handler(self, self.onMsgSpecBase), msgClass = GLProtocol.msgSpecBase}, -- 特殊底
        {callback = handler(self, self.onMsgCardNumLeft), msgClass = GLProtocol.msgCardNumLeft}, -- 记牌器
        {callback = handler(self, self.onMsgCallDouble), msgClass = GLProtocol.msgCallDouble}, -- 加倍信息
        -- LCL
        {callback = handler(self, self.onMsgBaseCard), msgClass = LCLProtocol.msgBaseCard},
        {callback = handler(self, self.onMsgBaseBack), msgClass = LCLProtocol.msgBaseBack},
        {callback = handler(self, self.onMsgAddBase), msgClass = LCLProtocol.msgAddBase},
        {callback = handler(self, self.onMsgHandCard), msgClass = LCLProtocol.msgHandCard},
        {callback = handler(self, self.onMsgHandBack), msgClass = LCLProtocol.msgHandBack},
        {callback = handler(self, self.onMsgPlayCard), msgClass = LCLProtocol.msgPlayCard},
        {callback = handler(self, self.onMsgOutCard), msgClass = LCLProtocol.msgOutCard},
        {callback = handler(self, self.onMsgBanker), msgClass = LCLProtocol.msgBanker},
        {callback = handler(self, self.onMsgState), msgClass = LCLProtocol.msgState},
        {callback = handler(self, self.onMsgGameStep), msgClass = LCLProtocol.msgGameStep},
        {callback = handler(self, self.onMsgPower), msgClass = LCLProtocol.msgPower},
        {callback = handler(self, self.onMsgRespPower), msgClass = LCLProtocol.msgRespPower},
        {callback = handler(self, self.onMsgClock), msgClass = LCLProtocol.msgClock},
        {callback = handler(self, self.onMsgTakeFirst), msgClass = LCLProtocol.msgTakeFirst},
        {callback = handler(self, self.onMsgTurnData), msgClass = LCLProtocol.msgTurnData},
        {callback = handler(self, self.onMsgRelinkEnter), msgClass = LCLProtocol.msgRelinkEnter},
        {callback = handler(self, self.onMsgTrust), msgClass = LCLProtocol.msgTrust},
        {callback = handler(self, self.onMsgStartGame), msgClass = LCLProtocol.msgStartGame}, -- 开始游戏
        {callback = handler(self, self.onMsgSpecfData), msgClass = LCLProtocol.msgSpecfData}, -- 可做的牌
        -- ML
        {callback = handler(self, self.onMsgTalkMsg), msgClass = FWProtocol.msgTalkMsg}
    }
end

function GameMainModule:getReqConfig()
    return {
        --
        ReqPlayerAct = {reqPath = "newgold.GoldCommon.Req.Room.GoldReqPlayerAct", callBack = self.onPlayerActCallBack},
        ReqLeaveRoom = {reqPath = "newgold.GoldCommon.Req.Room.GoldReqLeaveRoom", callBack = self.onLeaveRoomCallBack}
    }
end

function GameMainModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._listenerCheckedCard then
        eventDispatcher:removeEventListener(self._listenerCheckedCard)
    end
end

function GameMainModule:initEvents()
    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)
end

-- 牌层选中牌后触发的事件
function GameMainModule:gameEventCheckedCards(event)
    self:checkSelectedCard(event.selectCardIDs)
end

-- 检验目前选中的牌
function GameMainModule:checkSelectedCard(checkedCards)
    local popCardType = 0
    if #checkedCards > 0 then
        local tempCards = self:getTipLogic().gameLogic:sortMaxCardsByValue(checkedCards)
        local opt = {
            cards = tempCards,
            power = 0,
            cardType = 0
        }
        local popCardType = self:getTipLogic().gameLogic:calculateCardType(tempCards, false, opt)
        if popCardType == GameMainDefine.CardType.CTID_NONE then
            --非法牌型
            self:dispatchEvent({name = self.EVENT_CAN_PLAY_CARD, msg = {canPlayCard = false}})
        else
            local prePlayerSeat = self._gameData:getPrePlayerSeat()
            local nowPlayerSeat = self._gameData:getNowPlayerSeat()
            --有效牌型，再判断自己是否首出，非首出，要判断自己的牌是否可以压其他人上一次出的牌
            if nowPlayerSeat == GameMainDefine.SELF_LOCAL_SEAT then
                if prePlayerSeat == nowPlayerSeat then
                    self:dispatchEvent({name = self.EVENT_CAN_PLAY_CARD, msg = {canPlayCard = true}})
                else
                    local preOutCard = self._gameData:getOutCards(prePlayerSeat)
                    local isBig = true
                    --TODO
                    self:dispatchEvent({name = self.EVENT_CAN_PLAY_CARD, msg = {canPlayCard = isBig}})
                end
            end
        end
        self:dispatchEvent({name = self.EVENT_SHOW_CARDTYPE_WAIT, msg = {cardType = popCardType}})
        self._gameData:setSelectOutCards(opt.cards, opt.cardType, opt.power)
    else
        self:dispatchEvent({name = self.EVENT_SHOW_CARDTYPE_WAIT, msg = {cardType = GameMainDefine.CardType.CTID_NONE}})
        self._gameData:setSelectOutCards({}, 0, 0)
    end
end

function GameMainModule:startHeartBeat()
    self:stopHeartBeat()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        NG.msgManager:sendHeartBeat()
    end, 5, false)
end

function GameMainModule:stopHeartBeat()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

-- 请求加入房间（用于升降场） todo
function GameMainModule:reqJoinRoom(appid)
    NG.goldLobby:getModule("GoldCommon"):reqJoinRoom(NG.goldGame.gameID,false, NG.RoomTool.getRoomIdByAppId(appid), appid)
end

-- 请求房间行为
function GameMainModule:reqPlayerAct(action, tableid)
    self:startReq("ReqPlayerAct", action, GoldPlayerData.AppId, tableid)
end

-- 显示换桌成功
function GameMainModule:changeTableSuccess()
    self:dispatchEvent({name = self.EVENT_CHANGE_TABLE_SUCCESS})
    self:resetTable()
end

function GameMainModule:resetTable()
    self._gameData:initData()
    self:dispatchEvent({name = self.EVENT_RESET_TABLE})
end

function GameMainModule:onPlayerActCallBack(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.flag == "kSuccess" then
            self:resetTable()
            self:changeTableSuccess()
            return
        end
    end
    self:changeTableWithResult(false)
end

-- 显示准备按钮
function GameMainModule:onMsgShowBtns(msg)
    self._lockQuit = true
    NG.SysTool.performDelayOnce(function()
        self._lockQuit = false
    end, 2)
    self:dispatchEvent({name = self.EVENT_SHOW_GAME_BTNS, data = msg})
end

-- 匹配超时
function GameMainModule:onMsgTimeOutChangeSeat()
    self:dispatchEvent({name = self.EVENT_TIME_OUT_CHANGE_SEAT})
end

-- 开始游戏
function GameMainModule:onMsgStartGame(msg)
    print("onMsgStartGame 游戏开始")
    NG.GAME.roomTableData:flushPlayerBySeatCopy()
    self._gameData:initData()
    self._gameData:setGameStart(true)
    self:dispatchEvent({name = self.EVENT_START_GAME, data = msg})
    NG.viewManager:closeView("NewGold_GoldLaunchView")
end

function GameMainModule:onMsgTalkMsg(msg)
    NG.soundManager:playTalkEffect(msg.m_talkindex)
    self:dispatchEvent({name = self.EVENT_TALK_MSG, data = msg})
end

function GameMainModule:onMsgBaseCard(msgData)
    self._gameData:setBaseCards(msgData.nCards)
    self:dispatchEvent({name = self.EVENT_BASE_CARDS_CHANGE})
end

local CreateCardBackData = function (cardCount)
    local baseBack = {}
    for i = 1, cardCount do
        table.insert(baseBack, 55)
    end
    return baseBack
end

function GameMainModule:onMsgBaseBack(msgData)
    local baseBack = CreateCardBackData(msgData.nCount)
    self._gameData:setBaseCards(baseBack)
end

function GameMainModule:onMsgAddBase(msgData)
    if self._gameData:getGameStep() == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ADD_BASE then
        local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
        local baseCards = self._gameData:getBaseCards()
        if (localSeat ~= GameMainDefine.SELF_LOCAL_SEAT) then
            baseCards = CreateCardBackData(#baseCards)
        end
        self._gameData:addHandCards(localSeat, baseCards)
        self:dispatchEvent({name = self.EVENT_ADD_BASE, msg = {localSeat = localSeat}})
    end
end

function GameMainModule:onMsgHandCard(msgData)
    if self._gameData:getGameStep() ~= GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ADD_BASE then
        local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
        self._gameData:setHandCards(localSeat, msgData.nCards)
    end
end

function GameMainModule:onMsgHandBack(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    local handBack = CreateCardBackData(msgData.nCount)
    self._gameData:setHandCards(localSeat, handBack)
end

function GameMainModule:onMsgPlayCard(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    local nextSeat = NG.GAME.roomTableData:getNextSeat(localSeat)
    if msgData.nCardCount ~= 0 then
        if GameMainDefine.SELF_LOCAL_SEAT == localSeat then
            self._gameData:delHandCards(localSeat, msgData.nCards)
        else
            local handBack = CreateCardBackData(msgData.nCardCount)
            self._gameData:delHandCards(localSeat, handBack)
        end
        self._gameData:setOutCards(localSeat, msgData.nCards, msgData.nTypeID, msgData.nPower)
        
        if msgData.nTypeID >= GameMainDefine.CardType.CTID_SI_ZHANG and msgData.nTypeID <= GameMainDefine.CardType.CTID_BA_ZHANG then
            self._gameData:addOutBombCnt(localSeat, 1)
        end

        self._gameData:setPassState(localSeat, false)
        self._gameData:setNowPlayerSeat(nextSeat)
        self._gameData:setPrePlayerSeat(localSeat)

        self._gameData:setOutCards(nextSeat, {}, 0, 0)
        self._gameData:setPassState(nextSeat, false)
    else
        self._gameData:setOutCards(localSeat, {}, 0, 0)
        self._gameData:setPassState(localSeat, true)
        self._gameData:setNowPlayerSeat(nextSeat)
        self._gameData:setOutCards(nextSeat, {}, 0, 0)
        self._gameData:setPassState(nextSeat, false)

        if self._gameData:getNowPlayerSeat() == self._gameData:getPrePlayerSeat() then
            for i = 1, GameMainDefine.MAX_PLAYER do
                self._gameData:setOutCards(i, {}, 0, 0)
                self._gameData:setPassState(i, false)
            end
        end
    end

    if msgData.nPower > 0 then
        -- 播牌型音效
        NG.soundManager:playCardEffect(msgData.nTypeID, msgData.nCards)
    end

    self:dispatchEvent({name = self.EVENT_PLAY_CARD, msg = {localSeat = localSeat}})

    --需要等显示逻辑处理完后再记录为上一轮出牌玩家
    if msgData.nCardCount ~= 0 then
        self._gameData:setPrePlayCardSeat(localSeat)
    end
end

function GameMainModule:onMsgOutCard(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    if msgData.nCardCount ~= 0 then
        self._gameData:setOutCards(localSeat, msgData.nCards, msgData.nTypeID, msgData.nPower)
    else
        self._gameData:setOutCards(localSeat, {}, 0, 0)
        self._gameData:setPassState(localSeat, true)
        NG.soundManager:playOtherEffect(GoldSoundConfig.otherBuyao)
    end
    self:dispatchEvent({name = self.EVENT_OUT_CARDS, msg = {localSeat = localSeat}})
end

function GameMainModule:onMsgBanker(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    self._gameData:setBankerSeat(localSeat)
    self:dispatchEvent({name = self.EVENT_BANKER})
end

function GameMainModule:onMsgState(msgData)
    
end

function GameMainModule:onMsgGameStep(msgData)
    self._gameData:setGameStep(msgData.nStepID)
    if GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD == msgData.nStepID then
        local backerLocalSeat = self._gameData:getBankerSeat()
        self._gameData:setPrePlayerSeat(backerLocalSeat)
        self._gameData:setNowPlayerSeat(backerLocalSeat)
    elseif GameMainDefine.ENUM_GAME_STEP.GAME_STEP_START_GAME == msgData.nStepID then
        local nowSr = NG.GAME.roomTableData:getSelf():getSr()
        self._gameData:setStartGameGold(nowSr)
    elseif GameMainDefine.ENUM_GAME_STEP.GAME_STEP_SPECF_CARD == msgData.nStepID then
        local seat = NG.GAME.roomTableData:getSelfSeat()
        if seat ~= 0 then        
            NG.TipTool.showToast("等待0号位玩家做牌")
        end
    end

    self:dispatchEvent({name = self.EVENT_GAME_STEP_CHANGE})
end

function GameMainModule:onMsgPower(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    self._gameData:setPower(localSeat, msgData.nPower)
    
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        self._gameData:setTipData()

        local gameStep = self._gameData:getGameStep()
        if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD then
            local tipData = self._gameData:getTipData()
            if tipData then
                local selfHandNum = #self._gameData:getHandCards(GameMainDefine.SELF_LOCAL_SEAT)
                for i=1, #tipData.tipArr do
                    if selfHandNum == #tipData.tipArr[i] then
                        -- self:dispatchEvent({name = self.EVENT_TIP_CARD , msg = {cards = tipLogic:clone(tipData)}})
                        self:sendTipCard(tipData.powerArr[i], tipData.tipArr[i])
                        break
                    end
                end
            end
        end
    end
    self:dispatchEvent({name = self.EVENT_POWER, msg = {localSeat = localSeat}})
end

function GameMainModule:onMsgRespPower(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    self:dispatchEvent({name = self.EVENT_POWER_INFO, msg = {localSeat = localSeat, power = msgData.nPower}})
end

function GameMainModule:onMsgClock(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    -- if GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD == self._gameData:getGameStep() then
    --     NG.soundManager:playOtherEffect(GoldSoundConfig.otherBuyao)
    -- end
    self:dispatchEvent({name = self.EVENT_CLOCK, msg = {localSeat = localSeat, time = msgData.nTime}})
end

function GameMainModule:onMsgTakeFirst(msgData)
    self:dispatchEvent({name = self.EVENT_TAKE_FIRST})
end

function GameMainModule:onMsgTurnData(msgData)
    local prePlayerSeat = NG.GAME.roomTableData:seatToLocal(msgData.nPreSeat)
    local nowPlayerSeat = NG.GAME.roomTableData:seatToLocal(msgData.nNowSeat)
    self._gameData:setPrePlayerSeat(prePlayerSeat)
    self._gameData:setNowPlayerSeat(nowPlayerSeat)
end

function GameMainModule:onMsgRelinkEnter(msgData)
    self:dispatchEvent({name = self.EVENT_RELINK_ENTER})
end

function GameMainModule:onMsgTrust(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    local isTrust = msgData.nFlag == 1
    self._gameData:setTrustByLocalSeat(localSeat, isTrust)
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT and isTrust then
        TrustLayer.new():showSelf()
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_TRUST, msg = {localSeat = localSeat}})
end

function GameMainModule:sendTipCard(powers,tipData)
    -- dump(powers,"sendTipCard")
    -- dump(tipData,"sendTipCard")
    local tipLogic = NG.goldGame:getModule("GameMain"):getTipLogic()
    self:checkSelectedCard(tipLogic:clone(tipData))
    self._gameData:setSelectOutCards(tipLogic:clone(tipData), powers.cardType, powers.power)
    self:dispatchEvent({name = self.EVENT_TIP_CARD , msg = {cards = tipLogic:clone(tipData)}})
end

-- 处理game相关服务逻辑
function GameMainModule:respStartGame(XYID, buff, len, processid)
    if XYID == GoldRoomProtoDefine.xyid.kStartGame then
        local info = NG.StringTool.gameProtobufDataToLuaData(buff, "StartGame")
        if info.can_start then
            if XH.SceneManager:getInstance():getTopSceneTag() == NG.SCENE_TAG.NEWGOLD_GAME then
                -- 触发playconnect即可
                NG.msgManager:setAppId()
                NG.msgManager:sendPlayerConnect()
                self:changeTableSuccess()
            end
        end
    elseif XYID == GoldRoomProtoDefine.xyid.kRespPlayerConnect then
        local info = NG.StringTool.gameProtobufDataToLuaData(buff, "RespPlayerConnect")
        if info.flag ~= "kSuccess" then
            NG.TipTool.showToast("加入房间异常，请点击继续游戏重新匹配~")
            NG.goldGame:getModule("Players"):removeWhenPlayerLeave(NG.GAME.roomTableData:getSelfSeat())
            self._gameData:setGameStart(false)
            self:dispatchEvent({name = self.EVENT_PLAYER_CONNECT_FAILED})
        end
    end
end

function GameMainModule:onDestroy()
    self:stopHeartBeat()
    NG.netEngine:removeProtocolScriptFuncByObj(self, self.respStartGame, GoldAreaConfig.GroupID)
    self:removeAllEventListeners()
    GameMainModule.super.onDestroy(self)
end

-- 服务费和底分，输赢封顶
function GameMainModule:onMsgFeeBaseScore(msg)
    self._gameData:setBase(msg.nBaseScore)
    self._gameData:setServicePay(msg.nServcieFee)
    self._gameData:setMaxWin(msg.nMaxWin)
    self:dispatchEvent({name = self.EVENT_ON_MSG_FEE_BASE_SCORE, data = msg})
end

-- 结算
function GameMainModule:onMsgResult(msg)
    self._gameData:setResult(msg)
    self._gameData:setGameStart(false)
    self:dispatchEvent({name = self.EVENT_ON_MSG_RESULT, data = msg})
end

-- 破产和封顶
function GameMainModule:onMsgPlayerGoBroke(msg)
    self._gameData:setBroke(msg.m_Broke)
    self._gameData:setCap(msg.m_BCap)
    local seat = NG.GAME.roomTableData:getSelfSeat()
    if msg.m_Broke[seat + 1] then
        NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_ACT_IS_BROKEN, true)
    end
end

-- 踢人理由 无用
function GameMainModule:onMsgKickReason(msg)
    --print("onMsgKickReason")
end

-- 接收加倍广播(超级加倍) 实际只用到以下几个
-- getBaseMult
-- getMult
-- getBoomMult
-- getChunTianMult
function GameMainModule:onMsgMultData(msg)
    if msg.nFlag == 0 then -- 基础倍数
        self._gameData:setBaseMult(msg.nData)
    elseif msg.nFlag == 3 then -- 抢地主倍数
        self._gameData:setRobMult(msg.nData)
    elseif msg.nFlag == 6 then -- 加倍倍数
        self._gameData:setDoubleMult(msg.nData)
    elseif msg.nFlag == 7 then -- 所有倍数
        self._gameData:setMult(msg.nData)
    elseif msg.nFlag == 2 then -- 炸弹倍数
        self._gameData:setBoomMult(msg.nData)
    elseif msg.nFlag == 4 or msg.nFlag == 5 then -- 春天反春天
        self._gameData:setChunTianMult(msg.nData)
    end
    self:dispatchEvent({name = self.EVENT_UPDATE_MULT_DATA, data = msg})
end

-- 特殊底
function GameMainModule:onMsgSpecBase(msg)
    self._gameData:setSpaceBase(msg)
    self:dispatchEvent({name = self.EVENT_UPDATE_SPACE_BASE, data = msg})
end

-- 记牌器
function GameMainModule:onMsgCardNumLeft(msg)
    self:dispatchEvent({name = self.EVENT_UPDATE_MARKER_DATA, data = msg})
end

-- 加倍信息
function GameMainModule:onMsgCallDouble(msg)
    self:dispatchEvent({name = self.EVENT_CALL_DOUBLE, data = msg})
end

function GameMainModule:showContinueBtn()
    self:dispatchEvent({name = self.EVENT_SHOW_CONTINUE_BTN})
end

-- 换桌操作，返回是否需要升降场 isChangeTable true为换桌，false为重新加入
function GameMainModule:changeTableWithResult(isChangeTable)
    local type, info, lastInfo = NG.RoomTool.isNeedChangeLevel()
    if type == GoldCommonDefine.ChangeLevel.DOWN then
        self:resetTable()
        NG.goldGame:showNotEnoughLayer(info, lastInfo)
        self:showContinueBtn()
        return true
    elseif type == GoldCommonDefine.ChangeLevel.UP then
        self:resetTable()
        NG.goldGame:showTooMuchLayer(info, lastInfo)
        self:showContinueBtn()
        return true
    end
    local isMust = NG.goldLobby:getModule("GoldCommon"):getNeedChangeTable()
    if isMust then
        self:resetTable()
        self:reqJoinRoom(GoldPlayerData.AppId)
        return false
    end
    if isChangeTable then
        self:reqPlayerAct(GoldCommonDefine.Action.kChange2Start, -1)
    else
        self:resetTable()
        self:reqJoinRoom(GoldPlayerData.AppId)
    end
    return false
end

function GameMainModule:showLookCard()
    self:dispatchEvent({name = self.EVENT_LOOK_CARD_TYPE})
end

-- 请求畅玩活动接口
function GameMainModule:openPlayAwardInResult()
    NG.goldLobby:getModule("GoldPlayAward"):openPlayAwardInResult()
end

-- 请折扣活动接口
function GameMainModule:judgeShowView(score)
    NG.goldLobby:getModule("GoldBankrupt"):judgeShowView(score)
end

-- 开始游戏
function GameMainModule:onMsgSpecfData(msg)
    -- print("onMsgSpecfData 做牌")
    -- dump(msg,"可做的牌")
    NG.goldGame:showZuoPai()
end

-- 请求离开房间
function GameMainModule:reqLeaveRoom()
    -- 匹配成功后2S才允许退出，否则会退出失败
    if self._lockQuit then
        NG.TipTool.showToast("退出过快，请重试")
        return
    end
    NG.TipTool.showLoading()
    self:startReq("ReqLeaveRoom", GoldPlayerData.AppId)
end

function GameMainModule:onLeaveRoomCallBack(req, type, data)
    NG.TipTool.hideLoading()
    NG.goldGame:exit()
end

-- 大厅重连标识
function GameMainModule:relinkSuccess()
    NG.SysTool.performDelayOnce(function()
        NG.msgManager:sendPlayerConnect()
    end, 0.1)
end

-- 播放SG动画
function GameMainModule:showHeadSGAni()
    self:dispatchEvent({name = self.EVENT_SG_ANI})
end

function GameMainModule:updateMultSingle()
    self:dispatchEvent({name = self.EVENT_UPDATE_MULT_DATA_SINGLE})
end

-- 发送准备
function GameMainModule:sendGameReady()
    NG.msgManager:sendGameReady()
    self:dispatchEvent({name = self.EVENT_START_GAME_READY})
end

-- 记牌器显示隐藏
function GameMainModule:flushMarkerState(isshow)
    self:dispatchEvent({ name = self.EVENT_FLUSH_MARKER_STATE, msg = { isshow = isshow } })
end

return GameMainModule
