local ReqBankruptcyGift = class("ReqBankruptcyGift", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqBankruptcyGift:ctor()
    ReqBankruptcyGift.super.ctor(self)
    self._askId = 0
end

function ReqBankruptcyGift:start(aid, timeout, isShow, gameID, source)
    gameID = gameID or 0
    timeout = timeout or 10
    if ReqBankruptcyGift.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()
    self._isShow = isShow

    local urlInfo = {}
    urlInfo["aid"] = aid
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["game_id"] = gameID
    urlInfo["source"] = source or ""

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_ACT_50_BANKRUPT, UrlConf.URL_ACT_50_BANKRUPTCY_GIFT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqBankruptcyGift:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_ACT_50_BANKRUPT then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            response.isShow = self._isShow
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        response = response or {}
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail(response)
    end
end

return ReqBankruptcyGift