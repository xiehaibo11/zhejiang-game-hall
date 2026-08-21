local ReqVIPRollbackTransCard = class("ReqVIPRollbackTransCard", XH.ReqProtobuf)

function ReqVIPRollbackTransCard:ctor()
    ReqVIPRollbackTransCard.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPRollbackTransCardRequest
end

function ReqVIPRollbackTransCard:start(timeoutTime, log_index)
    if ReqVIPRollbackTransCard.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.log_index = log_index
    self:sendProtobufMsg()
end

function ReqVIPRollbackTransCard:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPRollbackTransCard