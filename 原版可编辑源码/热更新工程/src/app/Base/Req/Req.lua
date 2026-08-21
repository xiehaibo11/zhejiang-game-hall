require("socket")
local Req = class("Req")

Req.TYPE = {
    NONE = 0,
    SUCCESS = 1,
    FAIL = 2,
    TIMEOUT = 3
}

function Req:ctor()
    self._callBacks = {}
    self._message = ""
    self._startTime = 0
    self._endTime = 0
    self._timeoutTime = 0
    self._LogicScheduleScriptID = 0
    self._isStart = false
    self._aidRequestTimeOutTime = 5

    self._callBackProtocols = {}
end

function Req:start(timeoutTime)
    if self._isStart then
        return false
    end

    self._isStart = true
    self._startTime = socket.gettime()
    self._timeoutTime = timeoutTime or XH.KW_CONFIG_LOGIC_TIME_OUT
    if self._timeoutTime ~= nil and self._timeoutTime > 0 then
        local scheduler = cc.Director:getInstance():getScheduler()
        local scheduleID
        scheduleID =
            scheduler:scheduleScriptFunc(
            function()
                -- 先取消自身，防止回调异常导致每帧反复触发（线上崩溃刷屏的根因）
                if scheduleID and scheduleID ~= 0 then
                    scheduler:unscheduleScriptEntry(scheduleID)
                    if self and self._LogicScheduleScriptID == scheduleID then
                        self._LogicScheduleScriptID = 0
                    end
                    scheduleID = 0
                end
                if not self or not self._isStart then
                    return
                end
                if type(self.timeout) ~= "function" then
                    return
                end
                self:timeout()
            end,
            self._timeoutTime,
            false
        )
        self._LogicScheduleScriptID = scheduleID
    end

    return true
end

function Req:stop()
    if self._LogicScheduleScriptID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._LogicScheduleScriptID)
        self._LogicScheduleScriptID = 0
    end
    self._callBacks = {}
    self._isStart = false
end

function Req:addReqCallBack(req, callbackFunc)
    local t = {f = callbackFunc, c = req}
    for _, v in ipairs(self._callBacks) do
        if v.f == t.f and v.c == t.c then
            return
        end
    end
    self._callBacks[#self._callBacks + 1] = t
end

function Req:success(data)
    if self:getMessage() == "" then
        self:setMessage(XH.ConstString.getStr("MSG_SEND_SUCCESS"))
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in ipairs(self._callBacks) do
        v.f(v.c, self, Req.TYPE.SUCCESS, data)
    end
    self._callBacks = {}
    self:stop()
end

function Req:fail(data)
    if self:getMessage() == "" then
        self:setMessage(XH.ConstString.getStr("MSG_SEND_FAIL"))
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in ipairs(self._callBacks) do
        v.f(v.c, self, Req.TYPE.FAIL, data)
    end
    self._callBacks = {}
    self:stop()
end

function Req:timeout(data)
    if self:getMessage() == "" then
        self:setMessage(XH.ConstString.getStr("MSG_SEND_TIME_OUT"))
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in pairs(self._callBacks) do
        v.f(v.c, self, Req.TYPE.TIMEOUT, data)
    end
    self._callBacks = {}
    self:stop()
end

function Req:getCurrentConsumeTime()
    return socket.gettime() - self._startTime
end

function Req:getTotalConsumeTime()
    return self._endTime - self._startTime
end

function Req:getLeftTime()
    if self._endTime == 0 then
        return self._timeoutTime - self:getCurrentConsumeTime()
    else
        return self._timeoutTime - self:getTotalConsumeTime()
    end
end

function Req:getAidRequestTimeOutTime()
    local leftTime = self:getLeftTime()
    if leftTime > self._aidRequestTimeOutTime then
        return self._aidRequestTimeOutTime
    else
        return leftTime
    end
end

function Req:setMessage(msg)
    if not msg then
        return
    end
    self._message = msg
end

function Req:getMessage(msg)
    return self._message
end

return Req
