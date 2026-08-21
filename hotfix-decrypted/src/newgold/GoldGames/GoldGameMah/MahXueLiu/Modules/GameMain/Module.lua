local GameMainModule = NG.GAME.gameClass("GameMainModule", NG.GAME.ModuleBase)
local FWProtocol = NG.GAME.gameRequire("Protocol.FWProtocol")
local MahProtocol = NG.GAME.gameRequire("Protocol.MahProtocol")
local GameData = NG.GAME.gameRequire("Modules.GameMain.Data.GameData")
local GoldCommonDefine = require("newgold.GoldCommon.Define.GoldCommonDefine")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")
local TrustLayer = NG.GAME.gameRequire("Modules.GameMain.TrustLayer")
local IsTest = require("app.Config.GlobalConfig").IsTest
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest

GameMainModule.EVENT_SHOW_GAME_BTNS = "EVENT_SHOW_GAME_BTNS" -- 显示准备按钮
GameMainModule.EVENT_TIME_OUT_CHANGE_SEAT = "EVENT_TIME_OUT_CHANGE_SEAT" -- 匹配超时
GameMainModule.EVENT_TALK_MSG = "EVENT_TALK_MSG"
GameMainModule.EVENT_CHANGE_TABLE_SUCCESS = "EVENT_CHANGE_TABLE_SUCCESS" -- 换桌成功
GameMainModule.EVENT_TAKE_FIRST = "EVENT_TAKE_FIRST"
GameMainModule.EVENT_RELINK_ENTER = "EVENT_RELINK_ENTER"
GameMainModule.EVENT_TEST = "EVENT_TEST"
GameMainModule.EVENT_POWER = "EVENT_POWER"
GameMainModule.EVENT_POWER_INFO = "EVENT_POWER_INFO"
GameMainModule.EVENT_CLOCK = "EVENT_CLOCK"
GameMainModule.EVENT_ON_MSG_RESULT = "EVENT_ON_MSG_RESULT" -- 游戏结束，收到结算
GameMainModule.EVENT_BANKER = "EVENT_BANKER"
GameMainModule.EVENT_LOOK_CARD_TYPE = "EVENT_LOOK_CARD_TYPE"
GameMainModule.EVENT_SHOW_CONTINUE_BTN = "EVENT_SHOW_CONTINUE_BTN"
GameMainModule.EVENT_RESET_TABLE = "EVENT_RESET_TABLE"
GameMainModule.EVENT_PLAYER_TRUST = "EVENT_PLAYER_TRUST"
GameMainModule.EVENT_START_GAME_READY = "EVENT_START_GAME_READY"
GameMainModule.EVENT_PLAYER_CONNECT_FAILED = "EVENT_PLAYER_CONNECT_FAILED"
GameMainModule.EVENT_BG_CLICK = "EVENT_BG_CLICK"
GameMainModule.EVENT_SG_ANI = "EVENT_SG_ANI"

function GameMainModule:ctor()
    GameMainModule.super.ctor(self)

    self._gameData = GameData.new()
    self:initMessages()
    if not IsGoldBoxTest then
        self:startHeartBeat()
    end
    self:initEvents()

    NG.SysTool.performDelayOnce(function()
        -- self:changeTableSuccess() -- 先默认显示匹配
        NG.msgManager:sendPlayerConnect()
    end, 0.001)

    --TEST
    -- if IsTest then
    --     NG.SysTool.performDelayOnce(function()
    --         -- self:dispatchEvent({name = self.EVENT_HUAN_PAI_START, msg = {localSeat = 2}})
    --         -- NG.goldGame:showWinlost(false)
    --         -- self:dispatchEvent({name = self.EVENT_TEST, msg = {localSeat = 2}})
    --         -- self:onMsgBankRuptcyState({nSeat=0,nState=2})
    --         for i = 0, 3 do
    --             self:onMsgBankRuptcyState({ nSeat = i, nState = 1, nTime = 20 })
    --         end
    --     end, 2)
    -- end
end

function GameMainModule:initServerToClientMessage()
    GameMainModule.super.initServerToClientMessage(self)
    local moduleProxy = self:getModuleProxy(NG.netEngine)
    moduleProxy:addEventListener(NG.GameMProtocol.RespPlayerDismiss.event_key, handler(self, self.onRespPlayerDismiss))
end

function GameMainModule:initMessages()
    -- NG.netEngine:addProtocolScriptFuncByObj(self, self.respStartGame, GoldRoomProtoDefine.processid, GoldAreaConfig.GroupID)
end

function GameMainModule:getData()
    return self._gameData
end

function GameMainModule:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("GoldLogin"), eventKeyName = "EVENT_LOGIN_SUCCESS_GOLD_NEW", callBack = "relinkSuccess" },
    }
end

function GameMainModule:getSubXYDealList()
    return {
        -- ML
        { callback = handler(self, self.onMsgTalkMsg), msgClass = FWProtocol.msgTalkMsg },

        { callback = handler(self, self.onMsgBankRuptcyState), msgClass = MahProtocol.msgBankRuptcyState },
    }
end

function GameMainModule:getEventKey()
    return NG.GameMProtocol.ServerToClientMessage.event_key
end

function GameMainModule:onServerToClientMessage(event)
    local sToClientData = NG.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)
    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen
    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        print("gameMain 【recv " .. subXYID .. "】 ", os.clock())
        -- dump(msgData)

        self:doServerToClientMessage(record, msgData, subXYID)
    end
end

function GameMainModule:onRespPlayerDismiss(event)
    local msg = NG.GameMProtocol.RespPlayerDismiss:new()
    msg:bistream(event.msg.buff, event.msg.len)
    -- dump(msg)
    if msg.m_flag == NG.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_SUCCEED or
    msg.m_flag == NG.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_TIMEOUT_SUCCESSED or
    msg.m_flag == 5 then
        NG.TipTool.showTip({
            type = NG.TIP_LAYER_TYPE.OK,
            funcOK = function()
                NG.goldGame:exit()
            end
        }, msg.m_dismissReason .. "房间已解散, 错误码：" .. msg.m_flag)
    end
end

function GameMainModule:getReqConfig()
    return {
        --
        ReqPlayerAct = { reqPath = "newgold.GoldCommon.Req.Room.GoldReqPlayerAct", callBack = self.onPlayerActCallBack },
        ReqLeaveRoom = { reqPath = "newgold.GoldCommon.Req.Room.GoldReqLeaveRoom", callBack = self.onLeaveRoomCallBack },
        ReqLeaveRoom50 = { reqPath = "newgold.GoldCommon.Req.Room50.GoldReqLeaveRoom", callBack = self.onLeaveRoomCallBack },
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
function GameMainModule:reqJoinRoom(Session_id)
    NG.goldLobby:getModule("GoldCommon"):reqJoinRoom(NG.goldGame.gameID, false, 0, 0, Session_id)
end

-- 请求房间行为
function GameMainModule:reqPlayerAct(action, tableid)
    self:startReq("ReqPlayerAct", action, GoldPlayerData.AppId, tableid)
end

-- 显示换桌成功
function GameMainModule:changeTableSuccess()
    self:dispatchEvent({ name = self.EVENT_CHANGE_TABLE_SUCCESS })
    self:resetTable()
end

function GameMainModule:resetTable()
    self._gameData:initData()
    self:dispatchEvent({ name = self.EVENT_RESET_TABLE })
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


function GameMainModule:onMsgTalkMsg(msg)
    NG.soundManager:playTalkEffect(msg.m_talkindex)
    self:dispatchEvent({ name = self.EVENT_TALK_MSG, data = msg })
end

function GameMainModule:onMsgBankRuptcyState(msgData)
    self._gameData:setBrokenState(msgData.nSeat, msgData)
    if msgData.nSeat == NG.GAME.roomTableData:getSelfSeat() then
        if msgData.nState == NG.GAME.GameDefine.BANKRUP_STATE.WAITE then
            NG.goldGame:showBankrupTip()
        end
    end
end

-- 播放SG动画
function GameMainModule:showHeadSGAni()
    self:dispatchEvent({name = self.EVENT_SG_ANI})
end

function GameMainModule:onDestroy()
    self:removeAllEventListeners()
    self:stopHeartBeat()
    GameMainModule.super.onDestroy(self)
end

function GameMainModule:showContinueBtn()
    self:dispatchEvent({ name = self.EVENT_SHOW_CONTINUE_BTN })
end

-- 换桌操作，返回是否需要升降场 isChangeTable true为换桌，false为重新加入
function GameMainModule:changeTableWithResult(isChangeTable)
    local type, info, lastInfo = NG.RoomTool.isNeedChangeLevel50()
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
        self:reqJoinRoom(GoldPlayerData.Session_id)
        return false
    end
    if isChangeTable then
        self:reqPlayerAct(GoldCommonDefine.Action.kChange2Start, -1)
    else
        self:resetTable()
        self:reqJoinRoom(GoldPlayerData.Session_id)
    end
    return false
end

function GameMainModule:showLookCard()
    self:dispatchEvent({ name = self.EVENT_LOOK_CARD_TYPE })
end

-- 请求畅玩活动接口
function GameMainModule:openPlayAwardInResult()
    NG.goldLobby:getModule("GoldPlayAward"):openPlayAwardInResult()
end

-- 请折扣活动接口
function GameMainModule:judgeShowView(score)
    NG.goldLobby:getModule("GoldBankrupt"):judgeShowView(score)
end


-- 请求离开房间
function GameMainModule:reqLeaveRoom()
    -- 匹配成功后2S才允许退出，否则会退出失败
    if self._lockQuit then
        NG.TipTool.showToast("退出过快，请重试")
        return
    end
    NG.TipTool.showLoading()
    self:startReq("ReqLeaveRoom50", GoldPlayerData.AppId)
end

function GameMainModule:onLeaveRoomCallBack(req, type, data)
    if data.code == "GOLD_SUCCESS" then
        GoldPlayerData.Session_id = 0
        NG.TipTool.hideLoading()
        NG.goldGame:exit()
    else
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "离开房间失败" .. data.code)
    end
end

-- 大厅重连标识
function GameMainModule:relinkSuccess()
    NG.SysTool.performDelayOnce(function()
        NG.msgManager:sendPlayerConnect()
    end, 0.1)
end

-- 发送准备
function GameMainModule:sendGameReady()
    NG.msgManager:sendGameReady()
    self:dispatchEvent({ name = self.EVENT_START_GAME_READY })
end

function GameMainModule:onBgClick()
    self:dispatchEvent({ name = self.EVENT_BG_CLICK })
end
return GameMainModule�-  