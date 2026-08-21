-- 支付宝前置咨询接口
local ReqPayConsult = class("ReqPayConsult ", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local GlobalConfig = XH.Bridge:require("app.Config.GlobalConfig")

function ReqPayConsult:ctor()
    ReqPayConsult.super.ctor(self)
end

function ReqPayConsult:start(phone, totalAmount, timeout)
    if ReqPayConsult.super.start(self, timeout) == false then
        return
    end
    self._askid = os.time()

    local protocol = {
        ask_id = self._askid,
        app_id = XH.configerManager:getShopAppId(),
        channel_id = 30026,        
        package_id = tonumber(XH.sdkManager:reqGetMetaDataValue("TD_CONFIG_ID")) or 8170,
        total_amount = totalAmount,
        product_code = "QUICK_MSECURITY_PAY",
        phone = tostring(phone),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        uid = tostring(XH.playerData:getNumberID()),
        nickname = XH.playerData:getNickName()
    }

    if GlobalConfig.IsDebug and not XH.isEmbeddedApp() then
        protocol.app_id = 1538
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_PAY_CONSULT, UrlConf.URL_SHOP_PAY_CONSULT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqPayConsult:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_PAY_CONSULT then
        return
    end
    if status == 200 then
        if response.errCode == 0 then
            self:success(response)
        else
            self:fail()
        end
    else
        self:fail()
    end
end
return ReqPayConsult
