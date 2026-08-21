local GetBankruptcySubsidy = class("GetBankruptcySubsidy", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function GetBankruptcySubsidy:ctor()
    GetBankruptcySubsidy.super.ctor(self)
    self._askId = 0
end

function GetBankruptcySubsidy:start(aid, timeout)
    timeout = timeout or 10
    if GetBankruptcySubsidy.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["game_id"] = aid

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    XH.httpManager50:RequestPost("", UrlConf.URL_GET_BANKRUPT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GetBankruptcySubsidy:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
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

return GetBankruptcySubsidy�