local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqJoinMatchSystem = class("CellReqJoinMatchSystem", CellProtocol)

function CellReqJoinMatchSystem:ctor()
    CellReqJoinMatchSystem.super.ctor(self)
    self._appID = 0
    self._reqType = 0
end

function CellReqJoinMatchSystem:start(type, timeoutTime, processID, appID, srsGroupID)
    processID = processID or 0
    self._appID = appID or 0
    srsGroupID = nil
    if CellReqJoinMatchSystem.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end

    local reqJoinMatch = XH.bf.Match32XY.ReqJoinMatchSystem:new()
    reqJoinMatch.askid = 0
    reqJoinMatch.type = type
    self._reqType = type
    
    if type == 0  then
        XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveJoinMatch,srsGroupID,processID)
    end
    XH.GT.sendPacket(reqJoinMatch,self._appID,srsGroupID,processID)
end

function CellReqJoinMatchSystem:onReceiveJoinMatch(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.Match32XY.RespJoinMatchSystem.XY_ID then        
        return
    end
    
    local respJoinMatch = XH.bf.Match32XY.RespJoinMatchSystem:new()
    respJoinMatch:bistream(buff, len)

    if respJoinMatch.flag == XH.bf.Match32XY.RespJoinMatchSystem.FLAG.SUCCESS then  
        respJoinMatch.type = self._reqType
        self:success(self._appID)
    elseif respJoinMatch.flag == XH.bf.Match32XY.RespJoinMatchSystem.FLAG.NOREADY then
        self:setMessage("比赛服务未准备好")
        self:fail()
    elseif respJoinMatch.flag == XH.bf.Match32XY.RespJoinMatchSystem.FLAG.FAILED then
        self:setMessage("加入比赛失败")
        self:fail()
    end
end

return CellReqJoinMatchSystemK