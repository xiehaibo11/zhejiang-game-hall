local ReqSxvipReportData = class("ReqSxvipReportData", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipReportData:ctor()
    ReqSxvipReportData.super.ctor(self)
    self._askId = 0
end

function ReqSxvipReportData:start(data, timeout)
    if ReqSxvipReportData.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(data)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_REPORT_DATA, UrlConf.URL_SXVIP_REPORT_DATA, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipReportData:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_REPORT_DATA then
        return
    end
    self:success()
end

return ReqSxvipReportData
�