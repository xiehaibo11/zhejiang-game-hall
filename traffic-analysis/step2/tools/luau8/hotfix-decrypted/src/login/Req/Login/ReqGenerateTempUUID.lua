local ReqGenerateTempUUID = class("ReqGenerateTempUUID", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGenerateTempUUID:ctor()
    ReqGenerateTempUUID.super.ctor(self)
    self._askId = 0
end

function ReqGenerateTempUUID:start(data, timeout)
    if ReqGenerateTempUUID.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        area_id = XH.areaData:getAreaID(),
    }
    self._reqInfo = urlInfo
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager:RequestPost(XH.HttpDefine.HTTP_ID_GENERATE_TEMP_UUID, UrlConf.URL_GENERATE_TEMP_UUID, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGenerateTempUUID:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GENERATE_TEMP_UUID then
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
        self:setMessage("登陆请求失败，请重试1")
        self:fail()
    end
end

return ReqGenerateTempUUID�