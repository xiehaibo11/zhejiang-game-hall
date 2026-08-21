local RewardReBackTaskRequest = class("RewardReBackTaskRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function RewardReBackTaskRequest:ctor()
    RewardReBackTaskRequest.super.ctor(self)
    self._askId = 0
end

function RewardReBackTaskRequest:start(act_id, task_id, timeout)
    if RewardReBackTaskRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    self._task_id = task_id

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = act_id
    urlInfo["task_id"] = task_id
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.RewardReBackTaskRequest then
        TestConfig.RewardReBackTaskRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_REWARD_TASK, 200, TestConfig.RewardReBackTaskRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_REWARD_TASK, UrlConf.URL_RECALL_NEW_REWARD_TASK, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function RewardReBackTaskRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_REWARD_TASK then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.ctask_id = self._task_id
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试RewardReBackTaskRequest")
        self:fail()
    end
end

return RewardReBackTaskRequest�