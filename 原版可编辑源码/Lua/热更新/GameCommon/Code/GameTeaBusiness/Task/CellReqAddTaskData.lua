local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqAddTaskData = class("CellReqAddTaskData", CellProtocol)

function CellReqAddTaskData:ctor()
    CellReqAddTaskData.super.ctor(self)
    self._appID = 0 
    self._taskID = 0 
end

function CellReqAddTaskData:start(NumberID,timeoutTime,srsGroupID,appID ,processID,taskId,str)
    processID = processID or 0
    self._appID = appID or 0
    srsGroupID = nil
    if CellReqAddTaskData.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    self._taskID = taskId
    local ReqAddTaskData = XH.bf.TaskXY.ReqAddTaskData:new()
    ReqAddTaskData.nAskId = os.time()
      ReqAddTaskData.acTaskData = str
   
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveAddTaskData,srsGroupID,processID)
    XH.GT.sendPacket(ReqAddTaskData,self._appID,srsGroupID,processID)
end

function CellReqAddTaskData:onReceiveAddTaskData(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.TaskXY.RespAddTaskData.XY_ID then
        return
    end

    local RespAddTaskData = XH.bf.TaskXY.RespAddTaskData:new()
    RespAddTaskData:bistream(buff, len)
    if RespAddTaskData.ucFlag == XH.bf.TaskXY.RespAddTaskData.FLAG.SUCCESS then
        local CollectMah = {}
        CollectMah.nAskId = RespAddTaskData.nAskId
    elseif RespAddTaskData.ucFlag == XH.bf.TaskXY.RespAddTaskData.FLAG.ERROR then
        self:setMessage("添加任务数据失败！")
        self:fail()
    end
end

return CellReqAddTaskData