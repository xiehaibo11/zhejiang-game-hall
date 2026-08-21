-- ReqUsePropsByProtobuf，srs已经连接到50，直接请求50协议使用道具。
local ReqUseEquipState = class("ReqUseEquipState", XH.ReqProtobuf50)
function ReqUseEquipState:ctor()
    ReqUseEquipState.super.ctor(self)
end

function ReqUseEquipState:start(data, successCall, timeoutTime)
    if ReqUseEquipState.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    self._successCall = successCall
    local protocol = {ask_id = os.time(), tenant_id = XH.areaData:getTenantid(), area_id = XH.areaData:getAreaID(), info = {}}
    for i = 1, #data.numids do
        for j = 1, #data.equips do
            table.insert(protocol.info, {user_id = data.numids[i], equip = data.equips[j]})
        end
    end
    self:sendProtobuf(protocol, XH.RheaProtobuf.GetEquipPropsRequest, XH.RheaProtobuf.GetEquipPropsReply)
end

function ReqUseEquipState:onMsgReceive(msgData)
    if msgData and msgData.resp.err_code == 0 then
        self:success(msgData)
        if self._successCall then
            self._successCall(msgData)
        end
    else
        self:fail(msgData)
    end
end

return ReqUseEquipState
�