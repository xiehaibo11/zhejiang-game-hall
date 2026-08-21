local ReqWuXianDuiJuInfo = class("ReqWuXianDuiJuInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqWuXianDuiJuInfo:ctor()
    ReqWuXianDuiJuInfo.super.ctor(self)
    self._askId = 0
end

function ReqWuXianDuiJuInfo:start(data, timeout)
    if ReqWuXianDuiJuInfo.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = data.act_id
    urlInfo["type"] = data.type

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_WU_XIAN_DUI_JU_INFO, UrlConf.URL_WU_XIAN_DUI_JU_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqWuXianDuiJuInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_WU_XIAN_DUI_JU_INFO then
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
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqWuXianDuiJuInfo�