local GoldReqPlayerDrop = class("GoldReqPlayerDrop", NG.GoldProtocolReq)

function GoldReqPlayerDrop:ctor()
    GoldReqPlayerDrop.super.ctor(self)
end

function GoldReqPlayerDrop:start(gameID, srsgroupid, timeout)
    if GoldReqPlayerDrop.super.start(self, timeout, srsgroupid) == false then
        return
    end
    local reqPlayerPropsData = NG.ToolProtocol.ReqPlayerPropsData:new()
    reqPlayerPropsData.gameid = gameID
    reqPlayerPropsData.askid = 1
    self:sendMsg(reqPlayerPropsData, NG.ToolProtocol.RespPlayerPropsData, srsgroupid, 0)
end

function GoldReqPlayerDrop:onMsgReceive(msgData)
    if msgData.flag == NG.ToolProtocol.RespPlayerPropsData.FLAG.SUCCESS then
        self:success(msgData)
    else
        local msg = self:getErrInfoMsg(msgData.flag)
        self:setMessage(msg)
        self:fail()
    end
end

function GoldReqPlayerDrop:getErrInfoMsg(flag)
    if flag then
        for i, v in pairs(NG.ToolProtocol.RespPlayerPropsData.FLAG) do
            if flag == v then
                return NG.ConstString.getStr(i)
            end
        end
    end
    return ""
end

return GoldReqPlayerDrop
