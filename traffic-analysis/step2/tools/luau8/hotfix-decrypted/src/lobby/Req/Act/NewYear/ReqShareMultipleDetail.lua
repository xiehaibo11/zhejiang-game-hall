local ReqShareMultipleDetail = class("ReqShareMultipleDetail", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqShareMultipleDetail:ctor()
    ReqShareMultipleDetail.super.ctor(self)
    self._askId = 0
end

function ReqShareMultipleDetail:start(data, timeout)
    if ReqShareMultipleDetail.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        act_id = data.act_id,
    }
    self._reqInfo = urlInfo
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SHARE_DETAIL, UrlConf.URL_SHAREMULTIPLEDETAIL, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqShareMultipleDetail:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SHARE_DETAIL then
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

return ReqShareMultipleDetail�