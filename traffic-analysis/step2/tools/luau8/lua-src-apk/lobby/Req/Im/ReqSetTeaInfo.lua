local ReqSetTeaInfo = class("ReqSetTeaInfo", XH.ReqProtocol)

function ReqSetTeaInfo:start(teaNum,teaName,timeoutTime)
    if ReqSetTeaInfo.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.SetupTeaHouse:new()

    tReq.nAskid = os.time()
    tReq.nTeaID = teaNum
    tReq.szData = teaName
    tReq.nDefaultProps = 0
    tReq.nTeaDailyMaxPropCnt = 0
    tReq.bOthersHiden = false
    tReq.nEnableAutoTransferCard = 0
    tReq.nLowCardNum = 0
    tReq.nTransferCardNum = 0
    tReq.nErrorCode = 0 
    tReq.nRemindLowCardNum = 0
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespSetTeaInfo, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqSetTeaInfo:onRespSetTeaInfo(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.SetupTeaHouse.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local RespSetTeaInfo = XH.TeaHouseProtocol.SetupTeaHouse:new()
    RespSetTeaInfo:bistream(buff, len)

    self:success(RespSetTeaInfo)
end

return ReqSetTeaInfo�