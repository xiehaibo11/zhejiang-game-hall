local ReqCritHofUserInfoRequest = class("ReqCritHofUserInfoRequest", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

-- 暴击名人堂获取当前的各场次暴击值进度+定位赛次数+周赛季暴击累计分值
function ReqCritHofUserInfoRequest:ctor()
    ReqCritHofUserInfoRequest.super.ctor(self)
end

function ReqCritHofUserInfoRequest:start(aid, timeout)
    if ReqCritHofUserInfoRequest.super.start(self, timeout) == false then
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

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_CRITHOFUSERINFO, UrlConf.URL_GOLD_CRITHOFUSERINFO, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqCritHofUserInfoRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_CRITHOFUSERINFO then
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
return ReqCritHofUserInfoRequest
6