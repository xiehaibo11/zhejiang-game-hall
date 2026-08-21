local GoldReqActDetail = class("GoldReqActDetail", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqActDetail:ctor()
    GoldReqActDetail.super.ctor(self)
    self._askId = 0
end

function GoldReqActDetail:start(activityId, timeout)
    if GoldReqActDetail.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = GoldAreaConfig.TenantID
    urlInfo["area_id"] = GoldAreaConfig.AreaID
    urlInfo["user_id"] = GoldPlayerData.UserId
    urlInfo["aid"] = activityId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_ACTDETAIL, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqActDetail:onHttpCallBack(httpID, status, response)
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

return GoldReqActDetail
�