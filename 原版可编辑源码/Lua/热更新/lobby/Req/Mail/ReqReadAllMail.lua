local ReqReadAllMail = class("ReqReadAllMail", XH.ReqProtocol)
local MailProtocol = require("app.Protocols.MailProtocol")

function ReqReadAllMail:start(mailList, appid, timeoutTime)
    if ReqReadAllMail.super.start(self, timeoutTime) == false then
        return
    end

    self._askID = os.time()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqModel = MailProtocol.ReqReadAllMail:new()
    reqModel.askid = self._askID
    reqModel.mail_list = mailList
    reqModel.count = #mailList
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRecvMsg, reqModel.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqModel, reqModel.processid, appid, srsGroupID)
end

function ReqReadAllMail:onRecvMsg(XYID, buff, len, processid)
    local resp = MailProtocol.RespReadAllMail:new()
    resp:bistream(buff, len)
    if self._askID == resp.askid then
        self:success(resp)
    end
end

return ReqReadAllMail
