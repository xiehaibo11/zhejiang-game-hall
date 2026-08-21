local ReqGetAward = class("ReqGetAward", XH.ReqProtocol)
local MailProtocol = require("app.Protocols.MailProtocol")

function ReqGetAward:start(count, mailIds, appid, timeoutTime)
    if ReqGetAward.super.start(self, timeoutTime) == false then
        return
    end

    self._askID = os.time()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqModel = MailProtocol.ReqGetAward:new()
    reqModel.askid = self._askID
    reqModel.mail_count = count
    reqModel.mail_list = mailIds
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRecvMsg, reqModel.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqModel, reqModel.processid, appid, srsGroupID)
end

function ReqGetAward:onRecvMsg(XYID, buff, len, processid)
    local resp = MailProtocol.RespGetAward:new()
    resp:bistream(buff, len)
    if self._askID == resp.askid then
        self:success(resp)
    end
end

return ReqGetAward
