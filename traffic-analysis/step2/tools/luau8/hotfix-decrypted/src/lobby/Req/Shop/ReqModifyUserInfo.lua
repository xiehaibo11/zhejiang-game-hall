local ReqModifyUserInfo = class("ReqModifyUserInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

local Param = "addr=addr&areaid=%d&mobile=%s&numid=%s&realname=%s&sid=%d&timestamp=%s&uid=%s&reqUrl=%s"

function ReqModifyUserInfo:start(numid, uid, areaId, windMsgId, phone, timeoutTime)
    if ReqModifyUserInfo.super.start(self, timeoutTime) == false then
        return
    end

    local timestamp = socket.gettime()
    local param = string.format(Param, areaId, phone, numid, numid, windMsgId, timestamp, uid, UrlConf.URL_SECOND_DOMAIN.REQ_STORE_MODIFY_USER_INFO)
    XH.httpManager:RequestPost(HttpDefine.URL_STORE_MODIFY_USER_INFO, UrlConf.URL_EXCHANGESHOP, param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpResult),nil,true)
end

function ReqModifyUserInfo:onHttpResult(httpID, code, httpData)
    dump(httpData, "ReqModifyUserInfo:onHttpResult")
    if code == 200 then
        if httpData.code == 0 then
            self:success(httpData.data)
        else
            self:setMessage(httpData.message)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqModifyUserInfo
�