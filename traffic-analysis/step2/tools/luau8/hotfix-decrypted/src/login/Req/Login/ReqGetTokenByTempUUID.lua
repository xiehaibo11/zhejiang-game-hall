local ReqGetTokenByTempUUID = class("ReqGetTokenByTempUUID", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetTokenByTempUUID:ctor()
    ReqGetTokenByTempUUID.super.ctor(self)
    self._askId = 0
end

function ReqGetTokenByTempUUID:start(data, timeout)
    if ReqGetTokenByTempUUID.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        area_id = XH.areaData:getAreaID(),
        temp_uuid_source = data.temp_uuid_source,
        temp_uuid = data.temp_uuid,
    }
    self._reqInfo = urlInfo
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager:RequestPost(XH.HttpDefine.HTTP_ID_QUERY_TOKEN, UrlConf.URL_QUERY_TOKEN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGetTokenByTempUUID:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_QUERY_TOKEN then
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
        self:setMessage("登陆请求失败，请重试2")
        self:fail()
    end
end

return ReqGetTokenByTempUUID�