local WatchGameModule = CF.gameClass("WatchGameModule", CF.ModuleBase)

WatchGameModule.EVENT_PLAY_BACK_SPEED_CHANGED = "EVENT_PLAY_BACK_SPEED_CHANGED"
WatchGameModule.EVENT_PLAY_BACK_PROCESS_CHANGED = "EVENT_PLAY_BACK_PROCESS_CHANGED"
WatchGameModule.EVENT_WATCH_MODEL_CHANGE = "EVENT_WATCH_MODEL_CHANGE"

-- 重连首条协议：msgTableData，协议ID：2
local relinkFirstXY = 2

function WatchGameModule:ctor()
    WatchGameModule.super.ctor(self)
    self:initDatas()
end

function WatchGameModule:initDatas()
    self._gameMsgList = {}
    self._playMsgList = {}
    self._loadGameMsgListCoroutine = nil
    self._recordReciveGameMsgCreateTime = 0
    self._recordReciveGameMsgStartTime = 0
    self._platbackReciveGameMsgStartTime = 0
    self._playbackStartTime = 0
    self._playBackScheduleID = 0
    self._gameMsgObject = nil
    self._gameMsgFunc = {}

    self._gameStartCount = 0

    self._isFirstRecord = true -- 是否有创建过录制
    self._recordFileName = ""
    self._recordGameMsgList = {}
    self._justRecordGameMsgFirstTime = 0
    self._justRecordGameMsgLastTime = 0

    self._speed = 1 -- 回放播放速率
    self._pause = false
    self._lastSysTime = 0
    self._allPlayBackTime = 0
end

function WatchGameModule:onDestroy()
    WatchGameModule.super.onDestroy(self)
    self:stopPlayback()
end

function WatchGameModule:pause()
    self._pause = true
end

function WatchGameModule:play()
    self._pause = false
end

function WatchGameModule:fast(multiple)
    self._speed = multiple
    self:dispatchEvent({name = self.EVENT_PLAY_BACK_SPEED_CHANGED})
end

function WatchGameModule:slow(multiple)
    self._speed = multiple
    self:dispatchEvent({name = self.EVENT_PLAY_BACK_SPEED_CHANGED})
end

function WatchGameModule:isPlayback()
    return self._playBackScheduleID ~= 0
end

function WatchGameModule:recordGameMsg(subXYID, subBuff, subLen, beforeStart)
    if self:isPlayback() then
        return
    end
    if self._recordFileName == "" then
        return
    end
    local playbackPath = self._recordFileName
    local file = io.open(playbackPath, "ab+")

    local time = socket.gettime()
    if self._justRecordGameMsgLastTime > 0 then
        time = self._justRecordGameMsgLastTime + (socket.gettime() - self._recordReciveGameMsgStartTime) + 3
    end
    if beforeStart == true then
        file:write(string.format("%020d", time))
    else
        file:write(string.format("%020d", time + #self._recordGameMsgList * 0.05))
    end

    file:write(string.format("%06d", subXYID))
    file:write(string.format("%06d", subLen))
    file:write(tostring(subBuff))
    file:close()
end

function WatchGameModule:isLoadGameMsg()
    return self._loadGameMsgListScheduleID ~= 0
end

function WatchGameModule:getWritablePath()
    return cc.FileUtils:getInstance():getWritablePath()
end

function WatchGameModule:addGameStartCount()
    self._gameStartCount = self._gameStartCount + 1
end

function WatchGameModule:getGameStartCount()
    return self._gameStartCount
end

function WatchGameModule:getPlayBackSpeed()
    return self._speed
end

-- 设置回放开始时间
function WatchGameModule:setPlayBackStartTime(time)
    self._playbackStartTime = time
end

-- 重置回放消息列表
function WatchGameModule:resetGameMsgList()
    self._gameMsgList = {}
    self._playMsgList = {}
end

-- 添加消息到消息列表
function WatchGameModule:addGameMsgToList(gameMsg)
    self._gameMsgList[#self._gameMsgList + 1] = gameMsg
end

-- 获取消息列表
function WatchGameModule:getGameMsgList(needLoad)
    if needLoad and #self._playMsgList == 0 then
        for i = 0, #self._gameMsgList - 1 do
            self._playMsgList[#self._playMsgList + 1] = self._gameMsgList[i + 1]
        end
    end
    return self._playMsgList
end

-- 设置加载消息列表结束标记
function WatchGameModule:setLoadMsgCoroutine(param)
    self._loadGameMsgListCoroutine = param
end

function WatchGameModule:setPlayBackScheduleID(scheduleID)
    self._playBackScheduleID = scheduleID
end

function WatchGameModule:getPlayBackScheduleID()
    return self._playBackScheduleID
end

-- 获取暂停状态
function WatchGameModule:getPauseState()
    return self._pause
end

function WatchGameModule:setLastSysTime(time)
    self._lastSysTime = time
end

function WatchGameModule:getLastSysTime()
    return self._lastSysTime
end

function WatchGameModule:setAllPlayBackTime(time)
    self._allPlayBackTime = time
end

function WatchGameModule:getAllPlayBackTime()
    return self._allPlayBackTime
end

function WatchGameModule:setJustRecordGameMsgFirstTime(time)
    self._justRecordGameMsgFirstTime = time
end

function WatchGameModule:getJustRecordGameMsgFirstTime()
    return self._justRecordGameMsgFirstTime
end

function WatchGameModule:startPlayback()
    local recordPath = CF.roomData:getWatchPath()
    self:setPlayBackStartTime(socket.gettime())
    self:loadGameMsg(recordPath)
    if CF.roomData:isDelayWatch() then
        self:dealDelayGameMsg()
    end
    self:getGameMsgList(true)
    if not CF.roomData:isDelayWatch() then
        self:updateMsgTime()
        local offset = (CF.roomData and CF.roomData:getWatchOffset()) or #self._gameMsgList
        offset = offset > #self._gameMsgList and #self._gameMsgList or offset
        self:fastPlay(offset, true)
    end

    self:setPlayBackScheduleID(
        cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function()
                self:analysisGameMsg()
            end,
            0.01,
            false
        )
    )
end

function WatchGameModule:stopPlayback()
    local scheduleID = self:getPlayBackScheduleID()
    if scheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
        self:setPlayBackScheduleID(0)
    end
end

function WatchGameModule:loadGameMsg(playbackPath)
    local file = io.open(playbackPath, "rb")
    self:resetGameMsgList()
    repeat
        local gameMsg = {}
        gameMsg.time = tonumber(file:read(20), 10)
        gameMsg.subXYID = tonumber(file:read(6), 10)
        gameMsg.subLen = tonumber(file:read(6), 10) or 0
        gameMsg.subBuff = file:read(gameMsg.subLen)
        if gameMsg.time == nil or gameMsg.subXYID == nil or gameMsg.subLen == nil or gameMsg.subBuff == nil then
            self:setLoadMsgCoroutine(nil)
            break
        else
            self:addGameMsgToList(gameMsg)
        end
    until false
    file:close()
end

-- 处理延时观战协议
-- 1、gamestart之前的时间重置
-- 2、全视角手牌填充
function WatchGameModule:dealDelayGameMsg()
    if not self._gameMsgList or #self._gameMsgList <= 0 then
        return
    end
    self:resetDelayMsgTime()
    self:onAdjustRecordGameMsgList()
end

-- 延时观战，gamestart之前的协议的时间戳重新赋值为gamestart协议的时间戳
function WatchGameModule:resetDelayMsgTime()
    local startGameTime = self._gameMsgList[1].time
    local nStartGameXYIdx = 0
    for i = 1, #self._gameMsgList do
        if self._gameMsgList[i].subXYID ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
        else
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(self._gameMsgList[i].subBuff, self._gameMsgList[i].subLen)
            if (CF.GameProtocol.msgGameStart and sToClientData.cmdid == CF.GameProtocol.msgGameStart.XY_ID) or 
                (CF.GameProtocol.msgStartGame and sToClientData.cmdid == CF.GameProtocol.msgStartGame.XY_ID) then
                startGameTime = self._gameMsgList[i].time
                nStartGameXYIdx = i
                break
            end
        end
    end
    for i = 1, nStartGameXYIdx do
        self._gameMsgList[i].time = startGameTime
    end
end

function WatchGameModule:onAdjustRecordGameMsgList()
    -- 见各个子类实现
end

function WatchGameModule:analysisGameMsg()
    if CF.roomData and not CF.roomData:isDelayWatch() then
        self:addNewMsgList()
    end
    local gameMsgList = self:getGameMsgList()
    if #gameMsgList == 0 then
        self:setLastSysTime(socket.gettime())
        self:setJustRecordGameMsgFirstTime(0)
        if not self:isLoadGameMsg() then
            self:stopPlayback()
        end
        return
    else
        if #gameMsgList >= 2 and gameMsgList[1].subXYID == 11014 and gameMsgList[2].subXYID == 11014 then
            for i = #gameMsgList, 1, -1 do
                if i == 1 then
                    table.remove(gameMsgList, i)
                    self:dispatchEvent({name = self.EVENT_PLAY_BACK_PROCESS_CHANGED})
                end
            end
        end
        local pauseState = self:getPauseState()
        local lastSysTime = self:getLastSysTime()
        if pauseState then
            self:setLastSysTime(socket.gettime())
            return
        end
        if lastSysTime > 0 then
            local allPlayBackTime = self:getAllPlayBackTime()
            local speed = self:getPlayBackSpeed()
            self:setAllPlayBackTime(allPlayBackTime + (socket.gettime() - lastSysTime) * speed)
        end
        self:setLastSysTime(socket.gettime())
        local justRecordGameMsgFirstTime = self:getJustRecordGameMsgFirstTime()
        if justRecordGameMsgFirstTime <= 0 then
            self:setJustRecordGameMsgFirstTime(gameMsgList[1].time)
        end
        if self:getAllPlayBackTime() >= gameMsgList[1].time - justRecordGameMsgFirstTime then
            CF.netEngine:onMessage(gameMsgList[1].subXYID, gameMsgList[1].subBuff, gameMsgList[1].subLen, 1)
            table.remove(gameMsgList, 1)
            self:dispatchEvent({name = self.EVENT_PLAY_BACK_PROCESS_CHANGED})
        end
    end
end

function WatchGameModule:fastPlay(playCount, needReload)
    local pauseState = self._pause
    self._pause = true
    CF.roomData:setIsFastPlay(true)

    local nowCount = self:getPlayedMsgCount()
    local gameMsgList = self:getGameMsgList()
    if nowCount > playCount or needReload then
        CF.roomData:setIsRestart(true)
        for _ = 1, #gameMsgList do
            table.remove(gameMsgList, 1)
        end
        gameMsgList = self:getGameMsgList(true)
        nowCount = 1
    end
    if #gameMsgList == 0 then
        if not self:isLoadGameMsg() then
            self:stopPlayback()
        end
        return
    else
        if #gameMsgList >= 2 and gameMsgList[1].subXYID == 11014 and gameMsgList[2].subXYID == 11014 then
            for i = #gameMsgList, 1, -1 do
                if i == 1 then
                    table.remove(gameMsgList, i)
                end
            end
        end
        -- 断线重连协议会重复，去掉无用的协议
        gameMsgList, lastTime = self:getRelinkXY(gameMsgList)
        if lastTime <= 0 then
            lastTime = 0
        end
        if playCount > #gameMsgList then
            playCount = #gameMsgList
        end

        self:setLastSysTime(socket.gettime())
        -- local lastTime = gameMsgList[1].time
        for i = nowCount, playCount do
            -- lastTime = gameMsgList[1].time
            local cmdid = 0
            if gameMsgList[1].subXYID ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
                CF.netEngine:onMessage(gameMsgList[1].subXYID, gameMsgList[1].subBuff, gameMsgList[1].subLen, 1)
            else
                local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
                sToClientData:bistream(gameMsgList[1].subBuff, gameMsgList[1].subLen)
                if (CF.GameProtocol.msgBaseClientForwardEx and sToClientData.cmdid == CF.GameProtocol.msgBaseClientForwardEx.XY_ID) or
                    (CF.GameProtocol.msgBaseClientForward and sToClientData.cmdid == CF.GameProtocol.msgBaseClientForward.XY_ID) then
                else
                    CF.netEngine:onMessage(gameMsgList[1].subXYID, gameMsgList[1].subBuff, gameMsgList[1].subLen, 1)
                end
                cmdid = sToClientData.cmdid
            end
            table.remove(gameMsgList, 1)
            print("fast play:" .. i .. ', cmdid:' .. cmdid .. ', ' .. socket.gettime())
        end
        self:setAllPlayBackTime(0)
        self:setJustRecordGameMsgFirstTime(lastTime)
        self:dispatchEvent({name = self.EVENT_PLAY_BACK_PROCESS_CHANGED})
    end
    self:addNewMsgList()
    CF.roomData:setIsFastPlay(false)
    self._pause = pauseState
end

function WatchGameModule:getAllMsgCount()
    return #self._gameMsgList
end

function WatchGameModule:getPlayedMsgCount()
    return #self._gameMsgList - #self._playMsgList
end

function WatchGameModule:doRelink()
    self:resetGameMsgList()
    CF.reqRealtimeGameRecord(CF.roomData:getRoomID(), 0, CF.roomData:getGameID(), self, self.respRealtimeGameRecord, false, CF.roomData:getChairs())
end

function WatchGameModule:respRealtimeGameRecord(req, type, data)
    CF.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local watchData = {}
        watchData.isWatch = true
        watchData.watchRecordPath = req.recordPath
        watchData.offset = req.offset
        watchData.isDelayWatch = req.isDelay
        watchData.playercount = req._playercount
        self:initDatas()
        CF.roomData:initWatchData(watchData)
        self:stopPlayback()
        self:startPlayback()
        self:dispatchEvent({name = self.EVENT_WATCH_MODEL_CHANGE})
    end
end

function WatchGameModule:addNewMsgList()
    if CF.roomData and CF.roomData:isDelayWatch() then
        return
    end
    local gameMsgList = CF.getLobbyModule("Watch"):getMsgList()
    if not gameMsgList or #gameMsgList == 0 then
        return
    end
    for i,msgData in ipairs(gameMsgList) do
        local curRound = math.floor(msgData.max_offset/1000000)
        if curRound and CF.roomData and CF.roomData:getWatchRound() ~= curRound then
            self:resetGameMsgList()
            self:setAllPlayBackTime(0)
            self:setJustRecordGameMsgFirstTime(0)
            -- self:clearTable()
            CF.roomData:setWatchRound(curRound)
        end
    
        local gameMsg = {}
        gameMsg.time = tonumber(msgData.payload:sub(1, 20), 10)
        gameMsg.subXYID = tonumber(msgData.payload:sub(21, 26), 10)
        gameMsg.subLen = tonumber(msgData.payload:sub(27, 32), 10) or 0
        gameMsg.subBuff = msgData.payload:sub(33)
    
        if gameMsg.time == nil or gameMsg.subXYID == nil or gameMsg.subLen == nil or gameMsg.subBuff == nil then
            return
        else
            self:addGameMsgToList(gameMsg)
            self._playMsgList[#self._playMsgList + 1] = gameMsg
        end
    end
end

function WatchGameModule:getRelinkXY(gameMsgList)
    local tmpPlayList = {}
    local hasRelink = false
    local isRelinkEnd = false
    local entTimeStamp = gameMsgList[#gameMsgList].time
    local gameID = CF.roomData:getGameID()
    if not CF.gameSub:isMahjong(gameID) then
        return gameMsgList, entTimeStamp
    end
    for i = #gameMsgList, 1, -1 do
        if gameMsgList[i].subXYID ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
        else
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(gameMsgList[i].subBuff, gameMsgList[i].subLen)
            if (hasRelink and isRelinkEnd) or 
                (CF.GameProtocol.msgBaseClientForwardEx and sToClientData.cmdid == CF.GameProtocol.msgBaseClientForwardEx.XY_ID) or 
                (CF.GameProtocol.msgPower and sToClientData.cmdid == CF.GameProtocol.msgPower.XY_ID) then
                print('remove, sToClientData.cmdid:' .. sToClientData.cmdid .. ", hasRelink:" .. tostring(hasRelink) .. ", isRelinkEnd:" .. tostring(isRelinkEnd))
                table.remove(gameMsgList, i)
            else
                print('sToClientData.cmdid:' .. sToClientData.cmdid)
                if not hasRelink and CF.GameProtocol.msgRelinkEnter and CF.GameProtocol.msgRelinkEnter.XY_ID == sToClientData.cmdid then
                    hasRelink = true
                end
                if hasRelink and sToClientData.cmdid == relinkFirstXY then
                    isRelinkEnd = true
                end
            end
        end
    end
    return gameMsgList, entTimeStamp
end

function WatchGameModule:respUnwatchRealtimeGameRecord(req, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        CF.reqRealtimeGameRecord(CF.roomData:getRoomID(), 0, CF.roomData:getGameID(), self, self.respRealtimeGameRecord, true, CF.roomData:getChairs())
    end
end

function WatchGameModule:reqRealtimeGameRecord(roomid, offset, gameid, isDelay)
    CF.TipTool.showLoading()
    self:doRelink()
end

-- 切换至延时观战
function WatchGameModule:reqDelayWatch()
    self:stopPlayback()
    self:clearTable()
    CF.getLobbyModule("Watch"):resetMsgList()
    CF.reqUnwatchRealtimeGameRecord(CF.roomData:getRoomID(), self, self.respUnwatchRealtimeGameRecord)
    local isDelay = CF.roomData and CF.roomData:isDelayWatch()
    if not isDelay then
        -- 设置延时观战开始时间,并上抛延时观战时长
        cc.UserDefault:getInstance():setIntegerForKey("KW_DELAYWATCH_STARTTIME", os.time())
        self:throwData()
    end
    CF.game:getModule("Trust"):onMsgGameEnd()
end

-- 切换至实时观战
function WatchGameModule:changeToRealWatch()
    self:stopPlayback()
    self:clearTable()
    CF.getLobbyModule("Watch"):resetMsgList()
    self:reqRealtimeGameRecord(CF.roomData:getRoomID(), 0, CF.roomData:getGameID(), false)
    if CF.roomData and CF.roomData:isDelayWatch() then
        -- 设置实时观战开始时间（游戏内切换）,并上抛延时观战时长
        self:throwData()
        cc.UserDefault:getInstance():setIntegerForKey("KW_REALWATCH_STARTTIME", os.time())
    end
end

function WatchGameModule:clearTable()
    if CF.roomData then
        CF.roomData:clearTable()
        CF.roomData:clearAllPlayerData()
    end
    local winlostModule = CF.game:getModule("WinLost")
    if winlostModule and winlostModule.setHideWinlostUI then
        winlostModule:setHideWinlostUI(true)
    end
end

function WatchGameModule:onExitWatch()
	local watchStartTime = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_TEAHOUSE_WATCH_STARTTIME, os.time(), {})
	XH.userDefault:setValue(CF.userDefault.KEY_ID.KW_TEAHOUSE_WATCH_STARTTIME, os.time(), {})
	local duration = os.time() - watchStartTime
    local curGameID = CF.roomData:getGameID()
	local data = {
		duration = duration,
        item_id = string.format("%s_%d", CF.gameSub:getGameNameByGameId(curGameID), curGameID)
    }
	CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.g030602, data)
    if CF.roomData and CF.roomData:getIsSeer() then
        self:throwData()
    end
end

function WatchGameModule:throwData()
    local isDelay = CF.roomData and CF.roomData:isDelayWatch()
    local duration = 0
    local block_label = ''
    if isDelay then
        local startTime = cc.UserDefault:getInstance():getIntegerForKey("KW_DELAYWATCH_STARTTIME", os.time())
        cc.UserDefault:getInstance():setIntegerForKey("KW_DELAYWATCH_STARTTIME", os.time())
        duration = os.time() - startTime
        block_label = '延时观战'
    else
        local startTime = cc.UserDefault:getInstance():getIntegerForKey("KW_REALWATCH_STARTTIME", os.time())
        cc.UserDefault:getInstance():setIntegerForKey("KW_REALWATCH_STARTTIME", os.time())
        duration = os.time() - startTime
        block_label = '实时观战'
    end
    local curGameID = CF.roomData:getGameID()
    local data = {
        duration = duration,
        block_label = block_label,
        item_id = string.format("%s_%d", CF.gameSub:getGameNameByGameId(curGameID), curGameID)
    }
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.ssgz24050901, data)
end

function WatchGameModule:updateMsgTime()
end

return WatchGameModule
   �O  