local ReqPhoneVerifyCode = class("ReqPhoneVerifyCode", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqPhoneVerifyCode:start(phone, timeout)
    if ReqPhoneVerifyCode.super.start(self, timeout) == false then
        return
    end

    local timestamp = os.time()
    local areaID = XH.areaData:getAreaID()
    local aid = XH.areaData:getWindAid()
    local numid = XH.playerData:getNumberID()
    local uid = XH.playerData:getUserID()

    local uuid = areaID .. numid .. timestamp .. math.random(9999)
    local tmpRequestUrl = UrlConf.URL_ACT ..
    string.format("?timestamp=%d&numid=%s&uid=%s&uuid=%s&phone=%s&aid=%d&reqUrl=%s",timestamp,numid,uid,uuid,phone,aid,UrlConf.URL_SECOND_DOMAIN.REQ_PHONE_VERIFY_CODE)
    
    XH.httpManager:RequestGet(HttpDefine.REQ_PHONE_VERIFY_CODE, tmpRequestUrl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onRespVerifyCode),nil,true)

end

function ReqPhoneVerifyCode:onRespVerifyCode(eType, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.message)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_CODE_ERROR"))
        self:fail()
    end
end

return ReqPhoneVerifyCode