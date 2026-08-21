local ScheduleInterface = {}

function ScheduleInterface.extend(object)
    function object:_initScheduleIDs()
        self._scheduleIDs = {}
    end

    function object:performWithDelay(callback, delayTime)
        if not callback or not delayTime or delayTime < 0 then
            return
        end
        local scheduleID
        scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
            callback()
        end, delayTime, false)
        table.insert(self._scheduleIDs, scheduleID)
        return scheduleID
    end
    
    function object:_onRemoveAllScheduleIDs()
        if self._scheduleIDs then
            for _, scheduleID in pairs(self._scheduleIDs) do
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
            end
        end
        self._scheduleIDs = {}
    end

    function object:_removeAllScheduleID(removeID)
        for i, scheduleID in pairs(self._scheduleIDs) do
            if removeID == scheduleID then
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
                table.remove(self._scheduleIDs, i)
                break
            end
        end
    end
end

return ScheduleInterface\