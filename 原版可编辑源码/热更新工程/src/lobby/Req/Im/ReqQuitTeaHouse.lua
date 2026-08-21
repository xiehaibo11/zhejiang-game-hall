local ReqQuitTeaHouse = class("ReqQuitTeaHouse", XH.ReqProtocol)

function ReqQuitTeaHouse:ctor()
    ReqQuitTeaHouse.super.ctor(self)
    self._infoList = {}
end

function ReqQuitTeaHouse:start(teaNumber,timeoutTime)
    if ReqQuitTeaHouse.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqQuitTeaHouse:new()
    tReq.askid = self._askID
    tReq.teaNumber = teaNumber

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespQuitTeaHouse, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqQuitTeaHouse:onRespQuitTeaHouse(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespQuitTeaHouse.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local respQuitTeaHouse = XH.TeaHouseProtocol.RespQuitTeaHouse:new()
    respQuitTeaHouse:bistream(buff, len)
    self:success(respQuitTeaHouse)
end

return ReqQuitTeaHouse