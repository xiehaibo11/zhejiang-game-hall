local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqMatchList = class("CellReqMatchList", CellProtocol)

function CellReqMatchList:ctor()
    CellReqMatchList.super.ctor(self)
    self._appID = 0
    self._matchID = 0
    self._processID = nil
end

function CellReqMatchList:start(matchid, timeoutTime, processID, appID, srsGroupID)
    processID = processID or 0
    self._appID = appID or 0
    self._processID = processID
    srsGroupID = nil
    self._matchID = matchid
    if CellReqMatchList.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end

    local reqMatchConfig = XH.bf.Match32XY.ReqMatchList:new()
    reqMatchConfig.askid = 0
    reqMatchConfig.matchid = matchid

    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveMatchList,srsGroupID,processID)
    XH.GT.sendPacket(reqMatchConfig,self._appID,srsGroupID,processID)
end

function CellReqMatchList:onReceiveMatchList(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.Match32XY.RespMatchList.XY_ID then
        return
    end

    local respMatchList = XH.bf.Match32XY.RespMatchList:new()
    respMatchList:bistream(buff, len)
    respMatchList.matchid = self._matchID
    
    if respMatchList.cnt > 0 then
        self:success(respMatchList)
    else
        self:fail()
    end
end

return CellReqMatchList�