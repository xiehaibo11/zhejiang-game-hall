local ReqCloseTeaHouse = class("ReqCloseTeaHouse", XH.ReqProtocol)

function ReqCloseTeaHouse:ctor()
    ReqCloseTeaHouse.super.ctor(self)
    self._infoList = {}
end

function ReqCloseTeaHouse:start(teaNumber,timeoutTime)
    if ReqCloseTeaHouse.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqCloseTeaHouse:new()
    tReq.askid = self._askID
    tReq.teaNumber = teaNumber

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespCloseTeaHouse, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqCloseTeaHouse:onRespCloseTeaHouse(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespCloseTeaHouse.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local respCloseTeaHouse = XH.TeaHouseProtocol.RespCloseTeaHouse:new()
    respCloseTeaHouse:bistream(buff, len)
    self:success(respCloseTeaHouse)
end

return ReqCloseTeaHousew