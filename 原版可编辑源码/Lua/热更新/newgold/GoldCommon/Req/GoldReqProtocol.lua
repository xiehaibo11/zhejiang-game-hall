local GoldReqProtocol = class("GoldReqProtocol", NG.Req)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqProtocol:ctor()
    GoldReqProtocol.super.ctor(self)
    self._srsGroupID = 0
    self._processID = 0
    self._askID = XH.askIDManager:getAskID()
end

function GoldReqProtocol:start(timeoutTime, srsGroupID, processID)
    GoldReqProtocol.super.start(self, timeoutTime)
    self._srsGroupID = srsGroupID or GoldAreaConfig.GroupID
    self._processID = processID or 0
end

function GoldReqProtocol:success(data)
    GoldReqProtocol.super.success(self, data)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtocol:fail(data)
    GoldReqProtocol.super.fail(self, data)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtocol:timeout(data)
    GoldReqProtocol.super.timeout(self, data)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtocol:stop()
    GoldReqProtocol.super.stop(self)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtocol:sendMsg(reqData, callBackProtocol, srsGroupID, appID)
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

    NG.netEngine:addProtocolScriptFuncByObj(self, self.onProtocolCallBack, reqData.processid, srsGroupID)
    NG.netEngine:sendProtocol(reqData, reqData.processid, appID, srsGroupID)
end

function GoldReqProtocol:onProtocolCallBack(xyID, buff, len)
    local callBackProtocol = self._callBackProtocols[xyID]
    if callBackProtocol == nil then
        return
    end

    local msgData = callBackProtocol:new()
    msgData:bistream(buff, len)
    self:onMsgReceive(msgData)
end

function GoldReqProtocol:onMsgReceive(msgData)
    self:success(msgData)
end

return GoldReqProtocol
