local GetReBackFeeRechargeRequest = class("GetReBackFeeRechargeRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function GetReBackFeeRechargeRequest:ctor()
    GetReBackFeeRechargeRequest.super.ctor(self)
    self._askId = 0
end

function GetReBackFeeRechargeRequest:start(actId, tel, timeout)
    if GetReBackFeeRechargeRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = actId
    urlInfo["ask_id"] = self._askId
    urlInfo["draw"] = 1
    urlInfo["tel"] = tostring(tel)

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_FEE_RECHARGE, UrlConf.URL_RECALL_Fee_Recharge, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GetReBackFeeRechargeRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_FEE_RECHARGE then
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
        self:setMessage("网络异常，稍后再试GetReBackFeeRechargeRequest")
        self:fail()
    end
end

return GetReBackFeeRechargeRequest�