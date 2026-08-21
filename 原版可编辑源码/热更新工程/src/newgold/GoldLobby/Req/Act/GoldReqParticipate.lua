local GoldReqParticipate = class("GoldReqParticipate", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldReqParticipate:ctor()
    GoldReqParticipate.super.ctor(self)
    self._askId = 0
end

function GoldReqParticipate:start(activity_id, rewardType, timeout)
    timeout = timeout or 10
    if GoldReqParticipate.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["activity_id"] = activity_id
    urlInfo["reward_type"] = rewardType
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = GoldAreaConfig.TenantID
    urlInfo["area_id"] = GoldAreaConfig.AreaID

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_Participate, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqParticipate:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.cr.errCode == 0 and response.cr.askId == self._askId then
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

return GoldReqParticipate
