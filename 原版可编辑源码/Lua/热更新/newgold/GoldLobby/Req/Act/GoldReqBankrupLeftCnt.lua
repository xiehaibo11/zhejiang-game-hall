local GoldReqBankrupLeftCnt = class("GoldReqBankrupLeftCnt", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqBankrupLeftCnt:ctor()
    GoldReqBankrupLeftCnt.super.ctor(self)
    self._askId = 0
end

function GoldReqBankrupLeftCnt:start(activityId, callFunc, timeout, goodid)
    if GoldReqBankrupLeftCnt.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["ask_id"] = os.time()
    urlInfo["activity_id"] = activityId
    self.callFunc = callFunc

    local headmap = {}
    headmap["Content-Type"] = "application/json"

    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_BANKRUP_GET_LEFTCNT, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqBankrupLeftCnt:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.cr.errCode == 0 then
            response.callFunc = self.callFunc
            self:success(response)
        else
            response.callFunc = self.callFunc
            self:setMessage(response.cr.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return GoldReqBankrupLeftCnt