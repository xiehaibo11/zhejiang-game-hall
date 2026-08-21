local ReqCritHofBaseInfoRequest = class("ReqCritHofBaseInfoRequest ", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

-- 暴击名人堂获取主界面信息（排名奖励数据+周赛季分值阶段数据+当前第几周赛季+剩余时间+结算状态）
function ReqCritHofBaseInfoRequest:ctor()
    ReqCritHofBaseInfoRequest.super.ctor(self)
end

function ReqCritHofBaseInfoRequest:start(aid, timeout)
    if ReqCritHofBaseInfoRequest.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        act_id = aid
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_CRITHOFBASEINFO, UrlConf.URL_GOLD_CRITHOFBASEINFO, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqCritHofBaseInfoRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_CRITHOFBASEINFO then
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
return ReqCritHofBaseInfoRequest
]