local ReqUseEquipCardProtobuf = class("ReqUseEquipCardProtobuf", XH.ReqProtobuf50)
function ReqUseEquipCardProtobuf:ctor()
    ReqUseEquipCardProtobuf.super.ctor(self)
end

function ReqUseEquipCardProtobuf:start(param, timeoutTime)
    if ReqUseEquipCardProtobuf.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    self._propId = param.prop.prop_id
    local protocol = {
        ask_id = os.time(),
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        prop = param.prop,
    }
    protocol.custom = param.custom or ""
    protocol.custom = protocol.custom .. "taskname=equipProps;logtype=1601;"
    self:sendProtobuf(protocol,XH.RheaProtobuf.UseEquipCardRequest,XH.RheaProtobuf.UseEquipCardReply)
end

function ReqUseEquipCardProtobuf:onMsgReceive(msgData)
    if msgData and msgData.resp.err_code == 0 then
        msgData.prop_id = self._propId
        self:success(msgData)
    else
        self:fail(msgData)
    end
end


return ReqUseEquipCardProtobufm