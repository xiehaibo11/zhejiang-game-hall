local ReqHasRecallRewards = class("ReqHasRecallRewards", XH.ReqProtobuf)

function ReqHasRecallRewards:ctor()
    ReqHasRecallRewards.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.HasRecallRewardsRequest
    self._ask_id = -1
end

function ReqHasRecallRewards:start(timeoutTime, club_id)
    if ReqHasRecallRewards.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.club_id = club_id or 0
    self._reqProtobuf.data.user_id = XH.playerData:getNumberID()
    self._reqProtobuf.data.ask_id = os.time()
    self._ask_id = self._reqProtobuf.data.ask_id
    self:sendProtobufMsg()
end

function ReqHasRecallRewards:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.cr.err_code == 0 then
        -- 修改为以服务下发的为准，不再自行判断是否是副领队
        XH.lobby:getModule("Recall"):setIsClubManager(msgData.nXYData.is_club_manager)
        self:success(msgData)
    else 
        self:fail(msgData)
    end
end

return ReqHasRecallRewards