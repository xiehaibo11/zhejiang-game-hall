local ReqCutCardsStateRequest = class("ReqCutCardsStateRequest", XH.ReqProtobuf)

function ReqCutCardsStateRequest:ctor()
    ReqCutCardsStateRequest.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.CutCardsStateRequest
end

function ReqCutCardsStateRequest:start(timeoutTime, state)
    if ReqCutCardsStateRequest.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = XH.playerData:getNumberID()
    self._reqProtobuf.data.state = state
    self:sendProtobufMsg()
end

function ReqCutCardsStateRequest:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.count then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqCutCardsStateRequest
