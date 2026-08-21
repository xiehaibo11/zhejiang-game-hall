local ReqPreShuffle = class("ReqPreShuffle", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPreShuffle:ctor()
    ReqPreShuffle.super.ctor(self)
    self._askId = 0
end

function ReqPreShuffle:start(roomID, juNum, opt, timeout)
    if ReqPreShuffle.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    
    local urlInfo = {}
    urlInfo["room_id"] = tostring(roomID)
    urlInfo["ask_id"] = self._askId
    urlInfo["ju_num"] = juNum
    urlInfo["opt"] = opt

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_PRE_SHUFFLE, UrlConf.URL_PRE_SHUFFLE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqPreShuffle:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_PRE_SHUFFLE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqPreShuffle
