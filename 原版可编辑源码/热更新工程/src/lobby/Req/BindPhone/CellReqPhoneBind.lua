local CellReqPhoneBind = class("CellReqPhoneBind", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function CellReqPhoneBind:ctor()
    CellReqPhoneBind.super.ctor(self)
end

function CellReqPhoneBind:start(data, timeout)
    if CellReqPhoneBind.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["phone"] = data.phone
    urlInfo["code"] = data.code
    urlInfo["bind_type"] = data.bind_type

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_PHONE_BIND, UrlConf.URL_AUTH_BIND_PHONE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellReqPhoneBind:onHttpCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_PHONE_BIND then
        if status == 200 then
            if response.resp.errCode == 0 then
                self:success(response)
            elseif response.resp.errCode == 7010 or response.resp.errCode == 7012 then
                self:setMessage("INVALID_SMSCODE")
                self:fail()
            elseif response.resp.errCode == 7262 then
                self:setMessage("手机已经绑定")
                self:fail()
            else
                self:setMessage("MSG_SEND_TIME_OUT")
                self:fail()
            end
        end
    end
end

return CellReqPhoneBind
