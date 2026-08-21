local ReqActDetail = class("ReqActDetail", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqActDetail:ctor()
    ReqActDetail.super.ctor(self)
    self._askId = 0
end

function ReqActDetail:start(activityId, timeout)
    if ReqActDetail.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["aid"] = activityId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LUCK_TASK_ACTDETAIL, UrlConf.URL_LUCK_TASK_ACTDETAIL, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqActDetail:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_LUCK_TASK_ACTDETAIL then
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

return ReqActDetailn