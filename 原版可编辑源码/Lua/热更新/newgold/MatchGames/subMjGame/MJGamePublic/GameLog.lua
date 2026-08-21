local GameBase = import(".GameBase")
local GameLog = class("GameLog", GameBase)
local GameConfig = require("newgold.MatchGames.subMjGame.MJGamePublic.GameConfig")
local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local netObj, eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

function GameLog:ctor(...)
    GameLog.super.ctor(self, ...)
        ------战绩回放时用--------
    self.logPlaySpeed = 1
    self.isLogPaused = false
    self.isLogExchange3 = false
    self.frameTime = 0
    self.currentOpIndex = 1
    self.totalOpIndex = 1

    self.playingLog = true 
    self.endOutTip = true

    self.mainViewPath = self.mainViewPath or "newgold.MatchGames.subMjGame.MJGamePublic.GameMainView"
    
    -- 记录进入某一步之前的数据，用作回退
    self.playerdataByOp = {
        -- 
--        [posState] = {
--            handdata = {},
--            mocard = 0,
--            downcard = {
--                {},
--                {},
--            },
--        },
    }
end

function GameLog:onEnter()
    GameLog.super.onEnter(self)
    self:onUpdate(handler(self, self.update))
end

function GameLog:onExit()
    GameLog.super.onExit(self)
--    g_gameGlobal:setIsPlayingGameLog(false)
end

function GameLog:initRoomInfoForLog( msgAck )
    g_gameGlobal:setIsPlayingGameLog(true)
    
    
    -----
    -- 从输入回放码进入  需要初始化局次日期
    local roomRoundDatesInfo = g_gameGlobal:getSelectedRecordDate()
--    dump(roomRoundDatesInfo, "before")
    if not roomRoundDatesInfo or not next(roomRoundDatesInfo) then
        local dates = {}
        for k = 1, msgAck.unused0 do
            dates[k] = msgAck.date
        end
        g_gameGlobal:setSelectedRecordDate(dates)
    end
    -----
    
--    local roomRoundDatesInfo = g_gameGlobal:getSelectedRecordDate()
--    dump(roomRoundDatesInfo, "after")
    
    
    -- -- 设置最大人数
    g_gameGlobal:setMaxPlayerNum(#msgAck.players)
    -- -- 设置是否消耗均摊
    -- g_gameGlobal:setFangFeiJunTan(msgAck.unused2)
    -- 解析具体玩法
    --g_gameGlobal:setCurrentWanFa(msgAck.playWay)
    local wanfaInfo = g_gameGlobal:parseWanfaList(msgAck.MainGamePlayRule, msgAck.MinorGamePlayRuleList, "\n", false, true, false,nil,true,true, true,true)
    --self.wanfa:setString(wanfaInfo)

    self.MainGamePlayRule = msgAck.MainGamePlayRule
    self.MinorGamePlayRuleList = msgAck.MinorGamePlayRuleList

    if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_JIAO_LING) and msgAck.lingSize and msgAck.lingSize>=0 then
        self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LING] = msgAck.lingSize
    end
    if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LIAN_ZHUANG) and msgAck.lianZhuangNum and msgAck.lianZhuangNum>=0  then
        self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LIAN_ZHUANG] = msgAck.lianZhuangNum
    end

    g_gameGlobal:setCurrentLaiziList(msgAck.LaiZiList)
    --牌桌上显示癞子列表
    self:showLaiziInDesk(msgAck.LaiZiList)

    -- 加载设置等,vip场不是第一局的话，在第二局等待界面要把等待界面删了，返回大厅和解散房间按钮，用游戏界面按钮点击
    self:setWanfaLayer(wanfaInfo, true)
    local gameMainView = require(self.mainViewPath):create(self.MainGamePlayRule)
    gameMainView:modifyGameState(g_gameConstant.PLAY_LOG_MODEL)
    gameMainView:setName("gameMainView")
    self.gameMainView = gameMainView
    g_gameGlobal:getGameScene():addChild(gameMainView, g_gameConstant.GAMEMAINVIEW_ZORDER)
    
    self.gameMainView:setRecordInfo(msgAck)
    self.fangweiBg:setVisible(true)
    -- 显示房间号
    self.expendInfoNode:setMode(false)
    self.expendInfoNode:setRoomId("")
    self.tableID = msgAck.vipRoomIndex
    local logTime = msgAck.date
    local spaceIndex = string.find(logTime, " ")
    -- 日期是否带年份
    if spaceIndex > 7 then
        logTime = string.sub(logTime, 6)
    end
    self.expendInfoNode:setTimeDesc(logTime)
 
    -- 总局数
    self.totalJuShu = msgAck.handsTotal  
    -- 剩余局数
    local leftJushu = msgAck.handsTotal - msgAck.handIndex
    self.jushu:setString(tostring(msgAck.handIndex) .. "/" .. tostring(msgAck.handsTotal))
    -- 创建所有的玩家table    
    self:createAllTablePlayer(msgAck.MainGamePlayRule)
    -- 房主信息
    -- self.vipCreaterName=msgAck.creatorName
    -- self.createPlayerID = msgAck.createPlayerID
    
    --:setVisible(true)

    self:resetRoundInfo()
        
    self.gpsBtn:setVisible(false)

    self.chatBtn:setVisible(false)
    self.voiceBtn:setVisible(false)
    --self.roomIDCBg:setVisible(false)
    -- 设置自己信息
    local findMyPos = false
    for i, v in pairs(msgAck.players) do
        if v.playerID == g_gameGlobal:getMyselfInfo().playerID then
            g_gameGlobal:setMyTablePos(v.tablePos)
            findMyPos = true
            break
        end
    end
    -- doo的时候没有自己的信息
    local isdaa = false
    if not findMyPos then
        g_gameGlobal:setMyTablePos(0)
        isdaa = true
    end
    -- 保存玩家信息，可能有多人,玩家信息根据座位号算出实际位置放到self.tablePlayerInfoTable中,根据玩家人数，创建玩家初始头像，并摆放位置
    local fangweiValueTable = {false, false, false, false}
    for i, v in pairs(msgAck.players) do
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        if posState == 1 then
            -- g_gameGlobal.myselfIsFangZhu = ((v.playerID == self.createPlayerID) and true or false)
        end
        self.tablePlayerInfoTable[posState] = v

        local headImgView = require("newgold.MatchGames.GamePublic.HeadImgView"):create(posState)
        self.bgPanel:addChild(headImgView, g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        headImgView:initHeadImgPos(self:getHeadPosByLocalPos(posState))
        self.tablePlayerHeadImgTable[posState] = headImgView
        
        -- 更新头像数据 
        if self.tablePlayerInfoTable[posState] ~= 0 then
            headImgView:updateTablePlayerInfo(self.tablePlayerInfoTable[posState], isdaa)
            headImgView:updateHeadImgPosWithTablePos(self:getHeadPosByLocalPos(posState))
            headImgView:zhuangVisible(msgAck.dearPlayerIndex == self.tablePlayerInfoTable[posState].playerIndex)

            local goldNum = v.gold
            local diamondNum = 0
            headImgView:refreshGoldNum(goldNum, diamondNum)
        end

        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:init(v.sex)
        end

        fangweiValueTable[posState] = (g_gameGlobal:getMyTablePos()+i-1)%g_gameGlobal:getMaxPlayerNum() + 1
    end

    for i,v in ipairs(self.fangweiTable) do
        if not fangweiValueTable[i] then
            v:setVisible(false)
        else
            v:loadTexture("Match/".."nozip/fangwei_un_" .. fangweiValueTable[i] .. ".png", ccui.TextureResType.plistType)
            v.flashImg:loadTexture("Match/".."xuezhanGame/GameScene/n_play_label_" .. fangweiValueTable[i] .. ".png", ccui.TextureResType.plistType)
            v:setVisible(true)
        end
    end
    self:refreshTablePlayerWithMaxNum(#msgAck.players)

    for i, v in pairs(self.tablePlayerTable) do
        if v ~= 0 then
            if msgAck.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_LONG_YAN  then
                if msgAck.LaiZiList[1] then
                    v:setCardSortValues({[0x37] = msgAck.LaiZiList[1]})
                end
            elseif msgAck.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER  then
                if msgAck.LaiZiList[1] then
                    v:setCardSortValues({[0x7f] = msgAck.LaiZiList[1]})
                end
            end
        end
    end
    self.playerOps = msgAck.playerOps
    -- 拆分换三张op
    self:splitExchange3Op()
    self.currentOpIndex = 1
    self.totalOpIndex = #self.playerOps
    -- 发牌
    self:update(self.logPlaySpeed)
    self:createGuo()
    -- for i = 1, #msgAck.players do
    --     self:playOneOp()
    --     self.currentOpIndex = self.currentOpIndex + 1
    -- end
    -- 血战玩法
    self:judgeIsXZDDGame(msgAck)
end

-- 拆分换三张动画
function GameLog:splitExchange3Op()
    
    for opIndex, op in ipairs(self.playerOps) do
        if op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 
            -- 换三张
            local jsonContent = op.opStr

            local ok, jsonData = pcall(function()
                return json.decode(jsonContent)
            end)

            if not ok then
                return
            end
            
            local newAddOps = {}
            
            local playerInCards = {}
            local playerOutCards = {}
            
            local dataCount = #jsonData
            
            -- 删除手牌中需要换牌的数据，然后放到手牌最后
            for jIdx = 1, dataCount do 
                local v = jsonData[jIdx]
                local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
                
                local outCards = v.exchangeOutCardList
                local inCards = v.exchangeIntoCardList
                playerInCards[posState] = inCards
                playerOutCards[posState] = outCards
                
                local changeCardOp = {
                    opCode = g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_OUT,
                    outCards = outCards,
                    inCards = inCards,
                    posState = posState,
                }
                
                table.insert(newAddOps, changeCardOp)
            end
            
            local changeCardOp = {
                opCode = g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_IN,
                playerInCards = playerInCards,
                playerOutCards = playerOutCards,
            }
            
            table.insert(newAddOps, changeCardOp)
            
            -----
            table.remove(self.playerOps, opIndex)
            for newIdx = #newAddOps, 1, -1 do
                local newOp = newAddOps[newIdx]
                table.insert(self.playerOps, opIndex, newOp)
            end
            
            break
        end
    end
    
end

function GameLog:exchangeCardsOut(op)
    local posState = op.posState
    if not self.tablePlayerTable[posState] or self.tablePlayerTable[posState] == 0 then
        return
    end
    
    local outCards = op.outCards
    self.tablePlayerTable[posState]:setLog3CardOut(outCards)
end

function GameLog:exchangeCardsOutReverz(op)
    local posState = op.posState
    if not self.tablePlayerTable[posState] or self.tablePlayerTable[posState] == 0 then
        return
    end
    
    local outCards = op.outCards
    self.tablePlayerTable[posState]:setLog3CardOutReverz(outCards)
end

function GameLog:exchangeCardsIn(op)
    local playerInCards = op.playerInCards
    
    self.isLogExchange3CardsIn = true
    
    for k, v in ipairs(self.tablePlayerTable) do
        if v ~= 0 then
            local inCards = playerInCards[k]
            v:setLog3CardIn(inCards)
        end
    end
    
    local function finishCallFunc()
    
        for k, v in ipairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:repositionAllCards()
            end
        end
        
        self.isLogExchange3CardsIn = false
        
    end
    
    -----
    local evtNode = display.newNode()
        :addTo(self)
    
    evtNode:addChild(eventObj.new(eventType.GAME_LOG_WILL_PLAY_NEW_OP, function (evt, msg)
        
        finishCallFunc()
        
        evtNode:removeSelf()
    end))
    
    -----
    performWithDelay(self, function ()
        finishCallFunc()
        
        if not tolua.isnull(evtNode) then
            evtNode:removeSelf()
        end
        
    end, 1.5)
end

function GameLog:exchangeCardsInReverz(op)
    local playerInCards = op.playerInCards
    local playerOutCards = op.playerOutCards
    
    for k, v in ipairs(self.tablePlayerTable) do
        if v ~= 0 then
            local outCards = playerOutCards[k]
            local inCards = playerInCards[k]
            v:setLog3CardInReverz(outCards, inCards)
        end
    end
end

-- 换三张消息处理
function GameLog:playExchangeCardsMsg(msg)

    local jsonContent = msg.opStr

    local ok, jsonData = pcall(function()
        return json.decode(jsonContent)
    end)

    if not ok then
        return
    end
    
    
    local playerInCards = {}
    local playerOutCards = {}
    
    local evtNode = display.newNode()
        :addTo(self)
    
    evtNode:addChild(eventObj.new(eventType.GAME_LOG_WILL_PLAY_NEW_OP, function (evt, msg)
        
        self.isLogExchange3 = false 
        
        for k, v in ipairs(self.tablePlayerTable) do
            if v ~= 0 then
                -- 未完成  立即完成
                if not self.isLogExchange3CardIn then
                    v:exchangeCardImmediate(playerOutCards[k], playerInCards[k])
                end
                
                v:repositionAllCards()
            end
        end
        
        self.isLogExchange3CardIn = false
        
        evtNode:removeSelf()
    end))

    local function continueLogState()
        self.isLogExchange3 = false 
        self.isLogExchange3CardIn = false
        
        if not tolua.isnull(evtNode) then
            evtNode:removeSelf()
        end
    end 
    
    -- 换三张是否已经拿到了新的手牌
    self.isLogExchange3CardIn = false
    
    -----
    local delayTime = 0
    local moveOutStayTime = 1
    
    -- 删除手牌中需要换牌的数据，然后放到手牌最后
    for k, v in ipairs(jsonData or {}) do 
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        if self.tablePlayerTable[posState] ~= 0 then 
            local outCards = v.exchangeOutCardList
            local inCards = v.exchangeIntoCardList
            playerInCards[posState] = inCards
            playerOutCards[posState] = outCards
            
            performWithDelay(evtNode, function ()
                
                self.tablePlayerTable[posState]:setLog3CardOut(outCards)
            end, delayTime)
            
            delayTime = delayTime + moveOutStayTime
        end
    end
    
    
    delayTime = delayTime - moveOutStayTime
    -- 最后一家移出牌后停留时间
    delayTime = delayTime + 2
    
    performWithDelay(evtNode, function ()
        
        for k, v in ipairs(self.tablePlayerTable) do
            if v ~= 0 then
                local inCards = playerInCards[k]
                v:setLog3CardIn(inCards)
            end
        end
        self.isLogExchange3CardIn = true
    end, delayTime)
    
    -- 换牌后停留多久插入手牌
    delayTime = delayTime + 1.6
    performWithDelay(evtNode, function ()
        
        for k, v in ipairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:repositionAllCards()
            end
        end
        
        continueLogState()
    end, delayTime)
end

-- 换三张消息处理
function GameLog:playExchangeCardReverz(msg)

    local jsonContent = msg.opStr

    local ok, jsonData = pcall(function()
        return json.decode(jsonContent)
    end)

    if not ok then
        return
    end
    
    local evtNode = display.newNode()
        :addTo(self)
    
    evtNode:addChild(eventObj.new(eventType.GAME_LOG_WILL_PLAY_NEW_OP, function (evt, msg)
        
        self.isLogExchange3 = false 
        
        evtNode:removeSelf()
    end))

    local function continueLogState()
        self.isLogExchange3 = false 
        
        if not tolua.isnull(evtNode) then
            evtNode:removeSelf()
        end
    end 

    -- 删除手牌中需要换牌的数据，然后放到手牌最后
    local outCards = {}
    for k, v in ipairs(jsonData or {}) do 
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        if self.tablePlayerTable[posState] ~= 0 then 
            local outCards = v.exchangeOutCardList
            local inCards = v.exchangeIntoCardList

            self.tablePlayerTable[posState]:exchangeCardReverz(outCards,inCards,continueLogState)
        end
    end
end

-- 定缺消息处理
function GameLog:playDingQueMsg(msg)

    local jsonContent = msg.opStr

    local ok, jsonData = pcall(function()
        return json.decode(jsonContent)
    end)

    if not ok then
        return
    end

    local queIndexList = {0,0,0,0}

    for k, v in ipairs(jsonData or {}) do 
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        queIndexList[posState] = v.dingQueValue
    end 

    self:playDingQueFlyAction(queIndexList,true)
end 

function GameLog:playDingQueMsgReverz(msg)
    self:removeDingQueIcon()
end

function GameLog:removeDingQueIcon()
    for k, v in ipairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            v:hideHeadQueIcon()
        end
    end
end


function GameLog:playOneOp()
    
    if self.currentOpIndex > self.totalOpIndex then
        return 
    end
    
    -- 广播通知其他模块作预操作
    GlobalEventManager:onEvent(eventType.GAME_LOG_WILL_PLAY_NEW_OP, {opIndex = self.currentOpIndex}, true)
    
    local op = self.playerOps[self.currentOpIndex]

    self:setGuo()
    
    if op.opCode == g_gameConstant.MAHJONG_OPERTAION_LOG_SEND_CARDS then
        self:sendCards(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CHI then
        self:playerChi(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PENG then
        self:playerPeng(op)
    elseif op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 
        -- 换三张
        self.isLogExchange3 = true
        self:playExchangeCardsMsg(op)
        
    -- 换三张
    elseif op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_OUT then
        self:exchangeCardsOut(op)
    elseif op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_IN then
        self:exchangeCardsIn(op)
    
    elseif op.opCode == g_gameConstant.GAME_OPERTAION_DING_QUE then 
        -- 定缺
        self:playDingQueMsg(op)

    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        self:playerGang(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_MO_CARD then
        self:playerGrab(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED then
        self:playerHu(op)
    elseif op.opCode == g_gameConstant.MAHJONG_NEW_OPERATION_NOTIFY_SHOW_MA then
        self:playerShowMa(op)        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CANCEL then
        --self:playerCancel(op)
        self:playerGuo(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD then
        self:playerAddChuCard(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CHU then
        self:playerChuCard(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_TING then
        self:playerTing(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_BU_HUA then
        self:playerBuHua(op)
    elseif op.opCode == g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS then
        self:playerMingPai(op)
    elseif op.opCode == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE then
        self:playerDaTouZi(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PLAYER_OVER_TIME then -- 超时托管
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerHeadImgTable[posState] ~= 0 then
            self.tablePlayerHeadImgTable[posState]:tuoGuanVisible(true)
        end
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PLAYER_OVER_TIME_RECOVER then -- 取消托管
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerHeadImgTable[posState] ~= 0 then
            self.tablePlayerHeadImgTable[posState]:tuoGuanVisible(false)
        end
    elseif op.opCode == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG_VALUE
        or op.opCode == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHANG_GA_VALUE then        
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:setFangChongState(op.opValue1)
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:xzScore(op.opValue1)
            end
        end
    elseif op.opCode == g_gameConstant.GAME_OPERATION_CHOOSE_ABSENT_CARD_COLOR then        
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:setQueState(op.opValue1, true)
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:setQueState(op.opValue1, true)
            end
        end
    elseif op.opCode == g_gameConstant.MAHJONG_PLAYBACK_CALCULATE then
        self:showGameResult(op)
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_LOG_DUO_OPS then
        --回放过程中玩家多操作过程
        self:showCanOps(op)
    else
        printf("ddddddddddd")
    end

    local nextOpCode = self.playerOps[self.currentOpIndex+1] and self.playerOps[self.currentOpIndex+1].opCode
    return op.opCode, nextOpCode
end


local quickOpMap = {
    [g_gameConstant.MAHJONG_OPERTAION_PLAYER_OVER_TIME] = true,
    [g_gameConstant.MAHJONG_OPERTAION_PLAYER_OVER_TIME_RECOVER] = true,
    [g_gameConstant.MAHJONG_OPERTAION_LOG_SEND_CARDS] = true,
    [g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG_VALUE] = true,
    [g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHANG_GA_VALUE] = true,
    [g_gameConstant.GAME_OPERATION_CHOOSE_ABSENT_CARD_COLOR] = true,
    [g_gameConstant.MAHJONG_OPERTAION_TING] = true,
    [g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE] = true,
}

function GameLog:sendCards( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        self.tablePlayerTable[posState]:recreateAllCards(op.vlist)
    end
    self:showLeftCards(op.cardLeftNum)
end

function GameLog:playerChi( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end

        local handCard1 = bit._and(op.opValue1, 0xff)
        local handCard2 = bit._and(op.opValue1*(2^(-8)), 0xff)
        local chiCards = bit._and(op.opValue1*(2^(-16)), 0xff)

        -- 删除打的牌
        local posState1 = g_gameGlobal:getTablePlayerPosWithTablePos(op.opValue2)
        if self.tablePlayerTable[posState1] ~= 0 then
            self.tablePlayerTable[posState1]:removeReplayChuCard(chiCards)
        end

        self.tablePlayerTable[posState]:removeOneCard(handCard1)
        self.tablePlayerTable[posState]:removeOneCard(handCard2)

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation= g_gameConstant.MAHJONG_OPERTAION_CHI
	    playerTableOperationMsg.opValue= op.opValue1
	    playerTableOperationMsg.player_table_pos= op.tablePos
	    playerTableOperationMsg.card_value= 0

        self.tablePlayerTable[posState]:chiPengGangOperation(playerTableOperationMsg, false)
        self:playGameEffect(playerTableOperationMsg)
        self.tablePlayerTable[posState]:repositionAllCards()

        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerPeng( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end

        local v = bit._and(op.opValue1, 0xff)
        -- 出牌人的位置
        local chuPos = bit._and(op.opValue1*(2^(-8)), 0xff)
        -- 删除打的牌
        local posState1 = g_gameGlobal:getTablePlayerPosWithTablePos(chuPos)
        if self.tablePlayerTable[posState1] ~= 0 then
            self.tablePlayerTable[posState1]:removeReplayChuCard(v)
        end

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation= g_gameConstant.MAHJONG_OPERTAION_PENG
	    playerTableOperationMsg.opValue=bit._or(bit._or(v, v*(2^8)), v*(2^16))
	    playerTableOperationMsg.card_value=playerTableOperationMsg.opValue
	    playerTableOperationMsg.chuOffset = op.opValue2
	    playerTableOperationMsg.player_table_pos=op.tablePos
        self.tablePlayerTable[posState]:chiPengGangOperation(playerTableOperationMsg, false)
        if posState ~= 1 then
            self.tablePlayerTable[posState]:removeOneCard(v)
            self.tablePlayerTable[posState]:removeOneCard(v)
        end
        self:playGameEffect(playerTableOperationMsg)
        self.tablePlayerTable[posState]:repositionAllCards()

        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerPengReverz(op)
    
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then

        local v = bit._and(op.opValue1, 0xff)
        -- 出牌人的位置
        
        local chuPos = bit._and(op.opValue1*(2^(-8)), 0xff)
        -- 恢复打出的牌
        local posState1 = g_gameGlobal:getTablePlayerPosWithTablePos(chuPos)
        if self.tablePlayerTable[posState1] ~= 0 then
            
            self.tablePlayerTable[posState1]:addChuCard(v)
            
        end
        
        -- 删除碰下的牌
        self.tablePlayerTable[posState]:removePeng(v)
        -- 恢复 添加手牌
        self.tablePlayerTable[posState]:addNewCard(v)
        self.tablePlayerTable[posState]:addNewCard(v)
        
        self.tablePlayerTable[posState]:repositionAllCards()

        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerGang( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        -- 记录当前牌的值
        self:pushHandData(posState)
        
        self.tablePlayerTable[posState]:clearMoCard()
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end

        local value = bit._and(op.opValue1, 0xff)
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                local removeRet = v:removeReplayChuCard(value)
                if removeRet then
                    op.chuPlayerCltPos = i
                end
            end
        end
        local chuOffset = 0
        if string.len(op.opStr) > 0 then
            chuOffset = tonumber(op.opStr)
        end

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation= op.opValue2
	    playerTableOperationMsg.opValue = bit._or(bit._or(bit._or(value, value*(2^8)), value*(2^16)), value*(2^24))
	    playerTableOperationMsg.card_value=playerTableOperationMsg.opValue
	    playerTableOperationMsg.chuOffset = chuOffset
        playerTableOperationMsg.player_table_pos=op.tablePos
        if (bit._and(playerTableOperationMsg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) then
            playerTableOperationMsg.ruleValue = g_gameConstant.GAME_PLAY_RULE_AN_GANG_FAN_ZHANG
        end

        self.tablePlayerTable[posState]:chiPengGangOperation(playerTableOperationMsg, false)
        if posState ~= 1 then
            self.tablePlayerTable[posState]:removeOneCard(value)
            self.tablePlayerTable[posState]:removeOneCard(value)
            self.tablePlayerTable[posState]:removeOneCard(value)
            self.tablePlayerTable[posState]:removeOneCard(value)
        end

        self:playGameEffect(playerTableOperationMsg)
        self.tablePlayerTable[posState]:repositionAllCards()

        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerGangReverz( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        self.tablePlayerTable[posState]:clearMoCard()
        
        local lstMoCard = self:getPlayerMoCard(posState, self.currentOpIndex) or 0
        
        
        local value = bit._and(op.opValue1, 0xff)
        
        
        -- 
        if bit._and(op.opValue2, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
            self.tablePlayerTable[posState]:removeGang(value)
            
            self.tablePlayerTable[posState]:addNewCard(value)
            self.tablePlayerTable[posState]:addNewCard(value)
            self.tablePlayerTable[posState]:addNewCard(value)
            if lstMoCard ~= value then
                self.tablePlayerTable[posState]:addNewCard(value)
                self.tablePlayerTable[posState]:removeOneCard(lstMoCard)
            end
            
        
        elseif bit._and(op.opValue2, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
            self.tablePlayerTable[posState]:removeGang(value, true)
            if lstMoCard ~= value then
                self.tablePlayerTable[posState]:addNewCard(value)
                self.tablePlayerTable[posState]:removeOneCard(lstMoCard)
            end
            
        elseif bit._and(op.opValue2, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
            self.tablePlayerTable[posState]:removeGang(value)
            
            self.tablePlayerTable[posState]:addNewCard(value)
            self.tablePlayerTable[posState]:addNewCard(value)
            
            if lstMoCard ~= value then
                self.tablePlayerTable[posState]:addNewCard(value)
                self.tablePlayerTable[posState]:removeOneCard(lstMoCard)
            end
            
            
            -- 需要为供牌玩家 添加一张出牌
            local chuPos = op.chuPlayerCltPos or 0
            if chuPos == 0 and string.len(op.opStr) > 0 then
                chuPos = tonumber(op.opStr)
                chuPos = g_gameGlobal:getTablePlayerPosWithTablePos(chuPos)
            end
            
            if chuPos then
                
                if self.tablePlayerTable[chuPos] ~= 0 then
                    self.tablePlayerTable[chuPos]:addChuCard(value)
                end
            end
            
        end
        
        if lstMoCard ~= 0 then
            -- 首张杠问题 需要判断下0
            self.tablePlayerTable[posState]:playLogMoCard(lstMoCard)
        end
        
        self.tablePlayerTable[posState]:repositionAllCards()

        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerGrab( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        self.tablePlayerTable[posState]:playLogMoCard(bit._and(op.opValue1, 0xff))
        self:showLeftCards(op.cardLeftNum)
    end
end

-- 摸牌操作回退
function GameLog:playerGrabReverz( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
--        self.tablePlayerTable[posState]:playLogMoCard(bit._and(op.opValue1, 0xff))
        self.tablePlayerTable[posState]:removeMoCard()
        self:showLeftCards(op.cardLeftNum + 1)
    end
end

function GameLog:playerHu( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        -- local ma1 = 0
        -- local ma2 = 0
        -- local zhongmaIndex = 0
        -- local zhongmaNum = -1

        -- local huTypes = {}
        -- if #op.vlist >= 1 then
        --     local huTypesLen = op.vlist[1]
        --     for i=2,huTypesLen+1 do
        --         huTypes[#huTypes+1] = op.vlist[i]
        --     end
        -- end

        -- local huConfirmData = {
        --     cardValue = op.opValue1,
        --     gameResult = op.opValue2,
        --     huTypes = huTypes,
        --     unused_5 = 0,
        -- }

        self:hideMarker()

        local huConfirmData = {
            cardValue = op.opValue1,
            gameResult = 0,
            huTypes = 0,
            unused_5 = 0,
            huIndex = op.opValue2,
            huKind = GameConfig.XZHUINDEX,
        }
        
        local dianPao = tonumber(op.opStr)

        local isZiMo = false 
        local isYPDX = false
        local isQGH = false
        for k, v in ipairs(op.vlist or {}) do 
            if v == g_gameConstant.MAHJONG_HU_CODE_YI_PAO_DUO_XIANG then 
                isYPDX = true 
            elseif v ==  g_gameConstant.MAHJONG_HU_CODE_ZI_MO then 
                isZiMo = true 
                huConfirmData.huKind = GameConfig.XZZIMOINDEX 
                huConfirmData.gameResult = GameConfig.XZZIMOINDEX 
            elseif v == g_gameConstant.MAHJONG_HU_CODE_HU_JIAO_ZHUAN_YI then 
                -- 播放呼叫转移动画
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPao)
                if self.tablePlayerTable[rmPos] and self.tablePlayerTable[rmPos] ~= 0 then 
                    self.tablePlayerTable[rmPos]:playXZHuAction(GameConfig.XZHUJIAOZHUANGYIINDEX,nil,true)
                end 
            elseif v == g_gameConstant.MAHJONG_HU_CODE_XZ_QIANG_GANG_HU then 
                isQGH = true
                -- 移除被抢杠胡人的手牌数据
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPao)
                if self.tablePlayerTable[rmPos] and self.tablePlayerTable[rmPos] ~= 0 then
                    self:pushHandData(rmPos)
                    self.tablePlayerTable[rmPos]:redrawQGHHandCards(huConfirmData.cardValue)
                end 
                huConfirmData.huKind = GameConfig.XZQIANGGANGHUINDEX
            end 
        end 

        if not isZiMo and not isYPDX and not isQGH then
            if dianPao then
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPao)
                if type(self.tablePlayerTable[rmPos]) == "userdata" then
                    self.tablePlayerTable[rmPos]:removeLastChuCard()
                end
            else
                print("\nwarning...\n"..debug.traceback())
            end
        end 

        if GameConfig.XZZIMOINDEX == huConfirmData.huKind then
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_ZIMO, self.tablePlayerInfoTable[posState].sex))
        else
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_HU, self.tablePlayerInfoTable[posState].sex))
        end
        
        self.tablePlayerTable[posState]:huOperation(huConfirmData,dianPao)
    end
end

function GameLog:playerHuReverz(op)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        
--        self:hideMarker()

        local huConfirmData = {
            cardValue = op.opValue1,
            gameResult = 0,
            huTypes = 0,
            unused_5 = 0,
            huIndex = op.opValue2,
            huKind = GameConfig.XZHUINDEX,
        }
        
        local dianPao = tonumber(op.opStr)

        local isZiMo = false 
        local isYPDX = false
        local isQGH = false
        for k, v in ipairs(op.vlist or {}) do 
            if v == g_gameConstant.MAHJONG_HU_CODE_YI_PAO_DUO_XIANG then 
                isYPDX = true 
            elseif v ==  g_gameConstant.MAHJONG_HU_CODE_ZI_MO then 
                isZiMo = true 
                huConfirmData.huKind = GameConfig.XZZIMOINDEX 
                huConfirmData.gameResult = GameConfig.XZZIMOINDEX 
            elseif v == g_gameConstant.MAHJONG_HU_CODE_HU_JIAO_ZHUAN_YI then 
                -- 播放呼叫转移动画
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPao)
                if self.tablePlayerTable[rmPos] and self.tablePlayerTable[rmPos] ~= 0 then 
                    self.tablePlayerTable[rmPos]:playXZHuAction(GameConfig.XZHUJIAOZHUANGYIINDEX,nil,true)
                end 
            elseif v == g_gameConstant.MAHJONG_HU_CODE_XZ_QIANG_GANG_HU then 
                
                isQGH = true
            end 
        end 
        
        if isQGH and not isYPDX then
            
            -- 移除被抢杠胡人的手牌数据
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPao)
            
            local lstMoCard = self:getPlayerMoCard(rmPos, self.currentOpIndex)
            if lstMoCard ~= huConfirmData.cardValue then
                self.tablePlayerTable[rmPos]:removeOneCard(lstMoCard)
                self.tablePlayerTable[rmPos]:addNewCard(huConfirmData.cardValue)
            end
            self.tablePlayerTable[rmPos]:playLogMoCard(lstMoCard)
            self.tablePlayerTable[rmPos]:repositionAllCards()
        end

        if not isZiMo and not isYPDX and not isQGH then
            if dianPao then
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPao)
                if type(self.tablePlayerTable[rmPos]) == "userdata" then
--                    self.tablePlayerTable[rmPos]:removeLastChuCard()
                    
                    self.tablePlayerTable[rmPos]:addChuCard(huConfirmData.cardValue)
                end
            else
                print("\nwarning...\n"..debug.traceback())
            end
        end 
        
        if not isZiMo and huConfirmData.cardValue ~= 0 then
            self.tablePlayerTable[posState]:removeMoCard()
        end
        
        self.tablePlayerTable[posState]:removeXZHuAction()
    end
end

function GameLog:showGameResult( op )
    if type(op.opStr) == "string" and op.opStr ~= "" then
        self.gameMainView.Panel_logRet:stopAllActions()
        local dess = string.split(op.opStr, "#")

        local retStr = ""
        for i,oneDes in ipairs(dess) do
            local tmp = string.split(oneDes, "_")
            if #tmp==3 and tonumber(tmp[1]) and tonumber(tmp[3]) then                    
                local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tmp[1])
                if self.tablePlayerInfoTable[posState] ~= 0 then
                    local tmpStr = tostring(self.tablePlayerInfoTable[posState].playerName)
                    tmpStr = g_gameGlobal:cutStringLength(tmpStr, 8) .. "   得分：".. tmp[3].. "   " .. tmp[2]
                    if #retStr>0 then
                        retStr = retStr .. "\n"
                    end
                    retStr = retStr .. tmpStr
                end
            end
        end

        if #retStr > 0 then
            self.gameMainView.Text_logRet:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
            self.gameMainView.Text_logRet:setTextVerticalAlignment(cc.VERTICAL_TEXT_ALIGNMENT_TOP)
            self.gameMainView.Text_logRet:setTextAreaSize(cc.size(self.gameMainView.Text_logRet:getContentSize().width, 0))
            self.gameMainView.Text_logRet:ignoreContentAdaptWithSize(true)
            self.gameMainView.Text_logRet:setString(retStr)
            self.gameMainView.Panel_logRet:setContentSize(self.gameMainView.Panel_logRet:getContentSize().width, self.gameMainView.Text_logRet:getContentSize().height+20)

            performWithDelay(self.gameMainView.Panel_logRet,function()
                self.gameMainView.Panel_logRet:setVisible(true)
                self.gameMainView.pauseBtn:setVisible(false)
                self.gameMainView.replayBtn:setVisible(true)
--                self.gameMainView.fastBtn:setBright(false)
--                self.gameMainView.slowBtn:setBright(false)
                self.gameMainView.exitLogBtn:setVisible(false)
                self.gameMainView.playBtn:setVisible(false)
            end, 1.8)

            self.endOutTip = false
        end
    end
end

function GameLog:showGameResultReverz(op)
    if not tolua.isnull(self.gameMainView.Panel_logRet) then
        self.gameMainView.Panel_logRet:stopAllActions()
        
        self.gameMainView.Panel_logRet:setVisible(false)
        
        self.gameMainView.replayBtn:setVisible(false)
        
        self.gameMainView.playBtn:setVisible(true)
    end
end

function GameLog:playerShowMa( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        self.tablePlayerTable[posState]:showMaOperation(op.vlist, 0, 0)
    end
end

function GameLog:playerAddChuCard( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation= g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD
	    playerTableOperationMsg.player_table_pos=op.tablePos
	    playerTableOperationMsg.target_card = op.opValue1
	    playerTableOperationMsg.cardLeftNum= op.cardLeftNum
	    playerTableOperationMsg.tingList= {}

        self:playerOperationNotify(playerTableOperationMsg)
        self:showLeftCards(op.cardLeftNum)

        self.tablePlayerTable[posState]:repositionAllCards()
    end
end

function GameLog:playerChuCard( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        -- 需要记录出牌前的当前牌
        self:pushHandData(posState)
        
        self.tablePlayerTable[posState]:clearMoCard()
        self.tablePlayerTable[posState]:removeOneCard(bit._and(op.opValue1, 0xff))
        self.tablePlayerTable[posState]:repositionAllCards()

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation= g_gameConstant.MAHJONG_OPERTAION_CHU
	    playerTableOperationMsg.player_table_pos=op.tablePos
	    playerTableOperationMsg.card_value = posState == 1 and 0 or op.opValue1
	    playerTableOperationMsg.cardLeftNum= op.cardLeftNum
	    playerTableOperationMsg.chi_card_value=0
	    playerTableOperationMsg.chi_flag=0

        self:playerOperation(playerTableOperationMsg)

        if posState == 1 then
            self.tablePlayerTable[posState]:addChuCard(op.opValue1, true, true)
        end
        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerChuCardReverz( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        -- 打出之前的摸牌
        local lstMoCard = self:getPlayerMoCard(posState, self.currentOpIndex) or 0
        
        -- 移除打出牌显示
        self.tablePlayerTable[posState]:removeLastChuCard()
        -- 手牌回退
        local lstChuCard = bit._and(op.opValue1, 0xff)
        
        print(string.format("[GameLog:playerChuCardReverz]: %d : lstmocard:%d, lstChuCard:%d", posState, lstMoCard, lstChuCard or 0))
        
        if lstChuCard ~= lstMoCard then
            -- 不等则先替换成出的牌
            if lstMoCard ~= 0 then
                self.tablePlayerTable[posState]:removeOneCard(lstMoCard)
            end
            self.tablePlayerTable[posState]:addNewCard(lstChuCard)
        end
        if lstMoCard ~= 0 then
            self.tablePlayerTable[posState]:playLogMoCard(lstMoCard)
        end
        self.tablePlayerTable[posState]:repositionAllCards()
        
--        if posState == 1 then
--            self.tablePlayerTable[posState]:addChuCard(op.opValue1, true, true)
--        end
        
        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerTing( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation= g_gameConstant.MAHJONG_OPERTAION_TING
	    playerTableOperationMsg.player_table_pos=op.tablePos
        self.tablePlayerTable[posState]:tingOperation(playerTableOperationMsg, true)
    end
end

function GameLog:playerTingReverz(op)
    
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        self.tablePlayerTable[posState]:tingOperationReverz()
    end
    
end

function GameLog:playerBuHua( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then        
        local huaCards = {}
        local moCards = {}
        for i,v in ipairs(op.vlist) do
            if i <= op.opValue1 then
                huaCards[#huaCards+1] = v
            else
                moCards[#moCards+1] = v
            end
        end
    
        self.tablePlayerTable[posState]:clearMoCard()
        self.tablePlayerTable[posState]:buhuaListOperation(huaCards, true, true)
        for i,v in ipairs(moCards) do
            self.tablePlayerTable[posState]:playLogMoCard(bit._and(v, 0xff))
            self.tablePlayerTable[posState]:clearMoCard()
        end
        self.tablePlayerTable[posState]:repositionAllCards()

        self:showLeftCards(op.cardLeftNum)
    end
end

function GameLog:playerMingPai( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        --回放本来就是亮着的牌 所以不要给数据了 只是为了播个音效
        self.tablePlayerTable[posState]:mingpaiOperation({}, self.logPlaySpeed > 2 and 2 or self.logPlaySpeed)
    end
end

function GameLog:playerDaTouZi( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    local CrapsAniNode = require("app.global.CrapsAni").new(op.vlist, posState, true, self.logPlaySpeed > 1.2 and 1 or (1.2 / self.logPlaySpeed))
    g_gameGlobal:getGameScene():add(CrapsAniNode, g_gameConstant.TABLEPLAYERSELECT_ZORDER)
end

function GameLog:playGameEffect( msg )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    if self.tablePlayerTable[posState] == 0 then
        return 
    end
    msg.opValue = g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY
    self.tablePlayerTable[posState]:playChiPengGangAnimation(msg)

    -- 播放音效
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
        NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_CHI, self.tablePlayerInfoTable[posState].sex))
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
        NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_PENG, self.tablePlayerInfoTable[posState].sex))
    
    -- 邻水麻将不播刮风下雨
    elseif self.MainGamePlayRule ~= g_gameConstant.GAME_PLAY_RULE_SC_LSMJ then
        if  (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or
            (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)   then
                -- 播放音效
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_GANG, self.tablePlayerInfoTable[posState].sex))
        elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_AN_GANG, self.tablePlayerInfoTable[posState].sex))
        end
    end
end

function GameLog:on_btn_click( target )
    if target == self.slowBtn then
        self.logPlaySpeed = self.logPlaySpeed + 0.2
        if self.logPlaySpeed > 3 then
            self.logPlaySpeed = 3
        end
    elseif target == self.playBtn then
        self.playBtn:setVisible(false)
        self.pauseBtn:setVisible(true)
        self.isLogPaused = false
    elseif target == self.pauseBtn then
        self.isLogPaused = true
        self.playBtn:setVisible(true)
        self.pauseBtn:setVisible(false)
    elseif target == self.fastBtn then
        self.logPlaySpeed = self.logPlaySpeed - 0.2
        if self.logPlaySpeed < 0.1 then
            self.logPlaySpeed = 0.1
        end
    end
end

function GameLog:setLogState( dataTable )
    if type(dataTable) == "table" then
        
        
        -- 下一步
        if dataTable.next == 1 then
            self.frameTime = 0
            if self.currentOpIndex <= self.totalOpIndex then
                self:playOneOp()
                self.currentOpIndex = self.currentOpIndex + 1
                
                self.isLogPaused = true
                self.gameMainView.pauseBtn:setVisible(false)
                self.gameMainView.playBtn:setVisible(true)
            end
            
            
        -- 上一步
        elseif dataTable.last == 1 then
            self.frameTime = 0
            if self.currentOpIndex > 1 then
                self.currentOpIndex = self.currentOpIndex - 1
                local ret = self:reverzOneOp()
                if not self.playingLog then
                    -- 重置，使可继续播放
                    self.playingLog = true
                end
                if ret == - 1001 then
                    self.currentOpIndex = self.currentOpIndex + 1
                end
                
                self.isLogPaused = true
                self.gameMainView.pauseBtn:setVisible(false)
                self.gameMainView.playBtn:setVisible(true)
            end
            
            
        
        elseif dataTable.pause == 1 then
            self.isLogPaused = true
        elseif dataTable.play == 1 then
            self.isLogPaused = false
        elseif dataTable.slow == 1 then
            self.logPlaySpeed = self.logPlaySpeed + 0.2
            if self.logPlaySpeed > 3 then
                self.logPlaySpeed = 3
            end
        elseif dataTable.fast == 1 then
            self.logPlaySpeed = self.logPlaySpeed - 0.2
            if self.logPlaySpeed < 0.1 then
                self.logPlaySpeed = 0.1
            end
        end
    end
end
function GameLog:update( dt )
    --手指移动之后再播放接下来的操作
    local ops = self.playerOps[self.currentOpIndex]    
    -- self:hideCanOps()
    if ops then 
        self:moveShouzhi(ops) 
    end 
    
    if self.isShowOps then
        return
    end
    if self.playingLog and (not self.isLogPaused) and not self.isLogExchange3 and not self.isLogExchange3CardsIn then
        
        self.frameTime = self.frameTime + dt
        if self.frameTime >= self.logPlaySpeed then
            self.frameTime = 0
            local isQuickOp = true
            while(isQuickOp and self.currentOpIndex <= self.totalOpIndex)
            do
                local op, nextOp = self:playOneOp()
                self.currentOpIndex = self.currentOpIndex + 1
                isQuickOp = op ~= nil and quickOpMap[op] and nextOp and quickOpMap[nextOp]
            end
            if self.currentOpIndex > self.totalOpIndex then
                self.playingLog = false
                if self.endOutTip then
                    performWithDelay(
                        self,
                        function()
                            ShowConfirmCancelBox("回放播放完成\n点击【确定】返回大厅",  function() g_gameGlobal:backToLobby() end, nil, true)
                        end,
                        1.8
                    )
                end
            end
        end
    end
end

--每次操作都隐藏过按钮
function GameLog:setGuo()
    if self.guoBtn then
        self.guoBtn:setVisible(false)
    end
    
end

--创建过按钮
function GameLog:createGuo()
    if not self.guoBtn then
        local guoBtn = ccui.ImageView:create("Match/".."game/cancel_bt.png", ccui.TextureResType.plistType)
        self:add(guoBtn)
        self.guoBtn = guoBtn
        self.guoBtn:setVisible(false)
    end
end

--显示过操作
function GameLog:playerGuo( op )
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end

        if self.guoBtn then
            local  pos = cc.p(0,0)
            self.guoBtn:setVisible(true)
            if posState == 1 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()*0.5, g_gameGlobal:getDisplayHeight()/3 - 30)
            elseif posState == 2 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()*3/4 + 50, g_gameGlobal:getDisplayHeight() * 0.5)
            elseif posState == 3 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()*0.5, g_gameGlobal:getDisplayHeight() *3/4+30)
            elseif posState == 4 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()/4-60, g_gameGlobal:getDisplayHeight() * 0.5)
            end
            self.guoBtn:move(pos)
        end        
    end
end

function GameLog:showCanOps(op)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
    if self.tablePlayerTable[posState] ~= 0 then
        -- for i, v in pairs(self.tablePlayerTable) do
        --     if v ~= 0 then
        --         v:removeChuCard()
        --     end
        -- end

        if self.gameMainView then
            local  pos = cc.p(0,0)
            local panelIndex = 1
            if posState == 1 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()*0.5, g_gameGlobal:getDisplayHeight()/3 - 30)
                panelIndex = 1
            elseif posState == 2 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()*3/4 + 50, g_gameGlobal:getDisplayHeight() * 0.5)
                panelIndex = 2
            elseif posState == 3 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()*0.5, g_gameGlobal:getDisplayHeight() *3/4+30)
                panelIndex = 1
            elseif posState == 4 then
                pos = cc.p(g_gameGlobal:getDisplayWidth()/4-60, g_gameGlobal:getDisplayHeight() * 0.5)
                panelIndex = 2
            end
            self.gameMainView:showCanOps(panelIndex,op,pos)
            self.isShowOps = true
            -- self.isLogPaused = true
            
            local evtNode = display.newNode()
                :addTo(self)
            
            evtNode:addChild(eventObj.new(eventType.GAME_LOG_WILL_PLAY_NEW_OP, function (evt, msg)
                self.gameMainView:hideOps()
                self.isNoveShouzhi = false
                self.isShowOps = false
                
                evtNode:removeSelf()
                
                print("ops show..evt")
            end))
        end        
    end
end

function GameLog:hideCanOps()
    if self.isNoveShouzhi and self.isShowOps then
        if self.gameMainView then
            self.gameMainView:hideOps()
            self.isNoveShouzhi = false
            self.isShowOps = false
            -- self.isLogPaused = false
        end
    end
end

function GameLog:moveShouzhi(op)

    if not self.isShowOps then
        return
    end

    if self.gameMainView then
        self.isNoveShouzhi = true
    end

    performWithDelay(self,function()
        self:hideCanOps()
    end, 0.5)

    do return end 

    if not self.isShowOps then
        return
    end
    if self.gameMainView then
        self.gameMainView:moveShouzhi(op)
        self.isNoveShouzhi = true
    end
    performWithDelay(self,function()
        self:hideCanOps()
    end, 0.5)
end

-- 回退一个操作
function GameLog:reverzOneOp()

    if self.currentOpIndex > self.totalOpIndex or self.currentOpIndex < 1 then
        return 
    end
    
    -- 广播通知其他模块作预操作
    GlobalEventManager:onEvent(eventType.GAME_LOG_WILL_PLAY_NEW_OP, {opIndex = self.currentOpIndex}, true)
    
    local op = self.playerOps[self.currentOpIndex]

    self:setGuo()
    
    if op.opCode == g_gameConstant.MAHJONG_OPERTAION_LOG_SEND_CARDS then
--        self:sendCards(op)
        return -1001
        
--    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CHI then
--        self:playerChi(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PENG then
        self:playerPengReverz(op)
        
    elseif op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 
        -- 换三张
        self.isLogExchange3 = true
        self:playExchangeCardReverz(op)
    
    
    -- 换三张
    elseif op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_OUT then
        self:exchangeCardsOutReverz(op)
    elseif op.opCode == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_IN then
        self:exchangeCardsInReverz(op)
        
        
    elseif op.opCode == g_gameConstant.GAME_OPERTAION_DING_QUE then 
        -- 定缺
        self:playDingQueMsgReverz(op)

    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        self:playerGangReverz(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_MO_CARD then
        self:playerGrabReverz(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED then
        self:playerHuReverz(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_NEW_OPERATION_NOTIFY_SHOW_MA then
        self:playerShowMa(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CANCEL then
        --self:playerCancel(op)
        self:playerGuo(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD then
        self:playerAddChuCard(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CHU then
        self:playerChuCardReverz(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_TING then
        self:playerTingReverz(op)
        
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_BU_HUA then
        self:playerBuHua(op)
        
    elseif op.opCode == g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS then
        self:playerMingPai(op)
        
    elseif op.opCode == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE then
        self:playerDaTouZi(op)
    
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PLAYER_OVER_TIME then -- 超时托管
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerHeadImgTable[posState] ~= 0 then
            self.tablePlayerHeadImgTable[posState]:tuoGuanVisible(false)
        end
    
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_PLAYER_OVER_TIME_RECOVER then -- 取消托管
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerHeadImgTable[posState] ~= 0 then
            self.tablePlayerHeadImgTable[posState]:tuoGuanVisible(true)
        end
        
    elseif op.opCode == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG_VALUE
        or op.opCode == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHANG_GA_VALUE then        
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:setFangChongState(op.opValue1)
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:xzScore(op.opValue1)
            end
        end
        
    elseif op.opCode == g_gameConstant.GAME_OPERATION_CHOOSE_ABSENT_CARD_COLOR then        
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:setQueState(op.opValue1, true)
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:setQueState(op.opValue1, true)
            end
        end
        
    elseif op.opCode == g_gameConstant.MAHJONG_PLAYBACK_CALCULATE then
        self:showGameResultReverz(op)
    
    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_LOG_DUO_OPS then
        --回放过程中玩家多操作过程
        self:showCanOps(op)
    
    else
        printf("ddddddddddd")
    end

    local nextOpCode = self.playerOps[self.currentOpIndex+1] and self.playerOps[self.currentOpIndex+1].opCode
    return op.opCode, nextOpCode
end


-----
function GameLog:pushHandData(posState)
    if not posState or self.tablePlayerTable[posState] == 0 then
        print("[GameLog:pushHandData]:posState err.")
        return
    end
    
    self.playerdataByOp[posState] = self.playerdataByOp[posState] or {}
    
    self.playerdataByOp[posState][self.currentOpIndex] = {
--        handdata = self.tablePlayerTable[posState]:
        mocard = self.tablePlayerTable[posState]:getLogMoCardValue(),
    }
end

function GameLog:getPlayerMoCard(posState, opIndex)
    return self.playerdataByOp[posState][opIndex] and self.playerdataByOp[posState][opIndex].mocard
end

return GameLog