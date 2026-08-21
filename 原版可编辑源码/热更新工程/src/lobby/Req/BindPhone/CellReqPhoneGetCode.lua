local CellReqPhoneGetCode = class("CellReqPhoneGetCode", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellReqPhoneGetCode:ctor()
    CellReqPhoneGetCode.super.ctor(self)
end

function CellReqPhoneGetCode:start(phone, timeout)
    if CellReqPhoneGetCode.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["phone"] = phone

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    
    local jsonStr = cjson.encode(urlInfo)
    local protocol = {
        Content = XH.StringTool.bin2hex(jsonStr),
        Sign = XH.SysTool:md5_encode(jsonStr .. "u3lIwKBgQoRE+26gDFbJGEQGILtDJG7E")
    }

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_URL_AUTH_GETCODE,
        UrlConf.URL_AUTH_GETCODE,
        cjson.encode(protocol),
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function CellReqPhoneGetCode:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_URL_AUTH_GETCODE then
        return
    end
    if status == 200 then
        if response.errorcode and response.errorcode == 0 then
            self:success(response)
        else
            self:setMessage(response.errormsg)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return CellReqPhoneGetCode
