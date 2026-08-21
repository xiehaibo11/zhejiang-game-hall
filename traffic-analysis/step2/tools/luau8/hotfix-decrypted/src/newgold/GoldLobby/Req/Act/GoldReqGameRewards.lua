local GoldReqGameRewards = class("GoldReqGameRewards", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqGameRewards:ctor()
    GoldReqGameRewards.super.ctor(self)
    self._askId = 0
end

function GoldReqGameRewards:start(activityId, taskType, callFuncs, timeout, goodid)
    if GoldReqGameRewards.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = GoldAreaConfig.TenantID
    urlInfo["area_id"] = GoldAreaConfig.AreaID
    urlInfo["user_id"] = GoldPlayerData.NumId
    urlInfo["activity_id"] = activityId
    urlInfo["task_type"] = taskType
    urlInfo["good_id"] = goodid or 0
    self.callFuncs = callFuncs

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_GAME_REWARDS, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqGameRewards:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.cr.errCode == 0 then
            if response.res and response.res.bigGold and tonumber(response.res.bigGold) > 0 then
                response.res.gold = tonumber(response.res.bigGold)
            end
            response.callFuncs = self.callFuncs
            self:success(response)
        else
            response.callFuncs = self.callFuncs
            self:setMessage(response.cr.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return GoldReqGameRewards]