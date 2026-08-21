local ReqGetShareWinAward = class("ReqGetShareWinAward", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetShareWinAward:ctor()
    ReqGetShareWinAward.super.ctor(self)
    self._askId = 0
end

function ReqGetShareWinAward:start(activityId, timeout)
    if ReqGetShareWinAward.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["act_id"] = activityId
    urlInfo["share_id"] = 1

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GET_SHARE_WIN_AWARD, UrlConf.URL_GET_SHARE_WIN_AWARD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGetShareWinAward:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_SHARE_WIN_AWARD then
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

return ReqGetShareWinAward�