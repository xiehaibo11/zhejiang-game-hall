local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqGetTaskAward = class("CellReqGetTaskAward", CellProtocol)

function CellReqGetTaskAward:ctor()
    CellReqGetTaskAward.super.ctor(self)
    self._appID = 0 
    self._taskID = 0  
end

function CellReqGetTaskAward:start(NumberID,timeoutTime,srsGroupID,appID ,processID,taskId)
    processID = processID or 0
    self._appID = appID or 0
    srsGroupID = nil
    if CellReqGetTaskAward.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    self._taskID = taskId
    local ReqGetTaskAward = XH.bf.TaskXY.ReqGetTaskAward:new()
    ReqGetTaskAward.nAskId = os.time()
    ReqGetTaskAward.nTaskId = taskId
 
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveTaskAward,srsGroupID,processID)
    XH.GT.sendPacket(ReqGetTaskAward,self._appID,srsGroupID,processID)
end

function CellReqGetTaskAward:onReceiveTaskAward(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.TaskXY.RespGetTaskAward.XY_ID then
        return
    end

    local RespGetTaskAward = XH.bf.TaskXY.RespGetTaskAward:new()
    RespGetTaskAward:bistream(buff, len)
    
    if RespGetTaskAward.ucFlag == XH.bf.TaskXY.RespTaskConfig.FLAG.SUCCESS then
        if RespGetTaskAward.nTaskId == self._taskID then
            local CollectMah = {}
            CollectMah.nTaskId = RespGetTaskAward.nTaskId
            CollectMah.acData = RespGetTaskAward.acData
            self:success(CollectMah)
        end
    elseif RespGetTaskAward.ucFlag == XH.bf.TaskXY.RespGetTaskAward.FLAG.ERROR then
        self:setMessage("请求任务奖励失败！")
        self:fail()
    end
end

return CellReqGetTaskAward/