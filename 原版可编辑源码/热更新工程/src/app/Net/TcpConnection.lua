local TcpConnection = class("TcpConnection")

function TcpConnection:ctor(groupID, srsType)
	self._groupID = groupID
    self.srsType = srsType or XH.SRS_TYPE.SRS33
	
	self._linkState = XH.SRS_LINK_STATE.LINK_STATE_NONE
	self._linkStateHandlerList = {}

    self._delayMessageList = {}
    self._isDelayDealMsg = false

    self._msgEventCb = nil

    local nativeConn = un.network.TcpConnection.new()
    nativeConn:setSRSType(self.srsType)
    nativeConn:setConnectCallback(handler(self, self._onConnect))
    nativeConn:setSetupCallback(handler(self, self._onSetup))
    nativeConn:setCloseCallback(handler(self, self._onClose))
    nativeConn:setMessageCallback(handler(self, self._onMsg))

    self._tcpConn = nativeConn
end

function TcpConnection:setOnMessageEventCallback(callback)
    self._msgEventCb = callback
end

function TcpConnection:_onConnect(result)
    print("connect result " .. tostring(result))
	if not result then
		self:OnLinkStatus(XH.SRS_LINK_STATE.LINK_STATE_FAILURE)
	end
end

function TcpConnection:_onSetup()
    print("conn set up")
	self:OnLinkStatus(XH.SRS_LINK_STATE.LINK_STATE_SUCCESS)
end

function TcpConnection:_onClose()
    print("connection close")
	self:OnLinkStatus(XH.SRS_LINK_STATE.LINK_STATE_CLOSE)
end

function TcpConnection:_onMsg(appid, processid, msgid, ostream)
    local len = ostream:getSize()
    local buff = ostream:readAll()
    if self._isDelayDealMsg then
        self._delayMessageList[#self._delayMessageList + 1] = {
            groupID = self._groupID, 
            msgID = msgid, 
            buff = buff, 
            len = len, 
            processID = processid
        }
        return
    end
    self._msgEventCb(self._groupID, msgid, buff, len, processid)
end

function TcpConnection:setIsDelayDealMsg(isDelay)
    self._isDelayDealMsg = isDelay
    if isDelay then
        self:removeDelaySchdule()
        self._schduleID = XH.SysTool.performDelayOnce(function()
            self:dealMsgList()
        end, 10)
    else
        self:dealMsgList()
    end
end

function TcpConnection:dealMsgList()
    if #self._delayMessageList > 0 then
        for i = 1, #self._delayMessageList do
            self._msgEventCb(self._delayMessageList[i].groupID, self._delayMessageList[i].msgID, self._delayMessageList[i].buff, self._delayMessageList[i].len, self._delayMessageList[i].processID)
        end
    end
    self._delayMessageList = {}
    self:removeDelaySchdule()
    self._isDelayDealMsg = false
end

function TcpConnection:removeDelaySchdule()
    if self._schduleID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._schduleID)
        self._schduleID = nil
    end
end

function TcpConnection:connect(appid, host, port, timeout)
    self._tcpConn:connect(appid, host, port, timeout)
end

function TcpConnection:isConnect()
    return self._tcpConn:isConnect()
end

function TcpConnection:sendMessage(processid, appid, req)
    self._tcpConn:sendMessage(processid, appid, req.MSGID, req:toStream())
end

function TcpConnection:sendMessageStream(processid, appid, msgid, stream)
    self._tcpConn:sendMessage(processid, appid, msgid, stream)
end

function TcpConnection:sendMessagePB(processid, appid, xyid, req)
    self._tcpConn:sendMessagePB(processid, appid, xyid, req)
end

function TcpConnection:sendMessageData(processid, appid, msgid, data)
    self._tcpConn:sendMessageData(processid, appid, msgid, data)
end

function TcpConnection:close()
    self._tcpConn:close()
end

function TcpConnection:destroy()
    if self._tcpConn then
        self._tcpConn:remove()
        self._tcpConn = nil
    end
end

function TcpConnection:close()
    if self._tcpConn then
        self._tcpConn:close()
    end
end

function TcpConnection:OnLinkStatus(linkState)
	self._linkState = linkState
    if self._linkStateHandlerList then
		for _,v in pairs(self._linkStateHandlerList) do
            if v then
                v(linkState)
            end
	    end
    end
end

function TcpConnection:getLinkState()
    return self._linkState
end

function TcpConnection:addLinkStateScriptFunc(callBackFunc)
	if not callBackFunc then
		return
	end
    self._linkStateHandlerList[#self._linkStateHandlerList + 1] = callBackFunc
end

function TcpConnection:removeAllLinkStateScriptFunc()
    self._linkStateHandlerList = {}
end

return TcpConnection