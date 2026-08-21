local ReqDynamicUrl = class("ReqDynamicUrl",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqDynamicUrl:start(secret, appid, wid,timeout)
    if ReqDynamicUrl.super.start(self,timeout) == false then
        return
    end

    local windId = wid
    local timestamp = os.time()

    local param = "timestamp=%s&wid=%d"
    param = string.format(param, timestamp, windId)
    local strUrl = UrlConf.URL_PALMAPI .. "?" .. param .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_DYNAMIC_URL
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_DYNAMIC_URL, strUrl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpDynamicUrlCallBack),nil,true)
end

function ReqDynamicUrl:onHttpDynamicUrlCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_DYNAMIC_URL then
        if status == 200 then
            if response.code == 0 then
                self:success(response)
            else
                self:setMessage(response.message)
                self:fail()
            end
        else
            self:setMessage(XH.ConstString.getStr("MSG_SEND_TIME_OUT"))
            self:fail()
        end
    end
end

return ReqDynamicUrl�