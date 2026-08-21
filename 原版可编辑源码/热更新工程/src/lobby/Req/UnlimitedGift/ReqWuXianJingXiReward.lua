local ReqWuXianJingXiReward = class("ReqWuXianJingXiReward", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqWuXianJingXiReward:ctor()
    ReqWuXianJingXiReward.super.ctor(self)
    self._askId = 0
end

function ReqWuXianJingXiReward:start(data, timeout)
    if ReqWuXianJingXiReward.super.start(self, timeout) == false then
        return
    end
    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = data.act_id
    urlInfo["reward_type"] = data.reward_type
    urlInfo["jtid"] = data.jtid
    urlInfo["hyid"] = data.hyid

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_UNLIMITED_GIFT_REWARD, UrlConf.URL_UNLIMITED_GIFT_REWARD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqWuXianJingXiReward:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_UNLIMITED_GIFT_REWARD then
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
        self:fail()
    end
end

return ReqWuXianJingXiReward
