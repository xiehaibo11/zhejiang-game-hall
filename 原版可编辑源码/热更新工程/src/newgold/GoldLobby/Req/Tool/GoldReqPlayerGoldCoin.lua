local GoldReqPlayerGoldCoin = class("GoldReqPlayerGoldCoin", NG.GoldProtocolReq)

function GoldReqPlayerGoldCoin:ctor()
    GoldReqPlayerGoldCoin.super.ctor(self)
end

function GoldReqPlayerGoldCoin:start(gameID, srsgroupid, timeout)
    if GoldReqPlayerGoldCoin.super.start(self, timeout, srsgroupid) == false then
        return
    end
    local reqSr = NG.ToolProtocol.ReqSR:new()
    reqSr.gameid = gameID
    reqSr.askid = 0
    self:sendMsg(reqSr, NG.ToolProtocol.ResSR, srsgroupid, 0)
end

function GoldReqPlayerGoldCoin:onMsgReceive(msgData)
    if msgData.flag == NG.ToolProtocol.ResSR.FLAG.SUCCESS then
        self:success(msgData)
    else
        local msg = self:getErrInfoMsg(msgData.flag)
        self:setMessage(msg)
        self:fail()
    end
end

function GoldReqPlayerGoldCoin:getErrInfoMsg(flag)
    if flag then
        for i, v in pairs(NG.ToolProtocol.ResSR.FLAG) do
            if flag == v then
                return NG.ConstString.getStr(i)
            end
        end
    end
    return ""
end

return GoldReqPlayerGoldCoin
