local TaskV2RewardRequest = class("TaskV2RewardRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.LuckyMission.TestConfig")

function TaskV2RewardRequest:ctor()
    TaskV2RewardRequest.super.ctor(self)
    self._askId = 0
    self._curTask = nil
end

function TaskV2RewardRequest:start(curTask, activity_id, content_id, timeout)
    if TaskV2RewardRequest.super.start(self, timeout) == false then
        return
    end

    self._curTask = curTask
    self._askId = os.time()
    local device_type = 0
    if device.platform == "android" then
        device_type = 2
    elseif device.platform == "ios" then
        device_type = 1
    end

    local urlInfo = {}
    urlInfo["activity_id"] = activity_id
    urlInfo["content_id"] = content_id
    urlInfo["ask_id"] = self._askId
    urlInfo["device_type"] = device_type
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug then
        if TestConfig.TaskV2RewardRequest then
            TestConfig.TaskV2RewardRequest.cr = { errCode = 0 }
            self:onHttpCallBack(XH.HttpDefine.HTTP_ID_TASK_V2_REWARD_REQUEST, 200, TestConfig.TaskV2RewardRequest)
            return
        end
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_TASK_V2_REWARD_REQUEST, UrlConf.URL_TASK_V2_REWARD_REQUEST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function TaskV2RewardRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_TASK_V2_REWARD_REQUEST then
        return
    end
    if status == 200 then
        if response.cr.errCode == 0 then
            response.ccurTask = self._curTask
            self:success(response)
        else
            local msg = ""
            if response.resp and response.resp.errReason then
                msg = response.resp.errReason
            else
                msg = response.cr.errReason
            end
            self:setMessage(msg)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试TaskV2RewardRequest")
        self:fail()
    end
end

return TaskV2RewardRequest