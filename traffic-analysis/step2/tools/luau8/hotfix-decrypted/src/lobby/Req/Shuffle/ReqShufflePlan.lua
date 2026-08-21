local ReqShufflePlan = class("ReqShufflePlan", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqShufflePlan:ctor()
    ReqShufflePlan.super.ctor(self)
    self._askId = 0
end

function ReqShufflePlan:start(data, timeout)
    if ReqShufflePlan.super.start(self, timeout) == false then
        return
    end
    local urlInfo = {
        opt = data.type or 0,
        ask_id = data.type or 0,
    }
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SHUFFLE_PLAN, UrlConf.URL_SHUFFLE_PLAN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqShufflePlan:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SHUFFLE_PLAN then
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
        self:setMessage("请求洗牌策略失败")
        self:fail()
    end
end

return ReqShufflePlan
�