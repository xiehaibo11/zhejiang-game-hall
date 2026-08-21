local ReqListOnlineCount = class("ReqListOnlineCount", XH.ReqProtobuf50)
local ReqPlayerPosition50 = XH.Bridge:require("lobby.Req.Room.ReqPlayerPosition50")
function ReqListOnlineCount:ctor()
    ReqListOnlineCount.super.ctor(self)
end

function ReqListOnlineCount:start(param, timeoutTime)
    if ReqListOnlineCount.super.start(self, timeoutTime) == false then
        return
    end
    local protocol = {tenant_id = XH.areaData:getTenantid(), area_id = XH.areaData:getAreaID(), game_id = param.gameID}
    self:sendProtobuf(protocol, XH.PyrrlaProtobuf.ListOnlineCountRequest, XH.PyrrlaProtobuf.ListOnlineCountReply)
end

function ReqListOnlineCount:onMsgReceive(msgData)
    local data = msgData
    if data then
        if data.code == "GOLD_SUCCESS" or data.code == "GOLD_READY_SUCCESS" then
            self:success(data)
        else
            self:setMessage("未知错误" .. data.code)
            self:fail(data)
        end
    else
        self:fail(data)
    end
end

return ReqListOnlineCount
