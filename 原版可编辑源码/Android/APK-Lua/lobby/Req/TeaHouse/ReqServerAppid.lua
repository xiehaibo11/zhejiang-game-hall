---@class ReqServerAppid
local ReqServerAppid = class("ReqServerAppid", XH.ReqProtocol)

function ReqServerAppid:ctor()
    ReqServerAppid.super.ctor(self)
    self._nAskid = 0
end

function ReqServerAppid:start(timeoutTime)
    if ReqServerAppid.super.start(self, timeoutTime) == false then
        return
    end

    local reqServerAppid = XH.TeaHouseProtocol.ReqServerAppid:new()
    reqServerAppid.nAskid = self._askID
    self._nAskid = reqServerAppid.nAskid
    reqServerAppid.szName = XH.playerData:getNickName()
    reqServerAppid.szUrl = XH.playerData:getWeChatURL()
    reqServerAppid.nGameLobbyId = XH.areaData:getLobbyID()
    reqServerAppid.nAgentAreaId = XH.areaData:getApiHubRid()
    self:sendMsg(reqServerAppid, XH.TeaHouseProtocol.RespServerAppid, XH.areaData:getSrsGroupID(), XH.areaData:getTeaHouseAppID())
end

function ReqServerAppid:onMsgReceive(msgData)
	if self._nAskid ~= msgData.nAskid then
        return
    end
    if msgData.ucFlag == XH.TeaHouseProtocol.RespServerAppid.APPID_RESP_TYPE.SUCCESS then
        self:success(msgData.nAppid)
    else
        self:fail()
    end
end

return ReqServerAppid