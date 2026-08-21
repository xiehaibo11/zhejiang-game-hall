local ReqGoldPlayerInfo = class("ReqGoldPlayerInfo", XH.ReqProtobuf50)
function ReqGoldPlayerInfo:ctor()
    ReqGoldPlayerInfo.super.ctor(self)
end

function ReqGoldPlayerInfo:start(param, timeoutTime)
    if ReqGoldPlayerInfo.super.start(self, timeoutTime) == false then
        return
    end
    self._askid = XH.askIDManager:getAskID()
    local protocol = {
        ask_id = self._askid,
        tenant_id = param.tenatId or XH.areaData:getTenantid(),
        area_id = param.areaId or XH.areaData:getAreaID(),
        user_id = param.userId or XH.playerData:getNumberID()
    }
    self:sendProtobuf(protocol, XH.PyrrlaProtobuf.GoldPlayerInfoRequest, XH.PyrrlaProtobuf.GoldPlayerInfoReply)
end

function ReqGoldPlayerInfo:onMsgReceive(msgData)
    if msgData.resp.ask_id ~= self._askid then
        return
    end
    if msgData.resp.err_code == 0 then
        self:success(msgData)
    else
        -- if msgData.resp.err_code and self._protobuf.errorCode[msgData.resp.err_code] then
        --     local errorText = self._protobuf.errorCode[msgData.resp.err_code]
        --     XH.TipTool.showToast( errorText, 2)
        -- end
        self:fail(msgData)
    end
end

return ReqGoldPlayerInfo
�