local ReqCritHofGetCritAwardRequest = class("ReqCritHofGetCritAwardRequest", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

-- 暴击名人堂领取周赛季分值阶段奖励
function ReqCritHofGetCritAwardRequest:ctor()
    ReqCritHofGetCritAwardRequest.super.ctor(self)
end

function ReqCritHofGetCritAwardRequest:start(param, timeout)
    if ReqCritHofGetCritAwardRequest.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        act_id = param.aid,
        award_cfg_score = param.score
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_CRITHOFGETCRITAWARD, UrlConf.URL_GOLD_CRITHOFGETCRITAWARD, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqCritHofGetCritAwardRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_CRITHOFGETCRITAWARD then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response, self._gameid)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end
return ReqCritHofGetCritAwardRequest
`