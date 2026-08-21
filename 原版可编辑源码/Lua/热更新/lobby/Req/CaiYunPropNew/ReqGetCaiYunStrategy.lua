local ReqGetCaiYunStrategy = class("ReqGetCaiYunStrategy", XH.ReqProtobuf)

function ReqGetCaiYunStrategy:ctor()
    ReqGetCaiYunStrategy.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.LimitedTimeOfferRequest
    self._ask_id = -1
end

function ReqGetCaiYunStrategy:start(timeoutTime)
    if ReqGetCaiYunStrategy.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time() + tonumber(XH.playerData:getNumberID())%10000
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = XH.playerData:getNumberID()
    self._reqProtobuf.data.ask_id = self._ask_id
    self:sendProtobufMsg()
end

function ReqGetCaiYunStrategy:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.resp then
        return
    end
    if msgData.nXYData.resp.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.resp.err_code == 0 then
        self:success(msgData.nXYData)
    else 
        self:fail(msgData)
    end
end

return ReqGetCaiYunStrategy