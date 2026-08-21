---@class NetReqCanQuitTeaHouse : NetReq
local NetReqCanQuitTeaHouse = class("NetReqCanQuitTeaHouse", TeaHouse.NetReq)

--请求玩家是否可以退出比赛场
function NetReqCanQuitTeaHouse:ctor()
    NetReqCanQuitTeaHouse.super.ctor(self)

    self._nAskid = 0
end

function NetReqCanQuitTeaHouse:start(nTeaid, timeoutTime)
    if not NetReqCanQuitTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqCanQuitTeaHouse = TeaHouse.TeaHouseProtocol.ReqCanQuitTeaHouse:new()
    self._nAskid = os.time()
    reqCanQuitTeaHouse.nAskId = self._nAskid
    reqCanQuitTeaHouse.nTeaId = nTeaid
    self:sendPacket(reqCanQuitTeaHouse, TeaHouse.TeaHouseProtocol.RespCanQuitTeaHouse, self.onRespCanQuitTeaHouse)
end

function NetReqCanQuitTeaHouse:onRespCanQuitTeaHouse(msgData)
    if msgData.nAskId == self._nAskid then
        self:success(msgData)
    end
end

return NetReqCanQuitTeaHouse�