---@class NetReqQuitTeaHouse : NetReq
local NetReqQuitTeaHouse = class("NetReqQuitTeaHouse", TeaHouse.NetReq)

--玩家用来申请退出比赛场
function NetReqQuitTeaHouse:ctor()
    NetReqQuitTeaHouse.super.ctor(self)

    self._nAskid = 0
end

function NetReqQuitTeaHouse:start(nTeaid, timeoutTime)
    if not NetReqQuitTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqQuitTeaHouse = TeaHouse.TeaHouseProtocol.ReqQuitTeaHouse:new()
    self._nAskid = os.time()
    reqQuitTeaHouse.askid = self._nAskid
    reqQuitTeaHouse.teaNumber = nTeaid
    self:sendPacket(reqQuitTeaHouse, TeaHouse.TeaHouseProtocol.RespQuitTeaHouse, self.onRespQuitTeaHouse)
end

function NetReqQuitTeaHouse:onRespQuitTeaHouse(msgData)
    if msgData.askid == self._nAskid then
        if msgData.state == TeaHouse.TeaHouseProtocol.RespQuitTeaHouse.REQ_STATE.AGREE or
        msgData.state == TeaHouse.TeaHouseProtocol.RespQuitTeaHouse.REQ_STATE.WAIT then
            self:success(msgData)
        else
            self:setMessage("TEAHOUSE_QUIT_ERROR")
            self:fail()
        end
    end
end

return NetReqQuitTeaHouse�