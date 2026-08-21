local ReqRegisterAgent = class("ReqRegisterAgent", XH.ReqProtocol)
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

function ReqRegisterAgent:ctor()
    ReqRegisterAgent.super.ctor(self)
    self._nAskId = 0
end

function ReqRegisterAgent:start(nAgentAreaId, acPhoneNum, acHeadUrl, acNickName, timeoutTime)
    if ReqRegisterAgent.super.start(self, timeoutTime) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    self._nAskId = os.time()
    local reqRegisterAgent = XH.TeaHouseProtocol.ReqRegisterAgent:new()
    reqRegisterAgent.nAgentAreaId = nAgentAreaId
    reqRegisterAgent.nAskId = self._nAskId
    reqRegisterAgent.acPhoneNum = tostring(acPhoneNum)
    reqRegisterAgent.acHeadUrl = acHeadUrl
    reqRegisterAgent.acNickName = acNickName

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespRegisterAgent, reqRegisterAgent.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqRegisterAgent, reqRegisterAgent.processid, XH.areaData:getTeaHouseAppID(), srsGroupID)
end

function ReqRegisterAgent:onRespRegisterAgent(XYID, buff, len, processid)
    if XYID ~= XH.TeaHouseProtocol.RespRegisterAgent.XY_ID then
        return
    end
    if processid ~= XH.TeaHouseProtocol.processid then
        return
    end
	local RespRegisterAgent = XH.TeaHouseProtocol.RespRegisterAgent:new()
    RespRegisterAgent:bistream(buff, len)
    if RespRegisterAgent.nAskId ~= self._nAskId then
        return
    end

    if RespRegisterAgent.ucFlag == XH.TeaHouseProtocol.RespRegisterAgent.RETVAL.OK then
        self:success(RespRegisterAgent)
    else
        local errMsgStr = ""
        if errMsg[RespRegisterAgent.ucFlag] then
            errMsgStr = errMsg[RespRegisterAgent.ucFlag]
            if RespRegisterAgent.ucFlag == RespRegisterAgent.RETVAL.REGISTER_ERROR then
                if nFengxinErrorMsg[RespRegisterAgent.nFengxinErrorCode] then
                    errMsgStr = nFengxinErrorMsg[RespRegisterAgent.nFengxinErrorCode]
                end 
            end
        end
        self:setMessage(errMsgStr)
        self:fail()
    end
end

return ReqRegisterAgent�	