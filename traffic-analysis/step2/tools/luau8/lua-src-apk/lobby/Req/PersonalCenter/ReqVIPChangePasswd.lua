local ReqVIPChangePasswd = class("ReqVIPChangePasswd", XH.ReqProtobuf)

function ReqVIPChangePasswd:ctor()
    ReqVIPChangePasswd.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPChangePasswdRequest
end

function ReqVIPChangePasswd:start(timeoutTime, oldPwd, newPwd)
    if ReqVIPChangePasswd.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.old_pwd = oldPwd
    self._reqProtobuf.data.new_pwd = newPwd
    self:sendProtobufMsg()
end

function ReqVIPChangePasswd:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPChangePasswdG