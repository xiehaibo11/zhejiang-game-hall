local ReqTeaList = class("ReqTeaList", XH.ReqProtocol)

function ReqTeaList:ctor()
    ReqTeaList.super.ctor(self)

    self._teaHouseList = {}
end

function ReqTeaList:start(timeoutTime)
    if ReqTeaList.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqTeaHouseInfo:new()

    req.askid = self._askID
    req.reqbit = req.EXTRAINFO.HAVE_CAN_JOIN_TABLE

    self:sendMsg(req, XH.BoxDataProtocol.RespTeaHouseInfo, srsGroupID)
end

function ReqTeaList:onMsgReceive(data)
    if self._askID ~= data.askid then
        return
    end

    if data.current > 0 then
        table.insert(self._teaHouseList, clone(data.teaInfo))
    end
    if data.current == data.total then
        self:success(self._teaHouseList)
    end
end

return ReqTeaList