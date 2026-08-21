local ReqTeaHouseAutoUpgrade = class("ReqTeaHouseAutoUpgrade", XH.ReqProtocol)

function ReqTeaHouseAutoUpgrade:start(timeoutTime)
    if ReqTeaHouseAutoUpgrade.super.start(self, timeoutTime) == false then
        return
    end
    -- local groupNum = XH.lobby:getModule("Im"):getIMData():getGroupList()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqTeaHouseAutoUpgrade:new()
    tReq.askid = self._askID
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespTeaHouseAutoUpgrade, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqTeaHouseAutoUpgrade:onRespTeaHouseAutoUpgrade(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespTeaHouseAutoUpgrade.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local respOpenTeaHouse = XH.TeaHouseProtocol.RespTeaHouseAutoUpgrade:new()
    respOpenTeaHouse:bistream(buff, len)

    self:success(respOpenTeaHouse)
end

return ReqTeaHouseAutoUpgrade