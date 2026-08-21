local ReqGetPlayerMailList = class("ReqGetPlayerMailList", XH.ReqProtocol)
local MailProtocol = require("app.Protocols.MailProtocol")

function ReqGetPlayerMailList:start(maxCnt, newCnt, isFirst, appid, timeoutTime)
    if ReqGetPlayerMailList.super.start(self, timeoutTime) == false then
        return
    end
    self._askID = os.time()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqModel = MailProtocol.ReqGetPlayerMailList:new()
    reqModel.askid = self._askID
    reqModel.max_count = maxCnt
    reqModel.new_count = newCnt
    reqModel.isFirst = isFirst

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRecvMsg, reqModel.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqModel, reqModel.processid, appid, srsGroupID)
end

function ReqGetPlayerMailList:onRecvMsg(XYID, buff, len, processid)
    local resp = MailProtocol.RespGetPlayerMailList:new()
    resp:bistream(buff, len)
    if self._askID == resp.askid then
        self:success(resp)
    end
end

return ReqGetPlayerMailList
