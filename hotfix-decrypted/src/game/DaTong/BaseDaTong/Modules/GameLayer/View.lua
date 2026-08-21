local GameLayer = CF.gameClass("GameLayer", CF.ViewBase)
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardLayer = CF.gameRequire("Modules.GameLayer.GameCardLayer")
local SpecfCardLayer    = CF.gameRequire("Modules.GameLayer.GameSpecfCardLayer")
local GameWinLostLayer  = CF.gameRequire("Modules.WinLost.View")
local CardLayerConfig   = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
    
function GameLayer:ctor(param)
    param = param or {}
    GameLayer.super.ctor(self, param)
    self:createChildren()
    self:initData()
    self:initSound()
end

function GameLayer:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/NewGameLayer.csb"
end

function GameLayer:getBindingInfo()
    return {
        ["_KW_PANEL_CARDLAYER_POS"] = {varName = "_cardLayerPanelPos"},
        ["_KW_PANEL_WINLOSTLAYER_POS"] = {varName = "_winLostLayerPanelPos"},
        ["_KW_PANEL_PLAYER_CLOCK"] = {varName = "_clockPanelAll"},
        ["_KW_PANEL_PLAYER_CLOCKEX"] = {varName = "_clockPanelAll6"},
        ["_KW_PANEL_PLAYER_CLOCK_"] = {varName = "_clockPanel", beginIndex = 1, endIndex = 4},
        ["_KW_PLAYER_CLOCK_POS_"] = {varName = "_clockPos", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_PLAYER_CLOCKEX_"] = {varName = "_clockPanelEx", beginIndex = 1, endIndex = 6},
        ["_KW_PLAYER_CLOCK_POSEX_"] = {varName = "_clockPosEx", beginIndex = 1, endIndex = 6},
        --显示提示
        ["_KW_POS_PLAYER_TIP_"] = {varName = "_playerTipPanel", beginIndex = 1, endIndex = 4},
        ["_KW_POS_PLAYER_TIPEX_"] = {varName = "_playerTipPanelEx", beginIndex = 1, endIndex = 6},
        --游戏操作按钮 不出、提示、出牌
        ["_KW_PANEL_GAMEPLAY_BTNS"] = {varName = "_gamePlayBtns"},

        ["_KW_BTN_NOT_OUTCARD"] = {varName = "_notOutCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotOutCardBtnClicked"},
        ["_KW_BTN_TELL_ME"] = {varName = "_tellMeBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTellMeBtnClicked"},
        ["_KW_BTN_OUTCARD"] = {varName = "_outCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onOutCardBtnClicked"},
        ["_KW_BTN_NO_BIGGER_CARD"] = {varName = "_noBiggerCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNoBiggerCardBtnClicked"},
        ["_KW_BTN_SURRENDER"] = {varName ="_surrenderBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSurrenderBtnClicked"},
        ["_KW_BTN_CARD_SORT"] = {varName = "_sortCardBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSortCardBtnClicked"},
        ["_KW_PANEL_CARDTYPE_SELECT_POS"] = {varName = "_cardTypeSelectPanelPos"},
        --炸弹动画显示位置
        ["_KW_BOMB_CARD_ANI_POS"] = {varName = "_bombCardAniPos"},
        ["_KW_TABLE_SCORE_BG"] = {varName = "_tableScoreBg" ,onTouchEnded = "onMsgBtnTableScoreClicked"},
        --桌面分,中间
        ["_KW_IMG_SCORE_ALL_BG"] = {varName = "_tableScoreALLBg"},
        ["_KW_SCORE_ALL_SCORE"] = {varName="_tableScoreText"},
        -- 没炸img
        ["_KW_PANEL_NO_BOMB_4"] = {varName="_panelNoBomb4"},
        ["_KW_PANEL_NO_BOMB_6"] = {varName="_panelNoBomb6"},
        --右上角明牌位置
        ["_KW_PANEL_OPEN_CARD"] = {varName = "_openCardPosPanel"},
        ["_KW_PANEL_RIGHT_TOP_BTNS"] = {varName = "_rightBtnPosPanel"},
        ["_KW_UI_PLAY_PROP_PANEL"] = {varName="_propAniPanel"},
        ["_KW_PANEL_TABLE_BG"] = {varName="_propTableBgPanel"},
    }
end

function GameLayer:createChildren()
    self:initCardLayer()
    self:initClockPosData()
end

function GameLayer:initData()
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._enterGameViewTime = os.time()
    self._gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
end

function GameLayer:initSound()
    if not CF.roomData:isPlayBack() then
        CF.soundManager:pauseMusicLobby()
        CF.soundManager:playFFZBackGroundMusic()
    end
end

function GameLayer:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onPlayerShowOutCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_OPEN_CARD", callBack = "onGameOpenCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_OPEN_CARD_SEAT", callBack = "onGameOpenCardSeat"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_WIN_ORDER", callBack = "onGameWinOrder"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_GET_POWER", callBack = "onPlayerGetPower"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCard"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CARDTYPE_SELECT", callBack = "onShowCardTypeSelect"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_SELECT_HINTCARDS", callBack = "onGameSelectHintCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_CHANGE_BTNS_STATE", callBack = "onGameChangeBtnsState"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_HEAD_CLOCK", callBack = "onPlayerHeadClock"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SPECF_CARD", callBack = "onStartSpecfCards"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SURRENDER_FLAG", callBack = "onSurrenderFlag"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SURRENDER_COUNT_DOWN", callBack = "onSurrenderCountDown"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_TABLE_INFO", callBack = "onEventTableInfo"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_WAIT_SHOW_BOMB_ANI", callBack = "onMsgWaitShowBombAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_FFZ_BOMB", callBack = "onShowFFZBomb"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_STABLE_BOMB_SEAT", callBack = "onMsgStableBombSeat"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_STABLE_BOMB_SEAT_ARRAY", callBack = "onMsgStableBombSeatArray"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHUFFLE_SEATS", callBack = "onMsgShuffleSeats"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHUFFLEFINISH", callBack = "onMsgShuffleFinish"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_NORMAL_NO_BOMB", callBack = "omMsgNormalNoBoom"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_OPEN_CARDS_SEAT_SIX", callBack = "onMsgOpenCardSeatSix"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SCORE_EVERY_PLAYER_SHOW", callBack = "onMsgScoreEveryPlayerTurn"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SCORE_TABLE_SHOW", callBack = "onMsgScoreTableShowTurn"},
        {module = CF.game:getModule("GameLayer"):getGameData(), eventKeyName = "EVENT_HANDCARD_UPDATE", callBack = "onHandCardUpdate"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_GAME_WINLOST", callBack = "onGameWinLost"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHOW_BIG_WINLOST", callBack = "onShowGameTotalResult"},
        {module = CF.game:getModule("BigWinLost"), eventKeyName = "EVENT_GAME_TOTAL_RESULT", callBack = "onGameTotalResult"},
        {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_GAME_CONTINUE", callBack = "onGameContinue"},
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_MOVE_SEAT_END", callBack = "onMoveSeatEnd"},
        {module = CF.game:getModule("Setting"), eventKeyName = "EVENT_PLAYER_CHANGESEAT", callBack = "onPlayerChangeSeat"},
        {module = CF.settingData, eventKeyName = "EVENT_MAH_MUSIC_VOLUEM_CHANGED", callBack = "onEventMusicVoluemChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMERULE_CHANGED", callBack = "onGameRuleChanged"},
    }
    return eventTable
end

function GameLayer:clearTable()
    --清除头像数据
    CF.roomData:clearTable()
    self:clearAllPlayerOutCardClock()
    --清除桌面牌
    self._cardLayer:clearAllCards()
    --隐藏小结束
    self:clearWinLostLayer()
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    CF.game:getModule("GameLayer")._playerEndState = false
    if self._surrenderBtn then
        self._surrenderBtn:setVisible(false)
    end
     --关闭等待弹窗
     CF.TipTool.clearScrollTip()
end

function GameLayer:onExit()
    GameLayer.super.onExit(self)
    if self._bombCardAniPos then
        self._bombCardAniPos:stopAllActions()
    end
end

function GameLayer:onMoveSeatEnd(event)
    local openCardID = self._gameData:getOpenCardID()
    self._cardLayer:showOpenCardAfterSwapSeat(event.msg.bigOpenCardLocalSeat, event.msg.smallOpenCardLocalSeat, openCardID, event.msg.callBack)
end

function GameLayer:getAdaptationConfig()
    return{
        {node = self._clockPanel1, bRight = false, bHalf = false},
        {node = self._playerTipPanel1, bRight = false, bHalf = false},
        {node = self._clockPanel3, bRight = true, bHalf = false},
        {node = self._playerTipPanel3, bRight = true, bHalf = false},
        {node = self._openCardPosPanel, bRight = true, bHalf = true},
        {node = self._tableScoreBg, bRight = true, bHalf = true},
        {node = self._sortCardBtn, bRight = true, bHalf = false},
    }
end

--初始化牌层
function GameLayer:initCardLayer()
    if self._cardLayer == nil then
        self._cardLayer = CardLayer.new()
        self._cardLayerPanelPos:addChild(self._cardLayer)
    end
    self._cardLayer:clearAllCards()
end

--初始化牌层
function GameLayer:initSpecfCardLayer()
    if self._specfCardLayer == nil then
        self._specfCardLayer = SpecfCardLayer.new()
        self._cardLayerPanelPos:addChild(self._specfCardLayer)
    end
end

--设置操作按钮的可见性
function GameLayer:showPanelGamePlayBtns(bShow, bHaveBiggerCard)
    -- 旁观玩家不显示操作按钮
    if CF.roomData:getIsSeer() then
        return
    end
    if not self._gamePlayBtns then
        return
    end

    if bHaveBiggerCard == nil then
        bHaveBiggerCard = true
    end
    if bShow then
        self._noBiggerCardBtn:setVisible(not bHaveBiggerCard)
        self._notOutCardBtn:setVisible(bHaveBiggerCard)
        self._tellMeBtn:setVisible(bHaveBiggerCard)
        self._outCardBtn:setVisible(bHaveBiggerCard)
    else
        self._cardLayer:removeNoBiggerSprite()
    end

    self._gamePlayBtns:setVisible(bShow)
end

function GameLayer:onGameStart(event)
    --#是否回放
    self:clearTable()
    self:clearAllPlayerOutCardClock()
    CF.popLayerManager:removeLayer("TipLayer")
    self._gameData:setIsHaveResult(false)
    CF.soundManager:playSoundStart()
    if not CF.roomData:isPlayBack() then
        --##非回放,显示排序按钮
        self._cardLayer:showLeftAndRightHandCardArea(false)
        self._sortCardBtn:setVisible(not CF.roomData:getIsSeer())
        self:recordData()
    else
        self._cardLayer:showLeftAndRightHandCardArea(true)
    end

    CF.UITool.setText(self._tableScoreBg,"KW_SCORE_SELF","己方:0")
    CF.UITool.setText(self._tableScoreBg,"KW_SCORE_OTHER","对方:0")

    for localSeat = 1 , CF.roomData:getMaxPlayer() do
        self:showNoBomb(localSeat, false)
    end

    self:showOpenCard({})

    if CF.roomData:getIsFFZ() then
        CF.SysTool.performWithDelayGlobal(function() 
            CF.soundManager:playFFZStartMusic()
        end, 2.0)
    end
end

function GameLayer:recordData(  )
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._enterGameViewTime or 0
    data.End_time = os.time() 
    data.staytime = data.End_time - data.Start_time
    data.userid = CF.selfPlayerData:getNumberID()
    if CF.roomData:isGoldRoom() then
        CF.throwDataManager:throwData(CF.ThrowDataDefine.GoldGamesMatched,data)
    else
        CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_START_TIME,data)
    end
end

function GameLayer:onPlayerChangeSeat(event)
    self:clearTable()
    for i = 1, CF.roomData:getMaxPlayer() do
        self:stopOutCardClock(i)
    end
end

function GameLayer:onEventMusicVoluemChanged(event)
    local musicPercent = event.data or 0
    CF.soundManager:setPlayMusicVolme(musicPercent)
    if musicPercent > 0 then
        self:initSound()
    else
        CF.soundManager:stopMusic()
    end
end

--游戏规则更新
function GameLayer:onGameRuleChanged(event)
    local isffz = CF.roomData:getIsFFZ()
    if self._tableScoreBg then
        self._tableScoreBg:setVisible(not isffz)
    end
end

function GameLayer:initNoBombImg()
    if self._panelNoBomb4 then
        local childern = self._panelNoBomb4:getChildren()
        for _, img in ipairs(childern) do
            img:setVisible(false)
        end
    end
    if self._panelNoBomb6 then
        local childern = self._panelNoBomb6:getChildren()
        for _, img in ipairs(childern) do
            img:setVisible(false)
        end
    end
end

function GameLayer:clearWinLostLayer()
    local winLostLayer = self:getWinLostLayer()
    if winLostLayer and not tolua.isnull(winLostLayer) then
        winLostLayer:setVisible(false)
    end
end

function GameLayer:onNotOutCardBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)

    --逻辑由mananger处理
    CF.game:getModule("GameLayer"):onNotOutCardClick()
end

function GameLayer:onHandCardChanged(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if msg.bIsShow then
        self._cardLayer:setHandCards(localSeat, self._gameData:getHandCardIDs(msg.seat), msg.bPlayAni)
    else
        if CF.roomData:getIsSeer() and localSeat == CF.roomData:getSelfLocalSeat() then 
            self._cardLayer:setHandCards(localSeat, self._gameData:getHandCardIDs(msg.seat), msg.bPlayAni)
        else
            self._cardLayer:clearHandCard(localSeat)
        end
    end
    if CF.roomData:getIsSeer() and localSeat == CF.roomData:getSelfLocalSeat() then 
        return 
    end

    if localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
        local isOpenHand = false
        if msg.bIsShow then
            local cardIDs = self._gameData:getHandCardIDs(msg.seat)
            if CardLogic.isBackHandCards(cardIDs) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end

        if CF.roomData:getIsFFZ() and (not CF.roomData:isPlayBack()) then
            isOpenHand = false
        end

        if not isOpenHand then
            self._cardLayer:clearHandCard(localSeat)
        end
    end
end

function GameLayer:onPlayerShowOutCard(event)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local outCardIDs = msg.outCardIDs
    if #outCardIDs > 0 then
        CF.soundManager:playSoundOut()
        -- 牌型音效
        local player = CF.roomData:getPlayerDataBySeatId(msg.seat)
        if player then
            local power = CardLogic.getMinPowerInCardIDs(outCardIDs) --最小的牌权值即为牌型的牌权值
            local bFangYan = not CF.settingData:getIsNormalVoice()
            local gameid = CF.roomData:getGameID()
            CF.soundManager:playSoundPlayCardType(player:getSex(), msg.cardType, power, bFangYan, gameid)
        end
        --显示附带动画
        self:showCardTypeAni(msg.seat, msg.cardType)
        self._cardLayer:setOutCards(localSeat, outCardIDs)

        local handCardIDs = self._gameData:getHandCardIDs(msg.seat)
        if not CardLogic.isBackHandCards(handCardIDs) then
            local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
            self._cardLayer:setHandCards(localSeat, newHandCardIDs)
        else
            if CF.roomData:getIsSeer() and msg.seat == CF.roomData:getSelfSeat() then
                for i = 1,#outCardIDs do
                    outCardIDs[i] = 0
                end
                local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
                self._cardLayer:setHandCards(localSeat, newHandCardIDs)
            end
        end
    else
        CF.soundManager:playSoundPass()
        self:showPassAni(localSeat)
    end

    self:stopOutCardClock(localSeat)

    --自己出牌
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:removeCardTypeSelectLayer()
    end
end

function GameLayer:removeCardTypeSelectLayer()
    if self._cardTypeSelectLayer then
        self._cardTypeSelectLayer:removeFromParent()
        self._cardTypeSelectLayer = nil
    end
end

function GameLayer:initClockPosData()
    self._clockPosTable = {}
    if CF.roomData:isSixPlayer() then
        for i = 1, 6 do
            if self["_clockPosEx"..i] then
                local pos = {}
                pos.x, pos.y = self["_clockPosEx"..i]:getPosition()
                self._clockPosTable[i] = pos
            end
        end
    else
        for i = 1, 4 do
            if self["_clockPos"..i] then
                local pos = {}
                pos.x, pos.y = self["_clockPos"..i]:getPosition()
                self._clockPosTable[i] = pos
            end
        end
    end
end

function GameLayer:clearAllPlayerOutCardClock()
    self._lastOutCardClockLocalSeat = nil
    for i = 1, CF.roomData:getMaxPlayer() do
        self:stopOutCardClock(i)
    end
end

function GameLayer:stopOutCardClock(localSeat)
    local outCardTimePanel = CF.roomData:isSixPlayer() and self["_clockPanelEx"..localSeat] or self["_clockPanel"..localSeat]
    if outCardTimePanel then
        outCardTimePanel:stopAllActions()
        outCardTimePanel:setVisible(false)
    end
end

function GameLayer:getClockAniNode(clockBG)
    if clockBG == nil then
        return
    end
    local parentNode = clockBG:getParent()
    local aniNode = ccui.Helper:seekWidgetByName(parentNode, "_KW_ANI_OUT_CARD_TIME_BG")
    if not aniNode then
        local newNode = ccui.Layout:create()
        newNode:setName("_KW_ANI_OUT_CARD_TIME_BG")
        local x, y = clockBG:getPosition()
        newNode:setPosition(cc.p(x, y))
        newNode:setContentSize(0, 0)
        parentNode:addChild(newNode, -1)
        aniNode = newNode
    end
    return aniNode
end

function GameLayer:playClockLoopAni(clockPanel)
    local isXGSJ = CF.settingData:getXGClock()
    local clockBG = ccui.Helper:seekWidgetByName(clockPanel, "KW_IMG_OUT_CARD_TIME_BG")
    if clockBG then
        clockBG:setVisible(isXGSJ == false)
        if isXGSJ then
            local aniNode = self:getClockAniNode(clockBG)
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CLOCK]
            XH.SpineManager:playAni(aniNode, info.aniPath, info.filename, info.animationLoop, true)
        else
            local aniNode = self:getClockAniNode(clockBG)
            if aniNode then
                aniNode:removeFromParent()
            end
        end
    end
    local outCardTimeText = ccui.Helper:seekWidgetByName(clockPanel, "_KW_TEXT_OUT_CARD_TIME")
    if outCardTimeText then
        if isXGSJ then
            outCardTimeText:setFntFile("cocosStudio/Common/Font/Fnt_miaoz-export.fnt")
        else
            outCardTimeText:setFntFile("cocosStudio/Common/Font/naozhong_num-export.fnt")
        end
    end
end

function GameLayer:playClockDaoJiShiAni(clockPanel)
    local isXGSJ = CF.settingData:getXGClock()
    local clockBG = ccui.Helper:seekWidgetByName(clockPanel, "KW_IMG_OUT_CARD_TIME_BG")
    if clockBG then
        clockBG:setVisible(isXGSJ == false)
        if isXGSJ then
            local aniNode = self:getClockAniNode(clockBG)
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CLOCK]
            XH.SpineManager:playAni(aniNode, info.aniPath, info.filename, info.animationDaoJiShi, false)
        else
            local aniNode = self:getClockAniNode(clockBG)
            if aniNode then
                aniNode:removeFromParent()
            end
        end
    end
    local outCardTimeText = ccui.Helper:seekWidgetByName(clockPanel, "_KW_TEXT_OUT_CARD_TIME")
    if outCardTimeText then
        if isXGSJ then
            outCardTimeText:setFntFile("cocosStudio/Common/Font/Fnt_miaoz-export.fnt")
        else
            outCardTimeText:setFntFile("cocosStudio/Common/Font/naozhong_num-export.fnt")
        end
    end
end

local KW_CLOCK_MOVE_NEED_TIME = 0.3
function GameLayer:startOutCardClock(localSeat, nTime, firstTime)
    if not firstTime and CF.roomData:isGoldRoom() then
        self:startFirstOutCardClock(localSeat, nTime)
        return
    end
    if nTime >= 0 then
        --设置时钟数字
        local outCardTimePanel = CF.roomData:isSixPlayer() and self["_clockPanelEx"..localSeat]  or self["_clockPanel"..localSeat] 
        self:playClockLoopAni(outCardTimePanel)
        local outCardTimeText = ccui.Helper:seekWidgetByName(outCardTimePanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d", nTime))
        outCardTimePanel:stopAllActions()
        local delay = cc.DelayTime:create(1)
        local callback =
            cc.CallFunc:create(
            function()
            nTime = nTime - 1
                outCardTimeText:setString(string.format("%02d", nTime))
            if nTime < 5 then
                CF.soundManager:playSoundClock()
            end
            if nTime <= 3 then
                self:playClockDaoJiShiAni(outCardTimePanel)
                self:playClockShakeAction(localSeat)
            end
            if nTime <= 0 then
                outCardTimePanel:stopAllActions()
            end
            end
        )
        local squence = cc.Repeat:create(cc.Sequence:create(delay, callback), nTime)
        outCardTimePanel:runAction(squence)

        if self._lastOutCardClockLocalSeat ~= nil then
            self:startFlyClockAction(localSeat, nTime)
        else
            outCardTimePanel:setVisible(true)
        end
        if localSeat ~= CF.roomData:getSelfLocalSeat() and CF.roomData:isGoldRoom()then
            CF.game:getModule("Player"):dispatchEvent( { name = CF.game:getModule("Player").EVENT_HIDE_LEFTTIME_TIP, msg = {localSeat = localSeat}})
        end
    else
        self:stopOutCardClock(localSeat)
    end
    self._lastOutCardClockLocalSeat = localSeat
end

function GameLayer:startFirstOutCardClock(localSeat, nTime)
    local outCardTime = nTime
    local firstTime = 8
    nTime = outCardTime - firstTime
    if nTime >= 0 then
        nTime = firstTime
        --设置时钟数字
        local outCardTimePanel = CF.roomData:isSixPlayer() and self["_clockPanelEx"..localSeat]  or self["_clockPanel"..localSeat] 
        self:playClockLoopAni(outCardTimePanel)
        local outCardTimeText = ccui.Helper:seekWidgetByName(outCardTimePanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d", nTime))
        outCardTimePanel:stopAllActions()
        local delay = cc.DelayTime:create(1)
        local callback =
            cc.CallFunc:create(
            function()
            nTime = nTime - 1
                outCardTimeText:setString(string.format("%02d", nTime))
            if nTime <= 0 then
                outCardTimePanel:stopAllActions()
                    self:startOutCardClock(localSeat, outCardTime - firstTime, true)
            end
            end
        )
        if self._lastOutCardClockLocalSeat ~= nil then
            self:startFlyClockAction(localSeat, nTime)
        else
            outCardTimePanel:setVisible(true)
        end
        local squence = cc.Repeat:create(cc.Sequence:create(delay, callback), nTime)
        outCardTimePanel:runAction(squence)
    else
        self:startOutCardClock(localSeat, outCardTime, true)
    end
    self._lastOutCardClockLocalSeat = localSeat
end

function GameLayer:playClockShakeAction(localSeat)
    local posPanel = CF.roomData:isSixPlayer() and self["_clockPosEx"..localSeat] or self["_clockPos"..localSeat]
    --抖屏动画
    local actMoveUp = cc.MoveBy:create(0.08, cc.p(0, 20))
    local actMoveDown = cc.MoveBy:create(0.08, cc.p(0, -20))

    local actMoveRight1 = cc.RotateBy:create(0.08, 10)
    local actMoveRight2 = cc.RotateBy:create(0.08, 20)
    local actMoveLeft = cc.RotateBy:create(0.08, -20)

    local finalFunc =
        cc.CallFunc:create(
        function()
        if self._clockPosTable[localSeat] then
            posPanel:setPosition(self._clockPosTable[localSeat])
        end
        end
    )
    posPanel:runAction(
        cc.Sequence:create(actMoveRight1, actMoveLeft, actMoveRight2, actMoveLeft, actMoveRight2, actMoveLeft, actMoveRight1, cc.DelayTime:create(0.2), actMoveUp, actMoveDown, finalFunc)
    )
end

local KW_NAME_CLOCK_FLY_PANEL = "DoubleKouClockFlyPanel"
function GameLayer:startFlyClockAction(localSeat, nTime)
    local outCardTimePanel = CF.roomData:isSixPlayer() and self["_clockPanelEx"..localSeat]  or self["_clockPanel"..localSeat] 
    local posPanelNow = CF.roomData:isSixPlayer() and self["_clockPosEx"..localSeat] or self["_clockPos"..localSeat]
    local posPanelLast = self["_clockPos" .. self._lastOutCardClockLocalSeat]
    if posPanelNow and posPanelLast then
        --先移除原有动画
        local flyPanel = self._clockPanelAll:getChildByName(KW_NAME_CLOCK_FLY_PANEL)
        if flyPanel then
            flyPanel:stopAllActions()
            flyPanel:removeFromParent()
        end
        local posLast = posPanelLast:convertToWorldSpace(cc.p(0, 0))
        local posNow = posPanelNow:convertToWorldSpace(cc.p(0, 0))
        local posLastAfterConvert = self._clockPanelAll:convertToNodeSpace(posLast)
        local posNowAfterConvert = self._clockPanelAll:convertToNodeSpace(posNow)

        local tempPosPanel = posPanelLast:clone()
        self:playClockLoopAni(tempPosPanel)
        tempPosPanel:setName(KW_NAME_CLOCK_FLY_PANEL)
        tempPosPanel:setPosition(posLastAfterConvert)
        local outCardTimeText = ccui.Helper:seekWidgetByName(tempPosPanel, "_KW_TEXT_OUT_CARD_TIME")
        outCardTimeText:setString(string.format("%02d", nTime))
        self._clockPanelAll:addChild(tempPosPanel)

        local moveToAction = cc.MoveTo:create(KW_CLOCK_MOVE_NEED_TIME, posNowAfterConvert)
        local aftermoveToCall = function()
            tempPosPanel:setVisible(false)
            outCardTimePanel:setVisible(true)
        end
        local moveToAni = cc.Sequence:create(moveToAction, cc.CallFunc:create(aftermoveToCall))
        tempPosPanel:runAction(moveToAni)
        tempPosPanel:setVisible(true)
    end
end

--显示牌型动画
function GameLayer:showCardTypeAni(seat, cardType)
    self._cardLayer:playCardTypeAction(seat, cardType)
end

function GameLayer:onGameOpenCard(event)
    self._cardLayer:onGameOpenCard(event.msg)
    self:showOpenCard({event.msg.cardID})
    if CF.roomData:getIsFFZ() then
        CF.soundManager:PlayEffectFFZStart()
    end
end

function GameLayer:onGameOpenCardSeat(event)
    self._cardLayer:onGameOpenCardSeat(event.msg)
end

function GameLayer:onGameWinOrder(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    self._cardLayer:clearHandCard(localSeat)
end

function GameLayer:onGameEnd(event)
    self:clearAllPlayerOutCardClock()

    self:showPanelGamePlayBtns(false)    --隐藏操作按钮

    --显示左右玩家手牌节点
    self._cardLayer:showLeftAndRightHandCardArea(true)

    local data = {}
    data.time1 = self._gameStartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    data.appid = CF.roomData:getGameID()
    data.roomid = CF.roomData:getRoomID()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.GameStarted,data)
end

function GameLayer:onPlayerGetPower(event)
    local maxPlayer = CF.roomData:getMaxPlayer()
    local preOutSeat = self._gameData:getPreOutSeat()
    local powerSeat = self._gameData:getPowerSeat()
    if preOutSeat ~= maxPlayer then
        local sEndSeat = powerSeat
        if preOutSeat >= powerSeat then
            sEndSeat =  powerSeat + maxPlayer
        end
        for i = preOutSeat + 1, sEndSeat do
            local localSeatNeedClear = CF.roomData:seatToLocal(i % maxPlayer)
            self._cardLayer:clearOutCard(localSeatNeedClear)
        end
    end

    self:clearPassAni(powerSeat)

    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    self._cardLayer:clearOutCard(CF.roomData:getSelfLocalSeat())

    if CF.roomData:getIsSeer() then
        return
    end
    local msg = event.msg
    if msg.isFirstSeat then
        self:showPanelGamePlayBtns(true, true)
    else
        local bHaveBiggerCard = true
        local hintCards = self._gameData:getHintCards()
        if not hintCards or #hintCards <= 0 then
            self._cardLayer:showNoBiggerSprite()
            bHaveBiggerCard = false
        end
        --显示操作按钮
        self:showPanelGamePlayBtns(true, bHaveBiggerCard)
    end
    
    self._notOutCardBtn:setEnabled(not msg.isFirstSeat)
    local selectCardIDs = self._cardLayer:getSelectCardIDs(CF.roomData:getSelfLocalSeat())
    local bCanOut = CF.game:getModule("GameLayer"):checkSelfCanOutCard(selectCardIDs)
    self._outCardBtn:setEnabled(bCanOut)
    if not bCanOut then
        self._cardLayer:resetHandCards() --不能出牌，手牌收回
    end
end

-- 过动画
function GameLayer:clearPassAni(powerSeat)
    local localSeat = CF.roomData:seatToLocal(powerSeat)
    local playerTipPanel = CF.roomData:isSixPlayer() and self["_playerTipPanelEx"..localSeat]  or self["_playerTipPanel"..localSeat]
    if playerTipPanel then
        local passSprite = playerTipPanel:getChildByName("doublekou_text_guo")
        if passSprite then
            passSprite:removeFromParent()
        end
    end
end

function GameLayer:showPassAni(localSeat)
    local playerTipPanel = CF.roomData:isSixPlayer() and self["_playerTipPanelEx"..localSeat]  or self["_playerTipPanel"..localSeat]
    if playerTipPanel then
        local passSprite = playerTipPanel:getChildByName("doublekou_text_guo")
        if not passSprite then
            passSprite = cc.Sprite:create()
        end
        if passSprite then
            passSprite:stopAllActions()
            passSprite:setSpriteFrame("doublekou_text_guo.png")
            passSprite:setName("doublekou_text_guo")
            playerTipPanel:addChild(passSprite)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            local removeAction =
                cc.CallFunc:create(
                function()
                    passSprite:removeFromParent()
                end
            )
            passSprite:runAction(cc.Sequence:create(delayAction, fadeOutAction, removeAction))
        end
    end
end

function GameLayer:onHandCardUpdate(event)
    --有座位号表示只更新一个人手牌
    if event.msg ~= nil and event.msg.seat ~= nil then
        local cardIDs = self._gameData:getHandCardIDs(event.msg.seat)
        local localSeat = CF.roomData:seatToLocal(event.msg.seat)

        if not CardLogic.isBackHandCards(cardIDs) then
            if event.msg.bDeleteCard then
                local viewHandCardIDs = self._cardLayer:getHandCards(localSeat)
                local bSame = CardLogic.checkTwoCardDataIsSame(cardIDs, viewHandCardIDs)
                if not bSame then
                    self._cardLayer:setHandCards(localSeat, cardIDs, false)
                end
            else
                self._cardLayer:setHandCards(localSeat, cardIDs, false)
            end
        end
        return
    end
    self:updateAllHandCards()
end

function GameLayer:updateAllHandCards()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if cardIDs ~= nil then
            local localSeat = CF.roomData:seatToLocal(seat)
            if CF.roomData:isPlayBack() or localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
                if not CardLogic.isBackHandCards(cardIDs) then
                    self._cardLayer:setHandCards(localSeat, cardIDs, false)
                end
            end
        end
    end
end

function GameLayer:onShowAllPlayerHandCard(event)
    local isPlayBack = CF.roomData:isPlayBack()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
        --显示手牌
        if isPlayBack or (localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM) then
            local cardIDs = self._gameData:getHandCardIDs(seat)
            if cardIDs ~= nil then
                if not CardLogic.isBackHandCards(cardIDs) then
                    self._cardLayer:setHandCards(localSeat, cardIDs, false)
                end
            end
        end
    end
    --显示左右玩家手牌节点
    self._cardLayer:showLeftAndRightHandCardArea(true)
end

function GameLayer:onShowCardTypeSelect(event)
    if not self._cardTypeSelectLayer then
        self._cardTypeSelectLayer = CF.gameRequire("Modules.CardTypeSelect.View").new()
        self._cardTypeSelectPanelPos:addChild(self._cardTypeSelectLayer)
    end
    self._cardTypeSelectLayer:setCardTypeData(event.msg.cardIDs, event.msg.cardTypeArr)
end

function GameLayer:onGameSelectHintCards(event)
    local msg = event.msg
    self._cardLayer:setSelfSelectCards(msg.hintCardIDs)
end

function GameLayer:onGameChangeBtnsState(event)
    local msg = event.msg
    if msg.btnTagFlag == CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD then
        self._outCardBtn:setEnabled(msg.state)
    end
end

function GameLayer:onOutCardBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local outCardIDs = self._cardLayer:getSelectCardIDs()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventOutCards")
    event.outCardIDs = outCardIDs
    eventDispatcher:dispatchEvent(event)
    --出牌时间数据统计
    local data = {}
    data.time1 = self._StartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.gamename = self._gamename
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_17,data)
end

function GameLayer:onTellMeBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() then
        return
    end

    local hintCardIDs = self._gameData:getHintCardIDs()
    if not hintCardIDs or #hintCardIDs <= 0 then
        self:showPanelGamePlayBtns(false)
        CF.game:getModule("GameLayer"):onNotOutCardClick()
        return
    end

    self._cardLayer:setSelfSelectCards(hintCardIDs)
    self._outCardBtn:setEnabled(true)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_16,{gamename = self._gamename})
end

function GameLayer:onNoBiggerCardBtnClicked(send, eventType)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    CF.game:getModule("GameLayer"):onNotOutCardClick()
end

function GameLayer:onSortCardBtnClicked(send, eventType)
    CF.game:getModule("GameLayer"):changeHandCardSortType()
    CF.soundManager:playSoundSortCard()
    self._outCardBtn:setEnabled(false)
end


function GameLayer:onPlayerHeadClock(event)
    local msg = event.msg
    local nTime = msg.nTime
    local localSeat = CF.roomData:seatToLocal(msg.seat)

    for i = 1, CF.roomData:getMaxPlayer() do
        if i == localSeat then
            self:startOutCardClock(i, nTime)
        else
            self:stopOutCardClock(i)
        end
    end
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then 
        self._StartTime = os.time()
    end 
end

function GameLayer:getWinLostLayer()
    if not self._winLostLayer then
        self._winLostLayer = GameWinLostLayer.new()
         self._winLostLayer:showSelf()
    end
    return self._winLostLayer
end

function GameLayer:onGameWinLost(event)
    self._gameData:setIsHaveResult(true)
    self:clearAllPlayerOutCardClock()
    CF.game:getModule("Marker"):showMarkerLine(false)
    local ftime = CF.roomData:getIsFFZ() and 1.5 or 0
    local winLostLayer = self:getWinLostLayer()
    if winLostLayer then
        winLostLayer:updateWinLostData()
        winLostLayer:setVisible(false)
    end
    CF.SysTool.performWithDelayGlobal(function()
        if CF.roomData and CF.roomData:isDelayWatch() and CF.game:getModule("WinLost"):getHideWinlostUI() then
            CF.game:getModule("WinLost"):setHideWinlostUI(false)
            return
        end
        if winLostLayer then
            winLostLayer:setVisible(true)
            winLostLayer:onTimeClose()
        end
        CF.soundManager:playSoundEnd()
        if CF.roomData:getIsFFZ() then
            if CF.roomData:isPlayBack() then
                CF.soundManager:stopMusic()
            else
                CF.soundManager:playFFZBackGroundMusic()
            end
        end
    end, ftime)
end

function GameLayer:onGameTotalResult(event)
    self:clearAllPlayerOutCardClock()
    local msg = event.msg
    self._gameData:setBigSettleData(msg)
    CF.roomData:setIsGameOver(msg.show)

   if not msg.show then
        return
    end
    if not tolua.isnull(self._bigWinLostLayer) then
        self._bigWinLostLayer:removeSelf()
    end
    self._bigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View").new(msg)
    self._bigWinLostLayer:setCanContinue(CF.roomData:isCanContinue())
    self._bigWinLostLayer:showSelf(false)
    self._bigWinLostLayer:setVisible(false)

    if msg.show and not self._gameData:getIsHaveResult() then
        self:clearWinLostLayer()
        self._bigWinLostLayer:setVisible(true)
        self._bigWinLostLayer:playVipAni()
    end
end

function GameLayer:onShowGameTotalResult(event)
    if not tolua.isnull(self._bigWinLostLayer) then
        self._bigWinLostLayer:setVisible(true)
        self._bigWinLostLayer:playVipAni()
    end
end

--续桌
function GameLayer:onGameContinue(event)
    local msg = event.msg
    if msg.bSuccess then
        self:clearTable()
    end
end

function GameLayer:onAutoPass(event)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)

    --逻辑由mananger处理
    CF.game:getModule("GameLayer"):onNotOutCardClick()
end

function GameLayer:onStartSpecfCards(event)
    if not self._specfCardLayer then
        self:initSpecfCardLayer()
    end
    local msg = event.msg
    self._specfCardLayer:setAllCards(msg.cards, msg.cardCount)
    self._specfCardLayer:showSpecfLayer(true)
end

function GameLayer:showOpenCard(cardIDs)
    cardIDs = cardIDs or {}
    local cardPos = CF.UITool.seekNodeByName(self._openCardPosPanel,"KW_OPEN_CARD_POS")
    if not cardPos then
        return
    end
    local opencardNode = cardPos:getChildByName("OPEN_CARD_NAME")
    if opencardNode then 
        opencardNode:removeSelf()
    end
    local CardArea = CF.gameRequire("Modules.CardLayer.CardFFZArea")
    local cardAreaNode = CardArea.new()
    cardAreaNode:setIgnoreAnchorPointForPosition(true)
    cardAreaNode:setAnchorPoint(cc.p(0.5, 0.5))
    cardAreaNode:setStartPosition(0,5)
    cardAreaNode:setCardDistance(40,40)
    cardAreaNode:setScale(0.8)
    cardAreaNode:setCarAddDistance(CardLayerConfig.CardAddDirectionX.Center, CardLayerConfig.CardAddDirectionY.Center)
    local cardStyle = 0
    if CF.settingData and CF.settingData:getBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    cardAreaNode:setShowCards(cardIDs, nil, nil, nil, cardStyle)
    cardAreaNode:setName("OPEN_CARD_NAME")
    cardPos:addChild(cardAreaNode)
    local isvisible = #cardIDs > 0
    self._openCardPosPanel:setVisible(isvisible)
end

function GameLayer:onSurrenderFlag(event)
    local msg = event.msg 
    if not msg then return end

    local msgData = msg.msgData or {}

    local surrenderFlag = {can = 0 , canNot = 1}
    local flag = msgData.sflag
    local canSurrender = false
    if flag ~= nil or next(flag) ~= nil then
        local selfSeat = CF.roomData:getSelfSeat()
        for i=1, #flag do
            if (i-1) == selfSeat then
                if flag[i] == surrenderFlag.can then
                    canSurrender = true --可投降
                elseif flag[i] == surrenderFlag.canNot then
                    canSurrender = false --不可投降
                end
            end
        end
    end
    if self._surrenderBtn then
        self._surrenderBtn:setVisible(canSurrender)
    end
end

function GameLayer:onSurrenderCountDown(event)
    local msg = event.msg
    if not msg then
        return
    end
    local msgData = msg.msgData
    if not msgData then return end

    local flag = msgData.sFlag
    local reqSeat = msgData.sReqSeat
    --发出请求的队友家
    local friendSeat = msgData.sResSeat

    local reqplayer = CF.roomData:getPlayerDataBySeatId(reqSeat)
    local fplayer = CF.roomData:getPlayerDataBySeatId(friendSeat)

    if not reqplayer or not fplayer then return end

    local rnicName = reqplayer:getNickName()
    local fnicName = fplayer:getNickName()

    local mySeat = CF.roomData:getSelfSeat()
    if flag == 0 then
        --一开始请求投降
        if friendSeat == mySeat and not CF.roomData:getIsSeer() then
            local SurrenderLayer = CF.gameRequire("Modules.GameLayer.SurrenderLayer")
            SurrenderLayer.new({ numid = reqplayer:getNumberID(), time = msgData.nTime}):showSelf()
        elseif reqSeat == mySeat and not CF.roomData:getIsSeer() then
            CF.TipTool.showToast("您正在申请投降中...")
        else
            CF.TipTool.showToast(rnicName .. "玩家正在申请投降")
        end
    elseif flag == 1 then
        --收到对家是投降
        if reqSeat == mySeat and not CF.roomData:getIsSeer() then
            CF.TipTool.showToast("您的队友同意了投降")
        else
            CF.TipTool.showToast(fnicName .. "玩家同意了投降")
        end
    elseif flag == 2 then
        --收到对家是买牌
        if reqSeat == mySeat and not CF.roomData:getIsSeer() then
            CF.TipTool.showToast("您的队友选择了买牌")
        else
            CF.TipTool.showToast(fnicName .. "玩家选择了买牌")
        end
    end
end

function GameLayer:onEventTableInfo(event)
    self:initClockPosData()
end

function GameLayer:onMsgWaitShowBombAni(event)
    if CF.roomData:isPlayBack() then
        return
    end
    local node = self._bombCardAniPos
    if not node then return end
    local dragonName = "Ios_fanzha"
    local path = "res/animation/DaTong/Ios_fanzha/"
    local params = {
        path = path,
        ske = "Ios_fanzha_ske.json",
        tex = "Ios_fanzha_tex.json",
        armatureName = "Armature",
        dragonBonesName = "Ios_fanzha",
        animationName = "newAnimation"
    }
    local dragonNode = CF.UITool.seekNodeByName(node, dragonName)
    if dragonNode then
        dragonNode:removeSelf()
    end
    local dargonAni = display.playDargonBonesAnimByTimes(params, 1)
    if dargonAni then
        dargonAni:setName(dragonName)
        node:addChild(dargonAni)
        local size = node:getContentSize()
        dargonAni:setAnchorPoint(cc.p(0.5, 0.5))
        dargonAni:setPosition(cc.p(size.width / 2.0, size.height / 2.0))
    end

    CF.soundManager:playSoundBomb()
    CF.SysTool.performWithDelayGlobal(function()
        CF.msgManager:sendEndWaitShowBombAni()
    end, 1.0)
end

function GameLayer:onShowFFZBomb(event)
    if CF.roomData:isPlayBack() then return end
    if not event.msg then return end
    local msgFFZBomb = event.msg.msgData

    local isNoBomb          = msgFFZBomb.bIsNoBomb
    local bAnimation        = msgFFZBomb.bAnimation
    local showCardTypeTime  = bAnimation and 0.2 or 0
    local showCardScoreTime = bAnimation and 0.2 or 0
    local endWiatTime       = bAnimation and 0.8 or 0
    local showNoBombTime    = bAnimation and 1.2 or 0
    local allTime           = showCardTypeTime + showCardScoreTime + endWiatTime
    local tmpTime           = 0
    local seqList           = {}

    local localSeat = CF.roomData:seatToLocal(msgFFZBomb.sSeat)
    local allComb = msgFFZBomb.allComb
    if not self._cardLayer then return end

    local player = CF.roomData:getPlayerDataBySeatId(msgFFZBomb.sSeat)
    local bFangYan = not CF.settingData:getIsNormalVoice()
    if not player then return end
    local sex = player:getSex()

    for index = 1 , #allComb do
        local combScore = allComb[index].combScore
        local cardType = allComb[index].cardType
        local isTongSe = allComb[index].isTongSe
        local ucCards = allComb[index].ucCards

        local showCardCfk = cc.CallFunc:create(function()
            self._cardLayer:setOutCardsFFZ(localSeat, ucCards, index)
            self._cardLayer:setBombCardSameColor(localSeat,isTongSe, index)
        end)

        local showTypeCfk = cc.CallFunc:create(function()
            self._cardLayer:setBombCardType(localSeat,cardType,index,bAnimation)
            --音效
            local power = CardLogic.getMinPowerInCardIDs(ucCards) --最小的牌权值即为牌型的牌权值
            local gameid = CF.roomData:getGameID()
            CF.soundManager:playSoundPlayCardType(sex, cardType, power, bFangYan, gameid)
        end)

        local showScoreCfk = cc.CallFunc:create(function()
            self._cardLayer:setBombCardScore(localSeat,combScore,index,bAnimation)    
        end)
        
        local tmpAllTime = allTime*(index-1)
        local seq = cc.Sequence:create(
            cc.DelayTime:create(tmpAllTime),
            showCardCfk,
            cc.DelayTime:create(showCardTypeTime),
            showTypeCfk,
            cc.DelayTime:create(showCardScoreTime),
            showScoreCfk,
            cc.DelayTime:create(endWiatTime))
        seqList[#seqList+1] = seq
        tmpTime = tmpAllTime + allTime
    end

    if isNoBomb == true then
        tmpTime = tmpTime + showNoBombTime
        local seq = cc.Sequence:create(
            cc.DelayTime:create(showCardTypeTime),
            cc.CallFunc:create(function()self:showNoBomb(localSeat,true)end))
        seqList[#seqList+1] = seq
    end

    local seq = cc.Sequence:create(
        cc.DelayTime:create(tmpTime),
        cc.CallFunc:create(function()
            if bAnimation then
                CF.msgManager:sendEndWaitShowBomb(msgFFZBomb.sSeat)
            end
        end))

    seqList[#seqList+1] = seq
    for i = 1 , #seqList do
        if self._bombCardAniPos then
            self._bombCardAniPos:runAction(seqList[i]) 
        end
    end
end

--只用数组那个
function GameLayer:onMsgStableBombSeat(event)
    if not event.msg then return end
    local msgStableBombSeat = event.msg.msgData
    local localSeat = CF.roomData:seatToLocal(msgStableBombSeat.sSeat)
    CF.SysTool.performWithDelayGlobal(function()
        if self._cardLayer then
            self._cardLayer:showStableBombIcon(localSeat)
        end
    end, 0.3)
end

function GameLayer:onMsgStableBombSeatArray(event)
    if not event.msg then return end
    local msgStableBombSeatArray = event.msg.msgData or {}
    if not next(msgStableBombSeatArray.sSeatArray) then return end
    for _ , sSeat in pairs(msgStableBombSeatArray.sSeatArray) do
        if sSeat ~= -1 then
            local localSeat = CF.roomData:seatToLocal(sSeat)
            CF.SysTool.performWithDelayGlobal(function()
                if self._cardLayer then
                    self._cardLayer:showStableBombIcon(localSeat)
                end
            end, 0.3)
        end
    end
end

--洗牌座位号
function GameLayer:onMsgShuffleSeats(event)
    if not event.msg then return end
    local msgData = event.msg.msgData or {}
    local msgShuffleSeats = msgData.sSeat or {}
    local shuffleList = {}
    local KW_TMP_THESAURUS = {"金主", "豪门", "富豪", "贵族", "财主"}
    for i = 0 , CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(i)
        if player and msgShuffleSeats[i] == 1  then -- 1 表示洗了牌，0表示没洗牌
            local shufferText = string.format("%s玩家%s，正在洗牌...", KW_TMP_THESAURUS[math.random(1, #KW_TMP_THESAURUS)], player:getNickName2())
            table.insert(shuffleList,shufferText)
        end  
    end
    if #shuffleList > 0 then
        if tolua.isnull(self._shuffleAniLayer) then
            self._shuffleAniLayer = CF.gameRequire("Modules.PropUse.ShuffleView").new()
            self._shuffleAniLayer:showSelf()
            self._shuffleAniLayer:showShuffleList(shuffleList)
        else
            self._shuffleAniLayer:showShuffleList(shuffleList)
        end
    end
end

--洗牌结束
function GameLayer:onMsgShuffleFinish(event)
   if not tolua.isnull(self._shuffleAniLayer) then 
        self._shuffleAniLayer:removeSelf()
        self._shuffleAniLayer = nil
    end
end

--普通玩法没炸必投
function GameLayer:omMsgNormalNoBoom(event)
    if not event.msg then return end
    local msgNormalNoBoom = event.msg.msgData or {}
    local localSeat = CF.roomData:seatToLocal(msgNormalNoBoom.nNoBoomSeat)
    self:showNoBomb(localSeat, true)
end

function GameLayer:showNoBomb(localSeat,render)
    local noBombImgParent = CF.roomData:isSixPlayer() and self._panelNoBomb6 or self._panelNoBomb4
    local noBombImg = CF.UITool.seekNodeByName(noBombImgParent, "_KW_NO_BOMB_" .. localSeat)
    if noBombImg then
        if render then
            noBombImg:setVisible(render)
            noBombImg:setScale(2.0)
            noBombImg:runAction(cc.ScaleTo:create(0.2,1.0))
        else
            noBombImg:setVisible(render)
        end
    end
end

--六人换位
function GameLayer:onMsgOpenCardSeatSix(event)
    if not event.msg then return end
    local msgOpenCardSeatSix = event.msg.msgData or {}

    local localFirstcardSeat = CF.roomData:seatToLocal(msgOpenCardSeatSix.sFirstSeat)
    local localSecondcardSeat = CF.roomData:seatToLocal(msgOpenCardSeatSix.sSecondSeat)
    local localThirdcardSeat = CF.roomData:seatToLocal(msgOpenCardSeatSix.sThirdSeat)

    --始终保持第一第二个玩家在前面,方便UI显示
     if localFirstcardSeat == localThirdcardSeat then
         local tmpSeat = localSecondcardSeat
         localSecondcardSeat = localThirdcardSeat
         localThirdcardSeat = tmpSeat
     end

     if localSecondcardSeat == localThirdcardSeat then
         local tmpSeat = localFirstcardSeat
         localFirstcardSeat = localThirdcardSeat
         localThirdcardSeat = tmpSeat
     end

     local openCardID = self._gameData:getOpenCardID()
     self._cardLayer:showSepCardsAniSix(localFirstcardSeat,localSecondcardSeat,localThirdcardSeat,openCardID,function()
        CF.msgManager:sendWaitTakeCard()
    end)
end

function GameLayer:onMsgScoreEveryPlayerTurn(event)
    if not event.msg then return end
    local msgScoreEveryPlayerTurn = event.msg.msgData or {}
    local everyScore = msgScoreEveryPlayerTurn.sScore

    local mySeat = CF.roomData:seatToLocal(CF.roomData:getSelfSeat())
    local friSeat = CF.roomData:seatToLocal(CF.roomData:getFriendSeat())

    if everyScore == nil or next(everyScore) == nil then
        return
    end
    local myScore = 0
    local eneScore = 0
    for sSeat,score in pairs(everyScore) do
        local localSeat = CF.roomData:seatToLocal(sSeat - 1)
        if mySeat == localSeat or friSeat == localSeat then
            myScore = myScore + score
        else
            eneScore = eneScore + score
        end
    end
    myScore = "己方:".. myScore
    eneScore = "对方:".. eneScore
    CF.UITool.setText(self._tableScoreBg,"KW_SCORE_SELF",myScore)
    CF.UITool.setText(self._tableScoreBg,"KW_SCORE_OTHER",eneScore)
end

function GameLayer:onMsgScoreTableShowTurn(event)
    if not event.msg then return end
    local msgScoreTableShowTurn = event.msg.msgData or {}
    local sScore = msgScoreTableShowTurn.sScore or 0
    if self._tableScoreText then
        self._tableScoreText:setString("桌面分数:" .. sScore)
        local textSize = self._tableScoreText:getContentSize()
        self._tableScoreALLBg:setContentSize(cc.size(textSize.width + 30, textSize.height + 10))
    end
end

function GameLayer:onMsgBtnTableScoreClicked(send, eventType)
    local ScoreCardLayer = CF.gameRequire("Modules.GameLayer.ScoreCardLayer")
    ScoreCardLayer.new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("桌面分数")
end

function GameLayer:onSurrenderBtnClicked(send, eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    CF.TipTool.showTip({
        bTop = true,
        type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
        funcOK = function()
            CF.msgManager:sendSurrenderRequestMsg()
        end,
    }, "确定投降吗？")
end

return GameLayer�  