local ReqShareWinInfo = class("ReqShareWinInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqShareWinInfo:ctor()
    ReqShareWinInfo.super.ctor(self)
    self._askId = 0
end

function ReqShareWinInfo:start(activityId, timeout)
    if ReqShareWinInfo.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["act_id"] = activityId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SHARE_WIN_INFO, UrlConf.URL_SHARE_WIN_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqShareWinInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SHARE_WIN_INFO then
        return
    end
    if status == 200 and response and response.resp then -- 增加安全性判断
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqShareWinInfo