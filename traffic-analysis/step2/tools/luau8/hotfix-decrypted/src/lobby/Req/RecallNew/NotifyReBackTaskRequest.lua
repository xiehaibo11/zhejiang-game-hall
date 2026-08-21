local NotifyReBackTaskRequest = class("NotifyReBackTaskRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function NotifyReBackTaskRequest:ctor()
    NotifyReBackTaskRequest.super.ctor(self)
    self._askId = 0
end

function NotifyReBackTaskRequest:start(actId, task_type, timeout)
    if NotifyReBackTaskRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = actId
    urlInfo["task_type"] = RecallNewConfig.ComeBackTaskTypeEnum[task_type]
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.NotifyReBackTaskRequest then
        TestConfig.NotifyReBackTaskRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_NOTIFY_TASK, 200, TestConfig.NotifyReBackTaskRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_NOTIFY_TASK, UrlConf.URL_RECALL_NEW_NOTIFY_TASK, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function NotifyReBackTaskRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_NOTIFY_TASK then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试NotifyReBackTaskRequest")
        self:fail()
    end
end

return NotifyReBackTaskRequest