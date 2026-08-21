local ReqGoldFirstPayGift = class("ReqGoldFirstPayGift", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

function ReqGoldFirstPayGift:ctor()
    ReqGoldFirstPayGift.super.ctor(self)
    self._askId = 0
end

function ReqGoldFirstPayGift:start(opt, actId, gfpg_id, day)
    if ReqGoldFirstPayGift.super.start(self) == false then
        return
    end
    local reqData = {opt = opt, act_id = actId, gfpg_id = gfpg_id, day = day or 0}

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(reqData)
    self.reqData = reqData

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLDFIRSTPAYGIFT_REQUEST, UrlConf.GOLDFIRSTPAYGIFT_REQUEST, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGoldFirstPayGift:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLDFIRSTPAYGIFT_REQUEST then
        return
    end
    if status == 200 and response and response.resp and response.resp.errCode == 0 then
        self:success(response)
    else
        local errorCode = response and response.resp and response.resp.errCode or -1
        local errMsg = {
            [0] = "领取失败，错误码" .. errorCode,
            [16000] = "领取失败，活动已下线！",
            [16006] = "领取失败，任务未达标！"
        }
        self:setMessage(errMsg[errorCode] or errMsg[0])
        self:fail(response)
    end
end

return ReqGoldFirstPayGift
S