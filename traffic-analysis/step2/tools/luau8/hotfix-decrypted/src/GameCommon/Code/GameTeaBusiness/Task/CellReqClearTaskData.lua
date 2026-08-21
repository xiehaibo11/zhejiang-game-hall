local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqClearTaskData = class("CellReqClearCollectMah", CellProtocol)

function CellReqClearTaskData:ctor()
    CellReqClearTaskData.super.ctor(self)
    self._appID = 0 
    self._taskID = 0 
end

function CellReqClearTaskData:start(NumberID,timeoutTime,srsGroupID,appID ,processID,taskId)
    processID = processID or 0
    self._appID = appID or 0
    srsGroupID = nil
    if CellReqClearTaskData.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    self._taskID = taskId
    local ReqClearTaskData = XH.bf.TaskXY.ReqClearTaskData:new()
    ReqClearTaskData.nAskId = os.time()
    ReqClearTaskData.nTaskId = taskId

    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveClearTaskData,srsGroupID,processID)
    XH.GT.sendPacket(ReqClearTaskData,self._appID,srsGroupID,processID)
end

function CellReqClearTaskData:onReceiveClearTaskData(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.TaskXY.RespClearTaskData.XY_ID then
        return
    end

    local RespClearTaskData = XH.bf.TaskXY.RespClearTaskData:new()
    RespClearTaskData:bistream(buff, len)
    
    if RespClearTaskData.ucFlag == XH.bf.TaskXY.RespClearTaskData.FLAG.SUCCESS then
        if RespClearTaskData.nTaskId == self._taskID then
            local CollectMah = {}
            CollectMah.nTaskId = RespClearTaskData.nTaskId
            CollectMah.nComplete = RespClearTaskData.nComplete
            CollectMah.nTotal = RespClearTaskData.nTotal
            CollectMah.acData = RespClearTaskData.acData
            self:success(CollectMah)
        end
    elseif RespClearTaskData.ucFlag == XH.bf.TaskXY.RespClearTaskData.FLAG.ERROR then
        self:setMessage("清空任务数据失败！")
        self:fail()
    end
end

return CellReqClearTaskData�