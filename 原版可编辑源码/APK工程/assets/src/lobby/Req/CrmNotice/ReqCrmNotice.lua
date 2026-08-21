local ReqCrmNoticeRequest = class("ReqCrmNoticeRequest", XH.ReqProtobuf)
function ReqCrmNoticeRequest:ctor()
    ReqCrmNoticeRequest.super.ctor(self)
    self._protobuf = require("app.Protobuf.CrmNoticeProtobuf")
    self._reqProtobuf = self._protobuf.GetCrmNoticeRequest
end

function ReqCrmNoticeRequest:start(timeoutTime, reqData)
    if ReqCrmNoticeRequest.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.tenant_id = reqData and reqData.tenantid or XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = reqData and reqData.areaid or XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = reqData and reqData.numid or XH.playerData:getNumberID()
    self:sendProtobufMsg()
end

function ReqCrmNoticeRequest:onMsgReceive(msgData)
    if msgData and msgData.nXYData then
        self:success(msgData)
    else 
        self:fail(msgData)
    end
end

return ReqCrmNoticeRequest