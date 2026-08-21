--create by hujiaqi--
require("socket")
local Cell = class("Cell")
Cell.TYPE = {
    NONE = 0,
    SUCCESS = 1,
    FAIL = 2,
    TIMEOUT = 3,
}

function Cell:ctor()
    self._callBacks = {}
    self._message = ""
    self._startTime = 0
    self._endTime = 0
    self._timeoutTime = 0
    self._cellScheduleScriptID = 0
    self._isStart = false
    self._aidRequestTimeOutTime = 5
end


function Cell:start(timeoutTime)
    if self._isStart then
        print(self.class.__cname .. " isStart")
    	return false
    end
    
    self._isStart = true
    self._startTime = socket.gettime()
    self._timeoutTime = timeoutTime
    if timeoutTime ~= nil and timeoutTime > 0 then
        self._cellScheduleScriptID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function ()
                self:timeout()
            end
            ,timeoutTime,false)
    end
    
    print(self.class.__cname .. " start")
    return true
end

function Cell:stop()
    if self._cellScheduleScriptID ~= 0 then
    	cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._cellScheduleScriptID)
    	self._cellScheduleScriptID = 0
    end
    self._isStart = false
end

function Cell:addCellCallBack(cell, callbackFunc)
    local t = { f = callbackFunc, c = cell }
    for _, v in ipairs(self._callBacks) do
        if v.f == t.f and v.c == t.c then
        	return 
        end
    end
    self._callBacks[#self._callBacks + 1] = t; 
end

function Cell:success(data)
    if self:getMessage() == "" then
        self:setMessage("请求服务器成功!")
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in ipairs(self._callBacks) do
        v.f(v.c, self, Cell.TYPE.SUCCESS, data);  
    end
    self._callBacks = {}
    self:stop()
end

function Cell:fail(data)
    if self:getMessage() == "" then
    	self:setMessage("请求服务器失败，请稍后尝试!")
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in ipairs(self._callBacks) do
        v.f(v.c, self, Cell.TYPE.FAIL, data);  
    end
    self._callBacks = {}
    self:stop()
end

function Cell:timeout(data)
    if self:getMessage() == "" then
        self:setMessage("请求服务器超时，请检查网络!")
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in pairs(self._callBacks) do
        v.f(v.c, self, Cell.TYPE.TIMEOUT, data);  
    end
    self._callBacks = {}
    self:stop()
end

function Cell:getCurrentConsumeTime()
    return socket.gettime() - self._startTime
end

function Cell:getTotalConsumeTime()
    return self._endTime - self._startTime
end

function Cell:getLeftTime()
    if self._endTime == 0 then
    	return self._timeoutTime - self:getCurrentConsumeTime()
    else 
        return self._timeoutTime - self:getTotalConsumeTime()
    end
end

function Cell:getAidRequestTimeOutTime()
    local leftTime = self:getLeftTime()
    if leftTime > self._aidRequestTimeOutTime then
        return self._aidRequestTimeOutTime
    else 
        return leftTime
    end
end

function Cell:setMessage(msg)
    self._message = msg
end

function Cell:getMessage(msg)
    return self._message
end

return Cella