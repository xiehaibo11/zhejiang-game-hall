local PlayBackModule = CF.gameClass("PlayBackModule", CF.ModuleBase)

PlayBackModule.EVENT_PLAY_BACK_SPEED_CHANGED = "EVENT_PLAY_BACK_SPEED_CHANGED"
PlayBackModule.EVENT_PLAY_BACK_PROCESS_CHANGED = "EVENT_PLAY_BACK_PROCESS_CHANGED"

function PlayBackModule:ctor()
    PlayBackModule.super.ctor(self)
    self:initDatas()
end

function PlayBackModule:initDatas()
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

    self._fillGameMsgObject = nil
    self._fillGameMsgFunc = nil
    self._fillGameMsgData = {}
    self._fillFromRecordFileName = ""
    self._fillFileName = ""
    self._fillPlaybackCoroutine = nil
    self._fillPlayBackScheduleID = 0

    self._speed = 1 -- 回放播放速率
    self._pause = false
    self._lastSysTime = 0
    self._allPlayBackTime = 0
end

function PlayBackModule:onDestroy()
    PlayBackModule.super.onDestroy(self)
    self:stopPlayback()
end

function PlayBackModule:pause()
    self._pause = true
end

function PlayBackModule:play()
    self._pause = false
end

function PlayBackModule:fast(multiple)
    self._speed = multiple
    self:dispatchEvent({name = self.EVENT_PLAY_BACK_SPEED_CHANGED})
end

function PlayBackModule:slow(multiple)
    self._speed = multiple
    self:dispatchEvent({name = self.EVENT_PLAY_BACK_SPEED_CHANGED})
end

function PlayBackModule:isPlayback()
    return self._playBackScheduleID ~= 0
end

function PlayBackModule:recordGameMsg(subXYID, subBuff, subLen, beforeStart)
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

function PlayBackModule:loadGameMsg(path)
    local startTime = socket.gettime()
    local playbackPath = path
    local file = io.open(playbackPath, "rb")
    self._gameMsgList = {}
    repeat
        local gameMsg = {}
        gameMsg.time = tonumber(file:read(20), 10)
        gameMsg.subXYID = tonumber(file:read(6), 10)
        gameMsg.subLen = tonumber(file:read(6), 10) or 0
        gameMsg.subBuff = file:read(gameMsg.subLen)
        if gameMsg.time == nil or gameMsg.subXYID == nil or gameMsg.subLen == nil or gameMsg.subBuff == nil then
            self._loadGameMsgListCoroutine = nil
            break
        else
            self._gameMsgList[#self._gameMsgList + 1] = gameMsg
        end
    until false
    file:close()

    print("loadGameMsg time" .. socket.gettime() - startTime)
end

function PlayBackModule:isLoadGameMsg()
    return self._loadGameMsgListScheduleID ~= 0
end

function PlayBackModule:getWritablePath()
    return cc.FileUtils:getInstance():getWritablePath()
end

function PlayBackModule:setFillGameMsgData(data)
    self._fillGameMsgData = data
end

function PlayBackModule:getFillGameMsgData()
    return self._fillGameMsgData
end

function PlayBackModule:addGameStartCount()
    self._gameStartCount = self._gameStartCount + 1
end

function PlayBackModule:getGameStartCount()
    return self._gameStartCount
end

function PlayBackModule:getPlayBackSpeed()
    return self._speed
end

-- 设置回放开始时间
function PlayBackModule:setPlayBackStartTime(time)
    self._playbackStartTime = time
end

-- 重置回放消息列表
function PlayBackModule:resetGameMsgList()
    self._gameMsgList = {}
    self._playMsgList = {}
end

-- 添加消息到消息列表
function PlayBackModule:addGameMsgToList(gameMsg)
    self._gameMsgList[#self._gameMsgList + 1] = gameMsg
end

-- 获取消息列表
function PlayBackModule:getGameMsgList(needLoad)
    if needLoad and #self._playMsgList == 0 then
        for i = 0, #self._gameMsgList - 1 do
            self._playMsgList[#self._playMsgList + 1] = self._gameMsgList[i + 1]
        end
    end
    return self._playMsgList
end

-- 设置加载消息列表结束标记
function PlayBackModule:setLoadMsgCoroutine(param)
    self._loadGameMsgListCoroutine = param
end

function PlayBackModule:setPlayBackScheduleID(scheduleID)
    self._playBackScheduleID = scheduleID
end

function PlayBackModule:getPlayBackScheduleID()
    return self._playBackScheduleID
end

-- 获取暂停状态
function PlayBackModule:getPauseState()
    return self._pause
end

function PlayBackModule:setLastSysTime(time)
    self._lastSysTime = time
end

function PlayBackModule:getLastSysTime()
    return self._lastSysTime
end

function PlayBackModule:setAllPlayBackTime(time)
    self._allPlayBackTime = time
end

function PlayBackModule:getAllPlayBackTime()
    return self._allPlayBackTime
end

function PlayBackModule:setJustRecordGameMsgFirstTime(time)
    self._justRecordGameMsgFirstTime = time
end

function PlayBackModule:getJustRecordGameMsgFirstTime()
    return self._justRecordGameMsgFirstTime
end

function PlayBackModule:onAdjustRecordGameMsgList()
end

function PlayBackModule:getfileMsgFromFile(recordPath)
    if string.find(recordPath, "AllDirection") then
        local targetFile = io.open(recordPath, "rb")
        local fileMsg = {}
        fileMsg.subXYID = tonumber(targetFile:read(6), 10)
        fileMsg.subLen = tonumber(targetFile:read(6), 10) or 0
        fileMsg.subBuff = targetFile:read(fileMsg.subLen)
        targetFile:close()
        -- 兼容结束协议封装在11200协议里的情况
        if fileMsg.subXYID == CF.GameMProtocol.ServerToClientMessage.XY_ID then
            local fillGameMsgData = {}
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(fileMsg.subBuff, fileMsg.subLen)
            fillGameMsgData.subBuff = sToClientData.message
            fillGameMsgData.subLen = sToClientData.msglen
            fillGameMsgData.subXYID = sToClientData.cmdid
            return fillGameMsgData
        end
        return fileMsg
    end
    return nil
end

function PlayBackModule:refreshFillGameMsgData(recordPath)
    local fileMsg = self:getfileMsgFromFile(recordPath)
    if fileMsg then
        self:setFillGameMsgData(fileMsg)
    end
end

function PlayBackModule:calcXYCount()
    local totalCount = self:getAllMsgCount()
    local ClientForwardCount = 0
    local gameMsgList = self._gameMsgList
    local cmdidCount = {}
    for i = 1, #gameMsgList do
        if gameMsgList[i].subXYID ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
        else
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(gameMsgList[i].subBuff, gameMsgList[i].subLen)
            print("PlayBack, cmdid:" .. sToClientData.cmdid .. ", time:" .. gameMsgList[i].time)
            if not cmdidCount[sToClientData.cmdid] then
                cmdidCount[sToClientData.cmdid] = 0
            end
            cmdidCount[sToClientData.cmdid] = cmdidCount[sToClientData.cmdid] + 1
            if (CF.GameProtocol.msgBaseClientForwardEx and sToClientData.cmdid == CF.GameProtocol.msgBaseClientForwardEx.XY_ID) or
                (CF.GameProtocol.msgBaseClientForward and sToClientData.cmdid == CF.GameProtocol.msgBaseClientForward.XY_ID) then
                ClientForwardCount = ClientForwardCount + 1
            end
        end
    end
    -- 创建一个包含键值对的数组
    local sortedTable = {}
    for k, v in pairs(cmdidCount) do
        table.insert(sortedTable, {key = k, value = v})
    end

    -- 根据值排序数组
    table.sort(sortedTable, function(a, b)
        return a.value < b.value
    end)

    for _, entry in ipairs(sortedTable) do
        local percent = string.format("%.2f", (entry.value / totalCount) * 100)
        print('PlayBack, cmdid:' .. entry.key .. ', count:' .. entry.value .. ", percent:" .. percent .. '%')
    end
    print('PlayBack, totalCount:' .. totalCount)
    print('----------------------------------PlayBack----------------------------------')
end

function PlayBackModule:startPlayback()
    local recordPath = CF.roomData:getRecordPath()
    self:refreshFillGameMsgData(recordPath)
    self:setPlayBackStartTime(socket.gettime())
    if string.find(recordPath, "AllDirection") then
        recordPath = string.gsub(recordPath, "AllDirection", "Record")
        self:loadGameMsg(recordPath)
        print("playing with " .. #self:getGameMsgList(true))
        self:onAdjustRecordGameMsgList()
        self:onSortGameList()
    else
        self:loadGameMsg(recordPath)
        print("playing with " .. #self:getGameMsgList(true))
    end

    if device.platform == "windows" then
        self:calcXYCount()
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

function PlayBackModule:stopPlayback()
    local scheduleID = self:getPlayBackScheduleID()
    if scheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
        self:setPlayBackScheduleID(0)
    end
end

function PlayBackModule:loadGameMsg(playbackPath)
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

function PlayBackModule:analysisGameMsg()
    local gameMsgList = self:getGameMsgList()
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
        if justRecordGameMsgFirstTime == 0 then
            self:setJustRecordGameMsgFirstTime(gameMsgList[1].time)
        end
        if self:getAllPlayBackTime() >= gameMsgList[1].time - justRecordGameMsgFirstTime then
            --gameMsg = gameMsgList[1]
            CF.netEngine:onMessage(gameMsgList[1].subXYID, gameMsgList[1].subBuff, gameMsgList[1].subLen, 1)
            table.remove(gameMsgList, 1)
            self:dispatchEvent({name = self.EVENT_PLAY_BACK_PROCESS_CHANGED})
        end
    end
end

function PlayBackModule:fastPlay(playCount)
    local pauseState = self._pause
    self._pause = true
    CF.roomData:setIsFastPlay(true)

    local nowCount = self:getPlayedMsgCount()
    local gameMsgList = self:getGameMsgList()
    if nowCount > playCount then
        CF.roomData:setIsRestart(true)
        for _ = 1, #gameMsgList do
            table.remove(gameMsgList, 1)
        end
        gameMsgList = self:getGameMsgList(true)
        self:onAdjustRecordGameMsgList()
        self:onSortGameList()
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
        self:setLastSysTime(socket.gettime())
        local lastTime = gameMsgList[1].time
        for i = nowCount, playCount do
            lastTime = gameMsgList[1].time
            print("fast play:" .. i .. " " .. socket.gettime())
            CF.netEngine:onMessage(gameMsgList[1].subXYID, gameMsgList[1].subBuff, gameMsgList[1].subLen, 1)
            table.remove(gameMsgList, 1)
        end
        self:setAllPlayBackTime(0)
        self:setJustRecordGameMsgFirstTime(lastTime)
        self:dispatchEvent({name = self.EVENT_PLAY_BACK_PROCESS_CHANGED})
    end
    CF.roomData:setIsFastPlay(false)
    self._pause = pauseState
end

function PlayBackModule:getAllMsgCount()
    return #self._gameMsgList
end

function PlayBackModule:getPlayedMsgCount()
    return #self._gameMsgList - #self._playMsgList
end

function PlayBackModule:onSortGameList()
    -- 台州回放增加洗牌
    if CF.areaData:getLobbyID() ~= XH.LOBBY_ID.TAIZHOU then
        return
    end
    local startTime = 0
    local startIndex = 0
    local gameMsgList = self:getGameMsgList()
    local shuffleIds = {}
    -- 获取第一条（断线重连也会发送msgGameStart协议）开始协议的时间戳和index
    for i = 1, #gameMsgList do
        if gameMsgList[i].subXYID == CF.GameMProtocol.ServerToClientMessage.XY_ID then
            local msgTime = gameMsgList[i].time
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(gameMsgList[i].subBuff, gameMsgList[i].subLen)
            if (CF.GameProtocol.msgStartGame and sToClientData.cmdid == CF.GameProtocol.msgStartGame.XY_ID) or
            (CF.GameProtocol.msgGameStart and sToClientData.cmdid == CF.GameProtocol.msgGameStart.XY_ID) then
                startTime = msgTime
                startIndex = i
                break
            end
        end
    end
    -- 找到所有洗牌的转发协议，保存里面的玩家ID并去重
    for i = #gameMsgList, 1, -1 do
        if gameMsgList[i].subXYID == CF.GameMProtocol.ServerToClientMessage.XY_ID then
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(gameMsgList[i].subBuff, gameMsgList[i].subLen)
            if sToClientData.cmdid == CF.GameProtocol.msgBaseClientForwardEx.XY_ID then
                local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
                msgBaseClientForwardEx:bistream(sToClientData.message, sToClientData.msglen)
                if msgBaseClientForwardEx.sID == CF.GameDefine.PRE_SHUFFLE_ID_PLAYBACK then
                    if not table.has(shuffleIds, tonumber(msgBaseClientForwardEx.strData)) then
                        table.insert(shuffleIds, tonumber(msgBaseClientForwardEx.strData))
                    end
                    table.removebyvalue(gameMsgList, gameMsgList[i])
                end
            end
        end
    end
    -- 再封装成洗牌转发协议，并放置在msgGameStart协议后面
    if shuffleIds and #shuffleIds > 0 then
        local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
        msgBaseClientForwardEx.sSeat = 0
        msgBaseClientForwardEx.toSeat = -1
        msgBaseClientForwardEx.sID = CF.GameDefine.PRE_SHUFFLE_ID_PLAYBACK
        local strIds = ""
        for i=1, #shuffleIds do
            strIds = strIds .. shuffleIds[i] .. ","
        end
        msgBaseClientForwardEx.strData = strIds
        local tmpMsgData = msgBaseClientForwardEx:bostream()
        local tFillSToCMessageData = {}
        if tmpMsgData then
            local tmpSToCData = CF.GameMProtocol.ServerToClientMessage:new()
            tmpSToCData.cmdid = CF.GameProtocol.msgBaseClientForwardEx.XY_ID
            tmpSToCData.message = tmpMsgData:getBytes()
            tmpSToCData.msglen = tmpMsgData:getLength()
            local bos = tmpSToCData:bostream()
            tFillSToCMessageData.subXYID = CF.GameMProtocol.ServerToClientMessage.XY_ID
            local bis = un.network.OStream.new(bos:getBytes())
            local writeBuff = bis:read(bos:getLength())
            tFillSToCMessageData.subBuff = writeBuff
            tFillSToCMessageData.subLen = bos:getLength()
        end
        if tFillSToCMessageData and startTime ~= 0 then
            tFillSToCMessageData.time = startTime
            table.insert(gameMsgList, startIndex, tFillSToCMessageData)
        end
    end
end

return PlayBackModule
