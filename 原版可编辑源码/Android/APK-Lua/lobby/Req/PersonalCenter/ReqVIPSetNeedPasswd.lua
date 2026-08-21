local ReqVIPSetNeedPasswd = class("ReqVIPSetNeedPasswd", XH.ReqProtobuf)

function ReqVIPSetNeedPasswd:ctor()
    ReqVIPSetNeedPasswd.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPSetNeedPasswdRequest
end

function ReqVIPSetNeedPasswd:start(timeoutTime, pwd, needPwd)
    if ReqVIPSetNeedPasswd.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.pwd = pwd
    self._reqProtobuf.data.need_passwd = needPwd
    self:sendProtobufMsg()
end

function ReqVIPSetNeedPasswd:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPSetNeedPasswd