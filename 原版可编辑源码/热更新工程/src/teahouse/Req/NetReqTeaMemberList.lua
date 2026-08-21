---@class NetReqTeaMemberList : NetReq
local NetReqTeaMemberList = class("NetReqTeaMemberList", XH.ReqProtocol)

function NetReqTeaMemberList:ctor()
    NetReqTeaMemberList.super.ctor(self)

    self._infoList = {}
end

function NetReqTeaMemberList:start(teaNumber, info, timeoutTime)
    if NetReqTeaMemberList.super.start(self, timeoutTime) == false then
        return
    end

    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqTeaMemberList:new()
    req.nAskId = self._askID
    req.nTeaId = teaNumber
    req.bReqOnline = info.bReqOnline or false
    req.bGetOwner = info.bReqGameCount or false
    req.nReqExtraInfo = info.bReqBigWinnerCount or 0
    self:sendMsg(req, XH.BoxDataProtocol.RespTeaMemberList, srsGroupID)
end

function NetReqTeaMemberList:onMsgReceive(msgData)
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

return NetReqTeaMemberList