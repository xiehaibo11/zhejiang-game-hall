local CellPeakMatchInfo = class("CellPeakMatchInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellPeakMatchInfo:ctor()
    CellPeakMatchInfo.super.ctor(self)
    self._askId = 0
end

function CellPeakMatchInfo:start(timeout)
    if CellPeakMatchInfo.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["base"] = true

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_PEAK_RACE, UrlConf.URL_PEAK_RACE_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellPeakMatchInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_PEAK_RACE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.cr.errReason)
            self:fail()
        end
    else
        self:setMessage("请求失败")
        self:fail()
    end
end

return CellPeakMatchInfo