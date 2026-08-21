local ReqSxvipConfig = class("ReqSxvipConfig", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipConfig:ctor()
    ReqSxvipConfig.super.ctor(self)
    self._askId = 0
end

function ReqSxvipConfig:start(timeout)
    if ReqSxvipConfig.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.is_fellow = true

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_CONFIG, UrlConf.URL_SXVIP_CONFIG, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipConfig:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_CONFIG then
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
        self:fail()
    end
end

return ReqSxvipConfig
�