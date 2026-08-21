local GoldReqLuckTaskGetReward = class("GoldReqLuckTaskGetReward", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqLuckTaskGetReward:ctor()
    GoldReqLuckTaskGetReward.super.ctor(self)
    self._askId = 0
end

function GoldReqLuckTaskGetReward:start(activity_id, content_id, timeout)
    timeout = timeout or 10
    if GoldReqLuckTaskGetReward.super.start(self, timeout) == false then
        return
    end

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
    urlInfo["tenant_id"] = GoldAreaConfig.TenantID
    urlInfo["area_id"] = GoldAreaConfig.AreaID

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_GETREWARDS, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqLuckTaskGetReward:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.cr.errCode == 0 and response.cr.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.cr.errReason)
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return GoldReqLuckTaskGetReward
�