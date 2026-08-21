local ReqTeaHouseCost = class("ReqTeaHouseCost", XH.ReqProtocol)

function ReqTeaHouseCost:start(teaId,timeoutTime)
    if ReqTeaHouseCost.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.ActiveProtocol.ReqTeaHouseCost:new()
    tReq.nAskid = self._askID
    tReq.nAreaid = XH.areaData:getAreaID()
    tReq.nTeaid = teaId or 0
    tReq.nDay = os.time()
    
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespTeaHouseCost, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, 0, srsGroupID)
end

function ReqTeaHouseCost:onRespTeaHouseCost(XYID, buff, len, processid)
    if XYID ~= XH.ActiveProtocol.RespTeaHouseCost.XY_ID then
        return
    end
    if processid ~= XH.ActiveProtocol.processid then
        return
    end
	local RespTeaHouseCost = XH.ActiveProtocol.RespTeaHouseCost:new()
    RespTeaHouseCost:bistream(buff, len)

    self:success(RespTeaHouseCost)
end

return ReqTeaHouseCost#