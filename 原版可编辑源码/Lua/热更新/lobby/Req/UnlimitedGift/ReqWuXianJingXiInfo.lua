local ReqWuXianJingXiInfo = class("ReqWuXianJingXiInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqWuXianJingXiInfo:ctor()
    ReqWuXianJingXiInfo.super.ctor(self)
    self._askId = 0
end

function ReqWuXianJingXiInfo:start(data, timeout)
    if ReqWuXianJingXiInfo.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = data.act_id
    self.isOpenView = data.isOpenView

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_UNLIMITED_GIFT_INFO, UrlConf.URL_UNLIMITED_GIFT_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqWuXianJingXiInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_UNLIMITED_GIFT_INFO then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:fail()
    end
end

return ReqWuXianJingXiInfo
