local ReqChangeCard = class("ReqChangeCard", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqChangeCard:ctor()
    ReqChangeCard.super.ctor(self)
    self._askId = 0
end

function ReqChangeCard:start(param, timeout)
    if ReqChangeCard.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    
    local urlInfo = {}
    urlInfo["room_id"] = tostring(param.room_id)
    urlInfo["ask_id"] = self._askId
    urlInfo["ju_num"] = param.ju_num
    urlInfo["opt"] = param.opt
    urlInfo["change"] = param.change

    self._change = param.change

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_CHANGECARD, UrlConf.URL_PRE_SHUFFLE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqChangeCard:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_CHANGECARD then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            response.change = self._change
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("换牌请求失败")
        self:fail()
    end
end

return ReqChangeCard
