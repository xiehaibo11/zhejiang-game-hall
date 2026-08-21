local ReqParticipate = class("ReqParticipate", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqParticipate:ctor()
    ReqParticipate.super.ctor(self)
    self._askId = 0
end

function ReqParticipate:start(activity_id, timeout)
    timeout = timeout or 10
    if ReqParticipate.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["activity_id"] = activity_id
    urlInfo["reward_type"] = 0
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LUCK_TASK_Participate, UrlConf.URL_LUCK_TASK_Participate, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqParticipate:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_LUCK_TASK_Participate then
        return
    end
    if status == 200 then
        if response.cr.errCode == 0 and response.cr.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.cr.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqParticipate
