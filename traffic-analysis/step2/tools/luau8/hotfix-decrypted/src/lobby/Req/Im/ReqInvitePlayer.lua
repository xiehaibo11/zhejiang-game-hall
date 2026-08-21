local ReqInvitePlayer = class("ReqInvitePlayer", XH.ReqProtocol)

function ReqInvitePlayer:ctor()
    ReqInvitePlayer.super.ctor(self)
    self._askid = 0
end

function ReqInvitePlayer:start(teaId,numId,timeoutTime)
    if ReqInvitePlayer.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqInvitePlayer:new()
    self._askid = self._askID
    tReq.nAskId = self._askID
    tReq.nTeaId = teaId
    tReq.nInviteAreaId = XH.areaData:getAreaID()
    tReq.nInviteNumId = numId

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRepInvitePlayer, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)--appid
end

function ReqInvitePlayer:onRepInvitePlayer(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespInvitePlayer.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local respInvitePlayer = XH.TeaHouseProtocol.RespInvitePlayer:new()
    respInvitePlayer:bistream(buff, len)
    if self._askid == respInvitePlayer.nAskId then
        self:success(respInvitePlayer)
    end
end

return ReqInvitePlayer