local ReqProtocol = class("ReqProtocol", XH.Req)

function ReqProtocol:ctor()
    ReqProtocol.super.ctor(self)
    self._srsGroupID = 0
    self._processID = 0
    self._askID = XH.askIDManager:getAskID()
end

function ReqProtocol:start(timeoutTime, srsGroupID, processID)
    ReqProtocol.super.start(self, timeoutTime)
    self._srsGroupID = srsGroupID or XH.areaData:getSrsGroupID()
    self._processID = processID or 0
end

function ReqProtocol:success(data)
    ReqProtocol.super.success(self, data)
    XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
end

function ReqProtocol:fail(data)
    ReqProtocol.super.fail(self, data)
    XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
end

function ReqProtocol:timeout(data)
    ReqProtocol.super.timeout(self, data)
    XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
end

function ReqProtocol:stop()
    ReqProtocol.super.stop(self)
    XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
end

function ReqProtocol:sendMsg(reqData, callBackProtocol, srsGroupID, appID)
    if not reqData or not reqData.processid then
        return
    end
    if callBackProtocol == nil then
        self:success()
        return
    end
    appID = appID or 0
    if callBackProtocol.XY_ID then
        self._callBackProtocols[callBackProtocol.XY_ID] = callBackProtocol
    end

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onProtocolCallBack, reqData.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqData, reqData.processid, appID, srsGroupID)
end

function ReqProtocol:onProtocolCallBack(xyID, buff, len)
    local callBackProtocol = self._callBackProtocols[xyID]
    if callBackProtocol == nil then
        return
    end

    local msgData = callBackProtocol:new()
    msgData:bistream(buff, len)
    self:onMsgReceive(msgData)
end

function ReqProtocol:onMsgReceive(msgData)
    self:success(msgData)
end

return ReqProtocol
