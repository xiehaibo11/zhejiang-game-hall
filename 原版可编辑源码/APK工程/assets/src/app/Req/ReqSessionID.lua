local ReqSessionID = class("ReqSessionID", XH.ReqProtocol)

function ReqSessionID:ctor()
	ReqSessionID.super.ctor(self)
	self._strTempSession = ""
	self._listen = nil
	self._rtsid = {}
	self._srsGroupID = 0
end

function ReqSessionID:start(nType,nBrandID,nNumID,strUserID,strSSID,srsGroupID,timeout)
    if ReqSessionID.super.start(self,timeout,srsGroupID) == false then
        return
    end

    local reqTempSessionID = XH.ToolProtocol.ReqTempSessionID:new()
    reqTempSessionID.askid = nType
    reqTempSessionID.areaid = nBrandID
    reqTempSessionID.numid = nNumID
    reqTempSessionID.userid = strUserID
    reqTempSessionID.sessionid = strSSID
    
    self:sendMsg(reqTempSessionID, XH.ToolProtocol.RespTempSessionID, srsGroupID, 0)
end

function ReqSessionID:onMsgReceive(msgData)
    if msgData.flag == XH.ToolProtocol.RespTempSessionID.FLAG.SUCCESS then
        if not msgData.tempsessionid then
            return
        end
        local sessionid =  XH.SysTool:hexToUUID(msgData.tempsessionid)
        self:success(sessionid)
    else
        self:fail()
    end
end

return ReqSessionID