local ReqReadAllMail = class("ReqReadAllMail", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

function ReqReadAllMail:ctor()
    ReqReadAllMail.super.ctor(self)
    self._askId = 0
end

function ReqReadAllMail:start(mailIds, timeout)
    if ReqReadAllMail.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["mailid_list"] = mailIds
    
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_MAIL_READALL, UrlConf.URL_MAIL_READALL, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqReadAllMail:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_MAIL_READALL then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
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

return ReqReadAllMail