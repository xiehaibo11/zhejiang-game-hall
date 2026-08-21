local ReqMonthlyCardRequest = class("ReqMonthlyCardRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqMonthlyCardRequest:ctor()
    ReqMonthlyCardRequest.super.ctor(self)
    self._askId = 0
end

function ReqMonthlyCardRequest:start(data, timeout)
    if ReqMonthlyCardRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["act_id"] = data.actId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_MONTHLY_CARD_INFO,
        UrlConf.URL_MONTHLY_CARD,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqMonthlyCardRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_MONTHLY_CARD_INFO then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp and response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求失败")
        self:fail()
    end
end

return ReqMonthlyCardRequest
�