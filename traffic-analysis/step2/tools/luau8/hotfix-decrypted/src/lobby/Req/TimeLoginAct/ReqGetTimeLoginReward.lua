local ReqGetTimeLoginReward = class("ReqGetTimeLoginReward", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetTimeLoginReward:ctor()
    ReqGetTimeLoginReward.super.ctor(self)
    self._askId = 0
end

function ReqGetTimeLoginReward:start(aid, timeout)
    if ReqGetTimeLoginReward.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()

    local urlInfo = {}
    urlInfo["act_id"] = aid
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_ACT_TIME_LOGIN, UrlConf.URL_GET_LOGIN_REWARD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGetTimeLoginReward:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_ACT_TIME_LOGIN then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqGetTimeLoginReward
`