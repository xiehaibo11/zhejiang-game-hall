local ActPointRewardRequest = class("ActPointRewardRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.LuckyMission.TestConfig")

function ActPointRewardRequest:ctor()
    ActPointRewardRequest.super.ctor(self)
    self._askId = 0
    self._pointTarget = 0
end

function ActPointRewardRequest:start(page_name, point_target, timeout)
    if ActPointRewardRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    self._pointTarget = point_target

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["page_name"] = page_name
    urlInfo["point_target"] = point_target
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.ActPointRewardRequest then
        TestConfig.ActPointRewardRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_ACT_POINT_REWARDS_REQUEST, 200, TestConfig.ActPointRewardRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_ACT_POINT_REWARDS_REQUEST, UrlConf.URL_ACT_POINT_REWARDS_REQUEST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ActPointRewardRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_ACT_POINT_REWARDS_REQUEST then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.pointTarget = self._pointTarget
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试ActPointRewardRequest")
        self:fail()
    end
end

return ActPointRewardRequest7