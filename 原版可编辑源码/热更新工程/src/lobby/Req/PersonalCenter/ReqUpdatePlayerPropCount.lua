local ReqUpdatePlayerPropCount = class("ReqUpdatePlayerPropCount", XH.ReqProtobuf)

function ReqUpdatePlayerPropCount:ctor()
    ReqUpdatePlayerPropCount.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.UpdatePlayerPropCountRequest
end

function ReqUpdatePlayerPropCount:start(timeoutTime)
    if ReqUpdatePlayerPropCount.super.start(self, timeoutTime) == false then
        return
    end
    self:sendProtobufMsg()
end

function ReqUpdatePlayerPropCount:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        self:success(msgData)
    end
end

function ReqUpdatePlayerPropCount:success(data)
    if self:getMessage() == "" then
        self:setMessage(XH.ConstString.getStr("MSG_SEND_SUCCESS"))
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in ipairs(self._callBacks) do
        v.f(v.c, self, self.TYPE.SUCCESS, data);
    end
    self._callBacks = {}
end

function ReqUpdatePlayerPropCount:fail(data)
    if self:getMessage() == "" then
        self:setMessage(XH.ConstString.getStr("MSG_SEND_FAIL"))
    end
    print(self.class.__cname .. self:getMessage())
    self._endTime = socket.gettime()
    for _, v in ipairs(self._callBacks) do
        v.f(v.c, self, self.TYPE.FAIL, data);
    end
    self._callBacks = {}
    XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
end

function ReqUpdatePlayerPropCount:timeout(data)

end

function ReqUpdatePlayerPropCount:stop()
    if self._LogicScheduleScriptID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._LogicScheduleScriptID)
        self._LogicScheduleScriptID = 0
    end
    self._callBacks = {}
    self._isStart = false
end

return ReqUpdatePlayerPropCount