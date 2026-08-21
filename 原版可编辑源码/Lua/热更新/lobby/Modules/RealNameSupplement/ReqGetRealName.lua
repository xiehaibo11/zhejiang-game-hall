local ReqGetRealName = class("ReqGetRealName", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetRealName:ctor()
    ReqGetRealName.super.ctor(self)
    self._askId = 0
end

function ReqGetRealName:start(activityId, opt, guess_gold, timeout)
    if ReqGetRealName.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    local urlInfo = {}
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_REAL_NAME_SUPPLEMENT, UrlConf.URL_REAL_NAME_SUPPLEMENT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGetRealName:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_REAL_NAME_SUPPLEMENT then
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

return ReqGetRealName
