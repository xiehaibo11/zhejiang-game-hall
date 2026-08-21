local ReBackSignRequest = class("ReBackSignRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function ReBackSignRequest:ctor()
    ReBackSignRequest.super.ctor(self)
    self.signIndex = 0
    self._askId = 0
end

function ReBackSignRequest:start(actId, index, timeout)
    if ReBackSignRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = actId
    urlInfo["index"] = index
    urlInfo["ask_id"] = self._askId

    self.signIndex = index

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.ReBackSignRequest then
        TestConfig.ReBackSignRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_SIGN, 200, TestConfig.ReBackSignRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_SIGN, UrlConf.URL_RECALL_NEW_SIGN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReBackSignRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_SIGN then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.signIndex = self.signIndex
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试ReBackSignRequest")
        self:fail()
    end
end

return ReBackSignRequest�