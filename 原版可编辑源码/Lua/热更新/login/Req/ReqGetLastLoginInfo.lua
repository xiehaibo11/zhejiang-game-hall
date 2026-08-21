local ReqGetLastLoginInfo = class("ReqGetLastLoginInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetLastLoginInfo:start(data, timeout)
    data = data or {}
    local t = timeout or data.timeoutTime or 10
    if ReqGetLastLoginInfo.super.start(self, t) == false then
        return
    end

    local ask_id = os.time()
    self._ask_id = ask_id

    local urlInfo = {}
    urlInfo.ask_id = ask_id

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_GET_LAST_LOGIN_INFO,
        UrlConf.URL_GET_LAST_LOGIN_INFO,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqGetLastLoginInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_LAST_LOGIN_INFO then
        return
    end
    if status ~= 200 then
        self:fail()
        return
    end
    local resp = response.resp or response
    local errCode = resp.err_code or resp.errCode
    if errCode and errCode ~= 0 then
        if response.resp and response.resp.errReason then
            self:setMessage(response.resp.errReason)
        end
        self:fail(response)
        return
    end
    if resp.ask_id and resp.ask_id ~= self._ask_id then
        return
    end
    self:success({ lastLoginInfo = response })
end

return ReqGetLastLoginInfo
