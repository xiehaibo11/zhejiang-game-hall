local ReqArticleThrow = class("ReqArticleThrow", XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqArticleThrow:start(data, timeout)
    if ReqArticleThrow.super.start(self, timeout) == false then
        return
    end
    local urlInfo = {}
    urlInfo["connect_no"] = "bianfeng"
    urlInfo["identifier"] = data.identifier or ""
    urlInfo["android_id"] = data.android_id or ""
    urlInfo["title"] = data.title or ""
    urlInfo["url"] = data.url or ""
    urlInfo["model"] = data.model or ""
    urlInfo["manufactor"] = data.manufactor or ""
    urlInfo["os_type"] = data.os_type or ""
    urlInfo["os_version"] = data.os_version or ""
    urlInfo["client_ip"] = data.client_ip or ""
    urlInfo["click_time"] = os.time()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    XH.httpManager50:RequestPost(HttpDefine.URL_ARTICLE_THROW, UrlConf.URL_LUCK_ARTICLE_REPORT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onReqArticleThrow), headmap, true)
end

function ReqArticleThrow:onReqArticleThrow(eType, status, response)
    if eType == HttpDefine.URL_ARTICLE_THROW then
        if status == 200 then
            if response.code == 0 then
                self:success(response)
            else
                self:fail(response)
            end
        else
            self:setMessage("MSG_SEND_TIME_OUT")
            self:fail()
        end
    end
end

return ReqArticleThrow