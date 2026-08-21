local ReqVIPResetPasswd = class("ReqVIPResetPasswd", XH.ReqProtobuf)

function ReqVIPResetPasswd:ctor()
    ReqVIPResetPasswd.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPResetPasswdRequest
end

function ReqVIPResetPasswd:start(timeoutTime, reqData)
    if ReqVIPResetPasswd.super.start(self, timeoutTime) == false then
        return
    end
    self:sendProtobufMsg()
end

function ReqVIPResetPasswd:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPResetPasswd