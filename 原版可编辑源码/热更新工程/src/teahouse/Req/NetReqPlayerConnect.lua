---@class NetReqPlayerConnect : NetReq
local NetReqPlayerConnect = class("NetReqPlayerConnect", TeaHouse.NetReq)

function NetReqPlayerConnect:ctor()
    NetReqPlayerConnect.super.ctor(self)

    self._teaNumber = {}
    self._nAskid = 0
end

function NetReqPlayerConnect:start(timeoutTime)
    if not NetReqPlayerConnect.super.start(self, timeoutTime) then
        return
    end

    local playerConnect = TeaHouse.TeaHouseProtocol.PlayerConnect:new()
    self._nAskid = os.time()
    playerConnect.askid = self._nAskid
    playerConnect.rightid = 0
    playerConnect.szName = TeaHouse.BridgeData.getNickName()
    playerConnect.url = TeaHouse.BridgeData.getWeChatURL()
    playerConnect.nAgentAreaid = TeaHouse.BridgeData.getApiHubRid()
    playerConnect.nGameLobbyId = TeaHouse.BridgeData.getLobbyID()
    self:sendPacket(playerConnect, TeaHouse.TeaHouseProtocol.RespConnectInfo, self.onRespConnectInfo)
end

function NetReqPlayerConnect:onRespConnectInfo(msgData)
    if msgData.askid == self._nAskid then
        self._teaNumber = msgData.teaNumber
        local index = 0
        for i = 1, #self._teaNumber do
            if self._teaNumber[i] == 0 then
                index = i
                break
            end
        end
        if index ~= 0 then
            table.remove(self._teaNumber, index)
        end
        if self._teaNumber and #self._teaNumber > 0 then
            self:success(self._teaNumber)
        else
            self:fail()
        end
    end
end

return NetReqPlayerConnect