local ReqVIPSetNeedSure = class("ReqVIPSetNeedSure", XH.ReqProtobuf)

function ReqVIPSetNeedSure:ctor()
    ReqVIPSetNeedSure.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPSetNeedSureRequest
end

function ReqVIPSetNeedSure:start(timeoutTime, needSure)
    if ReqVIPSetNeedSure.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.need_sure_again = needSure
    self:sendProtobufMsg()
end

function ReqVIPSetNeedSure:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPSetNeedSure