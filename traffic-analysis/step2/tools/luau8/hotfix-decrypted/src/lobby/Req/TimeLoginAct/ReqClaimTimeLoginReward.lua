local ReqClaimTimeLoginReward = class("ReqClaimTimeLoginReward", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqClaimTimeLoginReward:ctor()
    ReqClaimTimeLoginReward.super.ctor(self)
    self._askId = 0
end

function ReqClaimTimeLoginReward:start(aid, rewardId, timeout, isRoll)
    if ReqClaimTimeLoginReward.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()
    self.isRoll = isRoll

    local urlInfo = {}
    urlInfo["act_id"] = aid
    urlInfo["reward_id"] = rewardId
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_CLAIM_LOGIN_REWARD, UrlConf.URL_CLAIM_LOGIN_REWARD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqClaimTimeLoginReward:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_CLAIM_LOGIN_REWARD then
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
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqClaimTimeLoginReward
�