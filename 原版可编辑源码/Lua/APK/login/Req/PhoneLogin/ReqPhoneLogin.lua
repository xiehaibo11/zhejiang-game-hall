local ReqPhoneLogin = class("ReqPhoneLogin", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqPhoneLogin:start(code, phone, isNew, isAutoReg, timeout)
    if ReqPhoneLogin.super.start(self, timeout) == false then
        return
    end

    local timestamp = os.time()
    local appId = XH.areaData:getPhoneloginAppID()
    local areaID = XH.areaData:getAreaID()
    local appKey = XH.areaData:getPhoneloginAppKey()
    local lobbyID = XH.areaData:getLobbyID()
    local windID = XH.areaData:getAreaWindID()

    if isNew then
        local auto_reg = isAutoReg and 1 or 0
        local signatureStr = "app_id=" .. appId .. "areaid=" .. areaID .. "auto_reg=" .. auto_reg
        signatureStr = signatureStr .. "code=" .. code .. "lobbyid=" .. lobbyID .. "phone=" .. phone
        signatureStr = signatureStr .. "timestamp=" .. timestamp .. "wid=" .. windID .. appKey
        local signature = un.md5Encode(signatureStr)
        local tHttpInfo = "app_id=" .. appId .. "&areaid=" .. areaID .. "&auto_reg=" .. auto_reg
        tHttpInfo = tHttpInfo .. "&code=" .. code .. "&lobbyid=" .. lobbyID .. "&phone=" .. phone
        tHttpInfo = tHttpInfo .. "&timestamp=" .. timestamp .. "&wid=" .. windID .. "&signature=" .. signature

        XH.httpManager:RequestPost(HttpDefine.HTTP_ID_REQ_BINDING_PASSWORD, UrlConf.REQ_VERIFICATION_PHONE_PWD_2,
        tHttpInfo, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpPhonePWDCallBack))
    else
        local signatureStr = "app_id=" .. appId .. "areaid=" .. areaID .. "code=" .. code .. "lobbyid=" .. lobbyID .. "phone=" .. phone
        signatureStr = signatureStr .. "timestamp=" .. timestamp .. "wid=" .. windID .. appKey
        local signature = un.md5Encode(signatureStr)
        local tHttpInfo = "app_id=" .. appId .. "&areaid=" .. areaID .. "&code=" .. code .. "&lobbyid=" .. lobbyID .. "&phone=" .. phone
        tHttpInfo = tHttpInfo .. "&timestamp=" .. timestamp .. "&wid=" .. windID .. "&signature=" .. signature

        XH.httpManager:RequestPost(HttpDefine.HTTP_ID_REQ_BINDING_PASSWORD, UrlConf.REQ_VERIFICATION_PHONE_PWD_1,
        tHttpInfo, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpPhonePWDCallBack))
    end
end

function ReqPhoneLogin:onHttpPhonePWDCallBack(eType, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_PWD_ERROR"))
        self:fail()
    end
end

return ReqPhoneLogin