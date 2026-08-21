local ReqPhoneBindingState = class("ReqPhoneBindingState", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPhoneBindingState:start(timeout)
    if ReqPhoneBindingState.super.start(self, timeout) == false then
        return
    end

    local timestamp = os.time()
    local areaID = XH.areaData:getAreaID()
    local windID = XH.areaData:getAreaWindID()
    local lobbyID = XH.areaData:getLobbyID()
    local numid = XH.playerData:getNumberID()

    local tHttpInfo = "?areaid=" .. areaID .. "&lobbyid=" .. lobbyID .. "&numid=" .. numid
    tHttpInfo = tHttpInfo .. "&timestamp=" .. timestamp .. "&wid=" .. windID .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_PHONE_VERIFCATION_STATE

    XH.httpManager:RequestGet("", UrlConf.URL_PALMAPI .. tHttpInfo,
    XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpPhoneStateCallBack),nil,true)
end

function ReqPhoneBindingState:onHttpPhoneStateCallBack(eType, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
            print("绑定的手机号:" .. response.data.info.phone)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_BIND_STATE_ERROR"))
        self:fail()
    end
end

return ReqPhoneBindingState