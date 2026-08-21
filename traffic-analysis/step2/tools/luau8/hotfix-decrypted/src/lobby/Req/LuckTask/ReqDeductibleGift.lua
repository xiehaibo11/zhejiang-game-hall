local ReqDeductibleGift = class("ReqDeductibleGift", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqDeductibleGift:ctor()
    ReqDeductibleGift.super.ctor(self)
    self._askId = 0
end

function ReqDeductibleGift:start(aid, timeout)
    timeout = timeout or 10
    if ReqDeductibleGift.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["aid"] = aid
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_ACT_50_DEDUCTIBLE, UrlConf.URL_ACT_50_DEDUCTIBLE_GIFT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqDeductibleGift:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_ACT_50_DEDUCTIBLE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqDeductibleGift#