local ReqUserInfoListCnt = class("ReqUserInfoListCnt", XH.ReqProtocol)

function ReqUserInfoListCnt:start(teaId,timeoutTime)
    if ReqUserInfoListCnt.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqUserInfoListCnt:new()
    tReq.nAskid = self._askID
    tReq.nTeaNumber = teaId or 0
    
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespUserInfoListCnt, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID() , srsGroupID)
end

function ReqUserInfoListCnt:onRespUserInfoListCnt(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespUserInfoListCnt.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local RespUserInfoListCnt = XH.TeaHouseProtocol.RespUserInfoListCnt:new()
    RespUserInfoListCnt:bistream(buff, len)

    self:success(RespUserInfoListCnt)
end

return ReqUserInfoListCnt