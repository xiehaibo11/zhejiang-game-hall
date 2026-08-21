---@class NetReqSelfFightInfo : NetReq
local NetReqSelfFightInfo = class("NetReqSelfFightInfo", XH.ReqProtocol)

function NetReqSelfFightInfo:ctor()
    NetReqSelfFightInfo.super.ctor(self)

    self._infoList = {}
end

function NetReqSelfFightInfo:start(teaNumber, info, timeoutTime)
    if NetReqSelfFightInfo.super.start(self, timeoutTime) == false then
        return
    end

    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqLatelyFightInfo:new()
    req.nAskId = self._askID
    req.nTeaId = teaNumber
    self:sendMsg(req, XH.BoxDataProtocol.RespLatelyFightInfo, srsGroupID)
end

function NetReqSelfFightInfo:onMsgReceive(msgData)
    if self._askID ~= msgData.nAskId then
        return
    end
    if msgData.nTotal > 0 then
        self._infoList[#self._infoList + 1] = msgData
    end
    if msgData.nTotal == 0 or msgData.nCurIndex == msgData.nTotal - 1 then
        self:success(self._infoList)
    end
end

return NetReqSelfFightInfo�