local ReqCheckNewMail = class("ReqCheckNewMail", XH.ReqProtocol)
local MailProtocol = require("app.Protocols.MailProtocol")

function ReqCheckNewMail:start(mailID, appid, timeoutTime)
    if ReqCheckNewMail.super.start(self, timeoutTime) == false then
        return
    end

    self._askID = os.time()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqModel = MailProtocol.ReqGetMailDetail:new()
    reqModel.askid = self._askID
    reqModel.mailid = mailID

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRecvMsg, reqModel.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqModel, reqModel.processid, appid, srsGroupID)
end

function ReqCheckNewMail:onRecvMsg(XYID, buff, len, processid)
    local resp = MailProtocol.RespGetMailDetail:new()
    resp:bistream(buff, len)
    if self._askID == resp.askid then
        self:success(resp)
    end
end

return ReqCheckNewMail
