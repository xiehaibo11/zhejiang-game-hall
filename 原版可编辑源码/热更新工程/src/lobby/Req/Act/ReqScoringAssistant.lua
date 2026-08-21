local ReqScoringAssistant = class("ReqScoringAssistant", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqScoringAssistant:ctor()
    ReqScoringAssistant.super.ctor(self)
    self._askId = 0
    self._curPage = 0
end

function ReqScoringAssistant:start(data, timeout)
    timeout = timeout or 5
    if ReqScoringAssistant.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["ju_score"] = data.ju_score
    urlInfo["opt"] = data.opt
    urlInfo["ledger_id"] = data.ledger_id
    urlInfo["ju_id"] = data.ju_id
    urlInfo["start_time"] = data.start_time
    urlInfo["end_time"] = data.end_time
    urlInfo["page_size"] = data.page_size
    urlInfo["page"] = data.page
    self._curPage = data.page

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SCORE_ASSISTANT, UrlConf.URL_SCORE_ASSISTANT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqScoringAssistant:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SCORE_ASSISTANT then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.ccurPage = self._curPage
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求超时")
        self:fail()
    end
end

return ReqScoringAssistant