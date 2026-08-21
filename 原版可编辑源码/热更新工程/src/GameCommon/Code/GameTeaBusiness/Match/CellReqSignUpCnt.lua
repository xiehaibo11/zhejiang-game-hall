local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqSignUpCnt = class("CellReqSignUpCnt", CellProtocol)

function CellReqSignUpCnt:start(timeoutTime, processID, appID, matchInfo, srsGroupID)
    processID = processID or 0
    appID = appID or 0
    srsGroupID = nil
    if CellReqSignUpCnt.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end

    local reqMatchSignUpCnt = XH.bf.Match32XY.ReqSignupcnt:new()
    reqMatchSignUpCnt.askid = 0
    reqMatchSignUpCnt.matchid = matchInfo.matchid
    reqMatchSignUpCnt.subid = matchInfo.subid

    --XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveMatchSignUpCnt,srsGroupID,processID)
    XH.GT.sendPacket(reqMatchSignUpCnt,appID,srsGroupID,processID)
end

function CellReqSignUpCnt:onReceiveMatchSignUpCnt(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.Match32XY.RespSignupcnt.XY_ID then
        return
    end

    local respMatchSignUpCnt = XH.bf.Match32XY.RespSignupcnt:new()
    respMatchSignUpCnt:bistream(buff, len)
    self:success(respMatchSignUpCnt)
end

return CellReqSignUpCnt