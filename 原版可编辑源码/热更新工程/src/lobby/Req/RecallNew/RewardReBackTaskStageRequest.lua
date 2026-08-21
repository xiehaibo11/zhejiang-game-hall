local RewardReBackTaskStageRequest = class("RewardReBackTaskStageRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function RewardReBackTaskStageRequest:ctor()
    RewardReBackTaskStageRequest.super.ctor(self)
    self._curIndex = 0
    self._askId = 0
end

function RewardReBackTaskStageRequest:start(act_id, index, timeout)
    if RewardReBackTaskStageRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = act_id
    urlInfo["index"] = index
    urlInfo["ask_id"] = self._askId

    self._curIndex = index

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.RewardReBackTaskStageRequest then
        TestConfig.RewardReBackTaskStageRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_TASK_STAGE, 200, TestConfig.RewardReBackTaskStageRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_TASK_STAGE, UrlConf.URL_RECALL_NEW_TASK_STAGE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function RewardReBackTaskStageRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_TASK_STAGE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.clientIndex = self._curIndex
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试RewardReBackTaskStageRequest")
        self:fail()
    end
end

return RewardReBackTaskStageRequest