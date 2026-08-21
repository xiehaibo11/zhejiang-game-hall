local ReqBattlePassRequest = class("ReqBattlePassRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqBattlePassRequest:ctor()
    ReqBattlePassRequest.super.ctor(self)
    self._askId = 0
end

local func2Int = {
    get = 0, -- 获取
    award = 1, -- 奖励领取 一键领取
    buy = 2, -- 购买等级
    task = 3 -- 任务领取
}

function ReqBattlePassRequest:start(data, timeout)
    if ReqBattlePassRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    self._reqData = data

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = data.actId
    urlInfo["func_opt"] = func2Int[data.func] or 0
    urlInfo["buy_level"] = data.level or 0
    urlInfo["task_id"] = data.taskid or 0

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_BATTLE_PASS, UrlConf.URL_BATTLE_PASS, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqBattlePassRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_BATTLE_PASS then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            response.reqData = self._reqData
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

return ReqBattlePassRequest
