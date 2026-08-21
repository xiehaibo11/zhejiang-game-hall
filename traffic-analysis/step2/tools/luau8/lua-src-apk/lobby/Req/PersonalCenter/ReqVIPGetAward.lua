local ReqVIPGetAward = class("ReqVIPGetAward", XH.ReqProtobuf)

function ReqVIPGetAward:ctor()
    ReqVIPGetAward.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPGetAwardRequest
end

function ReqVIPGetAward:start(timeoutTime, reqData)
    if ReqVIPGetAward.super.start(self, timeoutTime) == false then
        return
    end    
    self:sendProtobufMsg()
end

function ReqVIPGetAward:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPGetAward�