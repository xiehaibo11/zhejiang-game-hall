local ReqDelMail = class("ReqDelMail", XH.ReqProtocol)
local MailProtocol = require("app.Protocols.MailProtocol")

function ReqDelMail:start(cnt, mailIDs, appid, timeoutTime)
    if ReqDelMail.super.start(self, timeoutTime) == false then
        return
    end

    self._askID = os.time()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqModel = MailProtocol.ReqDelMail:new()
    reqModel.askid = os.time()
    reqModel.count = cnt
    reqModel.mail_list = mailIDs
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRecvMsg, reqModel.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqModel, reqModel.processid, appid, srsGroupID)
end

function ReqDelMail:onRecvMsg(XYID, buff, len, processid)
    local resp = MailProtocol.RespDelMail:new()
    resp:bistream(buff, len)
    if self._askID == resp.askid then
        self:success(resp)
    end
end

return ReqDelMail
