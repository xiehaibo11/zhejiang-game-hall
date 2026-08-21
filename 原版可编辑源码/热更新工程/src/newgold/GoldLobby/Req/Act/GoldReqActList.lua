local GoldReqActList = class("GoldReqActList", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqActList:ctor()
    GoldReqActList.super.ctor(self)
    self._askId = 0
end

function GoldReqActList:start(timeout)
    if GoldReqActList.super.start(self, timeout) == false then
        return
    end

    local device_type = 0
    if device.platform == "android" then
        device_type = 2
    elseif device.platform == "ios" then
        device_type = 1
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = GoldAreaConfig.TenantID
    urlInfo["area_id"] = GoldAreaConfig.AreaID
    urlInfo["channel_id"] = NG.SysTool:getChannelID()
    urlInfo["device_type"] = device_type

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_ACTLIST, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqActList:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.cr.errCode == 0 then
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

return GoldReqActList
