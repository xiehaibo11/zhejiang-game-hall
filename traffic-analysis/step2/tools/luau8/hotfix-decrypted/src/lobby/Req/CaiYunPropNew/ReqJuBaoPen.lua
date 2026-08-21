local ReqJuBaoPen = class("ReqJuBaoPen", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqJuBaoPen:ctor()
    ReqJuBaoPen.super.ctor(self)
    self._askId = 0
end

function ReqJuBaoPen:start(param, timeout)
    if ReqJuBaoPen.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    
    local urlInfo = {}
    urlInfo["opt"] = param.opt
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_JUBAOPEN, UrlConf.URL_JUBAOPEN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqJuBaoPen:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_JUBAOPEN then
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
        self:setMessage("聚宝盆请求失败")
        self:fail()
    end
end

return ReqJuBaoPen
