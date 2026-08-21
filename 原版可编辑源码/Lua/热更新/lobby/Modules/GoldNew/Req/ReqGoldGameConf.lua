local ReqGoldGameConf = class("ReqGoldGameConf", XH.ReqProtobuf50)
function ReqGoldGameConf:ctor()
    ReqGoldGameConf.super.ctor(self)
end

function ReqGoldGameConf:start(gameid, timeoutTime)
    if ReqGoldGameConf.super.start(self, timeoutTime) == false then
        return
    end
    self._askid = XH.askIDManager:getAskID()
    self._gameid = gameid
    local protocol = {
        ask_id = self._askid,
        game_id = gameid
    }
    self:sendProtobuf(protocol, XH.PyrrlaProtobuf.GoldGameConfRequest, XH.PyrrlaProtobuf.GoldGameConfReply)
end

function ReqGoldGameConf:onMsgReceive(msgData)
    if msgData.resp.ask_id ~= self._askid then
        return
    end
    msgData.gameid = self._gameid
    if msgData.resp.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqGoldGameConf
