---@class NetReqServerAppid : NetReq
local NetReqServerAppid = class("NetReqServerAppid", TeaHouse.NetReq)

--领队/用户用
function NetReqServerAppid:ctor()
    NetReqServerAppid.super.ctor(self)

    self._nAskid = 0
end

function NetReqServerAppid:start(timeoutTime)
    if not NetReqServerAppid.super.start(self, timeoutTime) then
        return
    end

    local reqServerAppid = TeaHouse.TeaHouseProtocol.ReqServerAppid:new()
    self._nAskid = os.time()
    reqServerAppid.nAskid = self._nAskid
    reqServerAppid.szName = TeaHouse.BridgeData.getNickName()
    reqServerAppid.szUrl = TeaHouse.BridgeData.getWeChatURL()
    reqServerAppid.nGameLobbyId = TeaHouse.BridgeData.getLobbyID()
    reqServerAppid.nAgentAreaId = TeaHouse.BridgeData.getApiHubRid()
    local teahouseAppid = TeaHouse.BridgeData.getTeahouseAppid()
    self:sendPacket(reqServerAppid, TeaHouse.TeaHouseProtocol.RespServerAppid, self.onRespServerAppid, teahouseAppid)
end

function NetReqServerAppid:onRespServerAppid(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespServerAppid.APPID_RESP_TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setAppID(msgData.nAppid)
        self:success(msgData.nAppid)
    else
        self:fail()
    end
end

return NetReqServerAppid