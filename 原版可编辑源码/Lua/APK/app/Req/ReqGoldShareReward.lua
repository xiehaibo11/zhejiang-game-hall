local ReqGoldShareReward = class("ReqGoldShareReward", XH.ReqProtobuf)

function ReqGoldShareReward:ctor()
    ReqGoldShareReward.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.GoldRoomShareRewardRequest
end

function ReqGoldShareReward:start(timeoutTime, roomid, creattime, score, type, appid, tableid)
    if ReqGoldShareReward.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time() + tonumber(XH.playerData:getNumberID())%10000
    self._reqProtobuf.data.ask_id = self._ask_id
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.user_id = XH.playerData:getNumberID()
    self._reqProtobuf.data.room_id = roomid
    self._reqProtobuf.data.create_time = creattime
    self._reqProtobuf.data.score = score
    self._reqProtobuf.data.reward_type = type
    self._reqProtobuf.data.app_id = appid
    self._reqProtobuf.data.table_id = tableid
    self:sendProtobufMsg()
end

function ReqGoldShareReward:onMsgReceive(msgData)
    if msgData and msgData.nXYData then
        self:success(msgData.nXYData)
    else
        self:fail(msgData)
    end
end

return ReqGoldShareReward
