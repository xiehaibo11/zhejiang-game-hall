local ReqRechargeAutoAwardInfo = class("ReqRechargeAutoAwardInfo",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqRechargeAutoAwardInfo:start(timeout)
    if ReqRechargeAutoAwardInfo.super.start(self,timeout) == false then
        return
    end
    local data = {}
    table.insert(data, "areaid=" .. XH.areaData:getAreaID())
    table.insert(data, "numid=" .. XH.playerData:getNumberID())
    table.insert(data, "timestamp=" .. os.time())
    table.insert(data, "uid=" .. un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID()))
    table.insert(data, "uuid=" .. XH.areaData:getAreaID()..XH.playerData:getNumberID()..os.time()..math.random(9999))
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_TEA_RECHARGE_AUTO_AWARD_INFO)
    
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self,self.onHttpCallBack), nil, true)
end

function ReqRechargeAutoAwardInfo:onHttpCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.info)
            self:fail()
        end
    else
        self:setMessage(response.info)
        self:fail()
    end
end

return ReqRechargeAutoAwardInfo