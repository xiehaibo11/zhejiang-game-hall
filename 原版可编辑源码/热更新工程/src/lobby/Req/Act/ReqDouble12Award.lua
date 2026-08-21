local ReqDouble12Award = class("ReqDouble12Award", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqDouble12Award:ctor()
    ReqDouble12Award.super.ctor(self)
    self._askId = 0
end

function ReqDouble12Award:start(data, timeout)
    if ReqDouble12Award.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {
        ask_id = os.time(),
        channel_id = device.platform,
        activity_id = data.act_id,
        args = {
            type = 0,
            data = XH.SysTool:base64_encode(cjson.encode({sid = XH.areaData:getAreaWindID(), source = "app"}))
        }
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_DOUBLE12_AWARD, UrlConf.URL_DOUBLE12_AWARD, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqDouble12Award:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_DOUBLE12_AWARD then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response.result)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求领奖失败")
        self:fail()
    end
end

return ReqDouble12Award
