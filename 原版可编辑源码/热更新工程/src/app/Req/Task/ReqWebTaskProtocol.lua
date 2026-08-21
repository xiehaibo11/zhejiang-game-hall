local ReqWebTaskProtocol = class("ReqWebTaskProtocol", XH.ReqProtocol)

function ReqWebTaskProtocol:ctor()
    ReqWebTaskProtocol.super.ctor(self)
    self._askid = 0
    self._wid = 0
    self._channel = 0
    self._taskList = {}
end

function ReqWebTaskProtocol:start(wid, channelId, appId, srsGroupID, timeoutTime)
    self._wid = wid or 0
    self._channel = channelId or 0
    self._askid = os.time()
    self._appID = appId or 0

    if ReqWebTaskProtocol.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    local reqWebTaskList = XH.TaskProtocol.ReqWebTaskList:new()
    reqWebTaskList.nAskId = self._askid
    reqWebTaskList.nWid = self._wid
    reqWebTaskList.nChannel = self._channel

    self:sendMsg(reqWebTaskList, XH.TaskProtocol.RespWebTaskList, srsGroupID, self._appID)
end

function ReqWebTaskProtocol:onMsgReceive(msgData)
    if self._askid ~= msgData.nAskId then return end
    
    if msgData.nFlag == XH.TaskProtocol.RespWebTaskList.FLAG.SUCCESS then
        if self._wid == msgData.nWid and self._channel == msgData.nChannel then
            table.insert(self._taskList, msgData.acData)
            if msgData.nCurPkg == msgData.nTotalPkg then
                -- 最后一个包接收完成
                local allJsonData = table.concat(self._taskList) or ""
                local respTable = json.decode(allJsonData) or {}
                self:success(respTable)
            end
        end
    elseif msgData.nFlag == XH.TaskProtocol.RespWebTaskList.FLAG.ERROR then
        self:setMessage("请求错误！(" .. msgData.nErrorCode .. ")")
        self:fail()
    else
        msgData.acErrorInfo = msgData.acErrorInfo or "请求任务列表信息失败！"
        self:setMessage(msgData.acErrorInfo)
        self:fail()
    end
end

return ReqWebTaskProtocol