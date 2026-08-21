local ReqWebTaskConfig = class("ReqTaskConfig", XH.ReqProtocol)

function ReqWebTaskConfig:ctor()
    ReqWebTaskConfig.super.ctor(self)
    self._webTaskId = 0
    self._stageid = 0
    self._poolid = 0
    self._askid = 0
    self._taskConfig = {}
end

function ReqWebTaskConfig:start(webTaskId, stageid, poolid,timeoutTime,srsGroupID,appID)
    self._webTaskId = webTaskId or 0
    self._stageid = stageid or 0
    self._poolid = poolid or 0
    self._askid = os.time()
    self._appID = appID or 0
    srsGroupID = srsGroupID or XH.areaData:getSrsGroupID()
    if ReqWebTaskConfig.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    local reqWebTaskConfig = XH.TaskProtocol.ReqWebTaskConfig:new()
    reqWebTaskConfig.nAskId = self._askid
    reqWebTaskConfig.nWebTaskId = webTaskId
    reqWebTaskConfig.nStageId = stageid
    reqWebTaskConfig.nPoolId = poolid
    self:sendMsg(reqWebTaskConfig, XH.TaskProtocol.RespWebTaskConfig, srsGroupID, self._appID)
end

function ReqWebTaskConfig:onMsgReceive(msgData)
    if self._askid ~= msgData.nAskId then return end
    
    if msgData.nFlag == XH.TaskProtocol.RespWebTaskConfig.FLAG.SUCCESS then
        if self._webTaskId == msgData.nWebTaskId and self._stageid == msgData.nStageId and self._poolid == msgData.nPoolId then
            table.insert(self._taskConfig, msgData.acData)
            if msgData.nCurPkg == msgData.nTotalPkg then
                -- 最后一个包接收完成
                local allJsonData = table.concat(self._taskConfig) or ""
                local respTable = cjson.decode(allJsonData) or {}
                self:success(respTable)   
            end
        end
    elseif msgData.nFlag == XH.TaskProtocol.RespWebTaskConfig.FLAG.ERROR then
        self:setMessage("请求错误！")
        self:fail()
    else
        msgData.acErrorInfo = msgData.acErrorInfo or "请求活动信息失败！"
        self:setMessage(msgData.acErrorInfo)
        self:fail()
    end
end

return ReqWebTaskConfig