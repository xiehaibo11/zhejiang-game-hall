local VoiceModule = CF.gameClass("VoiceModule", CF.ModuleBase)

VoiceModule.EVENT_SHOW_RECORD_ANI = "EVENT_SHOW_RECORD_ANI"
VoiceModule.EVENT_UPDATE_VOICE_QI_PAO = "EVENT_UPDATE_VOICE_QI_PAO"

function VoiceModule:ctor()
    VoiceModule.super.ctor(self)
    self._fastVoiceStatus = 0  --1.录音中  2.播放中 0.闲置中
    self._playSelfVoiceTm = 0
    self._curDealVoiceUrl = ""
    self._playVoiceList = {}
end

function VoiceModule:getProxyEvents()
    return {
        { module = CF.sdkManager, eventKeyName = "EVENT_FASTVO_CALLBACK", callBack = "onFastVoiceCallBack" },
    }
end

function VoiceModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgClientForwardBase),msgClass = CF.GameProtocol.msgBaseClientForwardEx},
        {callback = handler(self,self.onMsgClientForward),msgClass = CF.GameProtocol.msgClientForward},
    }
end

function VoiceModule:onDestroy()
    VoiceModule.super.onDestroy(self)
    self:stopRecordSchedule()
end

function VoiceModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.FastVoice then
        self:onMsgClientForwardFastVoice(msgData)
    end
end

function VoiceModule:onMsgClientForward(msgData)
    if msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.FastVoice then
        self:onMsgClientForwardFastVoice(msgData)
    end
end

function VoiceModule:onMsgClientForwardFastVoice(msgData)
    if self:isVoicePreDeal() then
        if msgData.sSeat == CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
            return
        end
    end

    local localSeat = CF.roomData:seatToLocal(msgData.sSeat)    

    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if playerData and CF.game:getModule("PlayerInfo"):getBlockedVoice(playerData:getNumberID()) then
        return
    end

    local voiceInfo = {}
    voiceInfo["voicelocalSeat"] = localSeat
    voiceInfo["voiceUrl"] = msgData.strData
    self._playVoiceList[#self._playVoiceList + 1] = voiceInfo
    self:playRecordVoice()
end

function VoiceModule:stopRecordSchedule()
    if self._recordVoiceScheduleID and self._recordVoiceScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._recordVoiceScheduleID)
        self._recordVoiceScheduleID = 0
    end
end

local MAX_RECORD_TM = 30
function VoiceModule:startRecordSchedule()
    local curRecordTm = 0
    self._recordVoiceScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        curRecordTm = curRecordTm + 1
        if curRecordTm >= MAX_RECORD_TM then
            self:stopRecordIng()
        end
    end, 1, false)
end

function VoiceModule:startSpeak()
    self:startRecordIng()
end

function VoiceModule:endSpeak()
    if self._isCancel then
        CF.game:getModule("Voice"):cancelRecordIng()
    else
        CF.game:getModule("Voice"):stopRecordIng()
    end
end

function VoiceModule:cancelSpeak()
    self:cancelRecordIng()
end

function VoiceModule:touchMoved(distance)
    if distance > 80 then
        self:dispatchEvent({name = self.EVENT_SHOW_RECORD_ANI, msg = { bShow = true, status = 2}})
        self._isCancel = true
    end
end

function VoiceModule:startRecordIng()
    if CF.sdkManager:isVoiceLimitVersion() or self._fastVoiceStatus ~= 0 then
        return --正在录音或者播放直接return
    end
    self._isCancel = false
    
    self._fastVoiceStatus = 1
    self:dispatchEvent({name = self.EVENT_SHOW_RECORD_ANI, msg = { bShow = true}})

    CF.soundManager:setPlayEffectLimit(true)

    self:stopRecordSchedule()

    --超时处理
    self:startRecordSchedule()

    --开始录音
    CF.audioManager:pauseMusic()
    CF.sdkManager:stardRecordWithNumid(CF.selfPlayerData:getNumberID())
end

function VoiceModule:stopRecordIng()
    self:dispatchEvent({name = self.EVENT_SHOW_RECORD_ANI, msg = { bShow = false}})
    if CF.sdkManager:isVoiceLimitVersion() then
        return --没有录音无需停止
    end

    if self._recordVoiceScheduleID and self._recordVoiceScheduleID ~= 0 then
        CF.sdkManager:stopRecording()
    end
    self:stopRecordSchedule()
    self._fastVoiceStatus = 0

    CF.soundManager:setPlayEffectLimit(false)
end

function VoiceModule:cancelRecordIng()
    self:dispatchEvent({name = self.EVENT_SHOW_RECORD_ANI, msg = { bShow = false}})
    if CF.sdkManager:isVoiceLimitVersion() or self._fastVoiceStatus ~= 1 then
        return --没有录音无需取消
    end
    CF.sdkManager:cancelRecording()

    CF.soundManager:setPlayEffectLimit(false)

    self._fastVoiceStatus = 0
end

function VoiceModule:isVoicePreDeal()
    local res = false
    if device.platform == "android" or device.platform == "ios" then
        res = true
    end
    return res
end

--急速语音SDK回调处理函数
function VoiceModule:onFastVoiceCallBack(event)
    local code = event.data.code
    local msg = event.data.msg
    
    if 1403 == code then
        -- 语音地址发送
        if device.platform == "ios" then
            self._curDealVoiceUrl = msg
            if self._playSelfVoiceTm > 0 then
                if (socket.gettime() - self._playSelfVoiceTm) * 1000 > 400  then
                    if self._curDealVoiceUrl ~= "" then
                        CF.msgManager:sendFastVoice(self._curDealVoiceUrl) 
                        self._curDealVoiceUrl = ""   
                    end
                    self._playSelfVoiceTm = 0
                end
            end
        else
            CF.msgManager:sendFastVoice(msg)    
        end
    elseif 1402 == code then
        self._fastVoiceStatus = 0
        CF.soundManager:setPlayEffectLimit(false)
        CF.audioManager:resumeMusic()
    elseif 1401 == code then
        self._fastVoiceStatus = 0
        if self:isVoicePreDeal() then     
            local playVoiceInfo = {}
            playVoiceInfo["voicelocalSeat"] = CF.roomData:getSelfLocalSeat()
            playVoiceInfo["voiceUrl"] = msg
            table.insert(self._playVoiceList,1,playVoiceInfo)
            self:playRecordVoice()
            
            if device.platform == "ios" then
                self._playSelfVoiceTm = socket.gettime()
                CF.SysTool.performWithDelayGlobal(function()
                    if self._playSelfVoiceTm > 0 then
                        if self._curDealVoiceUrl ~= "" then
                            CF.msgManager:sendFastVoice(self._curDealVoiceUrl) 
                            self._curDealVoiceUrl = ""   
                        end
                        self._playSelfVoiceTm = 0
                    end
                end,0.5)
            end
        end
    elseif 1404 == code then
        if device.platform == "ios" then
            if self._playSelfVoiceTm > 0 then
                if (socket.gettime() - self._playSelfVoiceTm) * 1000 > 400 then
                    if self._curDealVoiceUrl ~= "" then
                        CF.msgManager:sendFastVoice(self._curDealVoiceUrl)
                        self._curDealVoiceUrl = ""
                    end
                end
                self._playSelfVoiceTm = 0
            end
        end
        self._fastVoiceStatus = 0
        if #self._playVoiceList > 0 then
            self:showPlayVoiceAni(self._playVoiceList[1]["voicelocalSeat"],false)
            table.remove(self._playVoiceList, 1)
        end
        self:playRecordVoice()
    elseif 1405 == code then
        self._fastVoiceStatus = 0
        if #self._playVoiceList > 0 then
            self:showPlayVoiceAni(self._playVoiceList[1]["voicelocalSeat"],false)
            table.remove(self._playVoiceList, 1)
        end

        CF.soundManager:setPlayEffectLimit(false)
        CF.audioManager:resumeMusic()
    elseif 1407 == code then
        --录音中
        self._fastVoiceStatus = 1
    elseif 1408 == code then
        --取消成功
        self._fastVoiceStatus = 0
        CF.soundManager:setPlayEffectLimit(false)
        CF.audioManager:resumeMusic()
    elseif 1409 == code then
        --播放中
        self._fastVoiceStatus = 2
    end
end

function VoiceModule:showPlayVoiceAni(localSeat, show)
    self:dispatchEvent( { name = self.EVENT_UPDATE_VOICE_QI_PAO , msg = {localSeat = localSeat, show = show}})
end

function VoiceModule:playRecordVoice()
    if self._fastVoiceStatus ~= 0 then
        return --正在播放或者录音
    end
    
    -- 播放音效接口
    if #self._playVoiceList > 0 then   
        CF.soundManager:setPlayEffectLimit(true)
        CF.audioManager:pauseMusic()

        self._fastVoiceStatus = 2
        
        local voiceUrl = self._playVoiceList[1]["voiceUrl"]
        local voicelocalSeat = self._playVoiceList[1]["voicelocalSeat"]
        
        CF.sdkManager:playRecordVoice(voiceUrl)
        self:showPlayVoiceAni(voicelocalSeat,true)
    else
        CF.audioManager:resumeMusic()
        CF.soundManager:setPlayEffectLimit(false)
    end
end

return VoiceModule   $  