local ReqBindUser = class("ReqBindUser", XH.ReqProtocol)

function ReqBindUser:start(areaid, numid, thirdid, phoneNumber, clientId, srsGroupID, timeout)
    if ReqBindUser.super.start(self, timeout, srsGroupID) == false then
        return
    end

    areaid = areaid or 0
    numid = numid or 0
    thirdid = thirdid or ""
    phoneNumber = phoneNumber or ""
    local reqBindUser = XH.ToolProtocol.ReqBindUser:new()
    self._askid = os.time()
    reqBindUser.askid = self._askid
    reqBindUser.src_bind_areaid = areaid
    reqBindUser.src_bind_numid = numid
    reqBindUser.bound_thirdid = thirdid
    reqBindUser.src_bind_phone = phoneNumber
    reqBindUser.clientid = clientId or ""
	reqBindUser.ostype = device.platform == "android" and 0 or 1
    reqBindUser.channeltype = 0   --0:getui, 1:jiguang, 2: other
    if device.platform == "android" and XH.SysTool:GetBundleVersion() >= "1.1.9" and XH.configerManager:getIsJgSdk() then
        reqBindUser.channeltype = 1 
    end
    if device.platform == "ios" and XH.SysTool:GetBundleVersion() >= "1.1.9" and XH.configerManager:getIsJgSdk() then
        reqBindUser.channeltype = 1 
    end
    if device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.06") then
        reqBindUser.channeltype = 2
    end
    self:sendMsg(reqBindUser, XH.ToolProtocol.RespBindUser, srsGroupID, 0)
end

function ReqBindUser:onMsgReceive(msgData)
    if self._askid ~= msgData.askid then
        return
    end

    if msgData.flag == XH.ToolProtocol.RespBindUser.FLAG.SUCCESS then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqBindUser�