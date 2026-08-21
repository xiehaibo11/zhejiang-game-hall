local ReqActList = class("ReqActList", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqActList:ctor()
    ReqActList.super.ctor(self)
    self._askId = 0
end

function ReqActList:start(timeout)
    if ReqActList.super.start(self, timeout) == false then
        return
    end

    local device_type = 0
    if device.platform == "android" then
        device_type = 2
    elseif device.platform == "ios" then
        device_type = 1
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["channel_id"] = XH.SysTool:getChannelID()
    urlInfo["device_type"] = device_type

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LUCK_TASK_ACTLIST, UrlConf.URL_LUCK_TASK_ACTLIST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqActList:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_LUCK_TASK_ACTLIST then
        return
    end
    if status == 200 then
        if response.cr.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.cr.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqActList
