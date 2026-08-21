local ReqTaskProtocol = class("ReqTaskProtocol", XH.ReqProtocol)

function ReqTaskProtocol:ctor()
    ReqTaskProtocol.super.ctor(self)
    self._protoId = 0 
    self._taskID = 0  
end

function ReqTaskProtocol:start(taskId, protoId, appID, srsGroupID, timeoutTime, specialStr, askID)
    self._protoId = protoId or 0
    self._taskID = taskId or 0
    self._appID = appID or 0
    specialStr = specialStr or ""
    if ReqTaskProtocol.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    local areaTypeID = XH.areaData:getAreaTypeID()
    local reqTaskProtocol =  XH.TaskProtocol.ReqTaskProtocol:new()
    --askid不能传0，所以防止taskid为0，nAskId加了100
    reqTaskProtocol.nAskId = self._askID
    reqTaskProtocol.nAreaTypeId = areaTypeID
    reqTaskProtocol.nProtoId = self._protoId
    reqTaskProtocol.acData = "{nTaskId=" .. taskId ..specialStr .."}"
    
    self:sendMsg(reqTaskProtocol, XH.TaskProtocol.RespTaskProtocol, srsGroupID, self._appID)
end

function ReqTaskProtocol:onMsgReceive(msgData)
    if self._protoId ~= msgData.nProtoId then
        return
    end

    if msgData.nAskId ~= self._askID then 
        return 
    end
    local CollectMah = {}
    CollectMah.nAskId = msgData.nAskId
    CollectMah.nAreaTypeId = msgData.nAreaTypeId
    CollectMah.nProtoId = msgData.nProtoId
    CollectMah.acData = msgData.acData
    CollectMah.taskId = self._taskID
    self:success(CollectMah)
end

return ReqTaskProtocol�