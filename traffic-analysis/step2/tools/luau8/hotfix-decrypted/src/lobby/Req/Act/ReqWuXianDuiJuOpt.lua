local ReqWuXianDuiJuOpt = class("ReqWuXianDuiJuOpt", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqWuXianDuiJuOpt:ctor()
    ReqWuXianDuiJuOpt.super.ctor(self)
    self._askId = 0
end

function ReqWuXianDuiJuOpt:start(data, timeout)
    if ReqWuXianDuiJuOpt.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = data.act_id
    urlInfo["opt"] = data.opt

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_WU_XIAN_DUI_JU_OPT, UrlConf.URL_WU_XIAN_DUI_JU_OPT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqWuXianDuiJuOpt:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_WU_XIAN_DUI_JU_OPT then
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

return ReqWuXianDuiJuOpt�