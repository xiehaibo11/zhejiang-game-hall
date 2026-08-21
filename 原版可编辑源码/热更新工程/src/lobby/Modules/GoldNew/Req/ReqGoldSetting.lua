local ReqGoldSetting = class("ReqGoldSetting", XH.ReqProtobuf50)
function ReqGoldSetting:ctor()
    ReqGoldSetting.super.ctor(self)
end

function ReqGoldSetting:start(param, timeoutTime)
    if ReqGoldSetting.super.start(self, timeoutTime) == false then
        return
    end
    local protocol = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        opt = param.opt,
        type = param.type,
        val = param.val
    }
    self._req = protocol
    self:sendProtobuf(protocol, XH.PyrrlaProtobuf.GoldSettingRequest, XH.PyrrlaProtobuf.GoldSettingReply)
end

function ReqGoldSetting:onMsgReceive(msgData)
    local data = msgData
    if data then
        data.req = self._req
        self:success(data)
    else
        self:fail({req = self._req})
    end
end

return ReqGoldSetting
