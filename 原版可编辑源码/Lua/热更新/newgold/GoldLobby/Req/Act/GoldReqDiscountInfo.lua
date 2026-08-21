local GoldReqDiscountInfo = class("GoldReqDiscountInfo", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqDiscountInfo:ctor()
    GoldReqDiscountInfo.super.ctor(self)
    self._askId = 0
end

--loose_session 破产时的场次,1初级场,2中级场,3.... ,0获取信息
--type 1:充值 2:兑换,0获取信息
function GoldReqDiscountInfo:start(score, loose_session, type, timeout)
    timeout = timeout or 10
    if GoldReqDiscountInfo.super.start(self, timeout) == false then
        return
    end
    self._loose_session = loose_session
    self._reqType = type
    self._c_score = score
    self._askId = os.time()
    local urlInfo = {}
    urlInfo["gold_user_id"] = GoldPlayerData.NumId
    urlInfo["user_id"] = GoldPlayerData.BridgeNumID
    urlInfo["tenant_id"] = GoldAreaConfig.BridgeTenantID
    urlInfo["area_id"] = GoldAreaConfig.BridgeAreaID
    urlInfo["loose_session"] = loose_session or 0
    urlInfo["type"] = type or 0

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    print("UrlConf.URL_LUCK_TASK_DISCOUNT_INFO")
    dump(urlInfo)
    NG.httpManager50:RequestPost("", UrlConf.URL_LUCK_TASK_DISCOUNT_INFO, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqDiscountInfo:onHttpCallBack(httpID, status, response)
    if status == 200 then
        response.c_score = self._c_score
        response.reqType = self._reqType
        if response.lastTime and response.lastTime > 0 then
            response.endTime = os.time() + response.lastTime
        else
            response.endTime = 0
        end
        -- response.loose_session = response.loose_session or self._loose_session
        self:success(response)
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return GoldReqDiscountInfo