local ReqPropPush = class("ReqPropPush", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPropPush:ctor()
    ReqPropPush.super.ctor(self)
    self._askId = 0
end

function ReqPropPush:start(param, timeout)
    if ReqPropPush.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    param = param or {}

    self._reqType = param.reqType or "PropPush"

    local channelId = 0
    if XH.SysTool and XH.SysTool.getChannelID then
        channelId = tonumber(XH.SysTool:getChannelID()) or 0
    end

    local urlInfo = {}
    urlInfo["channel_id"] = channelId
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_PROPPUSH, UrlConf.URL_PROPPUSH, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqPropPush:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_PROPPUSH then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 and response.resp.askId == self._askId then
            response.resp.reqType = self._reqType
            self:success(response)
        else
            self:setMessage(response and response.resp and response.resp.errReason or "道具推送请求失败")
            self:fail()
        end
    else
        self:setMessage("道具推送请求失败")
        self:fail()
    end
end

return ReqPropPush
