local ReqSign = class("ReqSign", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSign:ctor()
    ReqSign.super.ctor(self)
    self._askId = 0
end

function ReqSign:start(timeout, activity_id, action, day)
    if ReqSign.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["activity_id"] = activity_id
    urlInfo["channel_id"] = "0"
    urlInfo["action"] = action --//1: 签到 2：双倍签到 3:补签 4：翻倍 5:累计签到
    urlInfo["day"] = day -- //补签/翻倍 第几天

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SIGN, UrlConf.URL_SIGN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSign:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SIGN then
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

return ReqSign