-- 福袋活动
local ReqLuckyBag = class("ReqLuckyBag", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqLuckyBag:ctor()
    ReqLuckyBag.super.ctor(self)
    self._askId = 0
end

function ReqLuckyBag:start(data, timeout)
    if ReqLuckyBag.super.start(self, timeout) == false then
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

    self.isPop = data.isPop

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LUCKY_BAG, UrlConf.URL_LUCKY_BAG, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqLuckyBag:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_LUCKY_BAG then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.isPop = self.isPop
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求福袋活动失败")
        self:fail()
    end
end

return ReqLuckyBag