local ReqOpenTeaHouse = class("ReqOpenTeaHouse", XH.ReqProtocol)

function ReqOpenTeaHouse:start(timeoutTime)
    if ReqOpenTeaHouse.super.start(self, timeoutTime) == false then
        return
    end
    local groupNum = XH.lobby:getModule("Im"):getIMData():getGroupList()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqOpenTeaHouse:new()
    tReq.nAskid = self._askID
    if next(groupNum) ~= nil then
        tReq.name = "分组".. (#groupNum + 1)
    else
        tReq.name = "分组1"
    end
    tReq.propid = XH.areaData:getPropRoomCardID()
    tReq.nLevel = 100
    
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRepOpenTeaHouse, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqOpenTeaHouse:onRepOpenTeaHouse(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespOpenTeaHouse.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local respOpenTeaHouse = XH.TeaHouseProtocol.RespOpenTeaHouse:new()
    respOpenTeaHouse:bistream(buff, len)

    self:success(respOpenTeaHouse)
end

return ReqOpenTeaHouse�