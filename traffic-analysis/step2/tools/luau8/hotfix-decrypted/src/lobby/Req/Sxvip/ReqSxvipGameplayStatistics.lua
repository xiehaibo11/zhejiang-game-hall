local ReqSxvipGameplayStatistics = class("ReqSxvipGameplayStatistics", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipGameplayStatistics:ctor()
    ReqSxvipGameplayStatistics.super.ctor(self)
    self._askId = 0
    self._gameid = 0
end

function ReqSxvipGameplayStatistics:start(gameid , timeout)
    if ReqSxvipGameplayStatistics.super.start(self, timeout) == false then
        return
    end

    self._gameid = gameid or 0

    local urlInfo = {}
    urlInfo.game_id = gameid or 0
    urlInfo.ask_id = 1605

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_GAMEPLAY_STATISTICS, UrlConf.URL_SXVIP_GAMEPLAY_STATISTICS, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipGameplayStatistics:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_GAMEPLAY_STATISTICS then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response , self._gameid)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSxvipGameplayStatistics
{