local ReqSxvipRemainder = class("ReqSxvipRemainder", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function ReqSxvipRemainder:ctor()
    ReqSxvipRemainder.super.ctor(self)
    self._askId = 0
end

function ReqSxvipRemainder:start(timeout)
    if ReqSxvipRemainder.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = string.format("{\"props\":[{\"prop_id\":%s,\"burse_type\":%s},{\"prop_id\":%s,\"burse_type\":%s}]}" , SxvipConfig.PROP_ID , SxvipConfig.BURSE_TYPE, SxvipConfig.PROP_ID_SJ , SxvipConfig.BURSE_TYPE)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_REMAINER, UrlConf.URL_SXVIP_REMAINDER, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipRemainder:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_REMAINER then
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
        self:setMessage(XH.ConstString.getStr("SXVIP_REMAINER_ERROR"))
        self:fail()
    end
end

return ReqSxvipRemainder
