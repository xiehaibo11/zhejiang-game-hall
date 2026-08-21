local ReqCompleteTeaching = class("ReqCompleteTeaching", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqCompleteTeaching:ctor()
    ReqCompleteTeaching.super.ctor(self)
    self._askId = 0
end

function ReqCompleteTeaching:start(data, timeout)
    if ReqCompleteTeaching.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["act_id"] = data.actId
    urlInfo["finish"] = data.finish

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_COMPLETE_TEACHING,
        UrlConf.URL_COMPLETE_TEACHING,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqCompleteTeaching:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_COMPLETE_TEACHING then
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
        self:setMessage("请求失败")
        self:fail()
    end
end

return ReqCompleteTeaching
�