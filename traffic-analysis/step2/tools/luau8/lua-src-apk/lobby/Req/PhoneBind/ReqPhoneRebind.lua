local ReqPhoneRebind = class("ReqPhoneRebind", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPhoneRebind:ctor()
    ReqPhoneRebind.super.ctor(self)
    self._phone = ""
    self._code = ""
    self._userid = ""
end

function ReqPhoneRebind:start(phone, code, timeout)
    if ReqPhoneRebind.super.start(self, timeout) == false then
        return
    end

    self._phone = phone or ""
    self._code = code or ""
    local srsGroupID = XH.areaData:getSrsGroupID()
    self._userid = un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID())
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0, XH.playerData:getBrandID(), XH.playerData:getNumberID(), self._userid, XH.playerData:getSessionID(), srsGroupID, timeout)
end

function ReqPhoneRebind:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = data
        local timestamp = os.time()
        local areaID = XH.areaData:getAreaID()
        local windID = XH.areaData:getAreaWindID()
        local lobbyID = XH.areaData:getLobbyID()
        local numid = XH.playerData:getNumberID()

        local tHttpInfo = "areaid=" .. areaID .. "&code=" .. self._code .. "&ssid=" .. string.urlencode(tempSession)
        tHttpInfo = tHttpInfo .. "&lobbyid=" .. lobbyID .. "&numid=" .. numid .. "&phone=" .. self._phone .. "&userid=" .. self._userid
        tHttpInfo = tHttpInfo .. "&timestamp=" .. timestamp .. "&wid=" .. windID .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_VERIFICATION_PHONE_REBIND

        XH.httpManager:RequestPost("", UrlConf.URL_PALMAPI,
        tHttpInfo, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpPhoneCallBack),nil,true)
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

function ReqPhoneRebind:onHttpPhoneCallBack(eType, status, response)
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqPhoneRebind�	