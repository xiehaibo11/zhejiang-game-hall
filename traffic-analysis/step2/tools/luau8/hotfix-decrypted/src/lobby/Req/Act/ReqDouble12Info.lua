local ReqDouble12Info = class("ReqDouble12Info", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqDouble12Info:ctor()
    ReqDouble12Info.super.ctor(self)
    self._askId = 0
end

function ReqDouble12Info:start(data, timeout)
    if ReqDouble12Info.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {
        ask_id = os.time(),
        channel_id = device.platform,
        activity_ids = {data.act_id},
    }
    self._aid = data.act_id
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_DOUBLE12_INFO, UrlConf.URL_DOUBLE12_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqDouble12Info:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_DOUBLE12_INFO then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response.details[self._aid..""])
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求双十二活动失败")
        self:fail()
    end
end

return ReqDouble12InfoX