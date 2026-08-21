local ReqNewSpreadNotifyClub = class("ReqNewSpreadNotifyClub", XH.ReqProtobuf)

function ReqNewSpreadNotifyClub:ctor()
    ReqNewSpreadNotifyClub.super.ctor(self)
    local PromoteProtobuf = require("app.Protobuf.PromoteProtobuf")
    self._protobuf = PromoteProtobuf.MinosConfig
    self._reqProtobuf = PromoteProtobuf.ReqNotifyClubInfo
    self._ask_id = -1
end

function ReqNewSpreadNotifyClub:start(timeoutTime, clubId, info, infoType)
    if ReqNewSpreadNotifyClub.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.club_id = clubId or 0
    self._reqProtobuf.data.info = info or ""
    self._reqProtobuf.data.info_type = infoType or 1
    self._reqProtobuf.data.role_type = {100, 80, 70}
    self:sendProtobufMsg()
end

function ReqNewSpreadNotifyClub:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.err_code == nil or msgData.nXYData.cr.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqNewSpreadNotifyClub
