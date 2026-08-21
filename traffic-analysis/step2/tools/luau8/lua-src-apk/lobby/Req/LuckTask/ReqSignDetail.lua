local ReqSignDetail = class("ReqSignDetail", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSignDetail:ctor()
    ReqSignDetail.super.ctor(self)
    self._askId = 0
end

function ReqSignDetail:start(timeout, activity_id)
    if ReqSignDetail.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["activity_id"] = activity_id
    urlInfo["channel_id"] = "0"

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SIGN_DETAIL, UrlConf.URL_SIGN_DETAIL, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSignDetail:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SIGN_DETAIL then
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
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqSignDetail7