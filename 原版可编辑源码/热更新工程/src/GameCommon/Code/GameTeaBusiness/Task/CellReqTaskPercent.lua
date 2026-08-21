local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqTaskPercent = class("CellReqTaskPercent", CellProtocol)

function CellReqTaskPercent:ctor()
    CellReqTaskPercent.super.ctor(self)
    self._appID = 0 
    self._taskID = 0 
end

function CellReqTaskPercent:start(NumberID,timeoutTime,srsGroupID,appID ,processID,taskId)
    processID = processID or 0
    self._appID = appID or 0
    srsGroupID = nil
    if CellReqTaskPercent.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    self._taskID = taskId
    local ReqTaskPercent = XH.bf.TaskXY.ReqTaskPercent:new()
    ReqTaskPercent.nAskId = os.time()
    ReqTaskPercent.nTaskId = taskId
 
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveTaskPercent,srsGroupID,processID)
    XH.GT.sendPacket(ReqTaskPercent,self._appID,srsGroupID,processID)
end

function CellReqTaskPercent:onReceiveTaskPercent(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.TaskXY.RespTaskPercent.XY_ID then
        return
    end

    local RespTaskPercent = XH.bf.TaskXY.RespTaskPercent:new()
    RespTaskPercent:bistream(buff, len)
    
    if RespTaskPercent.ucFlag == XH.bf.TaskXY.RespTaskPercent.FLAG.SUCCESS then
        if RespTaskPercent.nTaskId == self._taskID then
            local CollectMah = {}
            CollectMah.nTaskId = RespTaskPercent.nTaskId
            CollectMah.nComplete = RespTaskPercent.nComplete
            CollectMah.nTotal = RespTaskPercent.nTotal
            CollectMah.acData = RespTaskPercent.acData
            self:success(CollectMah)
        end
    elseif RespTaskPercent.ucFlag == XH.bf.TaskXY.RespTaskPercent.FLAG.ERROR then
        self:setMessage("请求任务进度失败！")
        self:fail()
    end
end

return CellReqTaskPercent