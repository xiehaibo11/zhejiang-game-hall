local ReqSxvipGetSingleRight = class("ReqSxvipGetSingleRight", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipGetSingleRight:ctor()
    ReqSxvipGetSingleRight.super.ctor(self)
end

function ReqSxvipGetSingleRight:start(data , timeout)
    if ReqSxvipGetSingleRight.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.ask_id = os.time()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_GET_SINGLE_RIGHT, UrlConf.URL_SXVIP_GET_SINGLE_RIGHT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipGetSingleRight:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_GET_SINGLE_RIGHT then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(string.format("获取单次权益失败，接口错误码：%s", response.resp and response.resp.errCode or "nil"))
            self:fail()
        end
    else
        self:setMessage(string.format("获取单次权益失败，HTTP错误码：%s", status))
        self:fail()
    end
end

return ReqSxvipGetSingleRight
