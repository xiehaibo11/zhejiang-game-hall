local ReqShuffle5 = class("ReqShuffle5", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqShuffle5:ctor()
    ReqShuffle5.super.ctor(self)
    self._askId = 0
end

function ReqShuffle5:start(data, timeout)
    if ReqShuffle5.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    
    local urlInfo = {
        ask_id = self._askId,
        type = data.type, 
        discount = data.discount,
        remain_time = data.remain_time,
        act_id = data.act_id
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SHUFFLE_5, UrlConf.URL_SHUFFLE5, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqShuffle5:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SHUFFLE_5 then
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

return ReqShuffle5
