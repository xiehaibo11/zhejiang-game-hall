local ReqKickUser = class("ReqKickUser", XH.ReqProtocol)

function ReqKickUser:start(teaId,numId,timeoutTime)
    if ReqKickUser.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqKickUser:new()
    tReq.nAskId = self._askID
    tReq.tableid = 0
    tReq.areaid = XH.areaData:getAreaID()
    tReq.numid = numId
    tReq.teaid = teaId or 0
    tReq.ucType = 2
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespKickUser, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqKickUser:onRespKickUser(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespKickUser.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local RespKickUser = XH.TeaHouseProtocol.RespKickUser:new()
    RespKickUser:bistream(buff, len)

    self:success(RespKickUser)
end

return ReqKickUser6