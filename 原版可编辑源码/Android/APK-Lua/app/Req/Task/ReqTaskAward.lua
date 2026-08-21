local ReqGetTaskAward = class("ReqGetTaskAward", XH.ReqProtocol)

function ReqGetTaskAward:ctor()
    ReqGetTaskAward.super.ctor(self)
    self._appID = 0 
    self._taskID = 0  
end

function ReqGetTaskAward:start(appID, taskId,srsGroupID,timeoutTime,processID)
    self._appID = appID or 0

    if ReqGetTaskAward.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    self._taskID = taskId
    local reqGetTaskAward =  XH.TaskProtocol.ReqGetTaskAward:new()
    reqGetTaskAward.nAskId = os.time()
    reqGetTaskAward.nTaskId = taskId
    self:sendMsg(reqGetTaskAward, XH.TaskProtocol.RespGetTaskAward, srsGroupID, self._appID)
end

function ReqGetTaskAward:onMsgReceive(msgData)
    if msgData.ucFlag == XH.TaskProtocol.RespGetTaskAward.FLAG.SUCCESS then
        if msgData.nTaskId == self._taskID then
            local CollectMah = {}
            CollectMah.nTaskId = msgData.nTaskId
            CollectMah.acData = msgData.acData
            self:success(CollectMah)
        end
    elseif msgData.ucFlag == XH.TaskProtocol.RespGetTaskAward.FLAG.ERROR then
        self:fail()
    end
end

return ReqGetTaskAward