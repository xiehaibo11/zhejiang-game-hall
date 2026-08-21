local ReqGoldBill = class("ReqGoldBill", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGoldBill:ctor()
    ReqGoldBill.super.ctor(self)
    self._askId = 0
end

-- 通用请求50道具接口
function ReqGoldBill:start(param, curBillTimeIndex, timeout)
    if ReqGoldBill.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = json.encode(param)
    self._curBillTimeIndex = curBillTimeIndex
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GET_GOLD_BILL, UrlConf.URL_GET_GOLD_BILL, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGoldBill:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_GOLD_BILL then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.curBillTimeIndex = self._curBillTimeIndex
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求金币战绩错误")
        self:fail()
    end
end

return ReqGoldBill