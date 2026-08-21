local ReqKickTimes = class("ReqKickTimes", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqKickTimes:ctor()
    ReqKickTimes.super.ctor(self)
end

function ReqKickTimes:start(paramEx, timeout)
    if ReqKickTimes.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local param = {
        askId = 0,
        type = paramEx.type,
        cnt =  0
    }
    local jsonStr = json.encode(param)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_REQ_KICK_TIMES, UrlConf.URL_REQ_KICK_TIMES, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqKickTimes:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_REQ_KICK_TIMES then
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
        self:fail()
    end
end

return ReqKickTimes