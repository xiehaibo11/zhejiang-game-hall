local ReqArticleList = class("ReqArticleList", XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqArticleList:start(data, timeout)
    if ReqArticleList.super.start(self, timeout) == false then
        return
    end
    local urlInfo = {}
    urlInfo["connect_no"] = "bianfeng"

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    XH.httpManager50:RequestPost(HttpDefine.URL_ARTICLE_LIST, UrlConf.URL_LUCK_ARTICLE_LIST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onReqArticleList), headmap, true)
end

function ReqArticleList:onReqArticleList(eType, status, response)
    if eType == HttpDefine.URL_ARTICLE_LIST then
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

return ReqArticleList