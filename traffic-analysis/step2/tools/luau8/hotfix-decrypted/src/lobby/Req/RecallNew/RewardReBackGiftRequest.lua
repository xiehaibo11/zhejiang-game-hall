local RewardReBackGiftRequest = class("RewardReBackGiftRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function RewardReBackGiftRequest:ctor()
    RewardReBackGiftRequest.super.ctor(self)
    self._askId = 0
end

function RewardReBackGiftRequest:start(actId, timeout)
    if RewardReBackGiftRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = actId
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.RewardReBackGiftRequest then
        TestConfig.RewardReBackGiftRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_BACK_GIFT, 200, TestConfig.RewardReBackGiftRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_BACK_GIFT, UrlConf.URL_RECALL_NEW_BACK_GIFT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function RewardReBackGiftRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_BACK_GIFT then
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
        self:setMessage("网络异常，稍后再试RewardReBackGiftRequest")
        self:fail()
    end
end

return RewardReBackGiftRequest|