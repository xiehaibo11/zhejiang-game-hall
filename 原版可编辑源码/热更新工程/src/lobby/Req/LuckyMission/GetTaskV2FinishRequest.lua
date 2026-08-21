local GetTaskV2FinishRequest = class("GetTaskV2FinishRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function GetTaskV2FinishRequest:ctor()
    GetTaskV2FinishRequest.super.ctor(self)
    self._askId = 0
end

function GetTaskV2FinishRequest:start(page_name, num, timeout)
    if GetTaskV2FinishRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["res"] = page_name
    urlInfo["cnt"] = num or 1

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_TASK_V2_FINISH_REQUEST, UrlConf.URL_TASK_V2_FINISH_REQUEST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GetTaskV2FinishRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_TASK_V2_FINISH_REQUEST then
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
        self:setMessage("网络异常，稍后再试GetTaskV2FinishRequest")
        self:fail()
    end
end

return GetTaskV2FinishRequest