local ReqCritHofGetUserRankInfoRequest = class("ReqCritHofGetUserRankInfoRequest", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

-- 暴击名人堂获取玩家排名
function ReqCritHofGetUserRankInfoRequest:ctor()
    ReqCritHofGetUserRankInfoRequest.super.ctor(self)
end

function ReqCritHofGetUserRankInfoRequest:start(numid, aid, seasonIdx, weekIdx, timeout)
    if ReqCritHofGetUserRankInfoRequest.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = numid,
        act_id = aid,
        total_season_num = seasonIdx,
        week_season_num = weekIdx
    }

    self._reqData = protocol

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_CRITHOFGETUSERRANKINFO, UrlConf.URL_GOLD_CRITHOFGETUSERRANKINFO, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqCritHofGetUserRankInfoRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_CRITHOFGETUSERRANKINFO then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.reqData = self._reqData
            self:success(response, response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end
return ReqCritHofGetUserRankInfoRequest
