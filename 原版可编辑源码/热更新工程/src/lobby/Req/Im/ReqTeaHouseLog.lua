local ReqTeaHouseLog = class("ReqTeaHouseLog", XH.ReqProtocol)

function ReqTeaHouseLog:ctor()
    ReqTeaHouseLog.super.ctor(self)
    self._recordData = {}
end


function ReqTeaHouseLog:start(teaId,askType,start,count,timeoutTime)
    if ReqTeaHouseLog.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local tReq = XH.TeaHouseProtocol.ReqOperationHistory:new()
    tReq.nAskId = self._askID
    tReq.nTeaId = teaId or 0
    tReq.nAskType = askType
    tReq.nStartIndex = start
    tReq.nCount = count
    
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespOperationHistory, tReq.processid, srsGroupID)
    XH.netEngine:sendProtocol(tReq, tReq.processid, XH.areaData:getTeaHouseAppID() , srsGroupID)
end

function ReqTeaHouseLog:onRespOperationHistory(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespOperationHistory.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local RespOperationHistory = XH.TeaHouseProtocol.RespOperationHistory:new()
    RespOperationHistory:bistream(buff, len)

    if RespOperationHistory.ucFlag == XH.TeaHouseProtocol.RespOperationHistory.RETVAL.OK then
        self._recordData[#self._recordData + 1] = RespOperationHistory.stHis
        if RespOperationHistory.nTotal == 0 or RespOperationHistory.nTotal == RespOperationHistory.nCurIndex + 1 then
            self:success(self._recordData)
        end
    elseif RespOperationHistory.ucFlag == XH.TeaHouseProtocol.RespOperationHistory.RETVAL.NO_RIGHT then
        -- self:setMessage("没权限")
        -- self:fail()
        XH.TipTool.showToast("您已不在该分组，请重试~")
        XH.lobby:getModule("TeaHouseList"):reqTeaHouseList()
    elseif RespOperationHistory.ucFlag == XH.TeaHouseProtocol.RespOperationHistory.RETVAL.NO_DATA then
        self:setMessage("没有数据")
        self:fail()
    elseif RespOperationHistory.ucFlag == XH.TeaHouseProtocol.RespOperationHistory.RETVAL.PARAM_ERR then
        self:setMessage("参数错误")
        self:fail()
    else
        self:setMessage("未知错误" .. RespOperationHistory.ucFlag)
        self:fail()
    end
end

return ReqTeaHouseLog