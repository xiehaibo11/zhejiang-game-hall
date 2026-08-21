local ReqGetMonthlyCardRequest = class("ReqGetMonthlyCardRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetMonthlyCardRequest:ctor()
    ReqGetMonthlyCardRequest.super.ctor(self)
    self._askId = 0
end

function ReqGetMonthlyCardRequest:start(data, timeout)
    if ReqGetMonthlyCardRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["act_id"] = data.actId
    urlInfo["card_id"] = data.cardId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_GET_MONTHLY_CARD,
        UrlConf.URL_GET_MONTHLY_CARD,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqGetMonthlyCardRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_MONTHLY_CARD then
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

return ReqGetMonthlyCardRequest
