---@class NetReqRegisterAgent : NetReq
local NetReqRegisterAgent = class("NetReqRegisterAgent", TeaHouse.NetReq)

local errMsg = {
    [1] = "参数错误",
    [2] = "未绑定手机号",
    [3] = "已经是用户了",
    [4] = "注册失败",
    [5] = "手机号不是绑定的手机号",
}

local nFengxinErrorMsg = {
    [1005] = "该手机号已被使用",
    [1007] = "该手机号已被使用",
    [1057] = "玩家校验异常",
    [1059] = "注册失败",
}

function NetReqRegisterAgent:ctor()
    NetReqRegisterAgent.super.ctor(self)
    self._nAskId = 0
end

function NetReqRegisterAgent:start(nAgentAreaId, acPhoneNum, acHeadUrl, acNickName, timeoutTime)
    if not NetReqRegisterAgent.super.start(self, timeoutTime) then
        return
    end
    self._nAskId = os.time()
    local reqRegisterAgent = TeaHouse.TeaHouseProtocol.ReqRegisterAgent:new()
    reqRegisterAgent.nAgentAreaId = nAgentAreaId
    reqRegisterAgent.nAskId = self._nAskId
    reqRegisterAgent.acPhoneNum = tostring(acPhoneNum)
    reqRegisterAgent.acHeadUrl = acHeadUrl
    reqRegisterAgent.acNickName = acNickName
    self:sendPacket(reqRegisterAgent, TeaHouse.TeaHouseProtocol.RespRegisterAgent, self.onRespRegisterAgent)
end

function NetReqRegisterAgent:onRespRegisterAgent(msgData)
    if msgData.nAskId ~= self._nAskId then
        return
    end
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespRegisterAgent.RETVAL.OK then
        self:success(msgData)
    else
        local errMsgStr = ""
        if errMsg[msgData.ucFlag] then
            errMsgStr = errMsg[msgData.ucFlag]
            if msgData.ucFlag == msgData.RETVAL.REGISTER_ERROR then
                if nFengxinErrorMsg[msgData.nFengxinErrorCode] then
                    errMsgStr = nFengxinErrorMsg[msgData.nFengxinErrorCode]
                end 
            end
        end
        self:setMessage(errMsgStr)
        self:fail()
    end
    
end

return NetReqRegisterAgent�