local ReqGetOrSetHead = class("ReqGetOrSetHead", XH.ReqProtocol)

function ReqGetOrSetHead:ctor()
    ReqGetOrSetHead.super.ctor(self)
end

function ReqGetOrSetHead:start(type, areaID, numID, head, nickname, srsGroupID, timeout)
    if ReqGetOrSetHead.super.start(self, timeout, srsGroupID) == false then
        return
    end

    local req = XH.MatchLinkProtocol.ReqGetOrSetHead:new()
    self._nAskid = os.time()
    req.nAskid = self._nAskid
    req.ucType = type
    req.nAreaid = areaID
    req.nNumid = numID
    req.szHead = head or ""
    req.szNick = nickname or ""

    self._srsGroupID = srsGroupID

    self:sendMsg(req, XH.MatchLinkProtocol.RespGetOrSetHead, self._srsGroupID, 0)
end

function ReqGetOrSetHead:onMsgReceive(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end

    self:success(msgData)
end

return ReqGetOrSetHead�