local ReqSxvipLockSingleRight = class("ReqSxvipLockSingleRight", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipLockSingleRight:ctor()
    ReqSxvipLockSingleRight.super.ctor(self)
end

function ReqSxvipLockSingleRight:start(data , timeout)
    if ReqSxvipLockSingleRight.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.ask_id = os.time()
    urlInfo.right_id =  data.right_id or 0
    urlInfo.unlock_type =  data.unlock_type or 3

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_LOCK_SINGLE_RIGHT , UrlConf.URL_SXVIP_LOCK_SINGLE_RIGHT , jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipLockSingleRight:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_LOCK_SINGLE_RIGHT  then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp and response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSxvipLockSingleRight
f