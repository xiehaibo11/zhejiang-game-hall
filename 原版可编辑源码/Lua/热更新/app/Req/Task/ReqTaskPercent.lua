local ReqTaskPercent = class("ReqTaskPercent", XH.ReqProtocol)
local TaskDefine = require("app.Define.TaskDefine")
local ReqSysTime50 = require("app.Req.Task.ReqSysTime50")

function ReqTaskPercent:ctor()
    ReqTaskPercent.super.ctor(self)
    self._appID = 0 
    self._taskID = 0 
    self._askId = 0
end

function ReqTaskPercent:start(numberID,appID ,processID,taskId,srsGroupID,timeoutTime)
    self._processID = processID or 0
    self._appID = appID or 0
    if ReqTaskPercent.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    self._taskID = taskId
    local time,_ = string.gsub(tostring(socket.gettime()), "%.", "")
    time  = string.sub(time,#time-4,#time)
    self._askId = tonumber(time) + taskId
    local reqTaskPercent =  XH.TaskProtocol.ReqTaskPercent:new()
    reqTaskPercent.nAskId = self._askId
    reqTaskPercent.nTaskId = taskId

    -- 系统时间修改
    if XH.isEmbeddedApp() and taskId == TaskDefine.KW_SYSTEM_TIME then
        local reqSysTime50 = ReqSysTime50.new()
        reqSysTime50:addReqCallBack(self, function(obj, cell, type, data)
            if data and data.unix then
                local strAcData = json.encode(
                    {
                        time = tonumber(data.unix)
                    }
                )
                local timeData = {
                    acData = strAcData
                }
                obj:success(timeData)
            else
                obj:fail()
            end
        end)
        reqSysTime50:start(timeoutTime)
        return
    end
    self:sendMsg(reqTaskPercent, XH.TaskProtocol.RespTaskPercent, srsGroupID, self._appID)
end

function ReqTaskPercent:onMsgReceive(msgData)
    if self._askId ~= msgData.nAskId then
        return
    end
    if msgData.ucFlag == XH.TaskProtocol.RespTaskPercent.FLAG.SUCCESS then
        if msgData.nTaskId == self._taskID then
            local CollectMah = { }
            CollectMah.nTaskId = msgData.nTaskId
            CollectMah.nComplete = msgData.nComplete
            CollectMah.nTotal = msgData.nTotal
            CollectMah.acData = msgData.acData
            CollectMah.nExtraParam1 = msgData.nExtraParam1
            CollectMah.nExtraParam2 = msgData.nExtraParam2
            CollectMah.nExtraParam3 = msgData.nExtraParam3
            self:success(CollectMah)
        end
    elseif msgData.ucFlag == XH.TaskProtocol.RespTaskPercent.FLAG.ERROR then
        self:fail()
    end
end

return ReqTaskPercent