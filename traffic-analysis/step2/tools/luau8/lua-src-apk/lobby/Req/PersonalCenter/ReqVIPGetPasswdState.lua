local ReqVIPGetPasswdState = class("ReqVIPGetPasswdState", XH.ReqProtobuf)

function ReqVIPGetPasswdState:ctor()
    ReqVIPGetPasswdState.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPGetPasswdStateRequest
end

function ReqVIPGetPasswdState:start(timeoutTime, reqData)
    if ReqVIPGetPasswdState.super.start(self, timeoutTime) == false then
        return
    end
    self:sendProtobufMsg()
end

function ReqVIPGetPasswdState:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPGetPasswdState�