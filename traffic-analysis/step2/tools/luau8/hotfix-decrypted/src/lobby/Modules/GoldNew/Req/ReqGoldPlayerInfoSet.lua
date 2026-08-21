local ReqGoldPlayerInfoSet = class("ReqGoldPlayerInfoSet", XH.ReqProtobuf50)
function ReqGoldPlayerInfoSet:ctor()
    ReqGoldPlayerInfoSet.super.ctor(self)
end

function ReqGoldPlayerInfoSet:start(param, timeoutTime)
    if ReqGoldPlayerInfoSet.super.start(self, timeoutTime) == false then
        return
    end
    self._askid = XH.askIDManager:getAskID()
    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        opt_type = param.type,
        gold_nick = param.nick,
        gold_sex = param.sex,
        gold_head_idx = param.headIdx
        -- page_idx = param.pageIdx
    }

    self:sendProtobuf(protocol, XH.PyrrlaProtobuf.GoldPlayerInfoSetRequest, XH.PyrrlaProtobuf.GoldPlayerInfoSetReply)
end

function ReqGoldPlayerInfoSet:onMsgReceive(msgData)
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

return ReqGoldPlayerInfoSet
r