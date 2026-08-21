---@class NetReqOperatorManager : NetReq
local NetReqOperatorManager = class("NetReqOperatorManager", TeaHouse.NetReq)

function NetReqOperatorManager:ctor()
    NetReqOperatorManager.super.ctor(self)

    self._nAskid = 0
end

function NetReqOperatorManager:start(areaID, numID, teaNumber, active, timeoutTime)
    if not NetReqOperatorManager.super.start(self, timeoutTime) then
        return
    end

    local reqOperatorManager = TeaHouse.TeaHouseProtocol.ReqOperatorManager:new()
    self._nAskid = os.time()
    reqOperatorManager.nAskid = self._nAskid
    reqOperatorManager.nTeaNumber = teaNumber
    reqOperatorManager.nNumid = numID
    reqOperatorManager.nAreaid = areaID
    reqOperatorManager.active = active
    reqOperatorManager.nGameLobbyId = TeaHouse.BridgeData.getLobbyID()
    self:sendPacket(reqOperatorManager, TeaHouse.TeaHouseProtocol.RespOperatorManager, self.onRespOperatorManager)
end

function NetReqOperatorManager:onRespOperatorManager(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperatorManager.FLAG.SUCCESS then
            self:success(msgData)
            return
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperatorManager.FLAG.NO_RIGHT then
            self:setMessage("SET_MANAGER_FAIL_NO_PERMISSION")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperatorManager.FLAG.NO_USER then
            self:setMessage("SET_MANAGER_FAIL_PLAYER_NOT_EXIST")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperatorManager.FLAG.NOT_FENGXIN_RIGHT then
            self:setMessage("SET_MANAGER_FAIL_PERMISSION_NOT_OPENED")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperatorManager.FLAG.MAX_NUM then
            self:setMessage("SET_MANAGER_FAIL_MANAGER_COUNT_LIMIT_REACHED")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespOperatorManager.FLAG.ALREADY_STATUS then
            if msgData.active == 1 then
                self:setMessage("SET_MANAGER_FAIL_PLAYER_ALREADY_MANAGER")
            else
                self:setMessage("SET_MANAGER_FAIL_PLAYER_ALREADY_NOT_MANAGER")
            end
        else
            self:setMessage("SET_MANAGER_FAIL_SERVER_ERROR")
        end
        self:fail(msgData)
    end
end

return NetReqOperatorManager