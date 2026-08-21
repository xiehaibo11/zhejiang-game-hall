local ReqVIPConfig = class("ReqVIPConfig", XH.ReqProtobuf)

function ReqVIPConfig:ctor()
    ReqVIPConfig.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPConfigRequest
end

function ReqVIPConfig:start(timeoutTime, reqData)
    if ReqVIPConfig.super.start(self, timeoutTime) == false then
        return
    end
    self:sendProtobufMsg()
end

function ReqVIPConfig:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPConfig�