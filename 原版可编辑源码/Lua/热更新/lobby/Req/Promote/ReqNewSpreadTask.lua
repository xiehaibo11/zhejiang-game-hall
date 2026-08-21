local ReqNewSpreadTask = class("ReqNewSpreadTask", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqNewSpreadTask:start(data)
    if ReqNewSpreadTask.super.start(self, data.timeoutTime or 10) == false then
        return
    end

    local ask_id = os.time()
    self._ask_id = ask_id

    local urlInfo = {}
    urlInfo.tenant_id = XH.areaData:getTenantid()
    urlInfo.area_id = XH.areaData:getAreaID()
    urlInfo.user_id = XH.playerData:getNumberID()
    urlInfo.club_id = data.teaNumber or 0
    urlInfo.aid = data.aid or 0
    urlInfo.ask_id = ask_id

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(
        XH.HttpDefine.HTTP_ID_NEW_GAME_SPREAD_TASK,
        UrlConf.URL_NEW_GAME_SPREAD_TASK,
        jsonStr,
        XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,
        handler(self, self.onHttpCallBack),
        headmap
    )
end

function ReqNewSpreadTask:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_NEW_GAME_SPREAD_TASK then
        return
    end
    if status ~= 200 then
        self:fail()
        return
    end
    local resp = response.resp or response
    local errCode = resp.err_code or resp.errCode
    if errCode and errCode ~= 0 then
        if response.resp and response.resp.errReason then
            self:setMessage(response.resp.errReason)
        end
        self:fail(response)
        return
    end
    if resp.ask_id and resp.ask_id ~= self._ask_id then
        return
    end
    self:success({ nXYData = response })
end

return ReqNewSpreadTask
