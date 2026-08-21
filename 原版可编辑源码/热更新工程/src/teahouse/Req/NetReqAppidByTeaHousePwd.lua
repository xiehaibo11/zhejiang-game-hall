---@class NetReqAppidByTeaHousePwd : NetReq
local NetReqAppidByTeaHousePwd = class("NetReqAppidByTeaHousePwd", TeaHouse.NetReq)

function NetReqAppidByTeaHousePwd:ctor()
    NetReqAppidByTeaHousePwd.super.ctor(self)

    self._teaHousePwd = nil
    self._tableID = nil
    self._nAskid = 0
end

function NetReqAppidByTeaHousePwd:start(teaHousePwd, tableID, inTeaFunc, playModeId, timeoutTime)
    if not NetReqAppidByTeaHousePwd.super.start(self, timeoutTime) then
        return
    end

    local reqAppidByTeaHousePwd = TeaHouse.TeaHouseProtocol.ReqAppidByTeaHousePwd:new()
    reqAppidByTeaHousePwd.nAskid = os.time()
    self._nAskid = reqAppidByTeaHousePwd.nAskid
    self._teaHousePwd = teaHousePwd
    self._tableID = tableID
    self._inTeaFunc = inTeaFunc
    self._playModeId = playModeId
    reqAppidByTeaHousePwd.nTeaHousePwd = teaHousePwd
    self:sendPacket(reqAppidByTeaHousePwd,
        TeaHouse.TeaHouseProtocol.RespAppidByTeaHousePwd, 
        self.onRespAppidByTeaHousePwd, 
        TeaHouse.BridgeData.getTeahouseAppid())
end

function NetReqAppidByTeaHousePwd:onRespAppidByTeaHousePwd(msgData)
    if self._nAskid == msgData.nAskid then
        TeaHouse.manager.teahouseData:setAppID(msgData.nAppid)
        self:success({
            teaHousePwd = self._teaHousePwd,
            tableID = self._tableID,
            inTeaFunc = self._inTeaFunc,
            playModeId = self._playModeId,
        })
    else
        return
    end
end

return NetReqAppidByTeaHousePwd