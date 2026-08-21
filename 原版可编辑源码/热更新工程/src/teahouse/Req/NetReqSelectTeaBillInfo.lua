---@class NetReqSelectTeaBillInfo : NetReq
local NetReqSelectTeaBillInfo = class("NetReqSelectTeaBillInfo", TeaHouse.NetReq)

function NetReqSelectTeaBillInfo:ctor()
    NetReqSelectTeaBillInfo.super.ctor(self)

    self._nAskid = 0
    self._listData = {}
end

function NetReqSelectTeaBillInfo:start(nTeaid, nDay, nMinScore, nMaxScore, nGameId, nStartTime, nEndTime, nPlayerType, timeoutTime, nGameLobbyId)
    if not NetReqSelectTeaBillInfo.super.start(self, timeoutTime) then
        return
    end

    if nStartTime == nEndTime and nStartTime == 0 then
        nDay = 0
    elseif nStartTime == nEndTime and nStartTime > 0 then
       nDay = nStartTime
       nStartTime = 0
       nEndTime = 0
    end

    local reqSelectTeaBillInfo = TeaHouse.ActiveProtocol.ReqSelectTeaBillInfo:new()
    self._nAskid = os.time()
    reqSelectTeaBillInfo.nAskid = self._nAskid
    reqSelectTeaBillInfo.nTeaid = nTeaid
    reqSelectTeaBillInfo.nDay = nDay or 0
    reqSelectTeaBillInfo.nMinScore = nMinScore
    reqSelectTeaBillInfo.nMaxScore = nMaxScore or -1
    reqSelectTeaBillInfo.nGameId = nGameId or 0
    reqSelectTeaBillInfo.nGameLobbyId = nGameLobbyId or TeaHouse.BridgeData.getLobbyID()
    reqSelectTeaBillInfo.nStartTime = nStartTime
    reqSelectTeaBillInfo.nEndTime = nEndTime
    reqSelectTeaBillInfo.nPlayerType = nPlayerType or 0

    self:sendPacket(reqSelectTeaBillInfo, TeaHouse.ActiveProtocol.RespSelectTeaBillInfo, self.onRespSelectTeaBillInfo)
end

function NetReqSelectTeaBillInfo:onRespSelectTeaBillInfo(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    if msgData.ucFlag == TeaHouse.ActiveProtocol.RespSelectTeaBillInfo.FLAG.SUCCESS then
        if msgData.nTotalCnt > 0 then
            self._listData[msgData.nCurrentCnt + 1] = msgData.data
        else
            self:success(self._listData)
            return
        end
        if msgData.nCurrentCnt + 1 == msgData.nTotalCnt then
            self:success(self._listData)
        end
    elseif msgData.ucFlag == TeaHouse.ActiveProtocol.RespSelectTeaBillInfo.FLAG.ERROR then
        self:setMessage("没有权限")
        self:fail()
    elseif msgData.ucFlag == TeaHouse.ActiveProtocol.RespSelectTeaBillInfo.FLAG.FILE_NOT_EXIST then
        self:setMessage("其他错误")
        self:fail()
    else
        self:setMessage("未知错误(" .. msgData.ucFlag .. ")")
        self:fail()
    end
end

return NetReqSelectTeaBillInfo