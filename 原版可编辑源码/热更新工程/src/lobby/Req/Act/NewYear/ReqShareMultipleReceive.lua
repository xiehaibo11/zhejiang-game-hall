local ReqShareMultipleReceive = class("ReqShareMultipleReceive", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqShareMultipleReceive:ctor()
    ReqShareMultipleReceive.super.ctor(self)
    self._askId = 0
end

function ReqShareMultipleReceive:start(data, timeout)
    if ReqShareMultipleReceive.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        act_id = data.act_id,
        share_id = data.share_id
    }
    self._reqInfo = urlInfo
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SHARE_REWARD, UrlConf.URL_SHAREMULTIPLERECEIVE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqShareMultipleReceive:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SHARE_REWARD then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.reqInfo = self._reqInfo
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求每日活动失败")
        self:fail()
    end
end

return ReqShareMultipleReceive