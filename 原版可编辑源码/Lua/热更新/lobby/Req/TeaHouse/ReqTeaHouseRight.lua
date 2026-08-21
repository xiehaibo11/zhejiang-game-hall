---@class ReqTeaHouseRight
local ReqTeaHouseRight = class("ReqTeaHouseRight", XH.ReqProtocol)

function ReqTeaHouseRight:ctor()
    ReqTeaHouseRight.super.ctor(self)
    self._nAskid = 0
end

function ReqTeaHouseRight:start(areaID, numID, timeoutTime)
    if ReqTeaHouseRight.super.start(self, timeoutTime) == false then
        return
    end

    local req = XH.TeaHouseProtocol.ReqTeaHouseRight:new()
    req.nAskid = self._askID
    self._nAskid = req.nAskid
    req.nAreaid = areaID
    req.nNumid = numID
    self:sendMsg(req, XH.TeaHouseProtocol.RespTeaHouseRight, XH.areaData:getSrsGroupID(), XH.areaData:getTeaHouseAppID())
end

function ReqTeaHouseRight:onMsgReceive(msgData)
	if self._nAskid ~= msgData.nAskid then
        return
    end
    if msgData.nResult == XH.TeaHouseProtocol.RespTeaHouseRight.RETVAL.OK then
        self:success(msgData)
    else
        self:fail()
    end
end

return ReqTeaHouseRight