local ReqCardSkillChallengeInfo = class("ReqCardSkillChallengeInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqCardSkillChallengeInfo:ctor()
    ReqCardSkillChallengeInfo.super.ctor(self)
    self._askId = 0
end

function ReqCardSkillChallengeInfo:start(data, timeout)
    if ReqCardSkillChallengeInfo.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = data.actId
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_CARD_SKILL_CHALLENGE,
        UrlConf.URL_CARD_SKILL_CHALLENGE,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqCardSkillChallengeInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_CARD_SKILL_CHALLENGE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求失败")
        self:fail()
    end
end

return ReqCardSkillChallengeInfo
X