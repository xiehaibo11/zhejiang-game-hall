local ReqLuckTaskGetContent = class("ReqLuckTaskGetContent", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqLuckTaskGetContent:ctor()
    ReqLuckTaskGetContent.super.ctor(self)
    self._askId = 0
end

function ReqLuckTaskGetContent:start(activity_id, include, timeout)
    timeout = timeout or 10
    if ReqLuckTaskGetContent.super.start(self, timeout) == false then
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
    urlInfo["include"] = include
    urlInfo["ask_id"] = self._askId
    urlInfo["device_type"] = device_type
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LUCK_TASK_GETCONTENT, UrlConf.URL_LUCK_TASK_GETCONTENT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqLuckTaskGetContent:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_LUCK_TASK_GETCONTENT then
        return
    end
    if status == 200 then
        if response.cr.errCode == 0 and response.cr.askId == self._askId then
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

return ReqLuckTaskGetContent
