local ReqAcceptPresenter = class("ReqAcceptPresenter", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqAcceptPresenter:ctor()
    ReqAcceptPresenter.super.ctor(self)
    self._askId = 0
end

function ReqAcceptPresenter:start(activity_id, timeout)
    if ReqAcceptPresenter.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["activity_id"] = activity_id
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_ACCEPT_PRESENTER, UrlConf.URL_ACCEPT_PRESENTER, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqAcceptPresenter:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_ACCEPT_PRESENTER then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqAcceptPresenter