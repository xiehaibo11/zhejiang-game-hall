local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqPlayerMatchInfo = class("CellReqPlayerMatchInfo", CellProtocol)

function CellReqPlayerMatchInfo:start(timeoutTime, processID, appID, playerMatchInfo, srsGroupID)
    processID = processID or 0
    appID = appID or 0
    srsGroupID = nil
    if CellReqPlayerMatchInfo.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end

    local reqPlayerMatchInfo = XH.bf.Match32XY.ReqPlayerMatchinfo:new()
    reqPlayerMatchInfo.askid = 0
    reqPlayerMatchInfo.matchid = playerMatchInfo.matchid
    reqPlayerMatchInfo.subid = playerMatchInfo.subid

    --XH.GT.addProtocolScriptFuncByObj(self,self.onReceivePlayerMatchInfo,srsGroupID,processID)
    XH.GT.sendPacket(reqPlayerMatchInfo,appID,srsGroupID,processID)
end

function CellReqPlayerMatchInfo:onReceivePlayerMatchInfo(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.Match32XY.RespPlayerMatchinfo.XY_ID then
        return
    end

    local respPlayerMatchinfo = XH.bf.Match32XY.RespPlayerMatchinfo:new()
    respPlayerMatchinfo:bistream(buff, len)
    self:success(respPlayerMatchinfo)
end

return CellReqPlayerMatchInfo