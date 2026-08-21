local ReqGoldStatistics = class("ReqGoldStatistics", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGoldStatistics:ctor()
    ReqGoldStatistics.super.ctor(self)
    self._askId = 0
end

-- 通用请求50道具接口
function ReqGoldStatistics:start(param, timeout)
    if ReqGoldStatistics.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = json.encode(param)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GET_GOLD_STATISTICS, UrlConf.URL_GET_GOLD_STATISTICS, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGoldStatistics:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_GOLD_STATISTICS then
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
        self:setMessage("请求金币统计错误")
        self:fail()
    end
end

return ReqGoldStatistics�