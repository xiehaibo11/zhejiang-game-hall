local ReqDoBankruptcyAd = class("ReqDoBankruptcyAd", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqDoBankruptcyAd:ctor()
    ReqDoBankruptcyAd.super.ctor(self)
    self._askId = 0
end

function ReqDoBankruptcyAd:start(aid, action, gameid, roomlevel, isEnter, timeout)
    timeout = timeout or 10
    if ReqDoBankruptcyAd.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    self._isEnter = isEnter or false

    local urlInfo = {}
    urlInfo["aid"] = aid
    urlInfo["ask_id"] = self._askId
    urlInfo["game_id"] = gameid
    urlInfo["room_level"] = roomlevel
    urlInfo["platform"] = device.platform == "ios" and 2 or 1
    urlInfo["action"] = action

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_DO_BANKRUPTCY_AD, UrlConf.URL_DO_BANKRUPTCY_AD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqDoBankruptcyAd:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_DO_BANKRUPTCY_AD then
        return
    end
    response = response or {}
    response.isEnter = self._isEnter
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage(XH.ConstString.getStr("MSG_SEND_FAIL"))
        self:fail(response)
    end
end

return ReqDoBankruptcyAd�