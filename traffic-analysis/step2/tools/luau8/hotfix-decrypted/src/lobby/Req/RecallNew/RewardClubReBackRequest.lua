local RewardClubReBackRequest = class("RewardClubReBackRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function RewardClubReBackRequest:ctor()
    RewardClubReBackRequest.super.ctor(self)
    self._userID = 0
    self._askId = 0
end

function RewardClubReBackRequest:start(act_id, user_id, club_id, timeout)
    if RewardClubReBackRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = act_id
    urlInfo["club_id"] = club_id
    urlInfo["dest_user_id"] = user_id
    urlInfo["ask_id"] = self._askId

    self._userID = user_id

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.RewardClubReBackRequest then
        TestConfig.RewardClubReBackRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_REWARD_CLUB, 200, TestConfig.RewardClubReBackRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_REWARD_CLUB, UrlConf.URL_RECALL_NEW_REWARD_CLUB, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function RewardClubReBackRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_REWARD_CLUB then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.userID = self._userID
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response.resp.errCode)
        end
    else
        self:setMessage("网络异常，稍后再试RewardClubReBackRequest")
        self:fail()
    end
end

return RewardClubReBackRequestV