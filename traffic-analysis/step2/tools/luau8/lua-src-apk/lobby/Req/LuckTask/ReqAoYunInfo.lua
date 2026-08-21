local ReqAoYunInfo = class("ReqAoYunInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

function ReqAoYunInfo:ctor()
    ReqAoYunInfo.super.ctor(self)
    self._askId = 0
end

function ReqAoYunInfo:start(activityId, opt, guess_gold, timeout)
    if ReqAoYunInfo.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["aid"] = activityId
    urlInfo["opt"] = opt
    urlInfo["guess_gold"] = guess_gold
    local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度
    if DEBUG then
        urlInfo["test_time"] = os.time()
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_AOYUN_INFO, UrlConf.URL_AOYUN_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqAoYunInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_AOYUN_INFO then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqAoYunInfo