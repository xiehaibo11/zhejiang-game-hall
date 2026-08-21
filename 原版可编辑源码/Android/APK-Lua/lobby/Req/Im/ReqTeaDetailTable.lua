local ReqTeaDetailTable = class("ReqTeaDetailTable", XH.ReqProtocol)

function ReqTeaDetailTable:start(teaid, curPage, timeoutTime)
    if ReqTeaDetailTable.super.start(self, timeoutTime) == false then
        return
    end
    curPage = curPage or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqTeaHouseTableInfo:new()

    req.askid = self._askID
    req.teaid = teaid
    req.cur_package = curPage

    self:sendMsg(req, XH.BoxDataProtocol.RespTeaHouseTableInfo, srsGroupID)
end

function ReqTeaDetailTable:onMsgReceive(data)
    if self._askID ~= data.askid then
        return
    end

    local errorcode = data.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS then
        self:success(data)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqTeaDetailTable:getErrInfoMsg(flag)
    if flag then
        return "获取亲友圈桌子失败" .. flag
    end
    return "获取亲友圈桌子失败"
end

return ReqTeaDetailTable