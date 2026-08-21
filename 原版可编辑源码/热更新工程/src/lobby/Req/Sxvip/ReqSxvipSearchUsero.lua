local ReqSxvipSearchUsero = class("ReqSxvipSearchUsero", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipSearchUsero:ctor()
    ReqSxvipSearchUsero.super.ctor(self)
    self._askId = 0
end

function ReqSxvipSearchUsero:start(proForpey, timeout)
    if ReqSxvipSearchUsero.super.start(self, timeout) == false then
        return
    end
    local urlInfo = {}
    urlInfo.askId = self._askId
    urlInfo.userId = XH.playerData:getNumberID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_SEARCH_USERO, UrlConf.URL_SEARCH_USERO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipSearchUsero:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_SEARCH_USERO then
        return
    end
    if status == 200 then
        self:success(response)
    else
        self:setMessage("")
        self:fail()
    end
end

return ReqSxvipSearchUsero