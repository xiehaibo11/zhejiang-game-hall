local ReqUseEquipCard = class("ReqUseEquipCard", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqUseEquipCard:ctor()
    ReqUseEquipCard.super.ctor(self)
    self._askId = 0
end

-- 通用请求50道具接口
function ReqUseEquipCard:start(param, timeout)
    if ReqUseEquipCard.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = json.encode(param)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_USE_EQUIP_CARD, UrlConf.URL_USE_EQUIP_CARD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqUseEquipCard:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_USE_EQUIP_CARD then
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
        self:setMessage(XH.ConstString.getStr("USE_EQUIP_CARD_ERROR"))
        self:fail()
    end
end

return ReqUseEquipCard