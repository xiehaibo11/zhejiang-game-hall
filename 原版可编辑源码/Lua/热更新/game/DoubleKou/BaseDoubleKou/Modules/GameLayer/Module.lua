local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local GameData = CF.gameRequire("Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

GameModule.EVENT_GAME_START = "EVENT_GAME_START"
GameModule.EVENT_HAND_CARD_CHANGED = "EVENT_HAND_CARD_CHANGED"
GameModule.EVENT_PLAYER_SHOW_OUT_CARD = "EVENT_PLAYER_SHOW_OUT_CARD"
GameModule.EVENT_GAME_OPEN_CARD = "EVENT_GAME_OPEN_CARD"
GameModule.EVENT_GAME_OPEN_CARD_SEAT = "EVENT_GAME_OPEN_CARD_SEAT"
GameModule.EVENT_GAME_WIN_ORDER = "EVENT_GAME_WIN_ORDER"
GameModule.EVENT_GAME_END = "EVENT_GAME_END"
GameModule.EVENT_GAME_CAN_CHAODI = "EVENT_GAME_CAN_CHAODI"
GameModule.EVENT_PLAYER_GET_POWER = "EVENT_PLAYER_GET_POWER"
GameModule.EVENT_SHOW_ALL_PLAYER_HANDCARDS = "EVENT_SHOW_ALL_PLAYER_HANDCARDS"
GameModule.EVENT_GAME_NO_OUT_GONG = "EVENT_GAME_NO_OUT_GONG"
GameModule.EVENT_SHOW_CARDTYPE_SELECT = "EVENT_SHOW_CARDTYPE_SELECT"
GameModule.EVENT_GAME_SELECT_HINTCARDS = "EVENT_GAME_SELECT_HINTCARDS"
GameModule.EVENT_GAME_CHANGE_BTNS_STATE = "EVENT_GAME_CHANGE_BTNS_STATE"
GameModule.EVENT_PLAYER_HEAD_CLOCK = "EVENT_PLAYER_HEAD_CLOCK"
GameModule.EVENT_GAME_PLAYER_START = "EVENT_GAME_PLAYER_START"
GameModule.EVENT_AUTO_PASS = "EVENT_AUTO_PASS"
GameModule.EVENT_GAME_SHOW_CHANGE_BTN = "EVENT_GAME_SHOW_CHANGE_BTN"
GameModule.EVENT_SPECF_CARD = "EVENT_SPECF_CARD"
GameModule.EVENT_GAME_CAN_CHAODI_PLAY_BACK = "EVENT_GAME_CAN_CHAODI_PLAY_BACK"
GameModule.EVENT_SHOW_SPECIAL_BOMB_GOND = "EVENT_SHOW_SPECIAL_BOMB_GOND"
GameModule.EVENT_CLEAR_WIN_FIRE_ANI = "EVENT_CLEAR_WIN_FIRE_ANI"

-- 八王动画
GameModule.EVENT_PLAY_EIGHTKING_START_ANI = "EVENT_PLAY_EIGHTKING_START_ANI"

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:initEvents()
end

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock}, --1419
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart}, --1401
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep}, --1402
        {callback = handler(self, self.onMsgJokerData), msgClass = CF.GameProtocol.msgJokerData}, --1433
        {callback = handler(self, self.onMsgAllOutRecord), msgClass = CF.GameProtocol.msgAllOutRecord}, --1434
        {callback = handler(self, self.onMsgHandCard), msgClass = CF.GameProtocol.msgHandCard}, --1403
        {callback = handler(self, self.onMsgShowOutCards), msgClass = CF.GameProtocol.msgShowOutCards}, --1430
        {callback = handler(self, self.onMsgLianZhaBuDai), msgClass = CF.GameProtocol.msgLianZhaBuDai}, --1443
        {callback = handler(self, self.onMsgGameType), msgClass = CF.GameProtocol.msgGameType}, --1447
        {callback = handler(self, self.onMsgHaveMingPai), msgClass = CF.GameProtocol.msgHaveMingPai}, --1057
        {callback = handler(self, self.onMsgGameGong), msgClass = CF.GameProtocol.msgGameGong}, --1450
        {callback = handler(self, self.onMsgSwapSeat), msgClass = CF.GameProtocol.msgSwapSeat}, --1405
        {callback = handler(self, self.onMsgOpenCard), msgClass = CF.GameProtocol.msgOpenCard}, --1410
        {callback = handler(self, self.onMsgOpenCardSeat), msgClass = CF.GameProtocol.msgOpenCardSeat}, --1412
        {callback = handler(self, self.onMsgWinOrder), msgClass = CF.GameProtocol.msgWinOrder}, --1431
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd}, --1445
        {callback = handler(self, self.onMsgCanChaoDi), msgClass = CF.GameProtocol.msgCanChaoDi}, --1427
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower}, --1418
        {callback = handler(self, self.onMsgOutCards), msgClass = CF.GameProtocol.msgOutCards}, --1429
        {callback = handler(self, self.onMsgRequestSwapSeat), msgClass = CF.GameProtocol.msgRequestSwapSeat}, --1462--hjq与茶苑双扣不一致
        {callback = handler(self, self.onMsgRespondSwapSeat), msgClass = CF.GameProtocol.msgRespondSwapSeat}, --1463--hjq与茶苑双扣不一致
        {callback = handler(self, self.onMsgShowSwapSeat), msgClass = CF.GameProtocol.msgShowSwapSeat}, --1465--无
        {callback = handler(self, self.onMsgSwapSeatFlag), msgClass = CF.GameProtocol.msgSwapSeatFlag}, --1464--hjq与茶苑双扣不一致
        {callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards}, --1474
        {callback = handler(self, self.onMsgNoOutGong), msgClass = CF.GameProtocol.msgNoOutGong}, --1475--无
        {callback = handler(self, self.onMsgUseMarkerEx), msgClass = CF.GameProtocol.msgUseMarkerEx}, --1477--无
        {callback = handler(self, self.onMsgGameMut), msgClass = CF.GameProtocol.msgGameMut}, --1416
        {callback = handler(self, self.onMsgSpecfCards), msgClass = CF.GameProtocol.msgSendAllCard}, --1421
    }
end

function GameModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    }
end

function GameModule:initEvents()
    self._listenerEventOutCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventOutCards", handler(self, self.gameEventOutCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventOutCard, 1)

    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)
end

function GameModule:onDestroy()
    GameModule.super.onDestroy(self)
    self:removeAllEventListeners()
end

function GameModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._listenerEventOutCard then
        eventDispatcher:removeEventListener(self._listenerEventOutCard)
    end
    if self._listenerCheckedCard then
        eventDispatcher:removeEventListener(self._listenerCheckedCard)
    end
end

function GameModule:initDatas()
    self:initGameData()
end

function GameModule:getGameData()
    return self._gameData
end

function GameModule:initGameData()
    if self._gameData then
        self._gameData:initDatas()
    else
        self._gameData = GameData.new()
    end
end

--#
function GameModule:onMsgClock(msgData)
    if msgData.sClock > 60 or msgData.sClock < 0 then
        msgData.sClock = 0
    end

    self:dispatchEvent({name = self.EVENT_PLAYER_HEAD_CLOCK, msg = {seat = msgData.sSeat, nTime = msgData.sClock}})
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgData.sSeat)
end

function GameModule:onMsgGameStart(msgData)
    -- if self:isPlayBack() then
    --     if self._playBackData:getGameStartCount() > 0 then
    --         return
    --     end
    --     self._playBackData:addGameStartCount()
    -- end
    CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_FLAG_SHOW, msg = {show = false}})
    CF.game:getModule("Marker"):onAfterGameStart()

    CF.roomData:setIsGameStart(true)

    self:dispatchEvent({name = self.EVENT_GAME_START, msg = {}})
    if CF.roomData:isGoldRoom() then
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"对局","BMC001")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_begin",CF.roomData._gameID)
    end
    -- 隐藏牌有列表入口
    if not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_LIST_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MSG_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    end
    -- 隐藏比赛场在线列表
    local onlineModule = CF.teaHouseManager:getTeaHouseOnlineModule()
    if onlineModule then
        onlineModule:dispatchEvent({name = onlineModule.EVENT_HIDE_ONLINE_LIST})
    end
    --[[if CF.roomData:isPlayBack() then
        for seat = 0,CF.roomData:getMaxPlayer() - 1 do
            local cardIDs = self._gameData:getHandCardIDs(seat)
            if cardIDs ~= nil and #cardIDs > 0 then
                self._gameData:dispatchEvent({name = self._gameData.EVENT_HANDCARD_UPDATE, msg = {seat = seat, bDeleteCard = false}})
            end
        end
    end--]]
end

function GameModule:onMsgGameStep(msgData)
    self._gameData:setGameStep(msgData.iGameStep)
    if self._gameData:getEightKing() and msgData.iGameStep == CF.GameDefine.GAME_STEP.GAME_STEP_GAME_START then
        -- gamestep=GAME_STEP_GAME_START仅在开局下发一次，在这里播放八王开局动画
        self:dispatchEvent({name = self.EVENT_PLAY_EIGHTKING_START_ANI})
    end
    CF.game:getModule("AddMultiple"):onUpdateStepID(msgData.iGameStep)
end

--#百搭牌信息
function GameModule:onMsgJokerData(msgData)
    local tempJokerIDs = {}
    for i = 1, msgData.ucCount do
        table.insert(tempJokerIDs, msgData.ucCards[i])
    end
    self._gameData:setJokerIDs(tempJokerIDs)
end

--#
function GameModule:onMsgAllOutRecord(msgData)
    CF.game:getModule("Marker"):reset()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        for j = 1, msgData.sOutRecordCount[i] do
            local cardGroup = {}
            cardGroup.CardIDs = {}
            cardGroup.tType = msgData.sOutRecorfCardsType[i][j]
            for k = 1, msgData.ucOutRecordCardsCount[i][j] do
                table.insert(cardGroup.CardIDs, 1, msgData.ucOutRecordCards[i][j][k])
            end
            self._gameData:addOutCardRecord(i, cardGroup)
            CF.game:getModule("Marker"):updateRecoorder(cardGroup.CardIDs)
        end
    end
end

--#设置手牌（手牌数据，是否需要动画）
function GameModule:onMsgHandCard(msgData)
    local handCardIDs = {}
    for i = 1, msgData.ucCount do
        -- if CF.roomData:getIsSeer() then
        --     table.insert(handCardIDs, 0)
        -- else
        table.insert(handCardIDs, msgData.ucCards[i])
        -- end
    end
    -- local bShow = msgData.bIsShow
    -- if CF.roomData:isPlayBack() then
    --     local oldHandCardIDs = self._gameData:getHandCardIDs(msgData.ucSeat)
    --     for i = 1, #handCardIDs do
    --         if handCardIDs[i] == 0 and oldHandCardIDs ~= nil and oldHandCardIDs[i] ~= nil then
    --             bShow = true
    --             handCardIDs[i] = oldHandCardIDs[i]
    --         end
    --     end
    -- end

    local localSeat = CF.roomData:seatToLocal(msgData.ucSeat)
    local bHadShow = self._gameData:getHandCardsState(localSeat)
    if not bHadShow and msgData.bIsShow then
        CF.game:getModule("Marker"):updateRecoorder(handCardIDs)
    end
    self._gameData:setHandCardsState(localSeat, msgData.bIsShow)
    self._gameData:setHandCardIDs(msgData.ucSeat, handCardIDs)

    self:dispatchEvent(
        {
            name = self.EVENT_HAND_CARD_CHANGED,
            msg = {seat = msgData.ucSeat, bIsShow = msgData.bIsShow, bPlayAni = msgData.bPlayAni}
        }
    )

    CF.game:getModule("Marker"):showMarkerIcon(true)
    --每局开始自动打开记牌器，
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftRound = CF.game:getModule("Marker"):getGoldMarkerCnt()
    if leftTime > 0 or leftRound > 0 then
        local gameid = CF.roomData:getGameID()
        local isShow = cc.UserDefault:getInstance():getBoolForKey("SAVE_MARKER_CLICK_" .. gameid, true)
        CF.game:getModule("Marker"):showMarkerLine(isShow)
    end
end

--#用于显示打出牌
function GameModule:onMsgShowOutCards(msgData)
    self._gameData:clearHintCards() --清除提示数据
    if self._gameData:getPreconditionOutCards() then
        return
    end

    local outCardIDs = {}
    if msgData.ucCount > 0 then
        -- for i = 1, msgData.ucCount do
        --     table.insert(outCardIDs, msgData.ucCards[i])
        -- end

        --为了兼容老包，排序方式改变（老包按从大到小排序）
        for i = msgData.ucCount, 1, -1 do
            table.insert(outCardIDs, msgData.ucCards[i])
        end
    end

    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_SHOW_OUT_CARD,
            msg = {
                seat = msgData.sSeat,
                outCardIDs = outCardIDs,
                cardType = msgData.sCardType
            }
        }
    )
    if msgData.sSeat ~= CF.roomData:getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_CLEAR_WIN_FIRE_ANI})
    end
end

--#
function GameModule:onMsgLianZhaBuDai(msgData)
    self._gameData:setLianZhaBuDai(msgData.bLianZhaBuDai)
end

--##
function GameModule:onMsgGameType(msgData)
    self._gameData:setGameType(msgData.ucGameType)
end

--#是否明牌
function GameModule:onMsgHaveMingPai(msgData)
    self._gameData:setHaveMingPai(msgData.bMingPai)
end

--#胜负倍数
function GameModule:onMsgGameMut(msgData)
    if msgData.fMut and msgData.fMut > 0 then 
        self._gameData:setWinLostMut(msgData.fMut, msgData.fMut)
    else
        self._gameData:setWinLostMut(msgData.iWinTime, msgData.iLostTime)
    end

    
end

function GameModule:onMsgGameGong(msgData)
    self._gameData:setGongXianFen(msgData.sSeat, msgData.iGongXian)
end

--#根据翻牌换座位
function GameModule:onMsgSwapSeat(msgData)
    --换位
    if not msgData.bIsSwapSeatEnd then
        if msgData.bIsHuanWei then
            if msgData.ucnowseat == CF.roomData:getPlayBackSelfSeat() then
                CF.roomData:setPlayBackSelfSeat(msgData.ucotherseat)
            end
            if msgData.ucotherseat == CF.roomData:getPlayBackSelfSeat() then
                CF.roomData:setPlayBackSelfSeat(msgData.ucnowseat)
            end
            self._gameData:swapPlayerSeat(msgData.ucnowseat, msgData.ucotherseat)
            --先把本地的玩家座位对换
            self:swapPlayerSeat(msgData.ucnowseat, msgData.ucotherseat)
        else
            CF.msgManager:sendWaitSwapSeat()
        end
    end
end

function GameModule:swapPlayerSeat(ucnowseat, ucotherseat)
    local playerData = CF.roomData:getPlayerDataBySeatId(ucnowseat)
    local otherPlayerData = CF.roomData:getPlayerDataBySeatId(ucotherseat)
    if playerData then
        playerData._nSeat = ucotherseat
    end
    if otherPlayerData then
        otherPlayerData._nSeat = ucnowseat
    end
end

--#
function GameModule:onMsgOpenCard(msgData)
    self._gameData:setOpenCardID(msgData.ucCardID)

    self:dispatchEvent(
        {
            name = self.EVENT_GAME_OPEN_CARD,
            msg = {cardID = msgData.ucCardID, bPlayAni = msgData.bPlayAni}
        }
    )
end

--#
function GameModule:onMsgOpenCardSeat(msgData)
    self._gameData:setOpenCardFirstSeat(msgData.sFirstSeat)
    self._gameData:setOpenCardSecondSeat(msgData.sSecondSeat)

    self:dispatchEvent(
        {
            name = self.EVENT_GAME_OPEN_CARD_SEAT,
            msg = {
                bPlayAni = msgData.bPlayAni,
                firstSeat = msgData.sFirstSeat,
                secondSeat = msgData.sSecondSeat
            }
        }
    )
end

--#
function GameModule:onMsgWinOrder(msgData)
    self:dispatchEvent(
        {
            name = self.EVENT_GAME_WIN_ORDER,
            msg = {seat = msgData.ucSeat, order = msgData.ucOrder + 1}
        }
    )
end

--#
function GameModule:onMsgGameEnd(msgData)
    CF.roomData:setIsGameStart(false)
    self._gameData:setGameEndState(true)
    self:dispatchEvent({name = self.EVENT_GAME_END})
end

------------------------------------
--#通知可以抄底,显示抄底按钮
------------------------------------
function GameModule:onMsgCanChaoDi(msgData)
    self._gameData:setChaoDiBool(msgData.sSeat, msgData.bCanChaodi)
    if CF.roomData:isPlayBack() then
        self:dispatchEvent({name = self.EVENT_GAME_CAN_CHAODI_PLAY_BACK,seat = msgData.sSeat} )
        return
    end
    if CF.roomData:getSelfSeat() == msgData.sSeat then
        self:dispatchEvent({name = self.EVENT_GAME_CAN_CHAODI})
    end
end

--#
function GameModule:onMsgPower(msgData)
    self._gameData:setPreOutSeat(msgData.sPrePowerSeat)
    self._gameData:setPowerSeat(msgData.sPowerSeat)
    self._gameData:setPreconditionOutCards(false)
    self._gameData:clearHintCards() --清除提示数据

    if msgData.sPowerSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer() then
        self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER, msg = {}})
        return
    end

    self:dispatchEvent({name = self.EVENT_CLEAR_WIN_FIRE_ANI})
    local hintCards  --轮到自己出牌,刷新提示数据
    local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
    local isFirstSeat, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard() --是否是自由出牌
    if not isFirstSeat then
        hintCards = CardLogic.getTipsDataByOutCards(handCardIDs, preOutCardIDs, preOutCardType)
    else
        hintCards = CardLogic.getTipsDataFreedom(handCardIDs)
    end
    self._gameData:setHintCards(hintCards)
    self._isHintFirstSelect = true

    local bChaoDi = self._gameData:getChaoDiBool(msgData.sPowerSeat)
    if bChaoDi then
        self._gameData:setChaoDiBool(msgData.sPowerSeat, false)
    end

    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_GET_POWER,
            msg = {
                bChaoDi = bChaoDi,
                isFirstSeat = isFirstSeat
            }
        }
    )
end

--是否自由出牌
function GameModule:checkIsFreedomOutCard()
    local preOutSeat = self._gameData:getPreOutSeat()
    local preOutCardIDs = {} --上一个出牌数据
    local preOutCardType = 0
    local isFreedom = preOutSeat == CF.roomData:getMaxPlayer() or preOutSeat == CF.roomData:getSelfSeat()
    if isFreedom then
        return true, preOutCardIDs, preOutCardType
    end
    local lastOut = self._gameData:getOutCardRecord(preOutSeat) or {}
    local preOut = lastOut[#lastOut]
    if preOut ~= nil then
        preOutCardType = preOut.tType
        for _, cardID in ipairs(preOut.CardIDs) do
            table.insert(preOutCardIDs, cardID)
        end
    end
    return false, preOutCardIDs, preOutCardType
end

function GameModule:checkSelfCanOutCard(selectCardIDs)
    local _, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    local bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs)
    return bCanOut
end

function GameModule:onMsgOutCards(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        self._gameData:setPreconditionOutCards(false)
    end
    self._gameData:setPreOutSeat(msgData.sSeat)

    if msgData.ucCount ~= 0 then
        local deleteCardIDs = {}
        for i = 1, msgData.ucCount do
            table.insert(deleteCardIDs, msgData.ucCards[i])
        end
        self._gameData:deleteHandCardIDs(msgData.sSeat, deleteCardIDs)

        local cardGroup = {}
        cardGroup.CardIDs = {}
        cardGroup.tType = msgData.sCardType
        for k = 1, msgData.ucCount do
            table.insert(cardGroup.CardIDs, 1, msgData.ucCards[k])
        end
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        local bHandCardsOpen = self._gameData:getHandCardsState(localSeat)
        if not bHandCardsOpen then
            CF.game:getModule("Marker"):updateRecoorder(deleteCardIDs)
        end
        self._gameData:addOutCardRecord(msgData.sSeat, cardGroup)
    end
end

--#有人请求换位置
function GameModule:onMsgRequestSwapSeat(msgData)
    if msgData.srcSeat == CF.roomData:getSelfSeat() then
        return
    end

    local srcPlayer = CF.roomData:getPlayerDataBySeatId(msgData.srcSeat)
    local destPlayer = CF.roomData:getPlayerDataBySeatId(msgData.destSeat)
    if srcPlayer and destPlayer then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.REQUEST_LEAVE})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText(srcPlayer:getNickName() .. "请求和" .. destPlayer:getNickName() .. "交换位置!")
        tipPlayer:setButtonMoreEvent(
            tipPlayer.ENUM_BUTTON_TYPE.OK,
            function()
                CF.msgManager:sendRespondSwapSeat(true)
            end
        )
        tipPlayer:setButtonMoreEvent(
            tipPlayer.ENUM_BUTTON_TYPE.CANCEL,
            function()
                CF.msgManager:sendRespondSwapSeat(false)
            end
        )
        tipPlayer:setButtonMoreEvent(
            tipPlayer.ENUM_BUTTON_TYPE.CLOSE,
            function()
                CF.msgManager:sendRespondSwapSeat(false)
            end
        )
        if tipPlayer.setTextures then
            tipPlayer:setTextures("mah_btn_refuse.png", "mah_btn_agree.png")
        end
    end
end

--#换位置投票结果
function GameModule:onMsgRespondSwapSeat(msgData)
    if msgData.seat ~= CF.roomData:getSelfSeat() then
        if not msgData.agree then
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
            tipPlayer:setText(player:getNickName() .. "不同意交换位置!")
        end
    end
end

--#是否显示换位置按钮
function GameModule:onMsgShowSwapSeat(msgData)
    self._gameData:setIsShowSwapSeatBtn(msgData.bIsShowSwapSeat)
    self:dispatchEvent({name = self.EVENT_GAME_SHOW_CHANGE_BTN, msg = {bShow = msgData.bIsShowSwapSeat}})
end

--#换位置
function GameModule:onMsgSwapSeatFlag(msgData)
    local srcPlayer = CF.roomData:getPlayerDataBySeatId(msgData.srcSeat)
    local dstPlayer = CF.roomData:getPlayerDataBySeatId(msgData.destSeat)
    if srcPlayer and dstPlayer then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(srcPlayer:getNickName() .. "和" .. dstPlayer:getNickName() .. "成功交换位置!")
    end
    self:dispatchEvent({name = self.EVENT_GAME_SHOW_CHANGE_BTN, msg = {bShow = self._gameData:isShowSwapSeatBtn()}})
    --高德位置互换
    local str1 = self._gameData:getAmapStrBySeat(msgData.srcSeat)
    local str2 = self._gameData:getAmapStrBySeat(msgData.destSeat)
    self._gameData:setAmapStrBySeat(msgData.srcSeat, str2)
    self._gameData:setAmapStrBySeat(msgData.destSeat, str1)
end

--#获取全部人手牌并展示
function GameModule:onMsgAllHandCards(msgData)
    for i = 1, msgData.allRoundCount do
        for n = 1, msgData.allRoundCount do
            local player = CF.roomData:getPlayerDataBySeatId(n - 1)
            if player and msgData.playerID[i] == player:getNumberID() then
                local handCardIDs = CardLogic.getCardIDsFromDataByCount(msgData.ObviousCards[n].ucCards, msgData.ObviousCards[n].ucCount)
                self._gameData:setHandCardIDs(n - 1, handCardIDs)
            end
        end
    end

    self:dispatchEvent({name = self.EVENT_SHOW_ALL_PLAYER_HANDCARDS})
end

function GameModule:onMsgNoOutGong(msgData)
    local winLostData = self._gameData:getWinLostData()
    winLostData:setCaiXiangData(msgData.sCaiXiang)
    winLostData:setIsCaiXiang(msgData.iCaiXiang)
    winLostData:setIsNoGong(msgData.iNoGong)
    winLostData:setNoGongData(msgData.sNoOutGong)

    self:dispatchEvent({name = self.EVENT_GAME_NO_OUT_GONG, msg = {tNoOutGong = msgData.sNoOutGong}})

    self._nDelayPhaseTime = 3
end

function GameModule:onNotOutCardClick()
    local selfSeat = CF.roomData:getSelfSeat()
    local gameData = self:getGameData()
    local preOutSeat = gameData:getPreOutSeat()
    if gameData:getPowerSeat() ~= selfSeat then
        return
    end

    if preOutSeat == selfSeat or preOutSeat == CF.roomData:getMaxPlayer() then
        return
    end

    CF.msgManager:sendNotOutCards()

    --客户端直接显示出牌
    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_SHOW_OUT_CARD,
            msg = {
                seat = CF.roomData:getSelfSeat(),
                outCardIDs = {},
                cardType = 0
            }
        }
    )

    gameData:setPreconditionOutCards(true)
end

--出牌
function GameModule:gameEventOutCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        self._gameData:dispatchUpdateHandCardEvent(CF.roomData:getSelfSeat())
        return
    end
    local cardIDs = event.outCardIDs
    local _, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    local bCanOut, cardTypeArr = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, cardIDs)
    if CF.roomData:isPlayBack() or not bCanOut then
        self._gameData:dispatchUpdateHandCardEvent(CF.roomData:getSelfSeat())
        return
    end

    if #cardTypeArr > 1 then
        self._gameData:dispatchUpdateHandCardEvent(CF.roomData:getSelfSeat())

        self:dispatchEvent(
            {
                name = self.EVENT_SHOW_CARDTYPE_SELECT,
                msg = {
                    cardIDs = cardIDs,
                    cardTypeArr = cardTypeArr
                }
            }
        )
        return
    end

    local outCardType = cardTypeArr[1].type
    local jokerReplaceData = cardTypeArr[1].jokerReplaceData
    local finalCardIDs = CardLogic.getCardIDsWithJokerReplaceData(cardIDs, jokerReplaceData)
    local gameCardGroup = {}
    gameCardGroup.tType = outCardType
    gameCardGroup.Cards = finalCardIDs

    self:sendOutCard(gameCardGroup)
end

function GameModule:sendOutCard(gameCardGroup)
    CF.msgManager:sendOutCards(gameCardGroup)
    self:clientOutCard(gameCardGroup)
end

function GameModule:clientOutCard(gameCardGroup)
    --客户端直接显示出牌
    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_SHOW_OUT_CARD,
            msg = {
                seat = CF.roomData:getSelfSeat(),
                outCardIDs = gameCardGroup.Cards,
                cardType = gameCardGroup.tType
            }
        }
    )
    --记录已经出牌
    self._gameData:setPreconditionOutCards(true)
end

--选中手牌后触发事件
--用于更新"出牌"按钮状态以及智能提示
--event.haveUnSelect为true表示有牌被提起，false表示没有牌被提起
function GameModule:gameEventCheckedCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    local bCanOut = false
    local selectCardIDs = event.selectCardIDs
    local isFreedomutCard, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    if not isFreedomutCard and self._isHintFirstSelect and #selectCardIDs > 0 then
        local hintCardIDs = self._gameData:getHintCardIdsBySomeCardIds(selectCardIDs, preOutCardIDs, preOutCardType)
        if hintCardIDs and #hintCardIDs > 0 then
            bCanOut = true
            --设置选中牌数据
            self:dispatchEvent(
                {
                    name = self.EVENT_GAME_SELECT_HINTCARDS,
                    msg = {
                        hintCardIDs = hintCardIDs
                    }
                }
            )
        end
        --只智能提示一次
        self._isHintFirstSelect = false
    end
    if not bCanOut and event.haveUnSelect then
        local handCardIDs = self._gameData:getHandCardIDs(powerSeat)
        local bHaveShun, resultData = CardLogic.smartTipsBySelectCardIDs(handCardIDs, selectCardIDs, preOutCardType, preOutCardIDs)
        if bHaveShun then
            bCanOut = true
            --设置选中牌数据
            self:dispatchEvent(
                {
                    name = self.EVENT_GAME_SELECT_HINTCARDS,
                    msg = {
                        hintCardIDs = resultData
                    }
                }
            )
        end
    end

    if not bCanOut then
        bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs)
    end
    --跟新出牌按钮状态
    self:dispatchEvent(
        {
            name = self.EVENT_GAME_CHANGE_BTNS_STATE,
            msg = {
                btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD,
                state = bCanOut
            }
        }
    )
end

function GameModule:checkClassicsCanout(selectCardIDs, bCan)
    local bCanOut = bCan
    local tCardPower = {}
    for _, cardId in pairs(selectCardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
    end
    local isLianZha = CardLogic.isLianZha(tCardPower)
    local isKinBomb, kingNum = CardLogic.isKingBomb(tCardPower)
    if isLianZha or (isKinBomb and kingNum == 6) or (#tCardPower == 2 and kingNum == 5 and tCardPower[1] ~= tCardPower[2]) then
        bCanOut = false
    end
    return bCanOut
end

--触摸牌层背景
function GameModule:onTouchCardLayerBg()
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MESSAGELAYER})
    CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    self:dispatchEvent(
        {
            name = self.EVENT_GAME_CHANGE_BTNS_STATE,
            msg = {
                btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD,
                state = false
            }
        }
    )
end

--小结束是否显示洗牌按钮
function GameModule:needShowShuffleButton(isCutCard)
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if playCount == maxPlayCount then
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    -- 下局是否预洗牌
    if isShowShuffle and not isCutCard then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
    end
    return isShowShuffle
end

function GameModule:changeHandCardSortType()
    local gameData = self:getGameData()
    local oldSortType = gameData:getSortType()
    if oldSortType == CardLogic.SrotType.CardPower then
        gameData:setSortType(CardLogic.SrotType.CardGroupPower)
    else
        gameData:setSortType(CardLogic.SrotType.CardPower)
    end
end

--#玩家开始
function GameModule:onPlayerStart(event)
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:initEveryTime()
        -- 旁观视角准备时，不清除旁观玩家的UI
        if CF.roomData:getIsSeer() then
            return
        end
        self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    end
end

--每小局游戏需要更新的数据
function GameModule:initEveryTime()
    CF.roomData:initEveryTimesDatas()
    CF.roomData:setIsGameOver(false)
    self._gameData:initEveryTime()
    CF.game:getModule("Marker"):initEveryTime()
end

-- GS请求使用计局记牌器
function GameModule:onMsgUseMarkerEx(msgData)
    if msgData.seat == CF.roomData:getSelfSeat() then
        CF.game:getModule("Marker"):sendRequestUseGoldJPQ()
    end
end

function GameModule:onMsgSpecfCards(msgData)
    self:dispatchEvent({name = self.EVENT_SPECF_CARD, msg = {cards = msgData.ucCard, cardCount = msgData.ucCardCount}})
end

return GameModule
