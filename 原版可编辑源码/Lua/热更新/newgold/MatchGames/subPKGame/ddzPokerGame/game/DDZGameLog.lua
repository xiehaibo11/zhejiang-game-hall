local DDZGameBase = import(".DDZGameBase")
local DDZGameLog = class("DDZGameLog", DDZGameBase)
local GameAudioParser = import("newgold.MatchGames.GamePublic.GameAudioParser")
local DDZCmd = require("newgold.MatchGames.subPKGame.ddzPokerGame.game.common.DDZCMD")


-- 回放速度
local SPEED_SLOW_X4    = 1
local SPEED_SLOW_X3    = 2
local SPEED_SLOW_X2    = 3
local SPEED_SLOW_X1    = 4
local SPEED_NORMAL     = 5
local SPEED_ADD_X1     = 6
local SPEED_ADD_X2     = 7
local SPEED_ADD_X3     = 8
local SPEED_ADD_X4     = 9

local LOGADDSPEEDS = {
    [SPEED_SLOW_X4]          = 2     ,        -- 快退 x4
    [SPEED_SLOW_X3]          = 1.75  ,           -- 快退 x3
    [SPEED_SLOW_X2]          = 1.5   ,          -- 快退 x2
    [SPEED_SLOW_X1]          = 1.25  ,       -- 快退 x1    
    [SPEED_NORMAL ]          = 1     ,        -- 正常速度    
    [SPEED_ADD_X1 ]          = 0.875 ,           -- 快进 x1    
    [SPEED_ADD_X2 ]          = 0.75  ,           -- 快进 x2
    [SPEED_ADD_X3 ]          = 0.625 ,           -- 快进 x3
    [SPEED_ADD_X4 ]          = 0.5   ,         -- 快进 x4
}


function DDZGameLog:ctor(...)
    DDZGameLog.super.ctor(self, ...)
    
    self.currPlaySpeed = SPEED_NORMAL
end


-- 设置自己的视角位置，即从中找到自己的位置
function DDZGameLog:findAndSetMyViewPos(msg)
    -- 遍历数据，查找自己的位置
    local findMyPos = false
    for i, v in pairs(msg.players) do
        if v.playerID == g_gameGlobal:getMyselfInfo().playerID then
            g_gameGlobal:setMyTablePos(v.tablePos)
            findMyPos = true
            break
        end
    end
    -- 若没有匹配到自己的视角位置，那么一般都是通过旁观者通过回放码播放的
    if not findMyPos then
        g_gameGlobal:setMyTablePos(0)
    end
end 

function DDZGameLog:initGameLogData(msg)

    self.recordMsg = msg

    self.MainGamePlayRule = msg.MainGamePlayRule

    self.MinorGamePlayRuleList = msg.MinorGamePlayRuleList
    
    for k, v in ipairs(self.MinorGamePlayRuleList) do
        if v == g_gameConstant.DDZ_RULE_JIAO_FEN then
            self.jiaoFen = true
            break
        end
    end

    --先创建四个玩家，因为有些麻将游戏开始前有操作
    self:createAllTablePlayer(self.MainGamePlayRule)
    -- 总局数
    self.totalJuShu = msg.handsTotal 
    -- 当前局数
    self.curJuShu = msg.handIndex
    -- 回放时间
    self.logTimeStr = msg.date
    -- 
    self.tableID = msg.vipRoomIndex
    
    self.gameTableID = msg.gameTableID
    
    -- 
    self:findAndSetMyViewPos(msg)
    for i, v in pairs(msg.players) do
        self:updatePlayerInfo(v)
    end
    
    -----
    -- 从输入回放码进入  需要初始化局次日期
    local roomRoundDatesInfo = g_gameGlobal:getSelectedRecordDate()
--    dump(roomRoundDatesInfo, "before")
    if not roomRoundDatesInfo or not next(roomRoundDatesInfo) then
        local dates = {}
        for k = 1, self.recordMsg.unused0 do
            dates[k] = self.logTimeStr
        end
        g_gameGlobal:setSelectedRecordDate(dates)
    end
--    local roomRoundDatesInfo = g_gameGlobal:getSelectedRecordDate()
--    dump(roomRoundDatesInfo, "after")
    -----

    -- 回放数据
    self.playerOps = msg.playerOps
    -- 总回放数量
    self.totalOpIndex = #msg.playerOps

    self.recordMsg = msg

    if self.recordMsg.handIndex and self.recordMsg.handIndex == 1 then
        self.lastGameBtn:setEnabled(false)
    else
        self.lastGameBtn:setEnabled(true)
    end

    
end 


function DDZGameLog:initRoomInfoForLog(msg)
    if msg== nil then
        return 
    end

    -- 当前操作索引编号
    self.currentOpIndex = 1

    self.playingLog = true

    self.isLogPaused = false

    self.frameTime = 0

    self:initGameLogData(msg)

    self:freshGameRuleDescBtn()

    -- 显示属性信息
    self:updatePowerAndNet()
    self:updateJushuInfo()

     -- 设置自己信息
     local findMyPos = false
     for i, v in pairs(msg.players) do
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

    -- 加载头像数据
    self:updatePlayerHeadView(isdaa)

    -- 注册回放按钮事件
    self:bangdingLogBtnEvent()
end 

function DDZGameLog:bangdingLogBtnEvent()
    self.replayBtn:onClick(handler(self, self.logBtnEvent))
    self.playBtn:onClick(handler(self, self.logBtnEvent))
    self.pauseBtn:onClick(handler(self, self.logBtnEvent))
    self.slowBtn:onClick(handler(self, self.logBtnEvent))
    self.fastBtn:onClick(handler(self, self.logBtnEvent))
    self.lastGameBtn:onClick(handler(self, self.logBtnEvent))
    self.nextGameBtn:onClick(handler(self, self.logBtnEvent))

    
    local roomRoundDatesInfo = g_gameGlobal:getSelectedRecordDate()
    
    if self.recordMsg.handIndex and roomRoundDatesInfo and roomRoundDatesInfo[self.recordMsg.handIndex + 1] then
        self.nextGameBtn:setEnabled(true)
    else
        self.nextGameBtn:setEnabled(false)
    end

end

function DDZGameLog:playOneOp()

    local op = self.playerOps[self.currentOpIndex]

    if op == nil then 
        return 
    end 

    if self.currentOpIndex == self.totalOpIndex then 
        self.pauseBtn:setVisible(false)
        self.playBtn:setVisible(false)
        self.replayBtn:setVisible(true)
    end 

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(op.tablePos)

    if tolua.isnull(self.tablePlayerTable[posState]) then 
        return 
    end 

    if op.opCode == g_gameConstant.MAHJONG_OPERTAION_LOG_SEND_CARDS then    -- 发牌

        self:shuffleOp(op,posState)

    elseif op.opCode == g_gameConstant.MAHJONG_OPERTAION_CHU then           -- 出牌

        self:logOutCardAction(op,posState)

    elseif op.opCode == g_gameConstant.GAME_OPERTAION_POKER_PASS then       -- 要不起

        self:logPassAction(op,posState)

    elseif op.opCode == g_gameConstant.POKER_OPERATION_CALL_LANDLORD then       -- 叫地主
        local isCancel = op.opValue1  == 0
        
        if self.jiaoFen then
            local fen = op.opValue2
            self:handleJiaoFenResultMsg(isCancel,posState,nil, fen)
        else
            self:handleCallDzResultMsg(isCancel,posState)
        end
    elseif op.opCode == g_gameConstant.POKER_OPERATION_SNATCH_LANDLORD then     -- 抢地主
        local isCancel = op.opValue1  == 0
        self:handleRobDzResultMsg(isCancel,posState)
    elseif op.opCode == g_gameConstant.POKER_OPERATION_SHOW_LANDLORD then       -- 确定地主
        local msg = {}
        msg.tingList = op.vlist 
        self:handleQDZResultMsg(msg,posState)
        -- 更新底分
        self:freshGameScoreAndTimes(op.opValue1, nil)
    elseif op.opCode == g_gameConstant.POKER_OPERATION_CHANGE_MULTI then        -- 倍数变化
        -- 更新倍数
        self:freshGameScoreAndTimes(nil,op.opValue1)
    elseif op.opCode == g_gameConstant.POKER_OPERATION_NOTIFY_SPRING then       -- 春天
        self:handleChunTianMsg()
    
    elseif op.opCode == g_gameConstant.POKER_OPERATION_GAME_RESTART then        -- 重新开始游戏
        -- 重新清理资源，好进行gamestart流程（1、手牌资源清理）
        for k, v in ipairs(self.tablePlayerTable) do 
            if not tolua.isnull(v) then 
                v:removeHandCardUI()
            end 
        end
    
    -- 加倍
    elseif op.opCode == g_gameConstant.POKER_OPERATION_NOTIFY_JIA_BEI then
        local isCancel = op.opValue1  == 0
        self:handleJiaBeiMsg(isCancel, posState)
    end 

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()

    -- 发牌截取
    if self.currentOpIndex < maxPlayerNum then 
        self.currentOpIndex = self.currentOpIndex + 1
        self:playOneOp()
    end

end

-- 发牌操作
function DDZGameLog:shuffleOp(op,posState)
    -- 玩家发牌 tablePos
    self.tablePlayerTable[posState]:playStartCardsAnimation(op.vlist,0)
end


function DDZGameLog:logOutCardAction(op,posState)
    -- 删除手牌数据
    local firstData = self.tablePlayerTable[posState].handCardData
    for k,v in ipairs(op.vlist) do 
        for k2, v2 in ipairs(firstData or {}) do 
            if v == v2 then 
                table.remove(firstData,k2)
                break 
            end 
        end 
    end 

    local isNew = op.opValue1 == 1 and true or false --判断是否是当局首次出牌

    if isNew then 
        for k, v in pairs(self.tablePlayerTable) do 
            if not tolua.isnull(v) then
                v:clearOutCard()
            end 
        end 
    end 

    self:showOutCardAction(op.vlist,firstData,posState,isNew)
end 

function DDZGameLog:logPassAction(op,posState)
    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        self.tablePlayerTable[posState]:passCardAction(true)
    end 
end 



function DDZGameLog:logBtnEvent( sender )
    
    if not tolua.isnull(sender) and (sender == self.nextGameBtn or sender == self.lastGameBtn or sender == self.replayBtn) then
        sender:setTouchEnabled(false)
        
        performWithDelay(self, function ()
            if not tolua.isnull(sender) then
                sender:setTouchEnabled(true)
            end
        end, 8)
    end
    
    if sender == self.replayBtn   then 
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.handIndex = self.recordMsg.handIndex
--        getPlayerGameLogMsg.shareId = self.recordMsg.shareId
        
        local logTimeStr = self.logTimeStr
        local spaceIndex = string.find(logTimeStr, " ")
        local timeStr = string.sub(logTimeStr, 1, spaceIndex-1)
        timeStr = timeStr.gsub(timeStr, "-", "")
        if string.len(timeStr) < 6 then
            local year = os.date("%Y", os.time())
            timeStr = year..timeStr
        end
        
        getPlayerGameLogMsg.gameTableID = self.gameTableID
        getPlayerGameLogMsg.date = timeStr
        
        
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)
    elseif sender == self.playBtn   then 
        self.isLogPaused = false 
        self.pauseBtn:setVisible(true)
        self.playBtn:setVisible(false)
    elseif sender == self.pauseBtn   then 
        self.isLogPaused = true 
        self.pauseBtn:setVisible(false)
        self.playBtn:setVisible(true)
    elseif sender == self.slowBtn   then 
        self:fastOrSlowSpeed(-1)
    elseif sender == self.fastBtn   then 
        self:fastOrSlowSpeed(1)
    elseif sender == self.lastGameBtn   then 
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.handIndex = self.recordMsg.handIndex - 1
--        getPlayerGameLogMsg.shareId = self.recordMsg.shareId
        
        local logTimeStr = g_gameGlobal:getSelectedRecordDate(self.recordMsg.handIndex - 1) or self.logTimeStr
        local spaceIndex = string.find(logTimeStr, " ")
        local timeStr = string.sub(logTimeStr, 1, spaceIndex-1)
        timeStr = timeStr.gsub(timeStr, "-", "")
        if string.len(timeStr) < 6 then
            local year = os.date("%Y", os.time())
            timeStr = year..timeStr
        end
        
        getPlayerGameLogMsg.gameTableID = self.gameTableID
        getPlayerGameLogMsg.date = timeStr
        
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)
    elseif sender == self.nextGameBtn   then 
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.handIndex = self.recordMsg.handIndex + 1
--        getPlayerGameLogMsg.shareId = self.recordMsg.shareId
        
        local logTimeStr = g_gameGlobal:getSelectedRecordDate(self.recordMsg.handIndex + 1) or self.logTimeStr
        local spaceIndex = string.find(logTimeStr, " ")
        local timeStr = string.sub(logTimeStr, 1, spaceIndex-1)
        timeStr = timeStr.gsub(timeStr, "-", "")
        if string.len(timeStr) < 6 then
            local year = os.date("%Y", os.time())
            timeStr = year..timeStr
        end
        
        getPlayerGameLogMsg.gameTableID = self.gameTableID
        getPlayerGameLogMsg.date = timeStr
        
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)
    end 
end


function DDZGameLog:fastOrSlowSpeed(value)

    if (self.currPlaySpeed == SPEED_ADD_X4 and value > 0) or (self.currPlaySpeed == SPEED_SLOW_X4 and value < 0) then 
        return
    end 

    self.currPlaySpeed = self.currPlaySpeed + value

    self.fastBtn:setEnabled(not (self.currPlaySpeed == SPEED_ADD_X4))
    self.slowBtn:setEnabled(not (self.currPlaySpeed == SPEED_SLOW_X4))
end 





function DDZGameLog:onEnter()
    DDZGameLog.super.onEnter(self)

    self:onUpdate(handler(self,self.update))
end

function DDZGameLog:update( dt )
    if self.playingLog and not self.isLogPaused then
        self.frameTime = self.frameTime + dt
        if self.frameTime > LOGADDSPEEDS[self.currPlaySpeed] then
            self.frameTime = 0

            self:playOneOp()
            self.currentOpIndex = self.currentOpIndex + 1
            if self.currentOpIndex > self.totalOpIndex then
                self.playingLog = false
            end
        end
    end 
end 


-- 处理抢地主的结果消息
function DDZGameLog:handleJiaoFenResultMsg(isCancel,posState,isconnect, fen)
    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        if not isconnect then 
            if isCancel then 
                -- 不叫
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_NO_CALL,self.tablePlayerInfoTable[posState].sex))
            elseif fen == 1 then
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIAO_FEN_1,self.tablePlayerInfoTable[posState].sex))
            elseif fen == 2 then
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIAO_FEN_2,self.tablePlayerInfoTable[posState].sex))
            elseif fen == 3 then
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIAO_FEN_3,self.tablePlayerInfoTable[posState].sex))
            else 
                -- 叫地主
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_CALL_DZ,self.tablePlayerInfoTable[posState].sex))
            end 
        end 
        
        if self.jiaoFen then
            self.tablePlayerTable[posState]:respondJiaoFenResultMsg(isCancel, isconnect, fen)
        else
            self.tablePlayerTable[posState]:respondCallDzResultMsg(isCancel,isconnect)
        end
    end
end



return DDZGameLog