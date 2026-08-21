local ReqExchangeJDKKami = class("ReqExchangeJDKKami",XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqExchangeJDKKami:start(orderid, timeout)
    if ReqExchangeJDKKami.super.start(self,timeout) == false then
        return
    end
    self._orderid = orderid
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
    XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeout)
end

function ReqExchangeJDKKami:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = data
        local areaID = XH.areaData:getAreaID() 
        local windID = XH.areaData:getAreaWindID()
        local numid = XH.playerData:getNumberID()
        local uid = XH.playerData:getUserID()
        local ticketShopId = XH.areaData:getCouponShopID() or 0
        
        local tHttpInfo = "?areaid="..areaID.."&prop_type="..ticketShopId.."&sid="..windID.."&numid="..numid.."&order_id="..self._orderid.."&ssid="..string.urlencode(tempSession).."&uid="..uid
        
        XH.httpManager:RequestGet(HttpDefine.URL_TICKETSTORE_EXCHANGE_KAMI,UrlConf.URL_TICKETSTORE_EXCHANGE_KAMI..tHttpInfo,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpPhoneStateCallBack))
    end
end

function ReqExchangeJDKKami:onHttpPhoneStateCallBack(eType, status, response)
    if eType ~= HttpDefine.URL_TICKETSTORE_EXCHANGE_KAMI then
        return
    end
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("GET_EXCHANGE_KAMI_ERROR"))
        self:fail()
    end
end

return ReqExchangeJDKKami