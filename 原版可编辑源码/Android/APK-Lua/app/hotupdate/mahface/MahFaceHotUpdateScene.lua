
local HotUpdateScene = class("HotUpdateScene")

HotUpdateScene._hotUpdateCSBNode = nil
HotUpdateScene._UpdateManager = nil

local tmpProgress = 0
local curProgress = 0
local fastProgress = 1
HotUpdateScene._progressScheduleID = nil
HotUpdateScene.isHotUpdate = false

--进度更新自定义事件
local EVENT_MAHFACE_PERCENT_CHANGED = "hotupdate.MahFaceUpdate.ProgressChanged"
local EVENT_MAHFACE_START_UPDATE = "hotupdate.MahFaceUpdate.startUpdate"

function HotUpdateScene:ctor()
    self._subGameName = ""
    self._hotUpdateCSBNode = nil
end

function HotUpdateScene:start(gameID, gameName)
	HotUpdateScene._progressScheduleID = nil
	tmpProgress = 0
	curProgress = 0
	fastProgress = 1
    --显示更新界面
    local param = {}
    param.isStart = true -- true开始热更， false热更失败
    self:dispatchPercentEvent(EVENT_MAHFACE_START_UPDATE, param)
end

function HotUpdateScene:needHotUpdate(tag, oldVersion, newVersion)
    print("游戏TAG = ".. tag .." oldVersion = " .. oldVersion .. " newVersion = " .. newVersion)
    local param = {}
    param.subGameName = self._subGameName
    param.percent = 0
    self:dispatchPercentEvent(EVENT_MAHFACE_PERCENT_CHANGED, param)
end

function HotUpdateScene:hotUpdateSuccess(tag)
    if HotUpdateScene.isHotUpdate then return end
    local param = {}
    param.isStart = false
    self:dispatchPercentEvent(EVENT_MAHFACE_START_UPDATE, param)
end

function HotUpdateScene:hotUpdateFaile(message, gameKey)
    --print("message = " .. message .. " gameKey = " .. gameKey)
    --隐藏更新界面
    local param = {}
    param.subGameName = self._subGameName
    param.percent = 0
    self:dispatchPercentEvent(EVENT_MAHFACE_PERCENT_CHANGED, param)
    --提示热更新失败 弱提示 "热更新失败,请稍后再试!"

    --抛出重新热热更事件，再次更新
end

function HotUpdateScene:hotUpdateProgress(progress)
    self:showProgress(progress)
    --显示进度条
end

function HotUpdateScene:showProgress(percent)
    if not percent then 
        return nil 
    end

    if(percent >= 0) then 
        curProgress = percent
        print("showProgress = " .. percent)
        if HotUpdateScene._progressScheduleID == nil then
            HotUpdateScene._progressScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
                if (tmpProgress + fastProgress) <= curProgress or curProgress == 100 then
                    if tmpProgress == 0 and curProgress == 100 then
                        local param = {}
                        param.subGameName = self._subGameName
                        param.percent = curProgress
                        self:dispatchPercentEvent(EVENT_MAHFACE_PERCENT_CHANGED, param)
                        --只有一个文件需要更新的时候，收到直接就是100了，也关闭定时器
                        if HotUpdateScene._progressScheduleID then
                            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(HotUpdateScene._progressScheduleID)
                            HotUpdateScene._progressScheduleID = nil
                        end
                        return 
                    end
                    HotUpdateScene.isHotUpdate = true
                    if curProgress == 100 and fastProgress == 1 then
                        fastProgress = math.max((curProgress - tmpProgress) / 10, 1)
                    end
                    tmpProgress = tmpProgress + fastProgress
                    if math.ceil(tmpProgress) >= 100 then
                        tmpProgress = 100
                    end
                    print("tmpProgress = " .. tmpProgress .. "curProgress = " .. curProgress)
                    local param = {}
                    param.subGameName = self._subGameName
                    param.percent = curProgress
                    self:dispatchPercentEvent(EVENT_MAHFACE_PERCENT_CHANGED, param)
                    if tmpProgress == 100 and curProgress == 100 then
                        HotUpdateScene.isHotUpdate = false
                        if HotUpdateScene._progressScheduleID then
                            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(HotUpdateScene._progressScheduleID)
                            tmpProgress = 0
                            fastProgress = 1
                            HotUpdateScene._progressScheduleID = nil
                        end
                        self:hotUpdateSuccess()
                    end
                end
            end, 0.033, false)
        end
    end
end

function HotUpdateScene:dispatchPercentEvent(eventName, param)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(eventName)
    event.msg = param
    
    eventDispatcher:dispatchEvent(event)
end

return HotUpdateScene