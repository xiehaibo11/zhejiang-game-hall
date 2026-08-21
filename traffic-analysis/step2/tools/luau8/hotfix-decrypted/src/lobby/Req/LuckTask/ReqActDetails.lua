local ReqActDetails = class("ReqActDetails", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqActDetails:ctor()
    ReqActDetails.super.ctor(self)
    self._askId = 0
end

function ReqActDetails:start(activityId, timeout)
    if ReqActDetails.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["aids"] = activityId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_ACT_DETAILS, UrlConf.ACT_DETAILS, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqActDetails:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_ACT_DETAILS then
        return
    end
    if status == 200 then
        if response.cr.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.cr.errReason)
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqActDetails�