---@class ReqSelfFightInfo : NetReq
local ReqSelfFightInfo = class("ReqSelfFightInfo", XH.ReqProtocol)

function ReqSelfFightInfo:ctor()
    ReqSelfFightInfo.super.ctor(self)

    self._infoList = {}
end

function ReqSelfFightInfo:start(teaNumber, info, timeoutTime)
    if ReqSelfFightInfo.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.BoxDataProtocol.ReqLatelyFightInfo:new()
    req.nAskId = self._askID
    req.nTeaId = teaNumber
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveSelfFightInfo, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, 0, srsGroupID)
end

function ReqSelfFightInfo:onReceiveSelfFightInfo(XYID, buff, len, processid)
    if XYID ~= XH.BoxDataProtocol.RespLatelyFightInfo.XY_ID then
        return
    end
    if processid ~= XH.BoxDataProtocol.processid then
        return
    end
    local respLatelyFightInfo = XH.BoxDataProtocol.RespLatelyFightInfo:new()
    respLatelyFightInfo:bistream(buff, len)
    if self._askID ~= respLatelyFightInfo.nAskId then
        return
    end
    if respLatelyFightInfo.nTotal > 0 then
        self._infoList[#self._infoList + 1] = respLatelyFightInfo
    end
    if respLatelyFightInfo.nTotal == 0 or respLatelyFightInfo.nCurIndex == respLatelyFightInfo.nTotal - 1 then
        self:success(self._infoList)
    end
end

return ReqSelfFightInfo�