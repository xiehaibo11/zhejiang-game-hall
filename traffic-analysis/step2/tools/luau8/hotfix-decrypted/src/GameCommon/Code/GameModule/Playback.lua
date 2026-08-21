local Playback =  class("Playback")
local dealCountForYield = 10

function Playback:ctor()
    self._gameMsgList = {}
    self._loadGameMsgListCoroutine = nil
    self._recordReciveGameMsgCreateTime = 0
    self._recordReciveGameMsgStartTime = 0
    self._platbackReciveGameMsgStartTime = 0
    self._playbackStartTime = 0
    self._playBackScheduleID = 0
    self._gameMsgObject = nil
    self._gameMsgFunc = {}
    
    self._gameStartCount = 0
    
    self._isFirstRecord = true --是否有创建过录制
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
    
    --回放播放速率
    self._speed = 1
    self._pause = false
    self._lastSysTime = 0
    self._allPlayBackTime = 0
end

function Playback:startPlayback(recordPath)
    self._playbackStartTime = socket.gettime()
    if string.find(recordPath,"AllDirection") then
        recordPath = string.gsub(recordPath,"AllDirection","Record")
        self:loadGameMsg(recordPath)
        local gameMsgList = self:getGameMsgList()
        self._fillGameMsgFunc(self._fillGameMsgObject, gameMsgList, self._fillGameMsgData)
--        for i = #gameMsgList,1,-1 do
--            
--            local time = gameMsgList[i].time
--            local fillGameMsg = self._fillGameMsgFunc(self._fillGameMsgObject,gameMsgList[i].subXYID,gameMsgList[i].subBuff,gameMsgList[i].subLen)
--            if fillGameMsg then
--                local time = gameMsgList[i].time
--                gameMsgList[i] = fillGameMsg
--                gameMsgList[i].time = time
--            end
--        end 
    else
        self:loadGameMsg(recordPath)
    end
    
    local function analysisGameMsg()
        local gameMsgList = self:getGameMsgList()
        if #gameMsgList == 0 then
            if not self:isLoadGameMsg() then
                self:stopPlayback()
            end
            return
        else
        
            if self._pause then
                self._lastSysTime = socket.gettime()
                return
            end
            if self._lastSysTime > 0 then
                self._allPlayBackTime = self._allPlayBackTime + (socket.gettime() - self._lastSysTime) * self._speed 
            end 
            self._lastSysTime = socket.gettime()
            local gameMsg = gameMsgList[1]
            if self._justRecordGameMsgFirstTime == 0 then
                self._justRecordGameMsgFirstTime = gameMsgList[1].time
            end
            if self._allPlayBackTime  >= gameMsgList[1].time - self._justRecordGameMsgFirstTime then
                for index = 1 , #self._gameMsgFunc do
                    self._gameMsgFunc[index](self._gameMsgObject,gameMsgList[1].subXYID,gameMsgList[1].subBuff,gameMsgList[1].subLen)
                end
                table.remove(gameMsgList,1)
            end
        end
    end
    self._playBackScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        analysisGameMsg()
    end, 0.01, false)
end

function Playback:stopPlayback()
    if self._playBackScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._playBackScheduleID)  
        self._playBackScheduleID = 0
    end
end

function Playback:pause()
    self._pause = true
end

function Playback:play()
    self._pause = false
end

function Playback:fast(multiple)
    self._speed = multiple
end

function Playback:slow(multiple)
    self._speed = multiple
end


function Playback:setReciveGameMsgData(object,func)
    self._gameMsgObject = object
    self._gameMsgFunc[#self._gameMsgFunc + 1] = func
end

function Playback:isPlayback()
    return self._playBackScheduleID ~= 0
end


--将游戏开始前所需要的数据全按顺序保存下来,相同key将会覆盖
--key即key数组，比如说ID和seat联合成key
--value
--bRecover第二把开始数据应该要覆盖之前的
function Playback:recordGameMsgForStartGame(key,value,bRecover)
    if bRecover == true then
        local bRecoverMsg = false
        for i = #self._recordGameMsgList,1,-1 do
            if #key == #(self._recordGameMsgList[i].key) then
                local bAllKeyEqual = true
                for j = 1,#key do
                    if key[j] ~= self._recordGameMsgList[i].key[j] then
                        bAllKeyEqual = false
                    end
                end
                if bAllKeyEqual then
                    bRecoverMsg = true
                    self._recordGameMsgList[i].value = value
                    return
                end
            end
        end
    end
    
    local recordGameMsg = {}
    recordGameMsg.key = key
    recordGameMsg.value = value
    self._recordGameMsgList[#self._recordGameMsgList + 1] = recordGameMsg
end

function Playback:startRecord(boxRoomID,boxRoomCreateTime,mustCreate,uuid)
    if uuid ~= nil and uuid ~= 0 then
		if not XH.GT.getWritablePath then
		    XH.GT.getWritablePath = function()
			    return cc.FileUtils:getInstance():getWritablePath()
		    end
	    end
        if not cc.FileUtils:getInstance():isDirectoryExist(XH.GT.getWritablePath()) then
            cc.FileUtils:getInstance():createDirectory(XH.GT.getWritablePath())
        end
        self._recordFileName = XH.GT.getWritablePath() .. "Record_" .. uuid .. ".dat"
        if not cc.FileUtils:getInstance():isFileExist(self._recordFileName) then
            local file = io.open(self._recordFileName,"wb+")
            file:close()
        end
        self:loadGameMsg(self._recordFileName)
        if #self._gameMsgList > 0 then
            self._justRecordGameMsgFirstTime = self._gameMsgList[1].time
            self._justRecordGameMsgLastTime = self._gameMsgList[#self._gameMsgList].time
        end
    else
        local justBoxRoomID = cc.UserDefault:getInstance():getStringForKey("KW_DATA_JUST_RECORD_BOX_ROOM_ID","")
        local justBoxRoomCreateTime = cc.UserDefault:getInstance():getDoubleForKey("KW_DATA_JUST_RECORD_BOX_ROOM_CREATE_TIME",0)
        self._recordReciveGameMsgCreateTime = cc.UserDefault:getInstance():getDoubleForKey("KW_DATA_JUST_RECORD_BOX_ROOM_RECORD_CREATE_TIME",0)
    
        if mustCreate or not(justBoxRoomID == boxRoomID and justBoxRoomCreateTime == boxRoomCreateTime and self._recordReciveGameMsgCreateTime > 0) then
            self._recordReciveGameMsgCreateTime = socket.gettime()
            self._recordFileName = XH.GT.getWritablePath() .. "Record_" .. boxRoomID .. "_" .. boxRoomCreateTime .. "_" .. math.ceil(self._recordReciveGameMsgCreateTime) .. ".dat"
            cc.UserDefault:getInstance():setStringForKey("KW_DATA_JUST_RECORD_BOX_ROOM_ID",boxRoomID)
            cc.UserDefault:getInstance():setDoubleForKey("KW_DATA_JUST_RECORD_BOX_ROOM_CREATE_TIME",boxRoomCreateTime)
            cc.UserDefault:getInstance():setDoubleForKey("KW_DATA_JUST_RECORD_BOX_ROOM_RECORD_CREATE_TIME",self._recordReciveGameMsgCreateTime)
            local file = io.open(self._recordFileName,"wb+")
            file:close()
        else
            self._recordFileName = XH.GT.getWritablePath() .. "Record_" .. boxRoomID .. "_" .. boxRoomCreateTime .. "_" .. math.ceil(self._recordReciveGameMsgCreateTime) .. ".dat"
            if not cc.FileUtils:getInstance():isFileExist(self._recordFileName) then
                local file = io.open(self._recordFileName,"wb+")
                file:close()
            end
            self:loadGameMsg(self._recordFileName)
            if #self._gameMsgList > 0 then
                self._justRecordGameMsgFirstTime = self._gameMsgList[1].time
                self._justRecordGameMsgLastTime = self._gameMsgList[#self._gameMsgList].time
            end
        end
    end
    self._fillFromRecordFileName = self._recordFileName
    self._recordReciveGameMsgStartTime = socket.gettime()
    self._isFirstRecord = false--这个值暂时没用
    self:writeBeforeStartGameMsg()
end

function Playback:stopRecord()
    self._recordFileName = ""
end

function Playback:recordGameMsg(subXYID,subBuff,subLen,beforeStart)
    if self:isPlayback() then
        return
    end
    if self._recordFileName == "" then
    	return
    end
    local playbackPath = self._recordFileName
    local file = io.open(playbackPath,"ab+")
    
    local time = socket.gettime()
    if self._justRecordGameMsgLastTime > 0 then
        time = self._justRecordGameMsgLastTime + (socket.gettime() - self._recordReciveGameMsgStartTime) + 3
    end
    if beforeStart == true then
        file:write(string.format("%020d",time) )
    else
        file:write(string.format("%020d",time + #self._recordGameMsgList * 0.05))
    end
    
    file:write(string.format("%06d",subXYID))
    file:write(string.format("%06d",subLen))
    file:write(tostring(subBuff))
    file:close()
end

function Playback:writeBeforeStartGameMsg()
    for i = 1,#self._recordGameMsgList do
        self:recordGameMsg(self._recordGameMsgList[i].value.subXYID,self._recordGameMsgList[i].value.subBuff,self._recordGameMsgList[i].value.subLen,true)
    end
end

function Playback:loadGameMsg(path)
    local startTime = socket.gettime()
    local playbackPath = path
    --self._loadGameMsgListCoroutine = coroutine.create(function ()
        local file = io.open(playbackPath,"rb")
        self._gameMsgList = {}
        --local repeatCoount = 0
        repeat
            local gameMsg = {}
            gameMsg.time = tonumber(file:read(20),10)
            gameMsg.subXYID = tonumber(file:read(6),10)
            gameMsg.subLen = tonumber(file:read(6),10) or 0
            gameMsg.subBuff = file:read(gameMsg.subLen)
            if gameMsg.time == nil or gameMsg.subXYID == nil or gameMsg.subLen == nil or gameMsg.subBuff == nil then
                self._loadGameMsgListCoroutine = nil
                break
            else
                self._gameMsgList[#self._gameMsgList + 1] = gameMsg
            end
--            repeatCoount = repeatCoount + 1
--            if repeatCoount % dealCountForYield == 0 then
--               coroutine.yield()
--            end
        until false
        file:close()
    --end)
    
--    self._loadGameMsgListScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
--        if self._loadGameMsgListCoroutine == nil then
--            if self._loadGameMsgListScheduleID ~= 0 then
--                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._loadGameMsgListScheduleID)  
--                self._loadGameMsgListScheduleID = 0
--                print("loadGameMsgSchedule time" .. socket.gettime() - startTime)
--                return
--            end
--        end
--        coroutine.resume(self._loadGameMsgListCoroutine)
--    end, 0.01, false)
    print("loadGameMsg time" .. socket.gettime() - startTime)
end

function Playback:isLoadGameMsg()
    return self._loadGameMsgListScheduleID ~= 0
end

function Playback:getGameMsgList()
    return self._gameMsgList
end

function Playback:getRecordFilePath()
    return self._recordFileName
end

function Playback:isFirstRecord()
    return self._isFirstRecord
end

function Playback:recordFillPlayBackGameMsg(boxRoomID,boxRoomCreateTime,subXYID,subBuff,subLen,uuid)
    local pathFile = ""
    if not XH.GT.getWritablePath then
		XH.GT.getWritablePath = function()
			return cc.FileUtils:getInstance():getWritablePath()
		end
	end
    if not cc.FileUtils:getInstance():isDirectoryExist(XH.GT.getWritablePath()) then
        cc.FileUtils:getInstance():createDirectory(XH.GT.getWritablePath())
    end
    if uuid ~= nil and uuid ~= 0 then
        pathFile = XH.GT.getWritablePath() .. "AllDirection_" .. uuid .. ".dat"
    else
        pathFile = XH.GT.getWritablePath() .. "AllDirection_" .. boxRoomID .. "_" .. boxRoomCreateTime .. "_" .. math.ceil(self._recordReciveGameMsgCreateTime) .. ".dat"
    end
    
    self._fillFileName = pathFile
    local file = io.open(pathFile,"ab+")
    file:write(string.format("%06d",subXYID))
    file:write(string.format("%06d",subLen))
    file:write(tostring(subBuff))
    file:close()
end

function Playback:setFillGameMsgData(object,func,data)
    self._fillGameMsgObject = object
    self._fillGameMsgFunc = func
    self._fillGameMsgData = data
end

function Playback:getFillGameMsgData()
    return self._fillGameMsgData
end

function Playback:getFillFilePath()
    return self._fillFileName
end

function Playback:addGameStartCount()
    self._gameStartCount = self._gameStartCount + 1
end

function Playback:getGameStartCount()
    return self._gameStartCount
end

return PlaybackZ3