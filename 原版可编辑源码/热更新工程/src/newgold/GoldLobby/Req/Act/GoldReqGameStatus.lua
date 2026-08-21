local GoldReqGameStatus = class("GoldReqGameStatus", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqGameStatus:ctor()
    GoldReqGameStatus.super.ctor(self)
    self._askId = 0
end

function GoldReqGameStatus:start(timeout)
    if GoldReqGameStatus.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = GoldAreaConfig.TenantID
    urlInfo["area_id"] = GoldAreaConfig.AreaID
    urlInfo["user_id"] = GoldPlayerData.NumId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_GAME_STATUS, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqGameStatus:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.cr.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.cr.errReason)
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return GoldReqGameStatus
