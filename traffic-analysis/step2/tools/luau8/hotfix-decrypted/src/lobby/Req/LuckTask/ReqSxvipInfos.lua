local ReqSxvipInfos = class("ReqSxvipInfos", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipInfos:ctor()
    ReqSxvipInfos.super.ctor(self)
    self._askId = 0
end

function ReqSxvipInfos:start(activityId, timeout)
    if ReqSxvipInfos.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["act_id"] = activityId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_ACT_VIP_DISCOUNT, UrlConf.ACT_VIP_DISCOUNT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipInfos:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_ACT_VIP_DISCOUNT then
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
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqSxvipInfos�