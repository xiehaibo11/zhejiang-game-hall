local ReqPhoneVerificationCode = class("ReqPhoneVerificationCode", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqPhoneVerificationCode:start(type, phone, isNew, isAutoReg, timeout)
    if ReqPhoneVerificationCode.super.start(self, timeout) == false then
        return
    end

    local timestamp = os.time()
    local appId = XH.areaData:getPhoneloginAppID()
    local areaID = XH.areaData:getAreaID()
    local appKey = XH.areaData:getPhoneloginAppKey()
    local lobbyID = XH.areaData:getLobbyID()
    local windID = XH.areaData:getAreaWindID()

    if isNew then
        local auto_reg = 0
        local signatureStr = "app_id=" .. appId .. "areaid=" .. areaID .. "auto_reg=" .. auto_reg
        signatureStr = signatureStr .. "lobbyid=" .. lobbyID .. "phone=" .. phone
        signatureStr = signatureStr .. "timestamp=" .. timestamp .. "type=" .. type .. "wid=" .. windID .. appKey
        local signature = un.md5Encode(signatureStr)
        local tHttpInfo = "app_id=" .. appId .. "&areaid=" .. areaID .. "&auto_reg=" .. auto_reg
        tHttpInfo = tHttpInfo .. "&lobbyid=" .. lobbyID .. "&phone=" .. phone .. "&type=" .. type
        tHttpInfo = tHttpInfo .. "&timestamp=" .. timestamp .. "&wid=" .. windID .. "&signature=" .. signature

        XH.httpManager:RequestPost(HttpDefine.URL_PHONE_VERIFCATION_CODE, UrlConf.URL_VERIFICATION_CODE_URL_2,
        tHttpInfo, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpPhoneCodeCallBack))
    else
        local signatureStr = "app_id=" .. appId .. "areaid=" .. areaID .. "lobbyid=" .. lobbyID .. "phone=" .. phone
        signatureStr = signatureStr .. "timestamp=" .. timestamp .. "type=" .. type .. "wid=" .. windID .. appKey
        local signature = un.md5Encode(signatureStr)
        local tHttpInfo = "app_id=" .. appId .. "&areaid=" .. areaID .. "&lobbyid=" .. lobbyID .. "&phone=" .. phone .. "&type=" .. type
        tHttpInfo = tHttpInfo .. "&timestamp=" .. timestamp .. "&wid=" .. windID .. "&signature=" .. signature

        XH.httpManager:RequestPost(HttpDefine.URL_PHONE_VERIFCATION_CODE, UrlConf.URL_VERIFICATION_CODE_URL_1,
        tHttpInfo, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpPhoneCodeCallBack))
    end
end

function ReqPhoneVerificationCode:onHttpPhoneCodeCallBack(eType, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_CODE_ERROR"))
        self:fail()
    end
end

return ReqPhoneVerificationCode