local ReqGetPoolPrizes = class("ReqGetPoolPrizes", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetPoolPrizes:ctor()
    ReqGetPoolPrizes.super.ctor(self)
    self._askId = 0
end

function ReqGetPoolPrizes:start(data, timeout)
    if ReqGetPoolPrizes.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["pool_id"] = data.poolid

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_GET_POOL_PRIZES,
        UrlConf.URL_GET_POOL_PRIZES,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqGetPoolPrizes:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_POOL_PRIZES then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp and response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求失败")
        self:fail()
    end
end

return ReqGetPoolPrizes
'