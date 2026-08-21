---@class NetReqSimpleTeaHouseInfo : NetReq
local NetReqSimpleTeaHouseInfo = class("NetReqSimpleTeaHouseInfo", TeaHouse.NetReq)

function NetReqSimpleTeaHouseInfo:ctor()
    NetReqSimpleTeaHouseInfo.super.ctor(self)
    self._maxTeaHouseCnt = -1
    self._curTeaHouseCnt = 0
    self._teaHouseInfo = {}
end

function NetReqSimpleTeaHouseInfo:start(timeoutTime)
    if not NetReqSimpleTeaHouseInfo.super.start(self, timeoutTime) then
        return
    end

    local reqSimpleTeaHouseInfo = TeaHouse.TeaHouseProtocol.ReqSimpleTeaHouseInfo:new()
    reqSimpleTeaHouseInfo.nAgentAreaid = TeaHouse.BridgeData.getAreaID()
    reqSimpleTeaHouseInfo.nGameLobbyId = TeaHouse.BridgeData.getLobbyID()
    self:sendPacket(reqSimpleTeaHouseInfo, TeaHouse.TeaHouseProtocol.RespSimpleTeaHouseInfo, self.onRespSimpleTeaHouseInfo)
end

function NetReqSimpleTeaHouseInfo:onRespSimpleTeaHouseInfo(msgData)
    if self._maxTeaHouseCnt == -1 then
        self._maxTeaHouseCnt = msgData.nTeaHouseCnt
    end
    if self._maxTeaHouseCnt > 0 then
        local bIsExist = false
        for k, v in pairs(self._teaHouseInfo) do
            if v.nTeaPwd == msgData.nTeaPwd then
                bIsExist = true
            end
        end

        if not bIsExist then
            self._teaHouseInfo[#self._teaHouseInfo + 1] = {}
            self._teaHouseInfo[#self._teaHouseInfo].nTeaid = msgData.nTeaid
            self._teaHouseInfo[#self._teaHouseInfo].nTeaPwd = msgData.nTeaPwd
            self._teaHouseInfo[#self._teaHouseInfo].nNumid = msgData.nNumid
            self._teaHouseInfo[#self._teaHouseInfo].szUrl = msgData.szUrl
            self._teaHouseInfo[#self._teaHouseInfo].szNickName = msgData.szNickName
            self._teaHouseInfo[#self._teaHouseInfo].szData = msgData.szData
            self._teaHouseInfo[#self._teaHouseInfo].bSelfTeaHouse = self._teaHouseInfo[#self._teaHouseInfo].nNumid == TeaHouse.BridgeData.getNumberID()
        end
        self._curTeaHouseCnt = self._curTeaHouseCnt + 1
    end
    if self._maxTeaHouseCnt == self._curTeaHouseCnt then
        self:success()
    end
end


return NetReqSimpleTeaHouseInfo}