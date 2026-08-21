local ReqTeaMemberList = class("ReqTeaMemberList", XH.ReqProtocol)

function ReqTeaMemberList:ctor()
    ReqTeaMemberList.super.ctor(self)
    self._infoList = {}
end

function ReqTeaMemberList:start(teaNumber,timeoutTime)
    if ReqTeaMemberList.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.BoxDataProtocol.ReqTeaMemberList:new()
    tReq.nAskId = self._askID

    tReq.nTeaId = teaNumber
    tReq.bReqOnLine = false
    tReq.bGetOwner = false
    tReq.nReqExtraInfo = 0

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespTeaMemberList, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, 0, srsGroupID)
end

function ReqTeaMemberList:onRespTeaMemberList(XYID, buff, len, processid)
    if XYID ~= XH.BoxDataProtocol.RespTeaMemberList.XY_ID then
        return
    end
    if processid ~= XH.BoxDataProtocol.processid then
        return
    end
	local respTeaMemberList = XH.BoxDataProtocol.RespTeaMemberList:new()
    respTeaMemberList:bistream(buff, len)

    if respTeaMemberList.nTotal > 0 then
        self._infoList[#self._infoList + 1] = respTeaMemberList
    end

    if respTeaMemberList.ucFlag == 0 and (respTeaMemberList.nTotal == 0 or respTeaMemberList.nCurIndex == respTeaMemberList.nTotal - 1 )then
        self:success(self._infoList)
    elseif respTeaMemberList.ucFlag ~= 0 then
        XH.TipTool.showToast("操作失败，请重试")
        XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
    end
end

return ReqTeaMemberList