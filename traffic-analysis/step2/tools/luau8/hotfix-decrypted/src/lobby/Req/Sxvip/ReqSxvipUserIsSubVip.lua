local ReqSxvipUserIsSubVip = class("ReqSxvipUserIsSubVip", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipUserIsSubVip:ctor()
    ReqSxvipUserIsSubVip.super.ctor(self)
    self._askId = 0
end

function ReqSxvipUserIsSubVip:start(proForpey, timeout)
    if ReqSxvipUserIsSubVip.super.start(self, timeout) == false then
        return
    end
    local urlInfo = {}
    urlInfo.askId = self._askId
    urlInfo.userId = XH.playerData:getNumberID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_USER_IS_SUB_VIP, UrlConf.URL_USER_IS_SUB_VIP, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipUserIsSubVip:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_USER_IS_SUB_VIP then
        return
    end
    if status == 200 then
        self:success(response)
    else
        self:setMessage("")
        self:fail()
    end
end

return ReqSxvipUserIsSubVip�