local ReqSxvipSubscribe = class("ReqSxvipSubscribe", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipSubscribe:ctor()
    ReqSxvipSubscribe.super.ctor(self)
    self._askId = 0
end

function ReqSxvipSubscribe:start(proForpey, timeout)
    if ReqSxvipSubscribe.super.start(self, timeout) == false then
        return
    end
    local urlInfo = {}
    local areaId = XH.areaData:getAreaID()
    urlInfo.tenant_id = XH.areaData:getTenantid()
    urlInfo.area_id = areaId
    urlInfo.user_id = XH.playerData:getNumberID()
    urlInfo.app_id = XH.configerManager:getShopAppId()


    urlInfo.package_id = tonumber(XH.sdkManager:reqGetMetaDataValue("TD_CONFIG_ID")) or 8170

    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG and not XH.isEmbeddedApp() then
        urlInfo.app_id = 1538
        urlInfo.package_id = 9040
    end
    --test 9040
    urlInfo.product_id = proForpey.product_id
    urlInfo.device_id = XH.SysTool:GetDevid()
    urlInfo.client_ip = un.Device.getIp()
    urlInfo.pay_attach = proForpey.ext
    urlInfo.source = areaId .. XH.areaData:getLobbyID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    dump(jsonStr)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_PAY_AFTER_SIGN, UrlConf.URL_SXVIP_PAY_AFTER_SIGN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipSubscribe:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_PAY_AFTER_SIGN then
        return
    end
    if status == 200 then
        dump(response)
        self:success(response)
    else
        self:setMessage("")
        self:fail()
    end
end

return ReqSxvipSubscribe
K