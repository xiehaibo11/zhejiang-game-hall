local ReqSysTime50 = class("ReqSysTime50", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSysTime50:ctor()
    ReqSysTime50.super.ctor(self)
    self._askId = 0
end

function ReqSysTime50:start(timeout)
    if ReqSysTime50.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GET_SYSTIME_50, UrlConf.URL_SYSTIME_50, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSysTime50:onHttpCallBack(httpID, status, response, xhr)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_SYSTIME_50 then
        return
    end
    self:success(response)
end

return ReqSysTime50