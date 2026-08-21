local ReqPeriodicGiftPackageInfo = class("ReqPeriodicGiftPackageInfo", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

function ReqPeriodicGiftPackageInfo:ctor()
    ReqPeriodicGiftPackageInfo.super.ctor(self)
    self._askId = 0
end

function ReqPeriodicGiftPackageInfo:start(actid, lbid)
    if ReqPeriodicGiftPackageInfo.super.start(self) == false then
        return
    end
    local reqData = {act_id = actid, lb_id = lbid, ask_id = self._askId}

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(reqData)
    self.reqData = reqData

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_PEGP_INFO_REQUEST, UrlConf.GOLD_PEGP_INFO_REQUEST, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqPeriodicGiftPackageInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_PEGP_INFO_REQUEST then
        return
    end
    if status == 200 and response and response.resp and response.resp.errCode == 0 then
        self:success(response)
    else
        local errorCode = response and response.resp and response.resp.errCode or -1
        local errMsg = {}
        self:setMessage(errMsg[errorCode] or errMsg[0])
        self:fail(response)
    end
end

return ReqPeriodicGiftPackageInfo
�