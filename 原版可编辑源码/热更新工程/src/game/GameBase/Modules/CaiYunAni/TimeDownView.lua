local TimeDownView =
    CF.gameClass(
    "TimeDownView",
    function()
        return cc.Node:create()
    end
)

function TimeDownView:ctor(txt, endCall)
    self._endCall = endCall
    self._uiTxt = txt
    self._module = CF.game:getModule("CaiYunPropNew.Strategy")
    self:scheduleUpdateWithPriorityLua(
        function(dt)
            self:onUpdate(dt)
        end,
        0
    )
end

function TimeDownView:getProxyEvents()
end

function TimeDownView:getBindingInfo()
end

function TimeDownView:getTimeDesc(time)
    if (time <= 0) then
        time = 0
    end
    local hour = math.floor(time / 3600)
    local min = math.floor((time - hour * 3600) / 60)
    local sec = time - hour * 3600 - min * 60
    if (hour == 0) then
        return string.format("%02d:%02d", min, sec)
    end
    return string.format("%02d:%02d:%02d", hour, min, sec)
end

function TimeDownView:updateTime()
    local str = self:getTimeDesc(self._lastTime)
    self._uiTxt:setString(str)
end

function TimeDownView:onUpdate()
    self:update()
end

function TimeDownView:update()
    local lastTime = self._module:getPrayLeftTime()
    if (lastTime < 0) then
        lastTime = 0
    end
    if (lastTime == self._lastTime) then
        return
    end
    self._lastTime = lastTime
    self:updateTime()
    if lastTime == 0 then
        if self._endCall then
            self._endCall()
        end
    end
end
return TimeDownView
