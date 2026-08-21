local ReqAcceptRecallRewards = class("ReqAcceptRecallRewards", XH.ReqProtobuf)

function ReqAcceptRecallRewards:ctor()
    ReqAcceptRecallRewards.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.AcceptRecallRewardsRequest
    self._ask_id = -1
end

function ReqAcceptRecallRewards:start(timeoutTime, user_id, prop_id, club_id)
    if ReqAcceptRecallRewards.super.start(self, timeoutTime) == false then
        return
    end
    self._reqProtobuf.data.tenant_id = XH.areaData:getTenantid()
    self._reqProtobuf.data.area_id = XH.areaData:getAreaID()
    self._reqProtobuf.data.club_id = club_id or 0
    self._reqProtobuf.data.user_id = user_id or 0
    self._reqProtobuf.data.device_type = 0
    self._reqProtobuf.data.prop_id = prop_id
    self._reqProtobuf.get_reward_user_id = XH.playerData:getNumberID()
    if device.platform == "android" then
        self._reqProtobuf.data.device_type = 2
    elseif device.platform == "ios" then
        self._reqProtobuf.data.device_type = 1
    end
    self._reqProtobuf.data.ask_id = os.time()
    self._ask_id = self._reqProtobuf.data.ask_id
    self:sendProtobufMsg()
end

function ReqAcceptRecallRewards:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.cr.err_code == 0 then
        self:success(msgData)
    else
        if msgData.nXYData.cr.err_code and self._protobuf.errorCode[msgData.nXYData.cr.err_code] then
            local errorText = self._protobuf.errorCode[msgData.nXYData.cr.err_code]
            XH.TipTool.showToast( errorText, 2)
        end
        self:fail(msgData)
    end
end

return ReqAcceptRecallRewardsK