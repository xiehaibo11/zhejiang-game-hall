local TeaHouseHotUpdateScene = class("TeaHouseHotUpdateScene")

local tmpProgress = 0
local curProgress = 0
local fastProgress = 1

TeaHouseHotUpdateScene.isHotUpdate = false
TeaHouseHotUpdateScene._progressScheduleID = nil
TeaHouseHotUpdateScene._eventDelegate = nil

local EVENT_TEAHOUSE_START_UPDATE = "onStartUpdate"
local EVENT_TEAHOUSE_PERCENT_CHANGED = "onPercentChanged"

function TeaHouseHotUpdateScene.setDelegate(delegate)
    TeaHouseHotUpdateScene._eventDelegate = delegate
end

function TeaHouseHotUpdateScene.start()
    tmpProgress = 0
    curProgress = 0
    fastProgress = 1

    TeaHouseHotUpdateScene.dispatchPercentEvent(EVENT_TEAHOUSE_START_UPDATE, { isStart = true })
end

function TeaHouseHotUpdateScene.needHotUpdate(tag, oldVersion, newVersion)
    print(tag .. " oldVersion = " .. oldVersion .. " newVersion = " .. newVersion)
    TeaHouseHotUpdateScene.dispatchPercentEvent(EVENT_TEAHOUSE_PERCENT_CHANGED, { percent = 0 })
end

function TeaHouseHotUpdateScene.hotUpdateSuccess(tag)
    if TeaHouseHotUpdateScene.isHotUpdate then
        return
    end
    TeaHouseHotUpdateScene.dispatchPercentEvent(EVENT_TEAHOUSE_START_UPDATE, { isStart = false })
end

function TeaHouseHotUpdateScene.hotUpdateFaile(message, gameKey)
    TeaHouseHotUpdateScene.dispatchPercentEvent(EVENT_TEAHOUSE_PERCENT_CHANGED, { percent = 0 })
end

function TeaHouseHotUpdateScene.hotUpdateProgress(progress)
    TeaHouseHotUpdateScene.updateProgress(progress)
end

function TeaHouseHotUpdateScene.updateProgress(percent)
    if not percent or percent < 0 then
        return
    end
    curProgress = percent
    print("TeaHouse update progress " .. curProgress)
    if TeaHouseHotUpdateScene._progressScheduleID ~= nil then
        return
    end
    TeaHouseHotUpdateScene._progressScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if (tmpProgress + fastProgress) <= curProgress or curProgress == 100 then
            if tmpProgress == 0 and curProgress == 100 then
                TeaHouseHotUpdateScene.dispatchPercentEvent(EVENT_TEAHOUSE_PERCENT_CHANGED, { percent = curProgress })
                if TeaHouseHotUpdateScene._progressScheduleID then
                    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(TeaHouseHotUpdateScene._progressScheduleID)
                    TeaHouseHotUpdateScene._progressScheduleID = nil
                end
                return
            end
            TeaHouseHotUpdateScene.isHotUpdate = true
            if curProgress == 100 and fastProgress == 1 then
                fastProgress = math.max((curProgress - tmpProgress) / 10, 1)
            end
            tmpProgress = tmpProgress + fastProgress
            if math.ceil(tmpProgress) >= 100 then
                tmpProgress = 100
            end
            TeaHouseHotUpdateScene.dispatchPercentEvent(EVENT_TEAHOUSE_PERCENT_CHANGED, { percent = curProgress })
            if tmpProgress == 100 and curProgress == 100 then
                TeaHouseHotUpdateScene.isHotUpdate = false
                if TeaHouseHotUpdateScene._progressScheduleID then
                    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(TeaHouseHotUpdateScene._progressScheduleID)
                    tmpProgress = 0
                    fastProgress = 1
                    TeaHouseHotUpdateScene._progressScheduleID = nil
                end
                TeaHouseHotUpdateScene.hotUpdateSuccess()
            end
        end
    end, 0.033, false)
end

function TeaHouseHotUpdateScene.dispatchPercentEvent(eventName, param)
    if TeaHouseHotUpdateScene._eventDelegate == nil then
        return
    end
    if eventName == EVENT_TEAHOUSE_START_UPDATE then
        local onStartUpdate = TeaHouseHotUpdateScene._eventDelegate[EVENT_TEAHOUSE_START_UPDATE]
        if onStartUpdate then
            onStartUpdate(TeaHouseHotUpdateScene._eventDelegate, param)
        end
    elseif eventName == EVENT_TEAHOUSE_PERCENT_CHANGED then
        local onPercentChanged = TeaHouseHotUpdateScene._eventDelegate[EVENT_TEAHOUSE_PERCENT_CHANGED]
        if onPercentChanged then
            onPercentChanged(TeaHouseHotUpdateScene._eventDelegate, param)
        end
    end
end

return TeaHouseHotUpdateScene