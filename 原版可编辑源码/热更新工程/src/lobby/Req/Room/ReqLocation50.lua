local ReqLocation50 = class("ReqLocation50", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqLocation50:ctor()
    ReqLocation50.super.ctor(self)
    self._askId = 0
end

function ReqLocation50:start(location, timeout)
    if ReqLocation50.super.start(self, timeout) == false then
        return
    end
    
    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["location"] = location

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_USER_LOCATION, UrlConf.URL_USER_LOCATION, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqLocation50:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_USER_LOCATION then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("获取定位信息失败")
        self:fail()
    end
end

return ReqLocation50