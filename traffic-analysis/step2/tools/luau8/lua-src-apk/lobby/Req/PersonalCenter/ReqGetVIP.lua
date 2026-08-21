local ReqGetVIPRequest = class("ReqGetVIPRequest", XH.ReqProtobuf)

function ReqGetVIPRequest:ctor()
    ReqGetVIPRequest.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.GetVIPRequest
end

function ReqGetVIPRequest:start(timeoutTime, reqData)
    if ReqGetVIPRequest.super.start(self, timeoutTime) == false then
        return
    end
    self:sendProtobufMsg()
end

function ReqGetVIPRequest:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else 
        self:fail(msgData)
    end
end

return ReqGetVIPRequest�