local ReqGoldShareRewardCount = class("ReqGoldShareRewardCount", XH.ReqProtobuf)

function ReqGoldShareRewardCount:ctor()
    ReqGoldShareRewardCount.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.GetGoldRoomShareRewardCountRequest
end

function ReqGoldShareRewardCount:start(timeoutTime, type)
    if ReqGoldShareRewardCount.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time() + tonumber(XH.playerData:getNumberID())%10000
    self._reqProtobuf.data.ask_id = self._ask_id
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = XH.playerData:getNumberID()
    self._reqProtobuf.data.reward_type = type
    self:sendProtobufMsg()
end

function ReqGoldShareRewardCount:onMsgReceive(msgData)
    if msgData and msgData.nXYData then
        self:success(msgData.nXYData)
    else
        self:fail(msgData)
    end
end

return ReqGoldShareRewardCount
